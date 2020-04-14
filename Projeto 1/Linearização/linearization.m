clear all
close all
format long

% Dados experimentais
d = [100 150 200 250 300 350 400 450 500 550 600]';
d_inv = 1./d;
V_sensor = [2.25 1.74 1.40 1.10 0.90 0.80 0.75 0.65 0.60 0.55 0.50]';


figure(1)
subplot(2,2,1);
sgtitle("Pontos experimentais da tens�o vs dist�ncia");
scatter(d, V_sensor);
axis([100 600 0 3.3]);
title("Gr�fico 1");
xlabel("Dist�ncia (mm)");
ylabel("Tens�o � sa�da do sensor na gama [0 - 3.3] (V)");


V_sensor_normal = ((V_sensor-0.5).*3.3)./1.75;
subplot(2,2,2);
scatter(d, V_sensor_normal);
axis([100 600 0 3.3]);
title("Gr�fico 2");
xlabel("Dist�ncia (mm)");
ylabel("Tens�o � sa�da do sensor normalizada (V)");


V_adc = (V_sensor_normal.*1023)./3.3;
subplot(2,2,3);
scatter(d, V_adc);
axis([100 600 0 1023]);
title("Gr�fico 3");
xlabel("Dist�ncia (mm)");
ylabel("Tens�o ap�s leitura da ADC (steps)");


subplot(2,2,4);
scatter(d_inv, V_adc);
title("Gr�fico 4");
xlabel("Inverso da dist�ncia (1/mm)");
ylabel("Tens�o ap�s leitura da ADC (steps)");


%regress�o linear: y = b1*x + b0  (utilizando o m�todo dos m�nimos desvios quadrados)
y = V_adc;
x = d_inv;
b1 = (mean(x.*y)-mean(x)*mean(y))/(mean(x.^2)-mean(x)^2);
b0 = mean(y) - b1*mean(x);


fprintf("\nV = b1*d_inv + b0\nb0: %d\nb1: %d\n", b0, b1);

x = linspace(1/600, 1/100, 100);
y = b1.*x + b0;
subplot(2,2,4);
hold on
plot(x, y);
hold off

