clear all
close all
format long

%% Dados experimentais
R = [115.541 115.927 116.313 116.699 117.085 117.470 117.856 118.241 118.627 119.012 ...
     119.397 119.782 120.167 120.552 120.936 121.321 121.705 122.090 122.474 122.858 ...
     123.242 123.626 124.009 124.393 124.777 125.160 125.543 125.926 126.309 126.692 127.075]';

T = (40 : 1 : 70)';

R100 = 100.*R;


%% Regressão linear: y = b1*x + b0  (utilizando o método dos mínimos desvios quadrados)
y = T;
x = R100;
b1 = (mean(x.*y)-mean(x)*mean(y))/(mean(x.^2)-mean(x)^2);
b0 = mean(y) - b1*mean(x);


fprintf("\nT = b1*R_100 + b0\nb0: %d\nb1: %d\n", b0, b1);


% Reta de ajuste
x = linspace(R100(1), R100(31), 100);
y = b1.*x + b0;


% Plot dos dados
figure(1)
scatter(R100, T);
hold on
plot(x, y);
hold off
title("Temperatura em função da resistência da PT100");
xlabel("Resistência da PT100 x100  (ohms)");
ylabel("Temperatura  (ºC)");
legend("Pontos experimentais", "Reta de ajuste");
axis([11500 12800 35 75]);
ax = gca;
ax.XAxis.Exponent = 2;

