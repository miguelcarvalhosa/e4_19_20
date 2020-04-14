       
       
volatile unsigned int WDTCON;
typedef union {
  struct {
    unsigned WDTCLR:1;
    unsigned :1;
    unsigned SWDTPS:5;
    unsigned :8;
    unsigned ON:1;
  };
  struct {
    unsigned :2;
    unsigned SWDTPS0:1;
    unsigned SWDTPS1:1;
    unsigned SWDTPS2:1;
    unsigned SWDTPS3:1;
    unsigned SWDTPS4:1;
  };
  struct {
    unsigned :2;
    unsigned WDTPSTA:5;
  };
  struct {
    unsigned :2;
    unsigned WDTPS:5;
  };
  struct {
    unsigned w:32;
  };
} __WDTCONbits_t;
volatile __WDTCONbits_t WDTCONbits __asm__ ("WDTCON");
volatile unsigned int WDTCONCLR;
volatile unsigned int WDTCONSET;
volatile unsigned int WDTCONINV;
volatile unsigned int RTCCON;
typedef union {
  struct {
    unsigned RTCOE:1;
    unsigned HALFSEC:1;
    unsigned RTCSYNC:1;
    unsigned RTCWREN:1;
    unsigned :2;
    unsigned RTCCLKON:1;
    unsigned RTSECSEL:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned CAL:10;
  };
  struct {
    unsigned w:32;
  };
} __RTCCONbits_t;
volatile __RTCCONbits_t RTCCONbits __asm__ ("RTCCON");
volatile unsigned int RTCCONCLR;
volatile unsigned int RTCCONSET;
volatile unsigned int RTCCONINV;
volatile unsigned int RTCALRM;
typedef union {
  struct {
    unsigned ARPT:8;
    unsigned AMASK:4;
    unsigned ALRMSYNC:1;
    unsigned PIV:1;
    unsigned CHIME:1;
    unsigned ALRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __RTCALRMbits_t;
volatile __RTCALRMbits_t RTCALRMbits __asm__ ("RTCALRM");
volatile unsigned int RTCALRMCLR;
volatile unsigned int RTCALRMSET;
volatile unsigned int RTCALRMINV;
volatile unsigned int RTCTIME;
typedef union {
  struct {
    unsigned :8;
    unsigned SEC01:4;
    unsigned SEC10:4;
    unsigned MIN01:4;
    unsigned MIN10:4;
    unsigned HR01:4;
    unsigned HR10:4;
  };
  struct {
    unsigned w:32;
  };
} __RTCTIMEbits_t;
volatile __RTCTIMEbits_t RTCTIMEbits __asm__ ("RTCTIME");
volatile unsigned int RTCTIMECLR;
volatile unsigned int RTCTIMESET;
volatile unsigned int RTCTIMEINV;
volatile unsigned int RTCDATE;
typedef union {
  struct {
    unsigned WDAY01:4;
    unsigned :4;
    unsigned DAY01:4;
    unsigned DAY10:4;
    unsigned MONTH01:4;
    unsigned MONTH10:4;
    unsigned YEAR01:4;
    unsigned YEAR10:4;
  };
  struct {
    unsigned w:32;
  };
} __RTCDATEbits_t;
volatile __RTCDATEbits_t RTCDATEbits __asm__ ("RTCDATE");
volatile unsigned int RTCDATECLR;
volatile unsigned int RTCDATESET;
volatile unsigned int RTCDATEINV;
volatile unsigned int ALRMTIME;
typedef union {
  struct {
    unsigned :8;
    unsigned SEC01:4;
    unsigned SEC10:4;
    unsigned MIN01:4;
    unsigned MIN10:4;
    unsigned HR01:4;
    unsigned HR10:4;
  };
  struct {
    unsigned w:32;
  };
} __ALRMTIMEbits_t;
volatile __ALRMTIMEbits_t ALRMTIMEbits __asm__ ("ALRMTIME");
volatile unsigned int ALRMTIMECLR;
volatile unsigned int ALRMTIMESET;
volatile unsigned int ALRMTIMEINV;
volatile unsigned int ALRMDATE;
typedef union {
  struct {
    unsigned WDAY01:4;
    unsigned :4;
    unsigned DAY01:4;
    unsigned DAY10:4;
    unsigned MONTH01:4;
    unsigned MONTH10:4;
  };
  struct {
    unsigned w:32;
  };
} __ALRMDATEbits_t;
volatile __ALRMDATEbits_t ALRMDATEbits __asm__ ("ALRMDATE");
volatile unsigned int ALRMDATECLR;
volatile unsigned int ALRMDATESET;
volatile unsigned int ALRMDATEINV;
volatile unsigned int T1CON;
typedef union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned TSYNC:1;
    unsigned :1;
    unsigned TCKPS:2;
    unsigned :1;
    unsigned TGATE:1;
    unsigned :3;
    unsigned TWIP:1;
    unsigned TWDIS:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
} __T1CONbits_t;
volatile __T1CONbits_t T1CONbits __asm__ ("T1CON");
volatile unsigned int T1CONCLR;
volatile unsigned int T1CONSET;
volatile unsigned int T1CONINV;
volatile unsigned int TMR1;
volatile unsigned int TMR1CLR;
volatile unsigned int TMR1SET;
volatile unsigned int TMR1INV;
volatile unsigned int PR1;
volatile unsigned int PR1CLR;
volatile unsigned int PR1SET;
volatile unsigned int PR1INV;
volatile unsigned int T2CON;
typedef union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
} __T2CONbits_t;
volatile __T2CONbits_t T2CONbits __asm__ ("T2CON");
volatile unsigned int T2CONCLR;
volatile unsigned int T2CONSET;
volatile unsigned int T2CONINV;
volatile unsigned int TMR2;
volatile unsigned int TMR2CLR;
volatile unsigned int TMR2SET;
volatile unsigned int TMR2INV;
volatile unsigned int PR2;
volatile unsigned int PR2CLR;
volatile unsigned int PR2SET;
volatile unsigned int PR2INV;
volatile unsigned int T3CON;
typedef union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :2;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
} __T3CONbits_t;
volatile __T3CONbits_t T3CONbits __asm__ ("T3CON");
volatile unsigned int T3CONCLR;
volatile unsigned int T3CONSET;
volatile unsigned int T3CONINV;
volatile unsigned int TMR3;
volatile unsigned int TMR3CLR;
volatile unsigned int TMR3SET;
volatile unsigned int TMR3INV;
volatile unsigned int PR3;
volatile unsigned int PR3CLR;
volatile unsigned int PR3SET;
volatile unsigned int PR3INV;
volatile unsigned int T4CON;
typedef union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :1;
    unsigned T32:1;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
} __T4CONbits_t;
volatile __T4CONbits_t T4CONbits __asm__ ("T4CON");
volatile unsigned int T4CONCLR;
volatile unsigned int T4CONSET;
volatile unsigned int T4CONINV;
volatile unsigned int TMR4;
volatile unsigned int TMR4CLR;
volatile unsigned int TMR4SET;
volatile unsigned int TMR4INV;
volatile unsigned int PR4;
volatile unsigned int PR4CLR;
volatile unsigned int PR4SET;
volatile unsigned int PR4INV;
volatile unsigned int T5CON;
typedef union {
  struct {
    unsigned :1;
    unsigned TCS:1;
    unsigned :2;
    unsigned TCKPS:3;
    unsigned TGATE:1;
    unsigned :5;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :4;
    unsigned TCKPS0:1;
    unsigned TCKPS1:1;
    unsigned TCKPS2:1;
  };
  struct {
    unsigned :13;
    unsigned TSIDL:1;
    unsigned :1;
    unsigned TON:1;
  };
  struct {
    unsigned w:32;
  };
} __T5CONbits_t;
volatile __T5CONbits_t T5CONbits __asm__ ("T5CON");
volatile unsigned int T5CONCLR;
volatile unsigned int T5CONSET;
volatile unsigned int T5CONINV;
volatile unsigned int TMR5;
volatile unsigned int TMR5CLR;
volatile unsigned int TMR5SET;
volatile unsigned int TMR5INV;
volatile unsigned int PR5;
volatile unsigned int PR5CLR;
volatile unsigned int PR5SET;
volatile unsigned int PR5INV;
volatile unsigned int IC1CON;
typedef union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __IC1CONbits_t;
volatile __IC1CONbits_t IC1CONbits __asm__ ("IC1CON");
volatile unsigned int IC1CONCLR;
volatile unsigned int IC1CONSET;
volatile unsigned int IC1CONINV;
volatile unsigned int IC1BUF;
volatile unsigned int IC2CON;
typedef union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __IC2CONbits_t;
volatile __IC2CONbits_t IC2CONbits __asm__ ("IC2CON");
volatile unsigned int IC2CONCLR;
volatile unsigned int IC2CONSET;
volatile unsigned int IC2CONINV;
volatile unsigned int IC2BUF;
volatile unsigned int IC3CON;
typedef union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __IC3CONbits_t;
volatile __IC3CONbits_t IC3CONbits __asm__ ("IC3CON");
volatile unsigned int IC3CONCLR;
volatile unsigned int IC3CONSET;
volatile unsigned int IC3CONINV;
volatile unsigned int IC3BUF;
volatile unsigned int IC4CON;
typedef union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __IC4CONbits_t;
volatile __IC4CONbits_t IC4CONbits __asm__ ("IC4CON");
volatile unsigned int IC4CONCLR;
volatile unsigned int IC4CONSET;
volatile unsigned int IC4CONINV;
volatile unsigned int IC4BUF;
volatile unsigned int IC5CON;
typedef union {
  struct {
    unsigned ICM:3;
    unsigned ICBNE:1;
    unsigned ICOV:1;
    unsigned ICI:2;
    unsigned ICTMR:1;
    unsigned C32:1;
    unsigned FEDGE:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned ICM0:1;
    unsigned ICM1:1;
    unsigned ICM2:1;
    unsigned :2;
    unsigned ICI0:1;
    unsigned ICI1:1;
  };
  struct {
    unsigned :13;
    unsigned ICSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __IC5CONbits_t;
volatile __IC5CONbits_t IC5CONbits __asm__ ("IC5CON");
volatile unsigned int IC5CONCLR;
volatile unsigned int IC5CONSET;
volatile unsigned int IC5CONINV;
volatile unsigned int IC5BUF;
volatile unsigned int OC1CON;
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC1CONbits_t;
volatile __OC1CONbits_t OC1CONbits __asm__ ("OC1CON");
volatile unsigned int OC1CONCLR;
volatile unsigned int OC1CONSET;
volatile unsigned int OC1CONINV;
volatile unsigned int OC1R;
volatile unsigned int OC1RCLR;
volatile unsigned int OC1RSET;
volatile unsigned int OC1RINV;
volatile unsigned int OC1RS;
volatile unsigned int OC1RSCLR;
volatile unsigned int OC1RSSET;
volatile unsigned int OC1RSINV;
volatile unsigned int OC2CON;
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC2CONbits_t;
volatile __OC2CONbits_t OC2CONbits __asm__ ("OC2CON");
volatile unsigned int OC2CONCLR;
volatile unsigned int OC2CONSET;
volatile unsigned int OC2CONINV;
volatile unsigned int OC2R;
volatile unsigned int OC2RCLR;
volatile unsigned int OC2RSET;
volatile unsigned int OC2RINV;
volatile unsigned int OC2RS;
volatile unsigned int OC2RSCLR;
volatile unsigned int OC2RSSET;
volatile unsigned int OC2RSINV;
volatile unsigned int OC3CON;
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC3CONbits_t;
volatile __OC3CONbits_t OC3CONbits __asm__ ("OC3CON");
volatile unsigned int OC3CONCLR;
volatile unsigned int OC3CONSET;
volatile unsigned int OC3CONINV;
volatile unsigned int OC3R;
volatile unsigned int OC3RCLR;
volatile unsigned int OC3RSET;
volatile unsigned int OC3RINV;
volatile unsigned int OC3RS;
volatile unsigned int OC3RSCLR;
volatile unsigned int OC3RSSET;
volatile unsigned int OC3RSINV;
volatile unsigned int OC4CON;
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC4CONbits_t;
volatile __OC4CONbits_t OC4CONbits __asm__ ("OC4CON");
volatile unsigned int OC4CONCLR;
volatile unsigned int OC4CONSET;
volatile unsigned int OC4CONINV;
volatile unsigned int OC4R;
volatile unsigned int OC4RCLR;
volatile unsigned int OC4RSET;
volatile unsigned int OC4RINV;
volatile unsigned int OC4RS;
volatile unsigned int OC4RSCLR;
volatile unsigned int OC4RSSET;
volatile unsigned int OC4RSINV;
volatile unsigned int OC5CON;
typedef union {
  struct {
    unsigned OCM:3;
    unsigned OCTSEL:1;
    unsigned OCFLT:1;
    unsigned OC32:1;
    unsigned :7;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned OCM0:1;
    unsigned OCM1:1;
    unsigned OCM2:1;
  };
  struct {
    unsigned :13;
    unsigned OCSIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __OC5CONbits_t;
volatile __OC5CONbits_t OC5CONbits __asm__ ("OC5CON");
volatile unsigned int OC5CONCLR;
volatile unsigned int OC5CONSET;
volatile unsigned int OC5CONINV;
volatile unsigned int OC5R;
volatile unsigned int OC5RCLR;
volatile unsigned int OC5RSET;
volatile unsigned int OC5RINV;
volatile unsigned int OC5RS;
volatile unsigned int OC5RSCLR;
volatile unsigned int OC5RSSET;
volatile unsigned int OC5RSINV;
volatile unsigned int I2C1ACON;
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C1ACONbits_t;
volatile __I2C1ACONbits_t I2C1ACONbits __asm__ ("I2C1ACON");
volatile unsigned int I2C3CON;
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C3CONbits_t;
volatile __I2C3CONbits_t I2C3CONbits __asm__ ("I2C3CON");
volatile unsigned int I2C1ACONCLR;
volatile unsigned int I2C3CONCLR;
volatile unsigned int I2C1ACONSET;
volatile unsigned int I2C3CONSET;
volatile unsigned int I2C1ACONINV;
volatile unsigned int I2C3CONINV;
volatile unsigned int I2C1ASTAT;
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C1ASTATbits_t;
volatile __I2C1ASTATbits_t I2C1ASTATbits __asm__ ("I2C1ASTAT");
volatile unsigned int I2C3STAT;
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C3STATbits_t;
volatile __I2C3STATbits_t I2C3STATbits __asm__ ("I2C3STAT");
volatile unsigned int I2C1ASTATCLR;
volatile unsigned int I2C3STATCLR;
volatile unsigned int I2C1ASTATSET;
volatile unsigned int I2C3STATSET;
volatile unsigned int I2C1ASTATINV;
volatile unsigned int I2C3STATINV;
volatile unsigned int I2C1AADD;
volatile unsigned int I2C3ADD;
volatile unsigned int I2C1AADDCLR;
volatile unsigned int I2C3ADDCLR;
volatile unsigned int I2C1AADDSET;
volatile unsigned int I2C3ADDSET;
volatile unsigned int I2C1AADDINV;
volatile unsigned int I2C3ADDINV;
volatile unsigned int I2C1AMSK;
volatile unsigned int I2C3MSK;
volatile unsigned int I2C1AMSKCLR;
volatile unsigned int I2C3MSKCLR;
volatile unsigned int I2C1AMSKSET;
volatile unsigned int I2C3MSKSET;
volatile unsigned int I2C1AMSKINV;
volatile unsigned int I2C3MSKINV;
volatile unsigned int I2C1ABRG;
volatile unsigned int I2C3BRG;
volatile unsigned int I2C1ABRGCLR;
volatile unsigned int I2C3BRGCLR;
volatile unsigned int I2C1ABRGSET;
volatile unsigned int I2C3BRGSET;
volatile unsigned int I2C1ABRGINV;
volatile unsigned int I2C3BRGINV;
volatile unsigned int I2C1ATRN;
volatile unsigned int I2C3TRN;
volatile unsigned int I2C1ATRNCLR;
volatile unsigned int I2C3TRNCLR;
volatile unsigned int I2C1ATRNSET;
volatile unsigned int I2C3TRNSET;
volatile unsigned int I2C1ATRNINV;
volatile unsigned int I2C3TRNINV;
volatile unsigned int I2C1ARCV;
volatile unsigned int I2C3RCV;
volatile unsigned int I2C2ACON;
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C2ACONbits_t;
volatile __I2C2ACONbits_t I2C2ACONbits __asm__ ("I2C2ACON");
volatile unsigned int I2C4CON;
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C4CONbits_t;
volatile __I2C4CONbits_t I2C4CONbits __asm__ ("I2C4CON");
volatile unsigned int I2C2ACONCLR;
volatile unsigned int I2C4CONCLR;
volatile unsigned int I2C2ACONSET;
volatile unsigned int I2C4CONSET;
volatile unsigned int I2C2ACONINV;
volatile unsigned int I2C4CONINV;
volatile unsigned int I2C2ASTAT;
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C2ASTATbits_t;
volatile __I2C2ASTATbits_t I2C2ASTATbits __asm__ ("I2C2ASTAT");
volatile unsigned int I2C4STAT;
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C4STATbits_t;
volatile __I2C4STATbits_t I2C4STATbits __asm__ ("I2C4STAT");
volatile unsigned int I2C2ASTATCLR;
volatile unsigned int I2C4STATCLR;
volatile unsigned int I2C2ASTATSET;
volatile unsigned int I2C4STATSET;
volatile unsigned int I2C2ASTATINV;
volatile unsigned int I2C4STATINV;
volatile unsigned int I2C2AADD;
volatile unsigned int I2C4ADD;
volatile unsigned int I2C2AADDCLR;
volatile unsigned int I2C4ADDCLR;
volatile unsigned int I2C2AADDSET;
volatile unsigned int I2C4ADDSET;
volatile unsigned int I2C2AADDINV;
volatile unsigned int I2C4ADDINV;
volatile unsigned int I2C2AMSK;
volatile unsigned int I2C4MSK;
volatile unsigned int I2C2AMSKCLR;
volatile unsigned int I2C4MSKCLR;
volatile unsigned int I2C2AMSKSET;
volatile unsigned int I2C4MSKSET;
volatile unsigned int I2C2AMSKINV;
volatile unsigned int I2C4MSKINV;
volatile unsigned int I2C2ABRG;
volatile unsigned int I2C4BRG;
volatile unsigned int I2C2ABRGCLR;
volatile unsigned int I2C4BRGCLR;
volatile unsigned int I2C2ABRGSET;
volatile unsigned int I2C4BRGSET;
volatile unsigned int I2C2ABRGINV;
volatile unsigned int I2C4BRGINV;
volatile unsigned int I2C2ATRN;
volatile unsigned int I2C4TRN;
volatile unsigned int I2C2ATRNCLR;
volatile unsigned int I2C4TRNCLR;
volatile unsigned int I2C2ATRNSET;
volatile unsigned int I2C4TRNSET;
volatile unsigned int I2C2ATRNINV;
volatile unsigned int I2C4TRNINV;
volatile unsigned int I2C2ARCV;
volatile unsigned int I2C4RCV;
volatile unsigned int I2C3ACON;
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C3ACONbits_t;
volatile __I2C3ACONbits_t I2C3ACONbits __asm__ ("I2C3ACON");
volatile unsigned int I2C5CON;
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C5CONbits_t;
volatile __I2C5CONbits_t I2C5CONbits __asm__ ("I2C5CON");
volatile unsigned int I2C3ACONCLR;
volatile unsigned int I2C5CONCLR;
volatile unsigned int I2C3ACONSET;
volatile unsigned int I2C5CONSET;
volatile unsigned int I2C3ACONINV;
volatile unsigned int I2C5CONINV;
volatile unsigned int I2C3ASTAT;
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C3ASTATbits_t;
volatile __I2C3ASTATbits_t I2C3ASTATbits __asm__ ("I2C3ASTAT");
volatile unsigned int I2C5STAT;
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C5STATbits_t;
volatile __I2C5STATbits_t I2C5STATbits __asm__ ("I2C5STAT");
volatile unsigned int I2C3ASTATCLR;
volatile unsigned int I2C5STATCLR;
volatile unsigned int I2C3ASTATSET;
volatile unsigned int I2C5STATSET;
volatile unsigned int I2C3ASTATINV;
volatile unsigned int I2C5STATINV;
volatile unsigned int I2C3AADD;
volatile unsigned int I2C5ADD;
volatile unsigned int I2C3AADDCLR;
volatile unsigned int I2C5ADDCLR;
volatile unsigned int I2C3AADDSET;
volatile unsigned int I2C5ADDSET;
volatile unsigned int I2C3AADDINV;
volatile unsigned int I2C5ADDINV;
volatile unsigned int I2C3AMSK;
volatile unsigned int I2C5MSK;
volatile unsigned int I2C3AMSKCLR;
volatile unsigned int I2C5MSKCLR;
volatile unsigned int I2C3AMSKSET;
volatile unsigned int I2C5MSKSET;
volatile unsigned int I2C3AMSKINV;
volatile unsigned int I2C5MSKINV;
volatile unsigned int I2C3ABRG;
volatile unsigned int I2C5BRG;
volatile unsigned int I2C3ABRGCLR;
volatile unsigned int I2C5BRGCLR;
volatile unsigned int I2C3ABRGSET;
volatile unsigned int I2C5BRGSET;
volatile unsigned int I2C3ABRGINV;
volatile unsigned int I2C5BRGINV;
volatile unsigned int I2C3ATRN;
volatile unsigned int I2C5TRN;
volatile unsigned int I2C3ATRNCLR;
volatile unsigned int I2C5TRNCLR;
volatile unsigned int I2C3ATRNSET;
volatile unsigned int I2C5TRNSET;
volatile unsigned int I2C3ATRNINV;
volatile unsigned int I2C5TRNINV;
volatile unsigned int I2C3ARCV;
volatile unsigned int I2C5RCV;
volatile unsigned int I2C1CON;
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C1CONbits_t;
volatile __I2C1CONbits_t I2C1CONbits __asm__ ("I2C1CON");
volatile unsigned int I2C1CONCLR;
volatile unsigned int I2C1CONSET;
volatile unsigned int I2C1CONINV;
volatile unsigned int I2C1STAT;
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C1STATbits_t;
volatile __I2C1STATbits_t I2C1STATbits __asm__ ("I2C1STAT");
volatile unsigned int I2C1STATCLR;
volatile unsigned int I2C1STATSET;
volatile unsigned int I2C1STATINV;
volatile unsigned int I2C1ADD;
volatile unsigned int I2C1ADDCLR;
volatile unsigned int I2C1ADDSET;
volatile unsigned int I2C1ADDINV;
volatile unsigned int I2C1MSK;
volatile unsigned int I2C1MSKCLR;
volatile unsigned int I2C1MSKSET;
volatile unsigned int I2C1MSKINV;
volatile unsigned int I2C1BRG;
volatile unsigned int I2C1BRGCLR;
volatile unsigned int I2C1BRGSET;
volatile unsigned int I2C1BRGINV;
volatile unsigned int I2C1TRN;
volatile unsigned int I2C1TRNCLR;
volatile unsigned int I2C1TRNSET;
volatile unsigned int I2C1TRNINV;
volatile unsigned int I2C1RCV;
volatile unsigned int I2C2CON;
typedef union {
  struct {
    unsigned SEN:1;
    unsigned RSEN:1;
    unsigned PEN:1;
    unsigned RCEN:1;
    unsigned ACKEN:1;
    unsigned ACKDT:1;
    unsigned STREN:1;
    unsigned GCEN:1;
    unsigned SMEN:1;
    unsigned DISSLW:1;
    unsigned A10M:1;
    unsigned STRICT:1;
    unsigned SCLREL:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :11;
    unsigned IPMIEN:1;
    unsigned :1;
    unsigned I2CSIDL:1;
    unsigned :1;
    unsigned I2CEN:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C2CONbits_t;
volatile __I2C2CONbits_t I2C2CONbits __asm__ ("I2C2CON");
volatile unsigned int I2C2CONCLR;
volatile unsigned int I2C2CONSET;
volatile unsigned int I2C2CONINV;
volatile unsigned int I2C2STAT;
typedef union {
  struct {
    unsigned TBF:1;
    unsigned RBF:1;
    unsigned R_W:1;
    unsigned S:1;
    unsigned P:1;
    unsigned D_A:1;
    unsigned I2COV:1;
    unsigned IWCOL:1;
    unsigned ADD10:1;
    unsigned GCSTAT:1;
    unsigned BCL:1;
    unsigned :3;
    unsigned TRSTAT:1;
    unsigned ACKSTAT:1;
  };
  struct {
    unsigned :6;
    unsigned I2CPOV:1;
  };
  struct {
    unsigned w:32;
  };
} __I2C2STATbits_t;
volatile __I2C2STATbits_t I2C2STATbits __asm__ ("I2C2STAT");
volatile unsigned int I2C2STATCLR;
volatile unsigned int I2C2STATSET;
volatile unsigned int I2C2STATINV;
volatile unsigned int I2C2ADD;
volatile unsigned int I2C2ADDCLR;
volatile unsigned int I2C2ADDSET;
volatile unsigned int I2C2ADDINV;
volatile unsigned int I2C2MSK;
volatile unsigned int I2C2MSKCLR;
volatile unsigned int I2C2MSKSET;
volatile unsigned int I2C2MSKINV;
volatile unsigned int I2C2BRG;
volatile unsigned int I2C2BRGCLR;
volatile unsigned int I2C2BRGSET;
volatile unsigned int I2C2BRGINV;
volatile unsigned int I2C2TRN;
volatile unsigned int I2C2TRNCLR;
volatile unsigned int I2C2TRNSET;
volatile unsigned int I2C2TRNINV;
volatile unsigned int I2C2RCV;
volatile unsigned int SPI1ACON;
typedef union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned :1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :6;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI1ACONbits_t;
volatile __SPI1ACONbits_t SPI1ACONbits __asm__ ("SPI1ACON");
volatile unsigned int SPI3CON;
typedef union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned :1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :6;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI3CONbits_t;
volatile __SPI3CONbits_t SPI3CONbits __asm__ ("SPI3CON");
volatile unsigned int SPI1ACONCLR;
volatile unsigned int SPI3CONCLR;
volatile unsigned int SPI1ACONSET;
volatile unsigned int SPI3CONSET;
volatile unsigned int SPI1ACONINV;
volatile unsigned int SPI3CONINV;
volatile unsigned int SPI1ASTAT;
typedef union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :1;
    unsigned SPITBE:1;
    unsigned :1;
    unsigned SPIRBE:1;
    unsigned SPIROV:1;
    unsigned SRMT:1;
    unsigned SPITUR:1;
    unsigned :2;
    unsigned SPIBUSY:1;
    unsigned :4;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
} __SPI1ASTATbits_t;
volatile __SPI1ASTATbits_t SPI1ASTATbits __asm__ ("SPI1ASTAT");
volatile unsigned int SPI3STAT;
typedef union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :1;
    unsigned SPITBE:1;
    unsigned :1;
    unsigned SPIRBE:1;
    unsigned SPIROV:1;
    unsigned SRMT:1;
    unsigned SPITUR:1;
    unsigned :2;
    unsigned SPIBUSY:1;
    unsigned :4;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
} __SPI3STATbits_t;
volatile __SPI3STATbits_t SPI3STATbits __asm__ ("SPI3STAT");
volatile unsigned int SPI1ASTATCLR;
volatile unsigned int SPI3STATCLR;
volatile unsigned int SPI1ASTATSET;
volatile unsigned int SPI3STATSET;
volatile unsigned int SPI1ASTATINV;
volatile unsigned int SPI3STATINV;
volatile unsigned int SPI1ABUF;
volatile unsigned int SPI3BUF;
volatile unsigned int SPI1ABRG;
volatile unsigned int SPI3BRG;
volatile unsigned int SPI1ABRGCLR;
volatile unsigned int SPI3BRGCLR;
volatile unsigned int SPI1ABRGSET;
volatile unsigned int SPI3BRGSET;
volatile unsigned int SPI1ABRGINV;
volatile unsigned int SPI3BRGINV;
volatile unsigned int SPI2ACON;
typedef union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned :1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :6;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI2ACONbits_t;
volatile __SPI2ACONbits_t SPI2ACONbits __asm__ ("SPI2ACON");
volatile unsigned int SPI2CON;
typedef union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned :1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :6;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI2CONbits_t;
volatile __SPI2CONbits_t SPI2CONbits __asm__ ("SPI2CON");
volatile unsigned int SPI2ACONCLR;
volatile unsigned int SPI2CONCLR;
volatile unsigned int SPI2ACONSET;
volatile unsigned int SPI2CONSET;
volatile unsigned int SPI2ACONINV;
volatile unsigned int SPI2CONINV;
volatile unsigned int SPI2ASTAT;
typedef union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :1;
    unsigned SPITBE:1;
    unsigned :1;
    unsigned SPIRBE:1;
    unsigned SPIROV:1;
    unsigned SRMT:1;
    unsigned SPITUR:1;
    unsigned :2;
    unsigned SPIBUSY:1;
    unsigned :4;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
} __SPI2ASTATbits_t;
volatile __SPI2ASTATbits_t SPI2ASTATbits __asm__ ("SPI2ASTAT");
volatile unsigned int SPI2STAT;
typedef union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :1;
    unsigned SPITBE:1;
    unsigned :1;
    unsigned SPIRBE:1;
    unsigned SPIROV:1;
    unsigned SRMT:1;
    unsigned SPITUR:1;
    unsigned :2;
    unsigned SPIBUSY:1;
    unsigned :4;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
} __SPI2STATbits_t;
volatile __SPI2STATbits_t SPI2STATbits __asm__ ("SPI2STAT");
volatile unsigned int SPI2ASTATCLR;
volatile unsigned int SPI2STATCLR;
volatile unsigned int SPI2ASTATSET;
volatile unsigned int SPI2STATSET;
volatile unsigned int SPI2ASTATINV;
volatile unsigned int SPI2STATINV;
volatile unsigned int SPI2ABUF;
volatile unsigned int SPI2BUF;
volatile unsigned int SPI2ABRG;
volatile unsigned int SPI2BRG;
volatile unsigned int SPI2ABRGCLR;
volatile unsigned int SPI2BRGCLR;
volatile unsigned int SPI2ABRGSET;
volatile unsigned int SPI2BRGSET;
volatile unsigned int SPI2ABRGINV;
volatile unsigned int SPI2BRGINV;
volatile unsigned int SPI3ACON;
typedef union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned :1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :6;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI3ACONbits_t;
volatile __SPI3ACONbits_t SPI3ACONbits __asm__ ("SPI3ACON");
volatile unsigned int SPI4CON;
typedef union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned :1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :6;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI4CONbits_t;
volatile __SPI4CONbits_t SPI4CONbits __asm__ ("SPI4CON");
volatile unsigned int SPI3ACONCLR;
volatile unsigned int SPI4CONCLR;
volatile unsigned int SPI3ACONSET;
volatile unsigned int SPI4CONSET;
volatile unsigned int SPI3ACONINV;
volatile unsigned int SPI4CONINV;
volatile unsigned int SPI3ASTAT;
typedef union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :1;
    unsigned SPITBE:1;
    unsigned :1;
    unsigned SPIRBE:1;
    unsigned SPIROV:1;
    unsigned SRMT:1;
    unsigned SPITUR:1;
    unsigned :2;
    unsigned SPIBUSY:1;
    unsigned :4;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
} __SPI3ASTATbits_t;
volatile __SPI3ASTATbits_t SPI3ASTATbits __asm__ ("SPI3ASTAT");
volatile unsigned int SPI4STAT;
typedef union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :1;
    unsigned SPITBE:1;
    unsigned :1;
    unsigned SPIRBE:1;
    unsigned SPIROV:1;
    unsigned SRMT:1;
    unsigned SPITUR:1;
    unsigned :2;
    unsigned SPIBUSY:1;
    unsigned :4;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
} __SPI4STATbits_t;
volatile __SPI4STATbits_t SPI4STATbits __asm__ ("SPI4STAT");
volatile unsigned int SPI3ASTATCLR;
volatile unsigned int SPI4STATCLR;
volatile unsigned int SPI3ASTATSET;
volatile unsigned int SPI4STATSET;
volatile unsigned int SPI3ASTATINV;
volatile unsigned int SPI4STATINV;
volatile unsigned int SPI3ABUF;
volatile unsigned int SPI4BUF;
volatile unsigned int SPI3ABRG;
volatile unsigned int SPI4BRG;
volatile unsigned int SPI3ABRGCLR;
volatile unsigned int SPI4BRGCLR;
volatile unsigned int SPI3ABRGSET;
volatile unsigned int SPI4BRGSET;
volatile unsigned int SPI3ABRGINV;
volatile unsigned int SPI4BRGINV;
volatile unsigned int SPI1CON;
typedef union {
  struct {
    unsigned SRXISEL:2;
    unsigned STXISEL:2;
    unsigned :1;
    unsigned MSTEN:1;
    unsigned CKP:1;
    unsigned SSEN:1;
    unsigned CKE:1;
    unsigned SMP:1;
    unsigned MODE16:1;
    unsigned MODE32:1;
    unsigned DISSDO:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned ENHBUF:1;
    unsigned SPIFE:1;
    unsigned :6;
    unsigned FRMCNT:3;
    unsigned FRMSYPW:1;
    unsigned MSSEN:1;
    unsigned FRMPOL:1;
    unsigned FRMSYNC:1;
    unsigned FRMEN:1;
  };
  struct {
    unsigned w:32;
  };
} __SPI1CONbits_t;
volatile __SPI1CONbits_t SPI1CONbits __asm__ ("SPI1CON");
volatile unsigned int SPI1CONCLR;
volatile unsigned int SPI1CONSET;
volatile unsigned int SPI1CONINV;
volatile unsigned int SPI1STAT;
typedef union {
  struct {
    unsigned SPIRBF:1;
    unsigned SPITBF:1;
    unsigned :1;
    unsigned SPITBE:1;
    unsigned :1;
    unsigned SPIRBE:1;
    unsigned SPIROV:1;
    unsigned SRMT:1;
    unsigned SPITUR:1;
    unsigned :2;
    unsigned SPIBUSY:1;
    unsigned :4;
    unsigned TXBUFELM:5;
    unsigned :3;
    unsigned RXBUFELM:5;
  };
  struct {
    unsigned w:32;
  };
} __SPI1STATbits_t;
volatile __SPI1STATbits_t SPI1STATbits __asm__ ("SPI1STAT");
volatile unsigned int SPI1STATCLR;
volatile unsigned int SPI1STATSET;
volatile unsigned int SPI1STATINV;
volatile unsigned int SPI1BUF;
volatile unsigned int SPI1BRG;
volatile unsigned int SPI1BRGCLR;
volatile unsigned int SPI1BRGSET;
volatile unsigned int SPI1BRGINV;
volatile unsigned int U1AMODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U1AMODEbits_t;
volatile __U1AMODEbits_t U1AMODEbits __asm__ ("U1AMODE");
volatile unsigned int U1MODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U1MODEbits_t;
volatile __U1MODEbits_t U1MODEbits __asm__ ("U1MODE");
volatile unsigned int U1AMODECLR;
volatile unsigned int U1MODECLR;
volatile unsigned int U1AMODESET;
volatile unsigned int U1MODESET;
volatile unsigned int U1AMODEINV;
volatile unsigned int U1MODEINV;
volatile unsigned int U1ASTA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U1ASTAbits_t;
volatile __U1ASTAbits_t U1ASTAbits __asm__ ("U1ASTA");
volatile unsigned int U1STA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U1STAbits_t;
volatile __U1STAbits_t U1STAbits __asm__ ("U1STA");
volatile unsigned int U1ASTACLR;
volatile unsigned int U1STACLR;
volatile unsigned int U1ASTASET;
volatile unsigned int U1STASET;
volatile unsigned int U1ASTAINV;
volatile unsigned int U1STAINV;
volatile unsigned int U1ATXREG;
volatile unsigned int U1TXREG;
volatile unsigned int U1ARXREG;
volatile unsigned int U1RXREG;
volatile unsigned int U1ABRG;
volatile unsigned int U1BRG;
volatile unsigned int U1ABRGCLR;
volatile unsigned int U1BRGCLR;
volatile unsigned int U1ABRGSET;
volatile unsigned int U1BRGSET;
volatile unsigned int U1ABRGINV;
volatile unsigned int U1BRGINV;
volatile unsigned int U1BMODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned :4;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U1BMODEbits_t;
volatile __U1BMODEbits_t U1BMODEbits __asm__ ("U1BMODE");
volatile unsigned int U4MODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned :4;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U4MODEbits_t;
volatile __U4MODEbits_t U4MODEbits __asm__ ("U4MODE");
volatile unsigned int U1BMODECLR;
volatile unsigned int U4MODECLR;
volatile unsigned int U1BMODESET;
volatile unsigned int U4MODESET;
volatile unsigned int U1BMODEINV;
volatile unsigned int U4MODEINV;
volatile unsigned int U1BSTA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U1BSTAbits_t;
volatile __U1BSTAbits_t U1BSTAbits __asm__ ("U1BSTA");
volatile unsigned int U4STA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U4STAbits_t;
volatile __U4STAbits_t U4STAbits __asm__ ("U4STA");
volatile unsigned int U1BSTACLR;
volatile unsigned int U4STACLR;
volatile unsigned int U1BSTASET;
volatile unsigned int U4STASET;
volatile unsigned int U1BSTAINV;
volatile unsigned int U4STAINV;
volatile unsigned int U1BTXREG;
volatile unsigned int U4TXREG;
volatile unsigned int U1BRXREG;
volatile unsigned int U4RXREG;
volatile unsigned int U1BBRG;
volatile unsigned int U4BRG;
volatile unsigned int U1BBRGCLR;
volatile unsigned int U4BRGCLR;
volatile unsigned int U1BBRGSET;
volatile unsigned int U4BRGSET;
volatile unsigned int U1BBRGINV;
volatile unsigned int U4BRGINV;
volatile unsigned int U2AMODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U2AMODEbits_t;
volatile __U2AMODEbits_t U2AMODEbits __asm__ ("U2AMODE");
volatile unsigned int U3MODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U3MODEbits_t;
volatile __U3MODEbits_t U3MODEbits __asm__ ("U3MODE");
volatile unsigned int U2AMODECLR;
volatile unsigned int U3MODECLR;
volatile unsigned int U2AMODESET;
volatile unsigned int U3MODESET;
volatile unsigned int U2AMODEINV;
volatile unsigned int U3MODEINV;
volatile unsigned int U2ASTA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U2ASTAbits_t;
volatile __U2ASTAbits_t U2ASTAbits __asm__ ("U2ASTA");
volatile unsigned int U3STA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U3STAbits_t;
volatile __U3STAbits_t U3STAbits __asm__ ("U3STA");
volatile unsigned int U2ASTACLR;
volatile unsigned int U3STACLR;
volatile unsigned int U2ASTASET;
volatile unsigned int U3STASET;
volatile unsigned int U2ASTAINV;
volatile unsigned int U3STAINV;
volatile unsigned int U2ATXREG;
volatile unsigned int U3TXREG;
volatile unsigned int U2ARXREG;
volatile unsigned int U3RXREG;
volatile unsigned int U2ABRG;
volatile unsigned int U3BRG;
volatile unsigned int U2ABRGCLR;
volatile unsigned int U3BRGCLR;
volatile unsigned int U2ABRGSET;
volatile unsigned int U3BRGSET;
volatile unsigned int U2ABRGINV;
volatile unsigned int U3BRGINV;
volatile unsigned int U2BMODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned :4;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U2BMODEbits_t;
volatile __U2BMODEbits_t U2BMODEbits __asm__ ("U2BMODE");
volatile unsigned int U6MODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned :4;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U6MODEbits_t;
volatile __U6MODEbits_t U6MODEbits __asm__ ("U6MODE");
volatile unsigned int U2BMODECLR;
volatile unsigned int U6MODECLR;
volatile unsigned int U2BMODESET;
volatile unsigned int U6MODESET;
volatile unsigned int U2BMODEINV;
volatile unsigned int U6MODEINV;
volatile unsigned int U2BSTA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U2BSTAbits_t;
volatile __U2BSTAbits_t U2BSTAbits __asm__ ("U2BSTA");
volatile unsigned int U6STA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U6STAbits_t;
volatile __U6STAbits_t U6STAbits __asm__ ("U6STA");
volatile unsigned int U2BSTACLR;
volatile unsigned int U6STACLR;
volatile unsigned int U2BSTASET;
volatile unsigned int U6STASET;
volatile unsigned int U2BSTAINV;
volatile unsigned int U6STAINV;
volatile unsigned int U2BTXREG;
volatile unsigned int U6TXREG;
volatile unsigned int U2BRXREG;
volatile unsigned int U6RXREG;
volatile unsigned int U2BBRG;
volatile unsigned int U6BRG;
volatile unsigned int U2BBRGCLR;
volatile unsigned int U6BRGCLR;
volatile unsigned int U2BBRGSET;
volatile unsigned int U6BRGSET;
volatile unsigned int U2BBRGINV;
volatile unsigned int U6BRGINV;
volatile unsigned int U2MODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U2MODEbits_t;
volatile __U2MODEbits_t U2MODEbits __asm__ ("U2MODE");
volatile unsigned int U3AMODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned UEN:2;
    unsigned :1;
    unsigned RTSMD:1;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
    unsigned :5;
    unsigned UEN0:1;
    unsigned UEN1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U3AMODEbits_t;
volatile __U3AMODEbits_t U3AMODEbits __asm__ ("U3AMODE");
volatile unsigned int U2MODECLR;
volatile unsigned int U3AMODECLR;
volatile unsigned int U2MODESET;
volatile unsigned int U3AMODESET;
volatile unsigned int U2MODEINV;
volatile unsigned int U3AMODEINV;
volatile unsigned int U2STA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U2STAbits_t;
volatile __U2STAbits_t U2STAbits __asm__ ("U2STA");
volatile unsigned int U3ASTA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U3ASTAbits_t;
volatile __U3ASTAbits_t U3ASTAbits __asm__ ("U3ASTA");
volatile unsigned int U2STACLR;
volatile unsigned int U3ASTACLR;
volatile unsigned int U2STASET;
volatile unsigned int U3ASTASET;
volatile unsigned int U2STAINV;
volatile unsigned int U3ASTAINV;
volatile unsigned int U2TXREG;
volatile unsigned int U3ATXREG;
volatile unsigned int U2RXREG;
volatile unsigned int U3ARXREG;
volatile unsigned int U2BRG;
volatile unsigned int U3ABRG;
volatile unsigned int U2BRGCLR;
volatile unsigned int U3ABRGCLR;
volatile unsigned int U2BRGSET;
volatile unsigned int U3ABRGSET;
volatile unsigned int U2BRGINV;
volatile unsigned int U3ABRGINV;
volatile unsigned int U3BMODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned :4;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U3BMODEbits_t;
volatile __U3BMODEbits_t U3BMODEbits __asm__ ("U3BMODE");
volatile unsigned int U5MODE;
typedef union {
  struct {
    unsigned STSEL:1;
    unsigned PDSEL:2;
    unsigned BRGH:1;
    unsigned RXINV:1;
    unsigned ABAUD:1;
    unsigned LPBACK:1;
    unsigned WAKE:1;
    unsigned :4;
    unsigned IREN:1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :1;
    unsigned PDSEL0:1;
    unsigned PDSEL1:1;
  };
  struct {
    unsigned :13;
    unsigned USIDL:1;
    unsigned :1;
    unsigned UARTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __U5MODEbits_t;
volatile __U5MODEbits_t U5MODEbits __asm__ ("U5MODE");
volatile unsigned int U3BMODECLR;
volatile unsigned int U5MODECLR;
volatile unsigned int U3BMODESET;
volatile unsigned int U5MODESET;
volatile unsigned int U3BMODEINV;
volatile unsigned int U5MODEINV;
volatile unsigned int U3BSTA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U3BSTAbits_t;
volatile __U3BSTAbits_t U3BSTAbits __asm__ ("U3BSTA");
volatile unsigned int U5STA;
typedef union {
  struct {
    unsigned URXDA:1;
    unsigned OERR:1;
    unsigned FERR:1;
    unsigned PERR:1;
    unsigned RIDLE:1;
    unsigned ADDEN:1;
    unsigned URXISEL:2;
    unsigned TRMT:1;
    unsigned UTXBF:1;
    unsigned UTXEN:1;
    unsigned UTXBRK:1;
    unsigned URXEN:1;
    unsigned UTXINV:1;
    unsigned UTXISEL:2;
    unsigned ADDR:8;
    unsigned ADM_EN:1;
  };
  struct {
    unsigned :6;
    unsigned URXISEL0:1;
    unsigned URXISEL1:1;
    unsigned :6;
    unsigned UTXISEL0:1;
    unsigned UTXISEL1:1;
  };
  struct {
    unsigned :14;
    unsigned UTXSEL:2;
  };
  struct {
    unsigned w:32;
  };
} __U5STAbits_t;
volatile __U5STAbits_t U5STAbits __asm__ ("U5STA");
volatile unsigned int U3BSTACLR;
volatile unsigned int U5STACLR;
volatile unsigned int U3BSTASET;
volatile unsigned int U5STASET;
volatile unsigned int U3BSTAINV;
volatile unsigned int U5STAINV;
volatile unsigned int U3BTXREG;
volatile unsigned int U5TXREG;
volatile unsigned int U3BRXREG;
volatile unsigned int U5RXREG;
volatile unsigned int U3BBRG;
volatile unsigned int U5BRG;
volatile unsigned int U3BBRGCLR;
volatile unsigned int U5BRGCLR;
volatile unsigned int U3BBRGSET;
volatile unsigned int U5BRGSET;
volatile unsigned int U3BBRGINV;
volatile unsigned int U5BRGINV;
volatile unsigned int PMCON;
typedef union {
  struct {
    unsigned RDSP:1;
    unsigned WRSP:1;
    unsigned :1;
    unsigned CS1P:1;
    unsigned CS2P:1;
    unsigned ALP:1;
    unsigned CSF:2;
    unsigned PTRDEN:1;
    unsigned PTWREN:1;
    unsigned PMPTTL:1;
    unsigned ADRMUX:2;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :6;
    unsigned CSF0:1;
    unsigned CSF1:1;
    unsigned :3;
    unsigned ADRMUX0:1;
    unsigned ADRMUX1:1;
  };
  struct {
    unsigned :13;
    unsigned PSIDL:1;
    unsigned :1;
    unsigned PMPEN:1;
  };
  struct {
    unsigned w:32;
  };
} __PMCONbits_t;
volatile __PMCONbits_t PMCONbits __asm__ ("PMCON");
volatile unsigned int PMCONCLR;
volatile unsigned int PMCONSET;
volatile unsigned int PMCONINV;
volatile unsigned int PMMODE;
typedef union {
  struct {
    unsigned WAITE:2;
    unsigned WAITM:4;
    unsigned WAITB:2;
    unsigned MODE:2;
    unsigned MODE16:1;
    unsigned INCM:2;
    unsigned IRQM:2;
    unsigned BUSY:1;
  };
  struct {
    unsigned WAITE0:1;
    unsigned WAITE1:1;
    unsigned WAITM0:1;
    unsigned WAITM1:1;
    unsigned WAITM2:1;
    unsigned WAITM3:1;
    unsigned WAITB0:1;
    unsigned WAITB1:1;
    unsigned MODE0:1;
    unsigned MODE1:1;
    unsigned :1;
    unsigned INCM0:1;
    unsigned INCM1:1;
    unsigned IRQM0:1;
    unsigned IRQM1:1;
  };
  struct {
    unsigned w:32;
  };
} __PMMODEbits_t;
volatile __PMMODEbits_t PMMODEbits __asm__ ("PMMODE");
volatile unsigned int PMMODECLR;
volatile unsigned int PMMODESET;
volatile unsigned int PMMODEINV;
volatile unsigned int PMADDR;
typedef union {
  struct {
    unsigned ADDR:14;
    unsigned CS:2;
  };
  struct {
    unsigned PADDR:14;
  };
  struct {
    unsigned :14;
    unsigned CS1:1;
    unsigned CS2:1;
  };
  struct {
    unsigned w:32;
  };
} __PMADDRbits_t;
volatile __PMADDRbits_t PMADDRbits __asm__ ("PMADDR");
volatile unsigned int PMADDRCLR;
volatile unsigned int PMADDRSET;
volatile unsigned int PMADDRINV;
volatile unsigned int PMDOUT;
typedef union {
  struct {
    unsigned DATAOUT:32;
  };
  struct {
    unsigned w:32;
  };
} __PMDOUTbits_t;
volatile __PMDOUTbits_t PMDOUTbits __asm__ ("PMDOUT");
volatile unsigned int PMDOUTCLR;
volatile unsigned int PMDOUTSET;
volatile unsigned int PMDOUTINV;
volatile unsigned int PMDIN;
typedef union {
  struct {
    unsigned DATAIN:32;
  };
  struct {
    unsigned w:32;
  };
} __PMDINbits_t;
volatile __PMDINbits_t PMDINbits __asm__ ("PMDIN");
volatile unsigned int PMDINCLR;
volatile unsigned int PMDINSET;
volatile unsigned int PMDININV;
volatile unsigned int PMAEN;
typedef union {
  struct {
    unsigned PTEN:16;
  };
  struct {
    unsigned PTEN0:1;
    unsigned PTEN1:1;
    unsigned PTEN2:1;
    unsigned PTEN3:1;
    unsigned PTEN4:1;
    unsigned PTEN5:1;
    unsigned PTEN6:1;
    unsigned PTEN7:1;
    unsigned PTEN8:1;
    unsigned PTEN9:1;
    unsigned PTEN10:1;
    unsigned PTEN11:1;
    unsigned PTEN12:1;
    unsigned PTEN13:1;
    unsigned PTEN14:1;
    unsigned PTEN15:1;
  };
  struct {
    unsigned w:32;
  };
} __PMAENbits_t;
volatile __PMAENbits_t PMAENbits __asm__ ("PMAEN");
volatile unsigned int PMAENCLR;
volatile unsigned int PMAENSET;
volatile unsigned int PMAENINV;
volatile unsigned int PMSTAT;
typedef union {
  struct {
    unsigned OB0E:1;
    unsigned OB1E:1;
    unsigned OB2E:1;
    unsigned OB3E:1;
    unsigned :2;
    unsigned OBUF:1;
    unsigned OBE:1;
    unsigned IB0F:1;
    unsigned IB1F:1;
    unsigned IB2F:1;
    unsigned IB3F:1;
    unsigned :2;
    unsigned IBOV:1;
    unsigned IBF:1;
  };
  struct {
    unsigned w:32;
  };
} __PMSTATbits_t;
volatile __PMSTATbits_t PMSTATbits __asm__ ("PMSTAT");
volatile unsigned int PMSTATCLR;
volatile unsigned int PMSTATSET;
volatile unsigned int PMSTATINV;
volatile unsigned int AD1CON1;
typedef union {
  struct {
    unsigned DONE:1;
    unsigned SAMP:1;
    unsigned ASAM:1;
    unsigned :1;
    unsigned CLRASAM:1;
    unsigned SSRC:3;
    unsigned FORM:3;
    unsigned :2;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned :5;
    unsigned SSRC0:1;
    unsigned SSRC1:1;
    unsigned SSRC2:1;
    unsigned FORM0:1;
    unsigned FORM1:1;
    unsigned FORM2:1;
  };
  struct {
    unsigned :13;
    unsigned ADSIDL:1;
    unsigned :1;
    unsigned ADON:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1CON1bits_t;
volatile __AD1CON1bits_t AD1CON1bits __asm__ ("AD1CON1");
volatile unsigned int AD1CON1CLR;
volatile unsigned int AD1CON1SET;
volatile unsigned int AD1CON1INV;
volatile unsigned int AD1CON2;
typedef union {
  struct {
    unsigned ALTS:1;
    unsigned BUFM:1;
    unsigned SMPI:4;
    unsigned :1;
    unsigned BUFS:1;
    unsigned :2;
    unsigned CSCNA:1;
    unsigned :1;
    unsigned OFFCAL:1;
    unsigned VCFG:3;
  };
  struct {
    unsigned :2;
    unsigned SMPI0:1;
    unsigned SMPI1:1;
    unsigned SMPI2:1;
    unsigned SMPI3:1;
    unsigned :7;
    unsigned VCFG0:1;
    unsigned VCFG1:1;
    unsigned VCFG2:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1CON2bits_t;
volatile __AD1CON2bits_t AD1CON2bits __asm__ ("AD1CON2");
volatile unsigned int AD1CON2CLR;
volatile unsigned int AD1CON2SET;
volatile unsigned int AD1CON2INV;
volatile unsigned int AD1CON3;
typedef union {
  struct {
    unsigned ADCS:8;
    unsigned SAMC:5;
    unsigned :2;
    unsigned ADRC:1;
  };
  struct {
    unsigned ADCS0:1;
    unsigned ADCS1:1;
    unsigned ADCS2:1;
    unsigned ADCS3:1;
    unsigned ADCS4:1;
    unsigned ADCS5:1;
    unsigned ADCS6:1;
    unsigned ADCS7:1;
    unsigned SAMC0:1;
    unsigned SAMC1:1;
    unsigned SAMC2:1;
    unsigned SAMC3:1;
    unsigned SAMC4:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1CON3bits_t;
volatile __AD1CON3bits_t AD1CON3bits __asm__ ("AD1CON3");
volatile unsigned int AD1CON3CLR;
volatile unsigned int AD1CON3SET;
volatile unsigned int AD1CON3INV;
volatile unsigned int AD1CHS;
typedef union {
  struct {
    unsigned :16;
    unsigned CH0SA:4;
    unsigned :3;
    unsigned CH0NA:1;
    unsigned CH0SB:4;
    unsigned :3;
    unsigned CH0NB:1;
  };
  struct {
    unsigned :16;
    unsigned CH0SA0:1;
    unsigned CH0SA1:1;
    unsigned CH0SA2:1;
    unsigned CH0SA3:1;
    unsigned :4;
    unsigned CH0SB0:1;
    unsigned CH0SB1:1;
    unsigned CH0SB2:1;
    unsigned CH0SB3:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1CHSbits_t;
volatile __AD1CHSbits_t AD1CHSbits __asm__ ("AD1CHS");
volatile unsigned int AD1CHSCLR;
volatile unsigned int AD1CHSSET;
volatile unsigned int AD1CHSINV;
volatile unsigned int AD1CSSL;
typedef union {
  struct {
    unsigned CSSL:16;
  };
  struct {
    unsigned CSSL0:1;
    unsigned CSSL1:1;
    unsigned CSSL2:1;
    unsigned CSSL3:1;
    unsigned CSSL4:1;
    unsigned CSSL5:1;
    unsigned CSSL6:1;
    unsigned CSSL7:1;
    unsigned CSSL8:1;
    unsigned CSSL9:1;
    unsigned CSSL10:1;
    unsigned CSSL11:1;
    unsigned CSSL12:1;
    unsigned CSSL13:1;
    unsigned CSSL14:1;
    unsigned CSSL15:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1CSSLbits_t;
volatile __AD1CSSLbits_t AD1CSSLbits __asm__ ("AD1CSSL");
volatile unsigned int AD1CSSLCLR;
volatile unsigned int AD1CSSLSET;
volatile unsigned int AD1CSSLINV;
volatile unsigned int AD1PCFG;
typedef union {
  struct {
    unsigned PCFG:16;
  };
  struct {
    unsigned PCFG0:1;
    unsigned PCFG1:1;
    unsigned PCFG2:1;
    unsigned PCFG3:1;
    unsigned PCFG4:1;
    unsigned PCFG5:1;
    unsigned PCFG6:1;
    unsigned PCFG7:1;
    unsigned PCFG8:1;
    unsigned PCFG9:1;
    unsigned PCFG10:1;
    unsigned PCFG11:1;
    unsigned PCFG12:1;
    unsigned PCFG13:1;
    unsigned PCFG14:1;
    unsigned PCFG15:1;
  };
  struct {
    unsigned w:32;
  };
} __AD1PCFGbits_t;
volatile __AD1PCFGbits_t AD1PCFGbits __asm__ ("AD1PCFG");
volatile unsigned int AD1PCFGCLR;
volatile unsigned int AD1PCFGSET;
volatile unsigned int AD1PCFGINV;
volatile unsigned int ADC1BUF0;
volatile unsigned int ADC1BUF1;
volatile unsigned int ADC1BUF2;
volatile unsigned int ADC1BUF3;
volatile unsigned int ADC1BUF4;
volatile unsigned int ADC1BUF5;
volatile unsigned int ADC1BUF6;
volatile unsigned int ADC1BUF7;
volatile unsigned int ADC1BUF8;
volatile unsigned int ADC1BUF9;
volatile unsigned int ADC1BUFA;
volatile unsigned int ADC1BUFB;
volatile unsigned int ADC1BUFC;
volatile unsigned int ADC1BUFD;
volatile unsigned int ADC1BUFE;
volatile unsigned int ADC1BUFF;
volatile unsigned int CVRCON;
typedef union {
  struct {
    unsigned CVR:4;
    unsigned CVRSS:1;
    unsigned CVRR:1;
    unsigned CVROE:1;
    unsigned :8;
    unsigned ON:1;
  };
  struct {
    unsigned CVR0:1;
    unsigned CVR1:1;
    unsigned CVR2:1;
    unsigned CVR3:1;
  };
  struct {
    unsigned w:32;
  };
} __CVRCONbits_t;
volatile __CVRCONbits_t CVRCONbits __asm__ ("CVRCON");
volatile unsigned int CVRCONCLR;
volatile unsigned int CVRCONSET;
volatile unsigned int CVRCONINV;
volatile unsigned int CM1CON;
typedef union {
  struct {
    unsigned CCH:2;
    unsigned :2;
    unsigned CREF:1;
    unsigned :1;
    unsigned EVPOL:2;
    unsigned COUT:1;
    unsigned :4;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned ON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :4;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
  struct {
    unsigned w:32;
  };
} __CM1CONbits_t;
volatile __CM1CONbits_t CM1CONbits __asm__ ("CM1CON");
volatile unsigned int CM1CONCLR;
volatile unsigned int CM1CONSET;
volatile unsigned int CM1CONINV;
volatile unsigned int CM2CON;
typedef union {
  struct {
    unsigned CCH:2;
    unsigned :2;
    unsigned CREF:1;
    unsigned :1;
    unsigned EVPOL:2;
    unsigned COUT:1;
    unsigned :4;
    unsigned CPOL:1;
    unsigned COE:1;
    unsigned ON:1;
  };
  struct {
    unsigned CCH0:1;
    unsigned CCH1:1;
    unsigned :4;
    unsigned EVPOL0:1;
    unsigned EVPOL1:1;
  };
  struct {
    unsigned w:32;
  };
} __CM2CONbits_t;
volatile __CM2CONbits_t CM2CONbits __asm__ ("CM2CON");
volatile unsigned int CM2CONCLR;
volatile unsigned int CM2CONSET;
volatile unsigned int CM2CONINV;
volatile unsigned int CMSTAT;
typedef union {
  struct {
    unsigned C1OUT:1;
    unsigned C2OUT:1;
    unsigned :11;
    unsigned SIDL:1;
  };
  struct {
    unsigned w:32;
  };
} __CMSTATbits_t;
volatile __CMSTATbits_t CMSTATbits __asm__ ("CMSTAT");
volatile unsigned int CMSTATCLR;
volatile unsigned int CMSTATSET;
volatile unsigned int CMSTATINV;
volatile unsigned int OSCCON;
typedef union {
  struct {
    unsigned OSWEN:1;
    unsigned SOSCEN:1;
    unsigned UFRCEN:1;
    unsigned CF:1;
    unsigned SLPEN:1;
    unsigned SLOCK:1;
    unsigned ULOCK:1;
    unsigned CLKLOCK:1;
    unsigned NOSC:3;
    unsigned :1;
    unsigned COSC:3;
    unsigned :1;
    unsigned PLLMULT:3;
    unsigned PBDIV:2;
    unsigned :1;
    unsigned SOSCRDY:1;
    unsigned :1;
    unsigned FRCDIV:3;
    unsigned PLLODIV:3;
  };
  struct {
    unsigned :8;
    unsigned NOSC0:1;
    unsigned NOSC1:1;
    unsigned NOSC2:1;
    unsigned :1;
    unsigned COSC0:1;
    unsigned COSC1:1;
    unsigned COSC2:1;
    unsigned :1;
    unsigned PLLMULT0:1;
    unsigned PLLMULT1:1;
    unsigned PLLMULT2:1;
    unsigned PBDIV0:1;
    unsigned PBDIV1:1;
    unsigned :3;
    unsigned FRCDIV0:1;
    unsigned FRCDIV1:1;
    unsigned FRCDIV2:1;
    unsigned PLLODIV0:1;
    unsigned PLLODIV1:1;
    unsigned PLLODIV2:1;
  };
  struct {
    unsigned w:32;
  };
} __OSCCONbits_t;
volatile __OSCCONbits_t OSCCONbits __asm__ ("OSCCON");
volatile unsigned int OSCCONCLR;
volatile unsigned int OSCCONSET;
volatile unsigned int OSCCONINV;
volatile unsigned int OSCTUN;
typedef union {
  struct {
    unsigned TUN:6;
  };
  struct {
    unsigned TUN0:1;
    unsigned TUN1:1;
    unsigned TUN2:1;
    unsigned TUN3:1;
    unsigned TUN4:1;
    unsigned TUN5:1;
  };
  struct {
    unsigned w:32;
  };
} __OSCTUNbits_t;
volatile __OSCTUNbits_t OSCTUNbits __asm__ ("OSCTUN");
volatile unsigned int OSCTUNCLR;
volatile unsigned int OSCTUNSET;
volatile unsigned int OSCTUNINV;
volatile unsigned int DDPCON;
typedef struct {
  unsigned TDOEN:1;
  unsigned :1;
  unsigned TROEN:1;
  unsigned JTAGEN:1;
} __DDPCONbits_t;
volatile __DDPCONbits_t DDPCONbits __asm__ ("DDPCON");
volatile unsigned int DEVID;
typedef struct {
  unsigned DEVID:28;
  unsigned VER:4;
} __DEVIDbits_t;
volatile __DEVIDbits_t DEVIDbits __asm__ ("DEVID");
volatile unsigned int SYSKEY;
volatile unsigned int SYSKEYCLR;
volatile unsigned int SYSKEYSET;
volatile unsigned int SYSKEYINV;
volatile unsigned int NVMCON;
typedef union {
  struct {
    unsigned NVMOP:4;
    unsigned :7;
    unsigned LVDSTAT:1;
    unsigned LVDERR:1;
    unsigned WRERR:1;
    unsigned WREN:1;
    unsigned WR:1;
  };
  struct {
    unsigned NVMOP0:1;
    unsigned NVMOP1:1;
    unsigned NVMOP2:1;
    unsigned NVMOP3:1;
  };
  struct {
    unsigned PROGOP:4;
  };
  struct {
    unsigned PROGOP0:1;
    unsigned PROGOP1:1;
    unsigned PROGOP2:1;
    unsigned PROGOP3:1;
  };
  struct {
    unsigned w:32;
  };
} __NVMCONbits_t;
volatile __NVMCONbits_t NVMCONbits __asm__ ("NVMCON");
volatile unsigned int NVMCONCLR;
volatile unsigned int NVMCONSET;
volatile unsigned int NVMCONINV;
volatile unsigned int NVMKEY;
volatile unsigned int NVMADDR;
volatile unsigned int NVMADDRCLR;
volatile unsigned int NVMADDRSET;
volatile unsigned int NVMADDRINV;
volatile unsigned int NVMDATA;
volatile unsigned int NVMSRCADDR;
volatile unsigned int RCON;
typedef union {
  struct {
    unsigned POR:1;
    unsigned BOR:1;
    unsigned IDLE:1;
    unsigned SLEEP:1;
    unsigned WDTO:1;
    unsigned :1;
    unsigned SWR:1;
    unsigned EXTR:1;
    unsigned VREGS:1;
    unsigned CMR:1;
  };
  struct {
    unsigned w:32;
  };
} __RCONbits_t;
volatile __RCONbits_t RCONbits __asm__ ("RCON");
volatile unsigned int RCONCLR;
volatile unsigned int RCONSET;
volatile unsigned int RCONINV;
volatile unsigned int RSWRST;
typedef union {
  struct {
    unsigned SWRST:1;
  };
  struct {
    unsigned w:32;
  };
} __RSWRSTbits_t;
volatile __RSWRSTbits_t RSWRSTbits __asm__ ("RSWRST");
volatile unsigned int RSWRSTCLR;
volatile unsigned int RSWRSTSET;
volatile unsigned int RSWRSTINV;
volatile unsigned int _DDPSTAT;
typedef struct {
  unsigned :1;
  unsigned APIFUL:1;
  unsigned APOFUL:1;
  unsigned STRFUL:1;
  unsigned :5;
  unsigned APIOV:1;
  unsigned APOOV:1;
  unsigned :5;
  unsigned STOV:16;
} ___DDPSTATbits_t;
volatile ___DDPSTATbits_t _DDPSTATbits __asm__ ("_DDPSTAT");
volatile unsigned int _STRO;
volatile unsigned int _STROCLR;
volatile unsigned int _STROSET;
volatile unsigned int _STROINV;
volatile unsigned int _APPO;
volatile unsigned int _APPOCLR;
volatile unsigned int _APPOSET;
volatile unsigned int _APPOINV;
volatile unsigned int _APPI;
volatile unsigned int INTCON;
typedef union {
  struct {
    unsigned INT0EP:1;
    unsigned INT1EP:1;
    unsigned INT2EP:1;
    unsigned INT3EP:1;
    unsigned INT4EP:1;
    unsigned :3;
    unsigned TPC:3;
    unsigned :1;
    unsigned MVEC:1;
    unsigned :1;
    unsigned FRZ:1;
    unsigned :1;
    unsigned SS0:1;
  };
  struct {
    unsigned w:32;
  };
} __INTCONbits_t;
volatile __INTCONbits_t INTCONbits __asm__ ("INTCON");
volatile unsigned int INTCONCLR;
volatile unsigned int INTCONSET;
volatile unsigned int INTCONINV;
volatile unsigned int INTSTAT;
typedef struct {
  unsigned VEC:6;
  unsigned :2;
  unsigned SRIPL:3;
} __INTSTATbits_t;
volatile __INTSTATbits_t INTSTATbits __asm__ ("INTSTAT");
volatile unsigned int IPTMR;
volatile unsigned int IPTMRCLR;
volatile unsigned int IPTMRSET;
volatile unsigned int IPTMRINV;
volatile unsigned int IFS0;
typedef union {
  struct {
    unsigned CTIF:1;
    unsigned CS0IF:1;
    unsigned CS1IF:1;
    unsigned INT0IF:1;
    unsigned T1IF:1;
    unsigned IC1IF:1;
    unsigned OC1IF:1;
    unsigned INT1IF:1;
    unsigned T2IF:1;
    unsigned IC2IF:1;
    unsigned OC2IF:1;
    unsigned INT2IF:1;
    unsigned T3IF:1;
    unsigned IC3IF:1;
    unsigned OC3IF:1;
    unsigned INT3IF:1;
    unsigned T4IF:1;
    unsigned IC4IF:1;
    unsigned OC4IF:1;
    unsigned INT4IF:1;
    unsigned T5IF:1;
    unsigned IC5IF:1;
    unsigned OC5IF:1;
    unsigned SPI1EIF:1;
    unsigned SPI1RXIF:1;
    unsigned SPI1TXIF:1;
    unsigned U1EIF:1;
    unsigned U1RXIF:1;
    unsigned U1TXIF:1;
    unsigned I2C1BIF:1;
    unsigned I2C1SIF:1;
    unsigned I2C1MIF:1;
  };
  struct {
    unsigned :26;
    unsigned U1AEIF:1;
    unsigned U1ARXIF:1;
    unsigned U1ATXIF:1;
  };
  struct {
    unsigned :26;
    unsigned SPI3EIF:1;
    unsigned SPI3RXIF:1;
    unsigned SPI3TXIF:1;
  };
  struct {
    unsigned :26;
    unsigned SPI1AEIF:1;
    unsigned SPI1ARXIF:1;
    unsigned SPI1ATXIF:1;
  };
  struct {
    unsigned :26;
    unsigned I2C3BIF:1;
    unsigned I2C3SIF:1;
    unsigned I2C3MIF:1;
  };
  struct {
    unsigned :26;
    unsigned I2C1ABIF:1;
    unsigned I2C1ASIF:1;
    unsigned I2C1AMIF:1;
  };
  struct {
    unsigned w:32;
  };
} __IFS0bits_t;
volatile __IFS0bits_t IFS0bits __asm__ ("IFS0");
volatile unsigned int IFS0CLR;
volatile unsigned int IFS0SET;
volatile unsigned int IFS0INV;
volatile unsigned int IFS1;
typedef union {
  struct {
    unsigned CNIF:1;
    unsigned AD1IF:1;
    unsigned PMPIF:1;
    unsigned CMP1IF:1;
    unsigned CMP2IF:1;
    unsigned U3EIF:1;
    unsigned U3RXIF:1;
    unsigned U3TXIF:1;
    unsigned U2EIF:1;
    unsigned U2RXIF:1;
    unsigned U2TXIF:1;
    unsigned I2C2BIF:1;
    unsigned I2C2SIF:1;
    unsigned I2C2MIF:1;
    unsigned FSCMIF:1;
    unsigned RTCCIF:1;
    unsigned DMA0IF:1;
    unsigned DMA1IF:1;
    unsigned DMA2IF:1;
    unsigned DMA3IF:1;
    unsigned DMA4IF:1;
    unsigned DMA5IF:1;
    unsigned DMA6IF:1;
    unsigned DMA7IF:1;
    unsigned FCEIF:1;
    unsigned USBIF:1;
    unsigned CAN1IF:1;
    unsigned CAN2IF:1;
    unsigned ETHIF:1;
    unsigned IC1EIF:1;
    unsigned IC2EIF:1;
    unsigned IC3EIF:1;
  };
  struct {
    unsigned :5;
    unsigned U2AEIF:1;
    unsigned U2ARXIF:1;
    unsigned U2ATXIF:1;
    unsigned U3AEIF:1;
    unsigned U3ARXIF:1;
    unsigned U3ATXIF:1;
  };
  struct {
    unsigned :5;
    unsigned SPI2EIF:1;
    unsigned SPI2RXIF:1;
    unsigned SPI2TXIF:1;
    unsigned SPI4EIF:1;
    unsigned SPI4RXIF:1;
    unsigned SPI4TXIF:1;
  };
  struct {
    unsigned :5;
    unsigned SPI2AEIF:1;
    unsigned SPI2ARXIF:1;
    unsigned SPI2ATXIF:1;
    unsigned SPI3AEIF:1;
    unsigned SPI3ARXIF:1;
    unsigned SPI3ATXIF:1;
  };
  struct {
    unsigned :5;
    unsigned I2C4BIF:1;
    unsigned I2C4SIF:1;
    unsigned I2C4MIF:1;
    unsigned I2C5BIF:1;
    unsigned I2C5SIF:1;
    unsigned I2C5MIF:1;
  };
  struct {
    unsigned :5;
    unsigned I2C2ABIF:1;
    unsigned I2C2ASIF:1;
    unsigned I2C2AMIF:1;
    unsigned I2C3ABIF:1;
    unsigned I2C3ASIF:1;
    unsigned I2C3AMIF:1;
  };
  struct {
    unsigned w:32;
  };
} __IFS1bits_t;
volatile __IFS1bits_t IFS1bits __asm__ ("IFS1");
volatile unsigned int IFS1CLR;
volatile unsigned int IFS1SET;
volatile unsigned int IFS1INV;
volatile unsigned int IFS2;
typedef union {
  struct {
    unsigned IC4EIF:1;
    unsigned IC5EIF:1;
    unsigned PMPEIF:1;
    unsigned U1BEIF:1;
    unsigned U1BRXIF:1;
    unsigned U1BTXIF:1;
    unsigned U2BEIF:1;
    unsigned U2BRXIF:1;
    unsigned U2BTXIF:1;
    unsigned U3BEIF:1;
    unsigned U3BRXIF:1;
    unsigned U3BTXIF:1;
  };
  struct {
    unsigned :3;
    unsigned U4EIF:1;
    unsigned U4RXIF:1;
    unsigned U4TXIF:1;
    unsigned U6EIF:1;
    unsigned U6RXIF:1;
    unsigned U6TXIF:1;
    unsigned U5EIF:1;
    unsigned U5RXIF:1;
    unsigned U5TXIF:1;
  };
  struct {
    unsigned w:32;
  };
} __IFS2bits_t;
volatile __IFS2bits_t IFS2bits __asm__ ("IFS2");
volatile unsigned int IFS2CLR;
volatile unsigned int IFS2SET;
volatile unsigned int IFS2INV;
volatile unsigned int IEC0;
typedef union {
  struct {
    unsigned CTIE:1;
    unsigned CS0IE:1;
    unsigned CS1IE:1;
    unsigned INT0IE:1;
    unsigned T1IE:1;
    unsigned IC1IE:1;
    unsigned OC1IE:1;
    unsigned INT1IE:1;
    unsigned T2IE:1;
    unsigned IC2IE:1;
    unsigned OC2IE:1;
    unsigned INT2IE:1;
    unsigned T3IE:1;
    unsigned IC3IE:1;
    unsigned OC3IE:1;
    unsigned INT3IE:1;
    unsigned T4IE:1;
    unsigned IC4IE:1;
    unsigned OC4IE:1;
    unsigned INT4IE:1;
    unsigned T5IE:1;
    unsigned IC5IE:1;
    unsigned OC5IE:1;
    unsigned SPI1EIE:1;
    unsigned SPI1RXIE:1;
    unsigned SPI1TXIE:1;
    unsigned U1EIE:1;
    unsigned U1RXIE:1;
    unsigned U1TXIE:1;
    unsigned I2C1BIE:1;
    unsigned I2C1SIE:1;
    unsigned I2C1MIE:1;
  };
  struct {
    unsigned :26;
    unsigned U1AEIE:1;
    unsigned U1ARXIE:1;
    unsigned U1ATXIE:1;
  };
  struct {
    unsigned :26;
    unsigned SPI3EIE:1;
    unsigned SPI3RXIE:1;
    unsigned SPI3TXIE:1;
  };
  struct {
    unsigned :26;
    unsigned SPI1AEIE:1;
    unsigned SPI1ARXIE:1;
    unsigned SPI1ATXIE:1;
  };
  struct {
    unsigned :26;
    unsigned I2C3BIE:1;
    unsigned I2C3SIE:1;
    unsigned I2C3MIE:1;
  };
  struct {
    unsigned :26;
    unsigned I2C1ABIE:1;
    unsigned I2C1ASIE:1;
    unsigned I2C1AMIE:1;
  };
  struct {
    unsigned w:32;
  };
} __IEC0bits_t;
volatile __IEC0bits_t IEC0bits __asm__ ("IEC0");
volatile unsigned int IEC0CLR;
volatile unsigned int IEC0SET;
volatile unsigned int IEC0INV;
volatile unsigned int IEC1;
typedef union {
  struct {
    unsigned CNIE:1;
    unsigned AD1IE:1;
    unsigned PMPIE:1;
    unsigned CMP1IE:1;
    unsigned CMP2IE:1;
    unsigned U3EIE:1;
    unsigned U3RXIE:1;
    unsigned U3TXIE:1;
    unsigned U2EIE:1;
    unsigned U2RXIE:1;
    unsigned U2TXIE:1;
    unsigned I2C2BIE:1;
    unsigned I2C2SIE:1;
    unsigned I2C2MIE:1;
    unsigned FSCMIE:1;
    unsigned RTCCIE:1;
    unsigned DMA0IE:1;
    unsigned DMA1IE:1;
    unsigned DMA2IE:1;
    unsigned DMA3IE:1;
    unsigned DMA4IE:1;
    unsigned DMA5IE:1;
    unsigned DMA6IE:1;
    unsigned DMA7IE:1;
    unsigned FCEIE:1;
    unsigned USBIE:1;
    unsigned CAN1IE:1;
    unsigned CAN2IE:1;
    unsigned ETHIE:1;
    unsigned IC1EIE:1;
    unsigned IC2EIE:1;
    unsigned IC3EIE:1;
  };
  struct {
    unsigned :5;
    unsigned U2AEIE:1;
    unsigned U2ARXIE:1;
    unsigned U2ATXIE:1;
    unsigned U3AEIE:1;
    unsigned U3ARXIE:1;
    unsigned U3ATXIE:1;
  };
  struct {
    unsigned :5;
    unsigned SPI2EIE:1;
    unsigned SPI2RXIE:1;
    unsigned SPI2TXIE:1;
    unsigned SPI4EIE:1;
    unsigned SPI4RXIE:1;
    unsigned SPI4TXIE:1;
  };
  struct {
    unsigned :5;
    unsigned SPI2AEIE:1;
    unsigned SPI2ARXIE:1;
    unsigned SPI2ATXIE:1;
    unsigned SPI3AEIE:1;
    unsigned SPI3ARXIE:1;
    unsigned SPI3ATXIE:1;
  };
  struct {
    unsigned :5;
    unsigned I2C4BIE:1;
    unsigned I2C4SIE:1;
    unsigned I2C4MIE:1;
    unsigned I2C5BIE:1;
    unsigned I2C5SIE:1;
    unsigned I2C5MIE:1;
  };
  struct {
    unsigned :5;
    unsigned I2C2ABIE:1;
    unsigned I2C2ASIE:1;
    unsigned I2C2AMIE:1;
    unsigned I2C3ABIE:1;
    unsigned I2C3ASIE:1;
    unsigned I2C3AMIE:1;
  };
  struct {
    unsigned w:32;
  };
} __IEC1bits_t;
volatile __IEC1bits_t IEC1bits __asm__ ("IEC1");
volatile unsigned int IEC1CLR;
volatile unsigned int IEC1SET;
volatile unsigned int IEC1INV;
volatile unsigned int IEC2;
typedef union {
  struct {
    unsigned IC4EIE:1;
    unsigned IC5EIE:1;
    unsigned PMPEIE:1;
    unsigned U1BEIE:1;
    unsigned U1BRXIE:1;
    unsigned U1BTXIE:1;
    unsigned U2BEIE:1;
    unsigned U2BRXIE:1;
    unsigned U2BTXIE:1;
    unsigned U3BEIE:1;
    unsigned U3BRXIE:1;
    unsigned U3BTXIE:1;
  };
  struct {
    unsigned :3;
    unsigned U4EIE:1;
    unsigned U4RXIE:1;
    unsigned U4TXIE:1;
    unsigned U6EIE:1;
    unsigned U6RXIE:1;
    unsigned U6TXIE:1;
    unsigned U5EIE:1;
    unsigned U5RXIE:1;
    unsigned U5TXIE:1;
  };
  struct {
    unsigned w:32;
  };
} __IEC2bits_t;
volatile __IEC2bits_t IEC2bits __asm__ ("IEC2");
volatile unsigned int IEC2CLR;
volatile unsigned int IEC2SET;
volatile unsigned int IEC2INV;
volatile unsigned int IPC0;
typedef union {
  struct {
    unsigned CTIS:2;
    unsigned CTIP:3;
    unsigned :3;
    unsigned CS0IS:2;
    unsigned CS0IP:3;
    unsigned :3;
    unsigned CS1IS:2;
    unsigned CS1IP:3;
    unsigned :3;
    unsigned INT0IS:2;
    unsigned INT0IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC0bits_t;
volatile __IPC0bits_t IPC0bits __asm__ ("IPC0");
volatile unsigned int IPC0CLR;
volatile unsigned int IPC0SET;
volatile unsigned int IPC0INV;
volatile unsigned int IPC1;
typedef union {
  struct {
    unsigned T1IS:2;
    unsigned T1IP:3;
    unsigned :3;
    unsigned IC1IS:2;
    unsigned IC1IP:3;
    unsigned :3;
    unsigned OC1IS:2;
    unsigned OC1IP:3;
    unsigned :3;
    unsigned INT1IS:2;
    unsigned INT1IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC1bits_t;
volatile __IPC1bits_t IPC1bits __asm__ ("IPC1");
volatile unsigned int IPC1CLR;
volatile unsigned int IPC1SET;
volatile unsigned int IPC1INV;
volatile unsigned int IPC2;
typedef union {
  struct {
    unsigned T2IS:2;
    unsigned T2IP:3;
    unsigned :3;
    unsigned IC2IS:2;
    unsigned IC2IP:3;
    unsigned :3;
    unsigned OC2IS:2;
    unsigned OC2IP:3;
    unsigned :3;
    unsigned INT2IS:2;
    unsigned INT2IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC2bits_t;
volatile __IPC2bits_t IPC2bits __asm__ ("IPC2");
volatile unsigned int IPC2CLR;
volatile unsigned int IPC2SET;
volatile unsigned int IPC2INV;
volatile unsigned int IPC3;
typedef union {
  struct {
    unsigned T3IS:2;
    unsigned T3IP:3;
    unsigned :3;
    unsigned IC3IS:2;
    unsigned IC3IP:3;
    unsigned :3;
    unsigned OC3IS:2;
    unsigned OC3IP:3;
    unsigned :3;
    unsigned INT3IS:2;
    unsigned INT3IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC3bits_t;
volatile __IPC3bits_t IPC3bits __asm__ ("IPC3");
volatile unsigned int IPC3CLR;
volatile unsigned int IPC3SET;
volatile unsigned int IPC3INV;
volatile unsigned int IPC4;
typedef union {
  struct {
    unsigned T4IS:2;
    unsigned T4IP:3;
    unsigned :3;
    unsigned IC4IS:2;
    unsigned IC4IP:3;
    unsigned :3;
    unsigned OC4IS:2;
    unsigned OC4IP:3;
    unsigned :3;
    unsigned INT4IS:2;
    unsigned INT4IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC4bits_t;
volatile __IPC4bits_t IPC4bits __asm__ ("IPC4");
volatile unsigned int IPC4CLR;
volatile unsigned int IPC4SET;
volatile unsigned int IPC4INV;
volatile unsigned int IPC5;
typedef union {
  struct {
    unsigned T5IS:2;
    unsigned T5IP:3;
    unsigned :3;
    unsigned IC5IS:2;
    unsigned IC5IP:3;
    unsigned :3;
    unsigned OC5IS:2;
    unsigned OC5IP:3;
    unsigned :3;
    unsigned SPI1IS:2;
    unsigned SPI1IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC5bits_t;
volatile __IPC5bits_t IPC5bits __asm__ ("IPC5");
volatile unsigned int IPC5CLR;
volatile unsigned int IPC5SET;
volatile unsigned int IPC5INV;
volatile unsigned int IPC6;
typedef union {
  struct {
    unsigned U1IS:2;
    unsigned U1IP:3;
    unsigned :3;
    unsigned I2C1IS:2;
    unsigned I2C1IP:3;
    unsigned :3;
    unsigned CNIS:2;
    unsigned CNIP:3;
    unsigned :3;
    unsigned AD1IS:2;
    unsigned AD1IP:3;
  };
  struct {
    unsigned U1AIS:2;
    unsigned U1AIP:3;
  };
  struct {
    unsigned SPI3IS:2;
    unsigned SPI3IP:3;
  };
  struct {
    unsigned SPI1AIS:2;
    unsigned SPI1AIP:3;
  };
  struct {
    unsigned I2C3IS:2;
    unsigned I2C3IP:3;
  };
  struct {
    unsigned I2C1AIS:2;
    unsigned I2C1AIP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC6bits_t;
volatile __IPC6bits_t IPC6bits __asm__ ("IPC6");
volatile unsigned int IPC6CLR;
volatile unsigned int IPC6SET;
volatile unsigned int IPC6INV;
volatile unsigned int IPC7;
typedef union {
  struct {
    unsigned PMPIS:2;
    unsigned PMPIP:3;
    unsigned :3;
    unsigned CMP1IS:2;
    unsigned CMP1IP:3;
    unsigned :3;
    unsigned CMP2IS:2;
    unsigned CMP2IP:3;
    unsigned :3;
    unsigned U3IS:2;
    unsigned U3IP:3;
  };
  struct {
    unsigned :24;
    unsigned U2AIS:2;
    unsigned U2AIP:3;
  };
  struct {
    unsigned :24;
    unsigned SPI2IS:2;
    unsigned SPI2IP:3;
  };
  struct {
    unsigned :24;
    unsigned SPI2AIS:2;
    unsigned SPI2AIP:3;
  };
  struct {
    unsigned :24;
    unsigned I2C4IS:2;
    unsigned I2C4IP:3;
  };
  struct {
    unsigned :24;
    unsigned I2C2AIS:2;
    unsigned I2C2AIP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC7bits_t;
volatile __IPC7bits_t IPC7bits __asm__ ("IPC7");
volatile unsigned int IPC7CLR;
volatile unsigned int IPC7SET;
volatile unsigned int IPC7INV;
volatile unsigned int IPC8;
typedef union {
  struct {
    unsigned U2IS:2;
    unsigned U2IP:3;
    unsigned :3;
    unsigned I2C2IS:2;
    unsigned I2C2IP:3;
    unsigned :3;
    unsigned FSCMIS:2;
    unsigned FSCMIP:3;
    unsigned :3;
    unsigned RTCCIS:2;
    unsigned RTCCIP:3;
  };
  struct {
    unsigned U3AIS:2;
    unsigned U3AIP:3;
  };
  struct {
    unsigned SPI4IS:2;
    unsigned SPI4IP:3;
  };
  struct {
    unsigned SPI3AIS:2;
    unsigned SPI3AIP:3;
  };
  struct {
    unsigned I2C5IS:2;
    unsigned I2C5IP:3;
  };
  struct {
    unsigned I2C3AIS:2;
    unsigned I2C3AIP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC8bits_t;
volatile __IPC8bits_t IPC8bits __asm__ ("IPC8");
volatile unsigned int IPC8CLR;
volatile unsigned int IPC8SET;
volatile unsigned int IPC8INV;
volatile unsigned int IPC9;
typedef union {
  struct {
    unsigned DMA0IS:2;
    unsigned DMA0IP:3;
    unsigned :3;
    unsigned DMA1IS:2;
    unsigned DMA1IP:3;
    unsigned :3;
    unsigned DMA2IS:2;
    unsigned DMA2IP:3;
    unsigned :3;
    unsigned DMA3IS:2;
    unsigned DMA3IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC9bits_t;
volatile __IPC9bits_t IPC9bits __asm__ ("IPC9");
volatile unsigned int IPC9CLR;
volatile unsigned int IPC9SET;
volatile unsigned int IPC9INV;
volatile unsigned int IPC10;
typedef union {
  struct {
    unsigned DMA4IS:2;
    unsigned DMA4IP:3;
    unsigned :3;
    unsigned DMA5IS:2;
    unsigned DMA5IP:3;
    unsigned :3;
    unsigned DMA6IS:2;
    unsigned DMA6IP:3;
    unsigned :3;
    unsigned DMA7IS:2;
    unsigned DMA7IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC10bits_t;
volatile __IPC10bits_t IPC10bits __asm__ ("IPC10");
volatile unsigned int IPC10CLR;
volatile unsigned int IPC10SET;
volatile unsigned int IPC10INV;
volatile unsigned int IPC11;
typedef union {
  struct {
    unsigned FCEIS:2;
    unsigned FCEIP:3;
    unsigned :3;
    unsigned USBIS:2;
    unsigned USBIP:3;
    unsigned :3;
    unsigned CAN1IS:2;
    unsigned CAN1IP:3;
    unsigned :3;
    unsigned CAN2IS:2;
    unsigned CAN2IP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC11bits_t;
volatile __IPC11bits_t IPC11bits __asm__ ("IPC11");
volatile unsigned int IPC11CLR;
volatile unsigned int IPC11SET;
volatile unsigned int IPC11INV;
volatile unsigned int IPC12;
typedef union {
  struct {
    unsigned ETHIS:2;
    unsigned ETHIP:3;
    unsigned :3;
    unsigned U4IS:2;
    unsigned U4IP:3;
    unsigned :3;
    unsigned U6IS:2;
    unsigned U6IP:3;
    unsigned :3;
    unsigned U5IS:2;
    unsigned U5IP:3;
  };
  struct {
    unsigned :8;
    unsigned U1BIS:2;
    unsigned U1BIP:3;
    unsigned :3;
    unsigned U2BIS:2;
    unsigned U2BIP:3;
    unsigned :3;
    unsigned U3BIS:2;
    unsigned U3BIP:3;
  };
  struct {
    unsigned w:32;
  };
} __IPC12bits_t;
volatile __IPC12bits_t IPC12bits __asm__ ("IPC12");
volatile unsigned int IPC12CLR;
volatile unsigned int IPC12SET;
volatile unsigned int IPC12INV;
volatile unsigned int BMXCON;
typedef union {
  struct {
    unsigned BMXARB:3;
    unsigned :3;
    unsigned BMXWSDRM:1;
    unsigned :9;
    unsigned BMXERRIS:1;
    unsigned BMXERRDS:1;
    unsigned BMXERRDMA:1;
    unsigned BMXERRICD:1;
    unsigned BMXERRIXI:1;
    unsigned :5;
    unsigned BMXCHEDMA:1;
  };
  struct {
    unsigned w:32;
  };
} __BMXCONbits_t;
volatile __BMXCONbits_t BMXCONbits __asm__ ("BMXCON");
volatile unsigned int BMXCONCLR;
volatile unsigned int BMXCONSET;
volatile unsigned int BMXCONINV;
volatile unsigned int BMXDKPBA;
volatile unsigned int BMXDKPBACLR;
volatile unsigned int BMXDKPBASET;
volatile unsigned int BMXDKPBAINV;
volatile unsigned int BMXDUDBA;
volatile unsigned int BMXDUDBACLR;
volatile unsigned int BMXDUDBASET;
volatile unsigned int BMXDUDBAINV;
volatile unsigned int BMXDUPBA;
volatile unsigned int BMXDUPBACLR;
volatile unsigned int BMXDUPBASET;
volatile unsigned int BMXDUPBAINV;
volatile unsigned int BMXDRMSZ;
volatile unsigned int BMXPUPBA;
volatile unsigned int BMXPUPBACLR;
volatile unsigned int BMXPUPBASET;
volatile unsigned int BMXPUPBAINV;
volatile unsigned int BMXPFMSZ;
volatile unsigned int BMXBOOTSZ;
volatile unsigned int DMACON;
typedef union {
  struct {
    unsigned :11;
    unsigned DMABUSY:1;
    unsigned SUSPEND:1;
    unsigned :2;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __DMACONbits_t;
volatile __DMACONbits_t DMACONbits __asm__ ("DMACON");
volatile unsigned int DMACONCLR;
volatile unsigned int DMACONSET;
volatile unsigned int DMACONINV;
volatile unsigned int DMASTAT;
typedef union {
  struct {
    unsigned DMACH:3;
    unsigned RDWR:1;
  };
  struct {
    unsigned w:32;
  };
} __DMASTATbits_t;
volatile __DMASTATbits_t DMASTATbits __asm__ ("DMASTAT");
volatile unsigned int DMASTATCLR;
volatile unsigned int DMASTATSET;
volatile unsigned int DMASTATINV;
volatile unsigned int DMAADDR;
volatile unsigned int DMAADDRCLR;
volatile unsigned int DMAADDRSET;
volatile unsigned int DMAADDRINV;
volatile unsigned int DCRCCON;
typedef union {
  struct {
    unsigned CRCCH:3;
    unsigned :2;
    unsigned CRCTYP:1;
    unsigned CRCAPP:1;
    unsigned CRCEN:1;
    unsigned PLEN:5;
    unsigned :11;
    unsigned BITO:1;
    unsigned :2;
    unsigned WBO:1;
    unsigned BYTO:2;
  };
  struct {
    unsigned w:32;
  };
} __DCRCCONbits_t;
volatile __DCRCCONbits_t DCRCCONbits __asm__ ("DCRCCON");
volatile unsigned int DCRCCONCLR;
volatile unsigned int DCRCCONSET;
volatile unsigned int DCRCCONINV;
volatile unsigned int DCRCDATA;
volatile unsigned int DCRCDATACLR;
volatile unsigned int DCRCDATASET;
volatile unsigned int DCRCDATAINV;
volatile unsigned int DCRCXOR;
volatile unsigned int DCRCXORCLR;
volatile unsigned int DCRCXORSET;
volatile unsigned int DCRCXORINV;
volatile unsigned int DCH0CON;
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH0CONbits_t;
volatile __DCH0CONbits_t DCH0CONbits __asm__ ("DCH0CON");
volatile unsigned int DCH0CONCLR;
volatile unsigned int DCH0CONSET;
volatile unsigned int DCH0CONINV;
volatile unsigned int DCH0ECON;
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH0ECONbits_t;
volatile __DCH0ECONbits_t DCH0ECONbits __asm__ ("DCH0ECON");
volatile unsigned int DCH0ECONCLR;
volatile unsigned int DCH0ECONSET;
volatile unsigned int DCH0ECONINV;
volatile unsigned int DCH0INT;
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH0INTbits_t;
volatile __DCH0INTbits_t DCH0INTbits __asm__ ("DCH0INT");
volatile unsigned int DCH0INTCLR;
volatile unsigned int DCH0INTSET;
volatile unsigned int DCH0INTINV;
volatile unsigned int DCH0SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH0SSAbits_t;
volatile __DCH0SSAbits_t DCH0SSAbits __asm__ ("DCH0SSA");
volatile unsigned int DCH0SSACLR;
volatile unsigned int DCH0SSASET;
volatile unsigned int DCH0SSAINV;
volatile unsigned int DCH0DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH0DSAbits_t;
volatile __DCH0DSAbits_t DCH0DSAbits __asm__ ("DCH0DSA");
volatile unsigned int DCH0DSACLR;
volatile unsigned int DCH0DSASET;
volatile unsigned int DCH0DSAINV;
volatile unsigned int DCH0SSIZ;
volatile unsigned int DCH0SSIZCLR;
volatile unsigned int DCH0SSIZSET;
volatile unsigned int DCH0SSIZINV;
volatile unsigned int DCH0DSIZ;
volatile unsigned int DCH0DSIZCLR;
volatile unsigned int DCH0DSIZSET;
volatile unsigned int DCH0DSIZINV;
volatile unsigned int DCH0SPTR;
volatile unsigned int DCH0SPTRCLR;
volatile unsigned int DCH0SPTRSET;
volatile unsigned int DCH0SPTRINV;
volatile unsigned int DCH0DPTR;
volatile unsigned int DCH0DPTRCLR;
volatile unsigned int DCH0DPTRSET;
volatile unsigned int DCH0DPTRINV;
volatile unsigned int DCH0CSIZ;
volatile unsigned int DCH0CSIZCLR;
volatile unsigned int DCH0CSIZSET;
volatile unsigned int DCH0CSIZINV;
volatile unsigned int DCH0CPTR;
volatile unsigned int DCH0CPTRCLR;
volatile unsigned int DCH0CPTRSET;
volatile unsigned int DCH0CPTRINV;
volatile unsigned int DCH0DAT;
volatile unsigned int DCH0DATCLR;
volatile unsigned int DCH0DATSET;
volatile unsigned int DCH0DATINV;
volatile unsigned int DCH1CON;
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH1CONbits_t;
volatile __DCH1CONbits_t DCH1CONbits __asm__ ("DCH1CON");
volatile unsigned int DCH1CONCLR;
volatile unsigned int DCH1CONSET;
volatile unsigned int DCH1CONINV;
volatile unsigned int DCH1ECON;
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH1ECONbits_t;
volatile __DCH1ECONbits_t DCH1ECONbits __asm__ ("DCH1ECON");
volatile unsigned int DCH1ECONCLR;
volatile unsigned int DCH1ECONSET;
volatile unsigned int DCH1ECONINV;
volatile unsigned int DCH1INT;
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH1INTbits_t;
volatile __DCH1INTbits_t DCH1INTbits __asm__ ("DCH1INT");
volatile unsigned int DCH1INTCLR;
volatile unsigned int DCH1INTSET;
volatile unsigned int DCH1INTINV;
volatile unsigned int DCH1SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH1SSAbits_t;
volatile __DCH1SSAbits_t DCH1SSAbits __asm__ ("DCH1SSA");
volatile unsigned int DCH1SSACLR;
volatile unsigned int DCH1SSASET;
volatile unsigned int DCH1SSAINV;
volatile unsigned int DCH1DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH1DSAbits_t;
volatile __DCH1DSAbits_t DCH1DSAbits __asm__ ("DCH1DSA");
volatile unsigned int DCH1DSACLR;
volatile unsigned int DCH1DSASET;
volatile unsigned int DCH1DSAINV;
volatile unsigned int DCH1SSIZ;
volatile unsigned int DCH1SSIZCLR;
volatile unsigned int DCH1SSIZSET;
volatile unsigned int DCH1SSIZINV;
volatile unsigned int DCH1DSIZ;
volatile unsigned int DCH1DSIZCLR;
volatile unsigned int DCH1DSIZSET;
volatile unsigned int DCH1DSIZINV;
volatile unsigned int DCH1SPTR;
volatile unsigned int DCH1SPTRCLR;
volatile unsigned int DCH1SPTRSET;
volatile unsigned int DCH1SPTRINV;
volatile unsigned int DCH1DPTR;
volatile unsigned int DCH1DPTRCLR;
volatile unsigned int DCH1DPTRSET;
volatile unsigned int DCH1DPTRINV;
volatile unsigned int DCH1CSIZ;
volatile unsigned int DCH1CSIZCLR;
volatile unsigned int DCH1CSIZSET;
volatile unsigned int DCH1CSIZINV;
volatile unsigned int DCH1CPTR;
volatile unsigned int DCH1CPTRCLR;
volatile unsigned int DCH1CPTRSET;
volatile unsigned int DCH1CPTRINV;
volatile unsigned int DCH1DAT;
volatile unsigned int DCH1DATCLR;
volatile unsigned int DCH1DATSET;
volatile unsigned int DCH1DATINV;
volatile unsigned int DCH2CON;
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH2CONbits_t;
volatile __DCH2CONbits_t DCH2CONbits __asm__ ("DCH2CON");
volatile unsigned int DCH2CONCLR;
volatile unsigned int DCH2CONSET;
volatile unsigned int DCH2CONINV;
volatile unsigned int DCH2ECON;
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH2ECONbits_t;
volatile __DCH2ECONbits_t DCH2ECONbits __asm__ ("DCH2ECON");
volatile unsigned int DCH2ECONCLR;
volatile unsigned int DCH2ECONSET;
volatile unsigned int DCH2ECONINV;
volatile unsigned int DCH2INT;
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH2INTbits_t;
volatile __DCH2INTbits_t DCH2INTbits __asm__ ("DCH2INT");
volatile unsigned int DCH2INTCLR;
volatile unsigned int DCH2INTSET;
volatile unsigned int DCH2INTINV;
volatile unsigned int DCH2SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH2SSAbits_t;
volatile __DCH2SSAbits_t DCH2SSAbits __asm__ ("DCH2SSA");
volatile unsigned int DCH2SSACLR;
volatile unsigned int DCH2SSASET;
volatile unsigned int DCH2SSAINV;
volatile unsigned int DCH2DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH2DSAbits_t;
volatile __DCH2DSAbits_t DCH2DSAbits __asm__ ("DCH2DSA");
volatile unsigned int DCH2DSACLR;
volatile unsigned int DCH2DSASET;
volatile unsigned int DCH2DSAINV;
volatile unsigned int DCH2SSIZ;
volatile unsigned int DCH2SSIZCLR;
volatile unsigned int DCH2SSIZSET;
volatile unsigned int DCH2SSIZINV;
volatile unsigned int DCH2DSIZ;
volatile unsigned int DCH2DSIZCLR;
volatile unsigned int DCH2DSIZSET;
volatile unsigned int DCH2DSIZINV;
volatile unsigned int DCH2SPTR;
volatile unsigned int DCH2SPTRCLR;
volatile unsigned int DCH2SPTRSET;
volatile unsigned int DCH2SPTRINV;
volatile unsigned int DCH2DPTR;
volatile unsigned int DCH2DPTRCLR;
volatile unsigned int DCH2DPTRSET;
volatile unsigned int DCH2DPTRINV;
volatile unsigned int DCH2CSIZ;
volatile unsigned int DCH2CSIZCLR;
volatile unsigned int DCH2CSIZSET;
volatile unsigned int DCH2CSIZINV;
volatile unsigned int DCH2CPTR;
volatile unsigned int DCH2CPTRCLR;
volatile unsigned int DCH2CPTRSET;
volatile unsigned int DCH2CPTRINV;
volatile unsigned int DCH2DAT;
volatile unsigned int DCH2DATCLR;
volatile unsigned int DCH2DATSET;
volatile unsigned int DCH2DATINV;
volatile unsigned int DCH3CON;
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH3CONbits_t;
volatile __DCH3CONbits_t DCH3CONbits __asm__ ("DCH3CON");
volatile unsigned int DCH3CONCLR;
volatile unsigned int DCH3CONSET;
volatile unsigned int DCH3CONINV;
volatile unsigned int DCH3ECON;
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH3ECONbits_t;
volatile __DCH3ECONbits_t DCH3ECONbits __asm__ ("DCH3ECON");
volatile unsigned int DCH3ECONCLR;
volatile unsigned int DCH3ECONSET;
volatile unsigned int DCH3ECONINV;
volatile unsigned int DCH3INT;
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH3INTbits_t;
volatile __DCH3INTbits_t DCH3INTbits __asm__ ("DCH3INT");
volatile unsigned int DCH3INTCLR;
volatile unsigned int DCH3INTSET;
volatile unsigned int DCH3INTINV;
volatile unsigned int DCH3SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH3SSAbits_t;
volatile __DCH3SSAbits_t DCH3SSAbits __asm__ ("DCH3SSA");
volatile unsigned int DCH3SSACLR;
volatile unsigned int DCH3SSASET;
volatile unsigned int DCH3SSAINV;
volatile unsigned int DCH3DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH3DSAbits_t;
volatile __DCH3DSAbits_t DCH3DSAbits __asm__ ("DCH3DSA");
volatile unsigned int DCH3DSACLR;
volatile unsigned int DCH3DSASET;
volatile unsigned int DCH3DSAINV;
volatile unsigned int DCH3SSIZ;
volatile unsigned int DCH3SSIZCLR;
volatile unsigned int DCH3SSIZSET;
volatile unsigned int DCH3SSIZINV;
volatile unsigned int DCH3DSIZ;
volatile unsigned int DCH3DSIZCLR;
volatile unsigned int DCH3DSIZSET;
volatile unsigned int DCH3DSIZINV;
volatile unsigned int DCH3SPTR;
volatile unsigned int DCH3SPTRCLR;
volatile unsigned int DCH3SPTRSET;
volatile unsigned int DCH3SPTRINV;
volatile unsigned int DCH3DPTR;
volatile unsigned int DCH3DPTRCLR;
volatile unsigned int DCH3DPTRSET;
volatile unsigned int DCH3DPTRINV;
volatile unsigned int DCH3CSIZ;
volatile unsigned int DCH3CSIZCLR;
volatile unsigned int DCH3CSIZSET;
volatile unsigned int DCH3CSIZINV;
volatile unsigned int DCH3CPTR;
volatile unsigned int DCH3CPTRCLR;
volatile unsigned int DCH3CPTRSET;
volatile unsigned int DCH3CPTRINV;
volatile unsigned int DCH3DAT;
volatile unsigned int DCH3DATCLR;
volatile unsigned int DCH3DATSET;
volatile unsigned int DCH3DATINV;
volatile unsigned int DCH4CON;
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH4CONbits_t;
volatile __DCH4CONbits_t DCH4CONbits __asm__ ("DCH4CON");
volatile unsigned int DCH4CONCLR;
volatile unsigned int DCH4CONSET;
volatile unsigned int DCH4CONINV;
volatile unsigned int DCH4ECON;
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH4ECONbits_t;
volatile __DCH4ECONbits_t DCH4ECONbits __asm__ ("DCH4ECON");
volatile unsigned int DCH4ECONCLR;
volatile unsigned int DCH4ECONSET;
volatile unsigned int DCH4ECONINV;
volatile unsigned int DCH4INT;
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH4INTbits_t;
volatile __DCH4INTbits_t DCH4INTbits __asm__ ("DCH4INT");
volatile unsigned int DCH4INTCLR;
volatile unsigned int DCH4INTSET;
volatile unsigned int DCH4INTINV;
volatile unsigned int DCH4SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH4SSAbits_t;
volatile __DCH4SSAbits_t DCH4SSAbits __asm__ ("DCH4SSA");
volatile unsigned int DCH4SSACLR;
volatile unsigned int DCH4SSASET;
volatile unsigned int DCH4SSAINV;
volatile unsigned int DCH4DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH4DSAbits_t;
volatile __DCH4DSAbits_t DCH4DSAbits __asm__ ("DCH4DSA");
volatile unsigned int DCH4DSACLR;
volatile unsigned int DCH4DSASET;
volatile unsigned int DCH4DSAINV;
volatile unsigned int DCH4SSIZ;
volatile unsigned int DCH4SSIZCLR;
volatile unsigned int DCH4SSIZSET;
volatile unsigned int DCH4SSIZINV;
volatile unsigned int DCH4DSIZ;
volatile unsigned int DCH4DSIZCLR;
volatile unsigned int DCH4DSIZSET;
volatile unsigned int DCH4DSIZINV;
volatile unsigned int DCH4SPTR;
volatile unsigned int DCH4SPTRCLR;
volatile unsigned int DCH4SPTRSET;
volatile unsigned int DCH4SPTRINV;
volatile unsigned int DCH4DPTR;
volatile unsigned int DCH4DPTRCLR;
volatile unsigned int DCH4DPTRSET;
volatile unsigned int DCH4DPTRINV;
volatile unsigned int DCH4CSIZ;
volatile unsigned int DCH4CSIZCLR;
volatile unsigned int DCH4CSIZSET;
volatile unsigned int DCH4CSIZINV;
volatile unsigned int DCH4CPTR;
volatile unsigned int DCH4CPTRCLR;
volatile unsigned int DCH4CPTRSET;
volatile unsigned int DCH4CPTRINV;
volatile unsigned int DCH4DAT;
volatile unsigned int DCH4DATCLR;
volatile unsigned int DCH4DATSET;
volatile unsigned int DCH4DATINV;
volatile unsigned int DCH5CON;
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH5CONbits_t;
volatile __DCH5CONbits_t DCH5CONbits __asm__ ("DCH5CON");
volatile unsigned int DCH5CONCLR;
volatile unsigned int DCH5CONSET;
volatile unsigned int DCH5CONINV;
volatile unsigned int DCH5ECON;
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH5ECONbits_t;
volatile __DCH5ECONbits_t DCH5ECONbits __asm__ ("DCH5ECON");
volatile unsigned int DCH5ECONCLR;
volatile unsigned int DCH5ECONSET;
volatile unsigned int DCH5ECONINV;
volatile unsigned int DCH5INT;
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH5INTbits_t;
volatile __DCH5INTbits_t DCH5INTbits __asm__ ("DCH5INT");
volatile unsigned int DCH5INTCLR;
volatile unsigned int DCH5INTSET;
volatile unsigned int DCH5INTINV;
volatile unsigned int DCH5SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH5SSAbits_t;
volatile __DCH5SSAbits_t DCH5SSAbits __asm__ ("DCH5SSA");
volatile unsigned int DCH5SSACLR;
volatile unsigned int DCH5SSASET;
volatile unsigned int DCH5SSAINV;
volatile unsigned int DCH5DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH5DSAbits_t;
volatile __DCH5DSAbits_t DCH5DSAbits __asm__ ("DCH5DSA");
volatile unsigned int DCH5DSACLR;
volatile unsigned int DCH5DSASET;
volatile unsigned int DCH5DSAINV;
volatile unsigned int DCH5SSIZ;
volatile unsigned int DCH5SSIZCLR;
volatile unsigned int DCH5SSIZSET;
volatile unsigned int DCH5SSIZINV;
volatile unsigned int DCH5DSIZ;
volatile unsigned int DCH5DSIZCLR;
volatile unsigned int DCH5DSIZSET;
volatile unsigned int DCH5DSIZINV;
volatile unsigned int DCH5SPTR;
volatile unsigned int DCH5SPTRCLR;
volatile unsigned int DCH5SPTRSET;
volatile unsigned int DCH5SPTRINV;
volatile unsigned int DCH5DPTR;
volatile unsigned int DCH5DPTRCLR;
volatile unsigned int DCH5DPTRSET;
volatile unsigned int DCH5DPTRINV;
volatile unsigned int DCH5CSIZ;
volatile unsigned int DCH5CSIZCLR;
volatile unsigned int DCH5CSIZSET;
volatile unsigned int DCH5CSIZINV;
volatile unsigned int DCH5CPTR;
volatile unsigned int DCH5CPTRCLR;
volatile unsigned int DCH5CPTRSET;
volatile unsigned int DCH5CPTRINV;
volatile unsigned int DCH5DAT;
volatile unsigned int DCH5DATCLR;
volatile unsigned int DCH5DATSET;
volatile unsigned int DCH5DATINV;
volatile unsigned int DCH6CON;
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH6CONbits_t;
volatile __DCH6CONbits_t DCH6CONbits __asm__ ("DCH6CON");
volatile unsigned int DCH6CONCLR;
volatile unsigned int DCH6CONSET;
volatile unsigned int DCH6CONINV;
volatile unsigned int DCH6ECON;
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH6ECONbits_t;
volatile __DCH6ECONbits_t DCH6ECONbits __asm__ ("DCH6ECON");
volatile unsigned int DCH6ECONCLR;
volatile unsigned int DCH6ECONSET;
volatile unsigned int DCH6ECONINV;
volatile unsigned int DCH6INT;
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH6INTbits_t;
volatile __DCH6INTbits_t DCH6INTbits __asm__ ("DCH6INT");
volatile unsigned int DCH6INTCLR;
volatile unsigned int DCH6INTSET;
volatile unsigned int DCH6INTINV;
volatile unsigned int DCH6SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH6SSAbits_t;
volatile __DCH6SSAbits_t DCH6SSAbits __asm__ ("DCH6SSA");
volatile unsigned int DCH6SSACLR;
volatile unsigned int DCH6SSASET;
volatile unsigned int DCH6SSAINV;
volatile unsigned int DCH6DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH6DSAbits_t;
volatile __DCH6DSAbits_t DCH6DSAbits __asm__ ("DCH6DSA");
volatile unsigned int DCH6DSACLR;
volatile unsigned int DCH6DSASET;
volatile unsigned int DCH6DSAINV;
volatile unsigned int DCH6SSIZ;
volatile unsigned int DCH6SSIZCLR;
volatile unsigned int DCH6SSIZSET;
volatile unsigned int DCH6SSIZINV;
volatile unsigned int DCH6DSIZ;
volatile unsigned int DCH6DSIZCLR;
volatile unsigned int DCH6DSIZSET;
volatile unsigned int DCH6DSIZINV;
volatile unsigned int DCH6SPTR;
volatile unsigned int DCH6SPTRCLR;
volatile unsigned int DCH6SPTRSET;
volatile unsigned int DCH6SPTRINV;
volatile unsigned int DCH6DPTR;
volatile unsigned int DCH6DPTRCLR;
volatile unsigned int DCH6DPTRSET;
volatile unsigned int DCH6DPTRINV;
volatile unsigned int DCH6CSIZ;
volatile unsigned int DCH6CSIZCLR;
volatile unsigned int DCH6CSIZSET;
volatile unsigned int DCH6CSIZINV;
volatile unsigned int DCH6CPTR;
volatile unsigned int DCH6CPTRCLR;
volatile unsigned int DCH6CPTRSET;
volatile unsigned int DCH6CPTRINV;
volatile unsigned int DCH6DAT;
volatile unsigned int DCH6DATCLR;
volatile unsigned int DCH6DATSET;
volatile unsigned int DCH6DATINV;
volatile unsigned int DCH7CON;
typedef union {
  struct {
    unsigned CHPRI:2;
    unsigned CHEDET:1;
    unsigned :1;
    unsigned CHAEN:1;
    unsigned CHCHN:1;
    unsigned CHAED:1;
    unsigned CHEN:1;
    unsigned CHCHNS:1;
    unsigned :6;
    unsigned CHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH7CONbits_t;
volatile __DCH7CONbits_t DCH7CONbits __asm__ ("DCH7CON");
volatile unsigned int DCH7CONCLR;
volatile unsigned int DCH7CONSET;
volatile unsigned int DCH7CONINV;
volatile unsigned int DCH7ECON;
typedef union {
  struct {
    unsigned :3;
    unsigned AIRQEN:1;
    unsigned SIRQEN:1;
    unsigned PATEN:1;
    unsigned CABORT:1;
    unsigned CFORCE:1;
    unsigned CHSIRQ:8;
    unsigned CHAIRQ:8;
  };
  struct {
    unsigned w:32;
  };
} __DCH7ECONbits_t;
volatile __DCH7ECONbits_t DCH7ECONbits __asm__ ("DCH7ECON");
volatile unsigned int DCH7ECONCLR;
volatile unsigned int DCH7ECONSET;
volatile unsigned int DCH7ECONINV;
volatile unsigned int DCH7INT;
typedef union {
  struct {
    unsigned CHERIF:1;
    unsigned CHTAIF:1;
    unsigned CHCCIF:1;
    unsigned CHBCIF:1;
    unsigned CHDHIF:1;
    unsigned CHDDIF:1;
    unsigned CHSHIF:1;
    unsigned CHSDIF:1;
    unsigned :8;
    unsigned CHERIE:1;
    unsigned CHTAIE:1;
    unsigned CHCCIE:1;
    unsigned CHBCIE:1;
    unsigned CHDHIE:1;
    unsigned CHDDIE:1;
    unsigned CHSHIE:1;
    unsigned CHSDIE:1;
  };
  struct {
    unsigned w:32;
  };
} __DCH7INTbits_t;
volatile __DCH7INTbits_t DCH7INTbits __asm__ ("DCH7INT");
volatile unsigned int DCH7INTCLR;
volatile unsigned int DCH7INTSET;
volatile unsigned int DCH7INTINV;
volatile unsigned int DCH7SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH7SSAbits_t;
volatile __DCH7SSAbits_t DCH7SSAbits __asm__ ("DCH7SSA");
volatile unsigned int DCH7SSACLR;
volatile unsigned int DCH7SSASET;
volatile unsigned int DCH7SSAINV;
volatile unsigned int DCH7DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH7DSAbits_t;
volatile __DCH7DSAbits_t DCH7DSAbits __asm__ ("DCH7DSA");
volatile unsigned int DCH7DSACLR;
volatile unsigned int DCH7DSASET;
volatile unsigned int DCH7DSAINV;
volatile unsigned int DCH7SSIZ;
volatile unsigned int DCH7SSIZCLR;
volatile unsigned int DCH7SSIZSET;
volatile unsigned int DCH7SSIZINV;
volatile unsigned int DCH7DSIZ;
volatile unsigned int DCH7DSIZCLR;
volatile unsigned int DCH7DSIZSET;
volatile unsigned int DCH7DSIZINV;
volatile unsigned int DCH7SPTR;
volatile unsigned int DCH7SPTRCLR;
volatile unsigned int DCH7SPTRSET;
volatile unsigned int DCH7SPTRINV;
volatile unsigned int DCH7DPTR;
volatile unsigned int DCH7DPTRCLR;
volatile unsigned int DCH7DPTRSET;
volatile unsigned int DCH7DPTRINV;
volatile unsigned int DCH7CSIZ;
volatile unsigned int DCH7CSIZCLR;
volatile unsigned int DCH7CSIZSET;
volatile unsigned int DCH7CSIZINV;
volatile unsigned int DCH7CPTR;
volatile unsigned int DCH7CPTRCLR;
volatile unsigned int DCH7CPTRSET;
volatile unsigned int DCH7CPTRINV;
volatile unsigned int DCH7DAT;
volatile unsigned int DCH7DATCLR;
volatile unsigned int DCH7DATSET;
volatile unsigned int DCH7DATINV;
volatile unsigned int CHECON;
typedef union {
  struct {
    unsigned PFMWS:3;
    unsigned :1;
    unsigned PREFEN:2;
    unsigned :2;
    unsigned DCSZ:2;
    unsigned :6;
    unsigned CHECOH:1;
  };
  struct {
    unsigned w:32;
  };
} __CHECONbits_t;
volatile __CHECONbits_t CHECONbits __asm__ ("CHECON");
volatile unsigned int CHECONCLR;
volatile unsigned int CHECONSET;
volatile unsigned int CHECONINV;
volatile unsigned int CHEACC;
typedef struct {
  unsigned CHEIDX:4;
  unsigned :27;
  unsigned CHEWEN:1;
} __CHEACCbits_t;
volatile __CHEACCbits_t CHEACCbits __asm__ ("CHEACC");
volatile unsigned int CHEACCCLR;
volatile unsigned int CHEACCSET;
volatile unsigned int CHEACCINV;
volatile unsigned int CHETAG;
typedef union {
  struct {
    unsigned :1;
    unsigned LTYPE:1;
    unsigned LLOCK:1;
    unsigned LVALID:1;
    unsigned LTAG:20;
    unsigned :7;
    unsigned LTAGBOOT:1;
  };
  struct {
    unsigned w:32;
  };
} __CHETAGbits_t;
volatile __CHETAGbits_t CHETAGbits __asm__ ("CHETAG");
volatile unsigned int CHETAGCLR;
volatile unsigned int CHETAGSET;
volatile unsigned int CHETAGINV;
volatile unsigned int CHEMSK;
typedef struct {
  unsigned :5;
  unsigned LMASK:11;
} __CHEMSKbits_t;
volatile __CHEMSKbits_t CHEMSKbits __asm__ ("CHEMSK");
volatile unsigned int CHEMSKCLR;
volatile unsigned int CHEMSKSET;
volatile unsigned int CHEMSKINV;
volatile unsigned int CHEW0;
typedef struct {
  unsigned CHEW0:32;
} __CHEW0bits_t;
volatile __CHEW0bits_t CHEW0bits __asm__ ("CHEW0");
volatile unsigned int CHEW1;
typedef struct {
  unsigned CHEW1:32;
} __CHEW1bits_t;
volatile __CHEW1bits_t CHEW1bits __asm__ ("CHEW1");
volatile unsigned int CHEW2;
typedef struct {
  unsigned CHEW2:32;
} __CHEW2bits_t;
volatile __CHEW2bits_t CHEW2bits __asm__ ("CHEW2");
volatile unsigned int CHEW3;
typedef struct {
  unsigned CHEW3:32;
} __CHEW3bits_t;
volatile __CHEW3bits_t CHEW3bits __asm__ ("CHEW3");
volatile unsigned int CHELRU;
typedef struct {
  unsigned CHELRU:25;
} __CHELRUbits_t;
volatile __CHELRUbits_t CHELRUbits __asm__ ("CHELRU");
volatile unsigned int CHEHIT;
typedef struct {
  unsigned CHEHIT:32;
} __CHEHITbits_t;
volatile __CHEHITbits_t CHEHITbits __asm__ ("CHEHIT");
volatile unsigned int CHEMIS;
typedef struct {
  unsigned CHEMIS:32;
} __CHEMISbits_t;
volatile __CHEMISbits_t CHEMISbits __asm__ ("CHEMIS");
volatile unsigned int CHEPFABT;
typedef struct {
  unsigned CHEPFABT:32;
} __CHEPFABTbits_t;
volatile __CHEPFABTbits_t CHEPFABTbits __asm__ ("CHEPFABT");
volatile unsigned int U1OTGIR;
typedef struct {
  unsigned VBUSVDIF:1;
  unsigned :1;
  unsigned SESENDIF:1;
  unsigned SESVDIF:1;
  unsigned ACTVIF:1;
  unsigned LSTATEIF:1;
  unsigned T1MSECIF:1;
  unsigned IDIF:1;
} __U1OTGIRbits_t;
volatile __U1OTGIRbits_t U1OTGIRbits __asm__ ("U1OTGIR");
volatile unsigned int U1OTGIRCLR;
volatile unsigned int U1OTGIE;
typedef struct {
  unsigned VBUSVDIE:1;
  unsigned :1;
  unsigned SESENDIE:1;
  unsigned SESVDIE:1;
  unsigned ACTVIE:1;
  unsigned LSTATEIE:1;
  unsigned T1MSECIE:1;
  unsigned IDIE:1;
} __U1OTGIEbits_t;
volatile __U1OTGIEbits_t U1OTGIEbits __asm__ ("U1OTGIE");
volatile unsigned int U1OTGIECLR;
volatile unsigned int U1OTGIESET;
volatile unsigned int U1OTGIEINV;
volatile unsigned int U1OTGSTAT;
typedef struct {
  unsigned VBUSVD:1;
  unsigned :1;
  unsigned SESEND:1;
  unsigned SESVD:1;
  unsigned :1;
  unsigned LSTATE:1;
  unsigned :1;
  unsigned ID:1;
} __U1OTGSTATbits_t;
volatile __U1OTGSTATbits_t U1OTGSTATbits __asm__ ("U1OTGSTAT");
volatile unsigned int U1OTGCON;
typedef struct {
  unsigned VBUSDIS:1;
  unsigned VBUSCHG:1;
  unsigned OTGEN:1;
  unsigned VBUSON:1;
  unsigned DMPULDWN:1;
  unsigned DPPULDWN:1;
  unsigned DMPULUP:1;
  unsigned DPPULUP:1;
} __U1OTGCONbits_t;
volatile __U1OTGCONbits_t U1OTGCONbits __asm__ ("U1OTGCON");
volatile unsigned int U1OTGCONCLR;
volatile unsigned int U1OTGCONSET;
volatile unsigned int U1OTGCONINV;
volatile unsigned int U1PWRC;
typedef struct {
  unsigned USBPWR:1;
  unsigned USUSPEND:1;
  unsigned :1;
  unsigned USBBUSY:1;
  unsigned USLPGRD:1;
  unsigned :2;
  unsigned UACTPND:1;
} __U1PWRCbits_t;
volatile __U1PWRCbits_t U1PWRCbits __asm__ ("U1PWRC");
volatile unsigned int U1PWRCCLR;
volatile unsigned int U1PWRCSET;
volatile unsigned int U1PWRCINV;
volatile unsigned int U1IR;
typedef union {
  struct {
    unsigned URSTIF_DETACHIF:1;
    unsigned UERRIF:1;
    unsigned SOFIF:1;
    unsigned TRNIF:1;
    unsigned IDLEIF:1;
    unsigned RESUMEIF:1;
    unsigned ATTACHIF:1;
    unsigned STALLIF:1;
  };
  struct {
    unsigned DETACHIF:1;
  };
  struct {
    unsigned URSTIF:1;
  };
} __U1IRbits_t;
volatile __U1IRbits_t U1IRbits __asm__ ("U1IR");
volatile unsigned int U1IRCLR;
volatile unsigned int U1IE;
typedef union {
  struct {
    unsigned URSTIE_DETACHIE:1;
    unsigned UERRIE:1;
    unsigned SOFIE:1;
    unsigned TRNIE:1;
    unsigned IDLEIE:1;
    unsigned RESUMEIE:1;
    unsigned ATTACHIE:1;
    unsigned STALLIE:1;
  };
  struct {
    unsigned DETACHIE:1;
  };
  struct {
    unsigned URSTIE:1;
  };
} __U1IEbits_t;
volatile __U1IEbits_t U1IEbits __asm__ ("U1IE");
volatile unsigned int U1IECLR;
volatile unsigned int U1IESET;
volatile unsigned int U1IEINV;
volatile unsigned int U1EIR;
typedef union {
  struct {
    unsigned PIDEF:1;
    unsigned CRC5EF_EOFEF:1;
    unsigned CRC16EF:1;
    unsigned DFN8EF:1;
    unsigned BTOEF:1;
    unsigned DMAEF:1;
    unsigned BMXEF:1;
    unsigned BTSEF:1;
  };
  struct {
    unsigned :1;
    unsigned CRC5EF:1;
  };
  struct {
    unsigned :1;
    unsigned EOFEF:1;
  };
} __U1EIRbits_t;
volatile __U1EIRbits_t U1EIRbits __asm__ ("U1EIR");
volatile unsigned int U1EIRCLR;
volatile unsigned int U1EIE;
typedef union {
  struct {
    unsigned PIDEE:1;
    unsigned CRC5EE_EOFEE:1;
    unsigned CRC16EE:1;
    unsigned DFN8EE:1;
    unsigned BTOEE:1;
    unsigned DMAEE:1;
    unsigned BMXEE:1;
    unsigned BTSEE:1;
  };
  struct {
    unsigned :1;
    unsigned CRC5EE:1;
  };
  struct {
    unsigned :1;
    unsigned EOFEE:1;
  };
} __U1EIEbits_t;
volatile __U1EIEbits_t U1EIEbits __asm__ ("U1EIE");
volatile unsigned int U1EIECLR;
volatile unsigned int U1EIESET;
volatile unsigned int U1EIEINV;
volatile unsigned int U1STAT;
typedef union {
  struct {
    unsigned :2;
    unsigned PPBI:1;
    unsigned DIR:1;
    unsigned ENDPT:4;
  };
  struct {
    unsigned :4;
    unsigned ENDPT0:1;
    unsigned ENDPT1:1;
    unsigned ENDPT2:1;
    unsigned ENDPT3:1;
  };
} __U1STATbits_t;
volatile __U1STATbits_t U1STATbits __asm__ ("U1STAT");
volatile unsigned int U1CON;
typedef union {
  struct {
    unsigned USBEN_SOFEN:1;
    unsigned PPBRST:1;
    unsigned RESUME:1;
    unsigned HOSTEN:1;
    unsigned USBRST:1;
    unsigned PKTDIS_TOKBUSY:1;
    unsigned SE0:1;
    unsigned JSTATE:1;
  };
  struct {
    unsigned USBEN:1;
  };
  struct {
    unsigned SOFEN:1;
    unsigned :4;
    unsigned PKTDIS:1;
  };
  struct {
    unsigned :5;
    unsigned TOKBUSY:1;
  };
} __U1CONbits_t;
volatile __U1CONbits_t U1CONbits __asm__ ("U1CON");
volatile unsigned int U1CONCLR;
volatile unsigned int U1CONSET;
volatile unsigned int U1CONINV;
volatile unsigned int U1ADDR;
typedef union {
  struct {
    unsigned DEVADDR:7;
    unsigned LSPDEN:1;
  };
  struct {
    unsigned DEVADDR0:1;
    unsigned DEVADDR1:1;
    unsigned DEVADDR2:1;
    unsigned DEVADDR3:1;
    unsigned DEVADDR4:1;
    unsigned DEVADDR5:1;
    unsigned DEVADDR6:1;
  };
} __U1ADDRbits_t;
volatile __U1ADDRbits_t U1ADDRbits __asm__ ("U1ADDR");
volatile unsigned int U1ADDRCLR;
volatile unsigned int U1ADDRSET;
volatile unsigned int U1ADDRINV;
volatile unsigned int U1BDTP1;
typedef struct {
  unsigned :1;
  unsigned BDTPTRL:7;
} __U1BDTP1bits_t;
volatile __U1BDTP1bits_t U1BDTP1bits __asm__ ("U1BDTP1");
volatile unsigned int U1BDTP1CLR;
volatile unsigned int U1BDTP1SET;
volatile unsigned int U1BDTP1INV;
volatile unsigned int U1FRML;
typedef union {
  struct {
    unsigned FRML:8;
  };
  struct {
    unsigned FRM0:1;
    unsigned FRM1:1;
    unsigned FRM2:1;
    unsigned FRM3:1;
    unsigned FRM4:1;
    unsigned FRM5:1;
    unsigned FRM6:1;
    unsigned FRM7:1;
  };
} __U1FRMLbits_t;
volatile __U1FRMLbits_t U1FRMLbits __asm__ ("U1FRML");
volatile unsigned int U1FRMH;
typedef union {
  struct {
    unsigned FRMH:3;
  };
  struct {
    unsigned FRM8:1;
    unsigned FRM9:1;
    unsigned FRM10:1;
  };
} __U1FRMHbits_t;
volatile __U1FRMHbits_t U1FRMHbits __asm__ ("U1FRMH");
volatile unsigned int U1TOK;
typedef union {
  struct {
    unsigned EP:4;
    unsigned PID:4;
  };
  struct {
    unsigned EP0:1;
  };
  struct {
    unsigned :1;
    unsigned EP1:1;
    unsigned EP2:1;
    unsigned EP3:1;
    unsigned PID0:1;
  };
  struct {
    unsigned :5;
    unsigned PID1:1;
    unsigned PID2:1;
    unsigned PID3:1;
  };
} __U1TOKbits_t;
volatile __U1TOKbits_t U1TOKbits __asm__ ("U1TOK");
volatile unsigned int U1TOKCLR;
volatile unsigned int U1TOKSET;
volatile unsigned int U1TOKINV;
volatile unsigned int U1SOF;
typedef struct {
  unsigned CNT:8;
} __U1SOFbits_t;
volatile __U1SOFbits_t U1SOFbits __asm__ ("U1SOF");
volatile unsigned int U1SOFCLR;
volatile unsigned int U1SOFSET;
volatile unsigned int U1SOFINV;
volatile unsigned int U1BDTP2;
typedef struct {
  unsigned BDTPTRH:8;
} __U1BDTP2bits_t;
volatile __U1BDTP2bits_t U1BDTP2bits __asm__ ("U1BDTP2");
volatile unsigned int U1BDTP2CLR;
volatile unsigned int U1BDTP2SET;
volatile unsigned int U1BDTP2INV;
volatile unsigned int U1BDTP3;
typedef struct {
  unsigned BDTPTRU:8;
} __U1BDTP3bits_t;
volatile __U1BDTP3bits_t U1BDTP3bits __asm__ ("U1BDTP3");
volatile unsigned int U1BDTP3CLR;
volatile unsigned int U1BDTP3SET;
volatile unsigned int U1BDTP3INV;
volatile unsigned int U1CNFG1;
typedef struct {
  unsigned UASUSPND:1;
  unsigned :3;
  unsigned USBSIDL:1;
  unsigned :1;
  unsigned UOEMON:1;
  unsigned UTEYE:1;
} __U1CNFG1bits_t;
volatile __U1CNFG1bits_t U1CNFG1bits __asm__ ("U1CNFG1");
volatile unsigned int U1CNFG1CLR;
volatile unsigned int U1CNFG1SET;
volatile unsigned int U1CNFG1INV;
volatile unsigned int U1EP0;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
  unsigned :1;
  unsigned RETRYDIS:1;
  unsigned LSPD:1;
} __U1EP0bits_t;
volatile __U1EP0bits_t U1EP0bits __asm__ ("U1EP0");
volatile unsigned int U1EP0CLR;
volatile unsigned int U1EP0SET;
volatile unsigned int U1EP0INV;
volatile unsigned int U1EP1;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP1bits_t;
volatile __U1EP1bits_t U1EP1bits __asm__ ("U1EP1");
volatile unsigned int U1EP1CLR;
volatile unsigned int U1EP1SET;
volatile unsigned int U1EP1INV;
volatile unsigned int U1EP2;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP2bits_t;
volatile __U1EP2bits_t U1EP2bits __asm__ ("U1EP2");
volatile unsigned int U1EP2CLR;
volatile unsigned int U1EP2SET;
volatile unsigned int U1EP2INV;
volatile unsigned int U1EP3;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP3bits_t;
volatile __U1EP3bits_t U1EP3bits __asm__ ("U1EP3");
volatile unsigned int U1EP3CLR;
volatile unsigned int U1EP3SET;
volatile unsigned int U1EP3INV;
volatile unsigned int U1EP4;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP4bits_t;
volatile __U1EP4bits_t U1EP4bits __asm__ ("U1EP4");
volatile unsigned int U1EP4CLR;
volatile unsigned int U1EP4SET;
volatile unsigned int U1EP4INV;
volatile unsigned int U1EP5;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP5bits_t;
volatile __U1EP5bits_t U1EP5bits __asm__ ("U1EP5");
volatile unsigned int U1EP5CLR;
volatile unsigned int U1EP5SET;
volatile unsigned int U1EP5INV;
volatile unsigned int U1EP6;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP6bits_t;
volatile __U1EP6bits_t U1EP6bits __asm__ ("U1EP6");
volatile unsigned int U1EP6CLR;
volatile unsigned int U1EP6SET;
volatile unsigned int U1EP6INV;
volatile unsigned int U1EP7;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP7bits_t;
volatile __U1EP7bits_t U1EP7bits __asm__ ("U1EP7");
volatile unsigned int U1EP7CLR;
volatile unsigned int U1EP7SET;
volatile unsigned int U1EP7INV;
volatile unsigned int U1EP8;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP8bits_t;
volatile __U1EP8bits_t U1EP8bits __asm__ ("U1EP8");
volatile unsigned int U1EP8CLR;
volatile unsigned int U1EP8SET;
volatile unsigned int U1EP8INV;
volatile unsigned int U1EP9;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP9bits_t;
volatile __U1EP9bits_t U1EP9bits __asm__ ("U1EP9");
volatile unsigned int U1EP9CLR;
volatile unsigned int U1EP9SET;
volatile unsigned int U1EP9INV;
volatile unsigned int U1EP10;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP10bits_t;
volatile __U1EP10bits_t U1EP10bits __asm__ ("U1EP10");
volatile unsigned int U1EP10CLR;
volatile unsigned int U1EP10SET;
volatile unsigned int U1EP10INV;
volatile unsigned int U1EP11;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP11bits_t;
volatile __U1EP11bits_t U1EP11bits __asm__ ("U1EP11");
volatile unsigned int U1EP11CLR;
volatile unsigned int U1EP11SET;
volatile unsigned int U1EP11INV;
volatile unsigned int U1EP12;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP12bits_t;
volatile __U1EP12bits_t U1EP12bits __asm__ ("U1EP12");
volatile unsigned int U1EP12CLR;
volatile unsigned int U1EP12SET;
volatile unsigned int U1EP12INV;
volatile unsigned int U1EP13;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP13bits_t;
volatile __U1EP13bits_t U1EP13bits __asm__ ("U1EP13");
volatile unsigned int U1EP13CLR;
volatile unsigned int U1EP13SET;
volatile unsigned int U1EP13INV;
volatile unsigned int U1EP14;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP14bits_t;
volatile __U1EP14bits_t U1EP14bits __asm__ ("U1EP14");
volatile unsigned int U1EP14CLR;
volatile unsigned int U1EP14SET;
volatile unsigned int U1EP14INV;
volatile unsigned int U1EP15;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP15bits_t;
volatile __U1EP15bits_t U1EP15bits __asm__ ("U1EP15");
volatile unsigned int U1EP15CLR;
volatile unsigned int U1EP15SET;
volatile unsigned int U1EP15INV;
volatile unsigned int TRISA;
typedef union {
  struct {
    unsigned TRISA0:1;
    unsigned TRISA1:1;
    unsigned TRISA2:1;
    unsigned TRISA3:1;
    unsigned TRISA4:1;
    unsigned TRISA5:1;
    unsigned TRISA6:1;
    unsigned TRISA7:1;
    unsigned :1;
    unsigned TRISA9:1;
    unsigned TRISA10:1;
    unsigned :3;
    unsigned TRISA14:1;
    unsigned TRISA15:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISAbits_t;
volatile __TRISAbits_t TRISAbits __asm__ ("TRISA");
volatile unsigned int TRISACLR;
volatile unsigned int TRISASET;
volatile unsigned int TRISAINV;
volatile unsigned int PORTA;
typedef union {
  struct {
    unsigned RA0:1;
    unsigned RA1:1;
    unsigned RA2:1;
    unsigned RA3:1;
    unsigned RA4:1;
    unsigned RA5:1;
    unsigned RA6:1;
    unsigned RA7:1;
    unsigned :1;
    unsigned RA9:1;
    unsigned RA10:1;
    unsigned :3;
    unsigned RA14:1;
    unsigned RA15:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTAbits_t;
volatile __PORTAbits_t PORTAbits __asm__ ("PORTA");
volatile unsigned int PORTACLR;
volatile unsigned int PORTASET;
volatile unsigned int PORTAINV;
volatile unsigned int LATA;
typedef union {
  struct {
    unsigned LATA0:1;
    unsigned LATA1:1;
    unsigned LATA2:1;
    unsigned LATA3:1;
    unsigned LATA4:1;
    unsigned LATA5:1;
    unsigned LATA6:1;
    unsigned LATA7:1;
    unsigned :1;
    unsigned LATA9:1;
    unsigned LATA10:1;
    unsigned :3;
    unsigned LATA14:1;
    unsigned LATA15:1;
  };
  struct {
    unsigned w:32;
  };
} __LATAbits_t;
volatile __LATAbits_t LATAbits __asm__ ("LATA");
volatile unsigned int LATACLR;
volatile unsigned int LATASET;
volatile unsigned int LATAINV;
volatile unsigned int ODCA;
typedef union {
  struct {
    unsigned ODCA0:1;
    unsigned ODCA1:1;
    unsigned ODCA2:1;
    unsigned ODCA3:1;
    unsigned ODCA4:1;
    unsigned ODCA5:1;
    unsigned ODCA6:1;
    unsigned ODCA7:1;
    unsigned :1;
    unsigned ODCA9:1;
    unsigned ODCA10:1;
    unsigned :3;
    unsigned ODCA14:1;
    unsigned ODCA15:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCAbits_t;
volatile __ODCAbits_t ODCAbits __asm__ ("ODCA");
volatile unsigned int ODCACLR;
volatile unsigned int ODCASET;
volatile unsigned int ODCAINV;
volatile unsigned int TRISB;
typedef union {
  struct {
    unsigned TRISB0:1;
    unsigned TRISB1:1;
    unsigned TRISB2:1;
    unsigned TRISB3:1;
    unsigned TRISB4:1;
    unsigned TRISB5:1;
    unsigned TRISB6:1;
    unsigned TRISB7:1;
    unsigned TRISB8:1;
    unsigned TRISB9:1;
    unsigned TRISB10:1;
    unsigned TRISB11:1;
    unsigned TRISB12:1;
    unsigned TRISB13:1;
    unsigned TRISB14:1;
    unsigned TRISB15:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISBbits_t;
volatile __TRISBbits_t TRISBbits __asm__ ("TRISB");
volatile unsigned int TRISBCLR;
volatile unsigned int TRISBSET;
volatile unsigned int TRISBINV;
volatile unsigned int PORTB;
typedef union {
  struct {
    unsigned RB0:1;
    unsigned RB1:1;
    unsigned RB2:1;
    unsigned RB3:1;
    unsigned RB4:1;
    unsigned RB5:1;
    unsigned RB6:1;
    unsigned RB7:1;
    unsigned RB8:1;
    unsigned RB9:1;
    unsigned RB10:1;
    unsigned RB11:1;
    unsigned RB12:1;
    unsigned RB13:1;
    unsigned RB14:1;
    unsigned RB15:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTBbits_t;
volatile __PORTBbits_t PORTBbits __asm__ ("PORTB");
volatile unsigned int PORTBCLR;
volatile unsigned int PORTBSET;
volatile unsigned int PORTBINV;
volatile unsigned int LATB;
typedef union {
  struct {
    unsigned LATB0:1;
    unsigned LATB1:1;
    unsigned LATB2:1;
    unsigned LATB3:1;
    unsigned LATB4:1;
    unsigned LATB5:1;
    unsigned LATB6:1;
    unsigned LATB7:1;
    unsigned LATB8:1;
    unsigned LATB9:1;
    unsigned LATB10:1;
    unsigned LATB11:1;
    unsigned LATB12:1;
    unsigned LATB13:1;
    unsigned LATB14:1;
    unsigned LATB15:1;
  };
  struct {
    unsigned w:32;
  };
} __LATBbits_t;
volatile __LATBbits_t LATBbits __asm__ ("LATB");
volatile unsigned int LATBCLR;
volatile unsigned int LATBSET;
volatile unsigned int LATBINV;
volatile unsigned int ODCB;
typedef union {
  struct {
    unsigned ODCB0:1;
    unsigned ODCB1:1;
    unsigned ODCB2:1;
    unsigned ODCB3:1;
    unsigned ODCB4:1;
    unsigned ODCB5:1;
    unsigned ODCB6:1;
    unsigned ODCB7:1;
    unsigned ODCB8:1;
    unsigned ODCB9:1;
    unsigned ODCB10:1;
    unsigned ODCB11:1;
    unsigned ODCB12:1;
    unsigned ODCB13:1;
    unsigned ODCB14:1;
    unsigned ODCB15:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCBbits_t;
volatile __ODCBbits_t ODCBbits __asm__ ("ODCB");
volatile unsigned int ODCBCLR;
volatile unsigned int ODCBSET;
volatile unsigned int ODCBINV;
volatile unsigned int TRISC;
typedef union {
  struct {
    unsigned :1;
    unsigned TRISC1:1;
    unsigned TRISC2:1;
    unsigned TRISC3:1;
    unsigned TRISC4:1;
    unsigned :7;
    unsigned TRISC12:1;
    unsigned TRISC13:1;
    unsigned TRISC14:1;
    unsigned TRISC15:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISCbits_t;
volatile __TRISCbits_t TRISCbits __asm__ ("TRISC");
volatile unsigned int TRISCCLR;
volatile unsigned int TRISCSET;
volatile unsigned int TRISCINV;
volatile unsigned int PORTC;
typedef union {
  struct {
    unsigned :1;
    unsigned RC1:1;
    unsigned RC2:1;
    unsigned RC3:1;
    unsigned RC4:1;
    unsigned :7;
    unsigned RC12:1;
    unsigned RC13:1;
    unsigned RC14:1;
    unsigned RC15:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTCbits_t;
volatile __PORTCbits_t PORTCbits __asm__ ("PORTC");
volatile unsigned int PORTCCLR;
volatile unsigned int PORTCSET;
volatile unsigned int PORTCINV;
volatile unsigned int LATC;
typedef union {
  struct {
    unsigned :1;
    unsigned LATC1:1;
    unsigned LATC2:1;
    unsigned LATC3:1;
    unsigned LATC4:1;
    unsigned :7;
    unsigned LATC12:1;
    unsigned LATC13:1;
    unsigned LATC14:1;
    unsigned LATC15:1;
  };
  struct {
    unsigned w:32;
  };
} __LATCbits_t;
volatile __LATCbits_t LATCbits __asm__ ("LATC");
volatile unsigned int LATCCLR;
volatile unsigned int LATCSET;
volatile unsigned int LATCINV;
volatile unsigned int ODCC;
typedef union {
  struct {
    unsigned :1;
    unsigned ODCC1:1;
    unsigned ODCC2:1;
    unsigned ODCC3:1;
    unsigned ODCC4:1;
    unsigned :7;
    unsigned ODCC12:1;
    unsigned ODCC13:1;
    unsigned ODCC14:1;
    unsigned ODCC15:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCCbits_t;
volatile __ODCCbits_t ODCCbits __asm__ ("ODCC");
volatile unsigned int ODCCCLR;
volatile unsigned int ODCCSET;
volatile unsigned int ODCCINV;
volatile unsigned int TRISD;
typedef union {
  struct {
    unsigned TRISD0:1;
    unsigned TRISD1:1;
    unsigned TRISD2:1;
    unsigned TRISD3:1;
    unsigned TRISD4:1;
    unsigned TRISD5:1;
    unsigned TRISD6:1;
    unsigned TRISD7:1;
    unsigned TRISD8:1;
    unsigned TRISD9:1;
    unsigned TRISD10:1;
    unsigned TRISD11:1;
    unsigned TRISD12:1;
    unsigned TRISD13:1;
    unsigned TRISD14:1;
    unsigned TRISD15:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISDbits_t;
volatile __TRISDbits_t TRISDbits __asm__ ("TRISD");
volatile unsigned int TRISDCLR;
volatile unsigned int TRISDSET;
volatile unsigned int TRISDINV;
volatile unsigned int PORTD;
typedef union {
  struct {
    unsigned RD0:1;
    unsigned RD1:1;
    unsigned RD2:1;
    unsigned RD3:1;
    unsigned RD4:1;
    unsigned RD5:1;
    unsigned RD6:1;
    unsigned RD7:1;
    unsigned RD8:1;
    unsigned RD9:1;
    unsigned RD10:1;
    unsigned RD11:1;
    unsigned RD12:1;
    unsigned RD13:1;
    unsigned RD14:1;
    unsigned RD15:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTDbits_t;
volatile __PORTDbits_t PORTDbits __asm__ ("PORTD");
volatile unsigned int PORTDCLR;
volatile unsigned int PORTDSET;
volatile unsigned int PORTDINV;
volatile unsigned int LATD;
typedef union {
  struct {
    unsigned LATD0:1;
    unsigned LATD1:1;
    unsigned LATD2:1;
    unsigned LATD3:1;
    unsigned LATD4:1;
    unsigned LATD5:1;
    unsigned LATD6:1;
    unsigned LATD7:1;
    unsigned LATD8:1;
    unsigned LATD9:1;
    unsigned LATD10:1;
    unsigned LATD11:1;
    unsigned LATD12:1;
    unsigned LATD13:1;
    unsigned LATD14:1;
    unsigned LATD15:1;
  };
  struct {
    unsigned w:32;
  };
} __LATDbits_t;
volatile __LATDbits_t LATDbits __asm__ ("LATD");
volatile unsigned int LATDCLR;
volatile unsigned int LATDSET;
volatile unsigned int LATDINV;
volatile unsigned int ODCD;
typedef union {
  struct {
    unsigned ODCD0:1;
    unsigned ODCD1:1;
    unsigned ODCD2:1;
    unsigned ODCD3:1;
    unsigned ODCD4:1;
    unsigned ODCD5:1;
    unsigned ODCD6:1;
    unsigned ODCD7:1;
    unsigned ODCD8:1;
    unsigned ODCD9:1;
    unsigned ODCD10:1;
    unsigned ODCD11:1;
    unsigned ODCD12:1;
    unsigned ODCD13:1;
    unsigned ODCD14:1;
    unsigned ODCD15:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCDbits_t;
volatile __ODCDbits_t ODCDbits __asm__ ("ODCD");
volatile unsigned int ODCDCLR;
volatile unsigned int ODCDSET;
volatile unsigned int ODCDINV;
volatile unsigned int TRISE;
typedef union {
  struct {
    unsigned TRISE0:1;
    unsigned TRISE1:1;
    unsigned TRISE2:1;
    unsigned TRISE3:1;
    unsigned TRISE4:1;
    unsigned TRISE5:1;
    unsigned TRISE6:1;
    unsigned TRISE7:1;
    unsigned TRISE8:1;
    unsigned TRISE9:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISEbits_t;
volatile __TRISEbits_t TRISEbits __asm__ ("TRISE");
volatile unsigned int TRISECLR;
volatile unsigned int TRISESET;
volatile unsigned int TRISEINV;
volatile unsigned int PORTE;
typedef union {
  struct {
    unsigned RE0:1;
    unsigned RE1:1;
    unsigned RE2:1;
    unsigned RE3:1;
    unsigned RE4:1;
    unsigned RE5:1;
    unsigned RE6:1;
    unsigned RE7:1;
    unsigned RE8:1;
    unsigned RE9:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTEbits_t;
volatile __PORTEbits_t PORTEbits __asm__ ("PORTE");
volatile unsigned int PORTECLR;
volatile unsigned int PORTESET;
volatile unsigned int PORTEINV;
volatile unsigned int LATE;
typedef union {
  struct {
    unsigned LATE0:1;
    unsigned LATE1:1;
    unsigned LATE2:1;
    unsigned LATE3:1;
    unsigned LATE4:1;
    unsigned LATE5:1;
    unsigned LATE6:1;
    unsigned LATE7:1;
    unsigned LATE8:1;
    unsigned LATE9:1;
  };
  struct {
    unsigned w:32;
  };
} __LATEbits_t;
volatile __LATEbits_t LATEbits __asm__ ("LATE");
volatile unsigned int LATECLR;
volatile unsigned int LATESET;
volatile unsigned int LATEINV;
volatile unsigned int ODCE;
typedef union {
  struct {
    unsigned ODCE0:1;
    unsigned ODCE1:1;
    unsigned ODCE2:1;
    unsigned ODCE3:1;
    unsigned ODCE4:1;
    unsigned ODCE5:1;
    unsigned ODCE6:1;
    unsigned ODCE7:1;
    unsigned ODCE8:1;
    unsigned ODCE9:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCEbits_t;
volatile __ODCEbits_t ODCEbits __asm__ ("ODCE");
volatile unsigned int ODCECLR;
volatile unsigned int ODCESET;
volatile unsigned int ODCEINV;
volatile unsigned int TRISF;
typedef union {
  struct {
    unsigned TRISF0:1;
    unsigned TRISF1:1;
    unsigned TRISF2:1;
    unsigned TRISF3:1;
    unsigned TRISF4:1;
    unsigned TRISF5:1;
    unsigned :2;
    unsigned TRISF8:1;
    unsigned :3;
    unsigned TRISF12:1;
    unsigned TRISF13:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISFbits_t;
volatile __TRISFbits_t TRISFbits __asm__ ("TRISF");
volatile unsigned int TRISFCLR;
volatile unsigned int TRISFSET;
volatile unsigned int TRISFINV;
volatile unsigned int PORTF;
typedef union {
  struct {
    unsigned RF0:1;
    unsigned RF1:1;
    unsigned RF2:1;
    unsigned RF3:1;
    unsigned RF4:1;
    unsigned RF5:1;
    unsigned :2;
    unsigned RF8:1;
    unsigned :3;
    unsigned RF12:1;
    unsigned RF13:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTFbits_t;
volatile __PORTFbits_t PORTFbits __asm__ ("PORTF");
volatile unsigned int PORTFCLR;
volatile unsigned int PORTFSET;
volatile unsigned int PORTFINV;
volatile unsigned int LATF;
typedef union {
  struct {
    unsigned LATF0:1;
    unsigned LATF1:1;
    unsigned LATF2:1;
    unsigned LATF3:1;
    unsigned LATF4:1;
    unsigned LATF5:1;
    unsigned :2;
    unsigned LATF8:1;
    unsigned :3;
    unsigned LATF12:1;
    unsigned LATF13:1;
  };
  struct {
    unsigned w:32;
  };
} __LATFbits_t;
volatile __LATFbits_t LATFbits __asm__ ("LATF");
volatile unsigned int LATFCLR;
volatile unsigned int LATFSET;
volatile unsigned int LATFINV;
volatile unsigned int ODCF;
typedef union {
  struct {
    unsigned ODCF0:1;
    unsigned ODCF1:1;
    unsigned ODCF2:1;
    unsigned ODCF3:1;
    unsigned ODCF4:1;
    unsigned ODCF5:1;
    unsigned :2;
    unsigned ODCF8:1;
    unsigned :3;
    unsigned ODCF12:1;
    unsigned ODCF13:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCFbits_t;
volatile __ODCFbits_t ODCFbits __asm__ ("ODCF");
volatile unsigned int ODCFCLR;
volatile unsigned int ODCFSET;
volatile unsigned int ODCFINV;
volatile unsigned int TRISG;
typedef union {
  struct {
    unsigned TRISG0:1;
    unsigned TRISG1:1;
    unsigned TRISG2:1;
    unsigned TRISG3:1;
    unsigned :2;
    unsigned TRISG6:1;
    unsigned TRISG7:1;
    unsigned TRISG8:1;
    unsigned TRISG9:1;
    unsigned :2;
    unsigned TRISG12:1;
    unsigned TRISG13:1;
    unsigned TRISG14:1;
    unsigned TRISG15:1;
  };
  struct {
    unsigned w:32;
  };
} __TRISGbits_t;
volatile __TRISGbits_t TRISGbits __asm__ ("TRISG");
volatile unsigned int TRISGCLR;
volatile unsigned int TRISGSET;
volatile unsigned int TRISGINV;
volatile unsigned int PORTG;
typedef union {
  struct {
    unsigned RG0:1;
    unsigned RG1:1;
    unsigned RG2:1;
    unsigned RG3:1;
    unsigned :2;
    unsigned RG6:1;
    unsigned RG7:1;
    unsigned RG8:1;
    unsigned RG9:1;
    unsigned :2;
    unsigned RG12:1;
    unsigned RG13:1;
    unsigned RG14:1;
    unsigned RG15:1;
  };
  struct {
    unsigned w:32;
  };
} __PORTGbits_t;
volatile __PORTGbits_t PORTGbits __asm__ ("PORTG");
volatile unsigned int PORTGCLR;
volatile unsigned int PORTGSET;
volatile unsigned int PORTGINV;
volatile unsigned int LATG;
typedef union {
  struct {
    unsigned LATG0:1;
    unsigned LATG1:1;
    unsigned LATG2:1;
    unsigned LATG3:1;
    unsigned :2;
    unsigned LATG6:1;
    unsigned LATG7:1;
    unsigned LATG8:1;
    unsigned LATG9:1;
    unsigned :2;
    unsigned LATG12:1;
    unsigned LATG13:1;
    unsigned LATG14:1;
    unsigned LATG15:1;
  };
  struct {
    unsigned w:32;
  };
} __LATGbits_t;
volatile __LATGbits_t LATGbits __asm__ ("LATG");
volatile unsigned int LATGCLR;
volatile unsigned int LATGSET;
volatile unsigned int LATGINV;
volatile unsigned int ODCG;
typedef union {
  struct {
    unsigned ODCG0:1;
    unsigned ODCG1:1;
    unsigned ODCG2:1;
    unsigned ODCG3:1;
    unsigned :2;
    unsigned ODCG6:1;
    unsigned ODCG7:1;
    unsigned ODCG8:1;
    unsigned ODCG9:1;
    unsigned :2;
    unsigned ODCG12:1;
    unsigned ODCG13:1;
    unsigned ODCG14:1;
    unsigned ODCG15:1;
  };
  struct {
    unsigned w:32;
  };
} __ODCGbits_t;
volatile __ODCGbits_t ODCGbits __asm__ ("ODCG");
volatile unsigned int ODCGCLR;
volatile unsigned int ODCGSET;
volatile unsigned int ODCGINV;
volatile unsigned int CNCON;
typedef union {
  struct {
    unsigned :13;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
  };
  struct {
    unsigned w:32;
  };
} __CNCONbits_t;
volatile __CNCONbits_t CNCONbits __asm__ ("CNCON");
volatile unsigned int CNCONCLR;
volatile unsigned int CNCONSET;
volatile unsigned int CNCONINV;
volatile unsigned int CNEN;
typedef union {
  struct {
    unsigned CNEN0:1;
    unsigned CNEN1:1;
    unsigned CNEN2:1;
    unsigned CNEN3:1;
    unsigned CNEN4:1;
    unsigned CNEN5:1;
    unsigned CNEN6:1;
    unsigned CNEN7:1;
    unsigned CNEN8:1;
    unsigned CNEN9:1;
    unsigned CNEN10:1;
    unsigned CNEN11:1;
    unsigned CNEN12:1;
    unsigned CNEN13:1;
    unsigned CNEN14:1;
    unsigned CNEN15:1;
    unsigned CNEN16:1;
    unsigned CNEN17:1;
    unsigned CNEN18:1;
    unsigned CNEN19:1;
    unsigned CNEN20:1;
    unsigned CNEN21:1;
  };
  struct {
    unsigned w:32;
  };
} __CNENbits_t;
volatile __CNENbits_t CNENbits __asm__ ("CNEN");
volatile unsigned int CNENCLR;
volatile unsigned int CNENSET;
volatile unsigned int CNENINV;
volatile unsigned int CNPUE;
typedef union {
  struct {
    unsigned CNPUE0:1;
    unsigned CNPUE1:1;
    unsigned CNPUE2:1;
    unsigned CNPUE3:1;
    unsigned CNPUE4:1;
    unsigned CNPUE5:1;
    unsigned CNPUE6:1;
    unsigned CNPUE7:1;
    unsigned CNPUE8:1;
    unsigned CNPUE9:1;
    unsigned CNPUE10:1;
    unsigned CNPUE11:1;
    unsigned CNPUE12:1;
    unsigned CNPUE13:1;
    unsigned CNPUE14:1;
    unsigned CNPUE15:1;
    unsigned CNPUE16:1;
    unsigned CNPUE17:1;
    unsigned CNPUE18:1;
    unsigned CNPUE19:1;
    unsigned CNPUE20:1;
    unsigned CNPUE21:1;
  };
  struct {
    unsigned w:32;
  };
} __CNPUEbits_t;
volatile __CNPUEbits_t CNPUEbits __asm__ ("CNPUE");
volatile unsigned int CNPUECLR;
volatile unsigned int CNPUESET;
volatile unsigned int CNPUEINV;
volatile unsigned int ETHCON1;
typedef union {
  struct {
    unsigned BUFCDEC:1;
    unsigned :3;
    unsigned MANFC:1;
    unsigned :2;
    unsigned AUTOFC:1;
    unsigned RXEN:1;
    unsigned TXRTS:1;
    unsigned :3;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned PTV:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHCON1bits_t;
volatile __ETHCON1bits_t ETHCON1bits __asm__ ("ETHCON1");
volatile unsigned int ETHCON1CLR;
volatile unsigned int ETHCON1SET;
volatile unsigned int ETHCON1INV;
volatile unsigned int ETHCON2;
typedef union {
  struct {
    unsigned :4;
    unsigned RXBUF_SZ:7;
  };
  struct {
    unsigned w:32;
  };
} __ETHCON2bits_t;
volatile __ETHCON2bits_t ETHCON2bits __asm__ ("ETHCON2");
volatile unsigned int ETHCON2CLR;
volatile unsigned int ETHCON2SET;
volatile unsigned int ETHCON2INV;
volatile unsigned int ETHTXST;
typedef union {
  struct {
    unsigned :2;
    unsigned TXSTADDR:30;
  };
  struct {
    unsigned w:32;
  };
} __ETHTXSTbits_t;
volatile __ETHTXSTbits_t ETHTXSTbits __asm__ ("ETHTXST");
volatile unsigned int ETHTXSTCLR;
volatile unsigned int ETHTXSTSET;
volatile unsigned int ETHTXSTINV;
volatile unsigned int ETHRXST;
typedef union {
  struct {
    unsigned :2;
    unsigned RXSTADDR:30;
  };
  struct {
    unsigned w:32;
  };
} __ETHRXSTbits_t;
volatile __ETHRXSTbits_t ETHRXSTbits __asm__ ("ETHRXST");
volatile unsigned int ETHRXSTCLR;
volatile unsigned int ETHRXSTSET;
volatile unsigned int ETHRXSTINV;
volatile unsigned int ETHHT0;
typedef union {
  struct {
    unsigned w:32;
  };
  struct {
    unsigned HTLOWER:32;
  };
} __ETHHT0bits_t;
volatile __ETHHT0bits_t ETHHT0bits __asm__ ("ETHHT0");
volatile unsigned int ETHHT0CLR;
volatile unsigned int ETHHT0SET;
volatile unsigned int ETHHT0INV;
volatile unsigned int ETHHT1;
typedef union {
  struct {
    unsigned w:32;
  };
  struct {
    unsigned HTUPPER:32;
  };
} __ETHHT1bits_t;
volatile __ETHHT1bits_t ETHHT1bits __asm__ ("ETHHT1");
volatile unsigned int ETHHT1CLR;
volatile unsigned int ETHHT1SET;
volatile unsigned int ETHHT1INV;
volatile unsigned int ETHPMM0;
typedef union {
  struct {
    unsigned w:32;
  };
  struct {
    unsigned PMMLOWER:32;
  };
} __ETHPMM0bits_t;
volatile __ETHPMM0bits_t ETHPMM0bits __asm__ ("ETHPMM0");
volatile unsigned int ETHPMM0CLR;
volatile unsigned int ETHPMM0SET;
volatile unsigned int ETHPMM0INV;
volatile unsigned int ETHPMM1;
typedef union {
  struct {
    unsigned w:32;
  };
  struct {
    unsigned PMMUPPER:32;
  };
} __ETHPMM1bits_t;
volatile __ETHPMM1bits_t ETHPMM1bits __asm__ ("ETHPMM1");
volatile unsigned int ETHPMM1CLR;
volatile unsigned int ETHPMM1SET;
volatile unsigned int ETHPMM1INV;
volatile unsigned int ETHPMCS;
typedef union {
  struct {
    unsigned PMCS:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHPMCSbits_t;
volatile __ETHPMCSbits_t ETHPMCSbits __asm__ ("ETHPMCS");
volatile unsigned int ETHPMCSCLR;
volatile unsigned int ETHPMCSSET;
volatile unsigned int ETHPMCSINV;
volatile unsigned int ETHPMO;
typedef union {
  struct {
    unsigned PMO:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHPMObits_t;
volatile __ETHPMObits_t ETHPMObits __asm__ ("ETHPMO");
volatile unsigned int ETHPMOCLR;
volatile unsigned int ETHPMOSET;
volatile unsigned int ETHPMOINV;
volatile unsigned int ETHRXFC;
typedef union {
  struct {
    unsigned BCEN:1;
    unsigned MCEN:1;
    unsigned NOTMEEN:1;
    unsigned UCEN:1;
    unsigned RUNTEN:1;
    unsigned RUNTERREN:1;
    unsigned CRCOKEN:1;
    unsigned CRCERREN:1;
    unsigned PMMODE:4;
    unsigned NOTPM:1;
    unsigned :1;
    unsigned MPEN:1;
    unsigned HTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __ETHRXFCbits_t;
volatile __ETHRXFCbits_t ETHRXFCbits __asm__ ("ETHRXFC");
volatile unsigned int ETHRXFCCLR;
volatile unsigned int ETHRXFCSET;
volatile unsigned int ETHRXFCINV;
volatile unsigned int ETHRXWM;
typedef union {
  struct {
    unsigned RXEWM:8;
    unsigned :8;
    unsigned RXFWM:8;
  };
  struct {
    unsigned w:32;
  };
} __ETHRXWMbits_t;
volatile __ETHRXWMbits_t ETHRXWMbits __asm__ ("ETHRXWM");
volatile unsigned int ETHRXWMCLR;
volatile unsigned int ETHRXWMSET;
volatile unsigned int ETHRXWMINV;
volatile unsigned int ETHIEN;
typedef union {
  struct {
    unsigned RXOVFLWIE:1;
    unsigned RXBUFNAIE:1;
    unsigned TXABORTIE:1;
    unsigned TXDONEIE:1;
    unsigned :1;
    unsigned RXACTIE:1;
    unsigned PKTPENDIE:1;
    unsigned RXDONEIE:1;
    unsigned FWMARKIE:1;
    unsigned EWMARKIE:1;
    unsigned :3;
    unsigned RXBUSEIE:1;
    unsigned TXBUSEIE:1;
  };
  struct {
    unsigned w:32;
  };
} __ETHIENbits_t;
volatile __ETHIENbits_t ETHIENbits __asm__ ("ETHIEN");
volatile unsigned int ETHIENCLR;
volatile unsigned int ETHIENSET;
volatile unsigned int ETHIENINV;
volatile unsigned int ETHIRQ;
typedef union {
  struct {
    unsigned RXOVFLW:1;
    unsigned RXBUFNA:1;
    unsigned TXABORT:1;
    unsigned TXDONE:1;
    unsigned :1;
    unsigned RXACT:1;
    unsigned PKTPEND:1;
    unsigned RXDONE:1;
    unsigned FWMARK:1;
    unsigned EWMARK:1;
    unsigned :3;
    unsigned RXBUSE:1;
    unsigned TXBUSE:1;
  };
  struct {
    unsigned w:32;
  };
} __ETHIRQbits_t;
volatile __ETHIRQbits_t ETHIRQbits __asm__ ("ETHIRQ");
volatile unsigned int ETHIRQCLR;
volatile unsigned int ETHIRQSET;
volatile unsigned int ETHIRQINV;
volatile unsigned int ETHSTAT;
typedef union {
  struct {
    unsigned :5;
    unsigned RXBUSY:1;
    unsigned TXBUSY:1;
    unsigned BUSY:1;
    unsigned :8;
    unsigned BUFCNT:8;
  };
  struct {
    unsigned :7;
    unsigned ETHBUSY:1;
  };
  struct {
    unsigned w:32;
  };
} __ETHSTATbits_t;
volatile __ETHSTATbits_t ETHSTATbits __asm__ ("ETHSTAT");
volatile unsigned int ETHSTATCLR;
volatile unsigned int ETHSTATSET;
volatile unsigned int ETHSTATINV;
volatile unsigned int ETHRXOVFLOW;
typedef union {
  struct {
    unsigned RXOVFLWCNT:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHRXOVFLOWbits_t;
volatile __ETHRXOVFLOWbits_t ETHRXOVFLOWbits __asm__ ("ETHRXOVFLOW");
volatile unsigned int ETHRXOVFLOWCLR;
volatile unsigned int ETHRXOVFLOWSET;
volatile unsigned int ETHRXOVFLOWINV;
volatile unsigned int ETHFRMTXOK;
typedef union {
  struct {
    unsigned FRMTXOKCNT:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHFRMTXOKbits_t;
volatile __ETHFRMTXOKbits_t ETHFRMTXOKbits __asm__ ("ETHFRMTXOK");
volatile unsigned int ETHFRMTXOKCLR;
volatile unsigned int ETHFRMTXOKSET;
volatile unsigned int ETHFRMTXOKINV;
volatile unsigned int ETHSCOLFRM;
typedef union {
  struct {
    unsigned SCOLFRMCNT:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHSCOLFRMbits_t;
volatile __ETHSCOLFRMbits_t ETHSCOLFRMbits __asm__ ("ETHSCOLFRM");
volatile unsigned int ETHSCOLFRMCLR;
volatile unsigned int ETHSCOLFRMSET;
volatile unsigned int ETHSCOLFRMINV;
volatile unsigned int ETHMCOLFRM;
typedef union {
  struct {
    unsigned MCOLFRMCNT:16;
  };
  struct {
    unsigned MCOLFRM_CNT:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHMCOLFRMbits_t;
volatile __ETHMCOLFRMbits_t ETHMCOLFRMbits __asm__ ("ETHMCOLFRM");
volatile unsigned int ETHMCOLFRMCLR;
volatile unsigned int ETHMCOLFRMSET;
volatile unsigned int ETHMCOLFRMINV;
volatile unsigned int ETHFRMRXOK;
typedef union {
  struct {
    unsigned FRMRXOKCNT:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHFRMRXOKbits_t;
volatile __ETHFRMRXOKbits_t ETHFRMRXOKbits __asm__ ("ETHFRMRXOK");
volatile unsigned int ETHFRMRXOKCLR;
volatile unsigned int ETHFRMRXOKSET;
volatile unsigned int ETHFRMRXOKINV;
volatile unsigned int ETHFCSERR;
typedef union {
  struct {
    unsigned FCSERRCNT:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHFCSERRbits_t;
volatile __ETHFCSERRbits_t ETHFCSERRbits __asm__ ("ETHFCSERR");
volatile unsigned int ETHFCSERRCLR;
volatile unsigned int ETHFCSERRSET;
volatile unsigned int ETHFCSERRINV;
volatile unsigned int ETHALGNERR;
typedef union {
  struct {
    unsigned ALGNERRCNT:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHALGNERRbits_t;
volatile __ETHALGNERRbits_t ETHALGNERRbits __asm__ ("ETHALGNERR");
volatile unsigned int ETHALGNERRCLR;
volatile unsigned int ETHALGNERRSET;
volatile unsigned int ETHALGNERRINV;
volatile unsigned int EMAC1CFG1;
typedef union {
  struct {
    unsigned RXENABLE:1;
    unsigned PASSALL:1;
    unsigned RXPAUSE:1;
    unsigned TXPAUSE:1;
    unsigned LOOPBACK:1;
    unsigned :3;
    unsigned RESETTFUN:1;
    unsigned RESETTMCS:1;
    unsigned RESETRFUN:1;
    unsigned RESETRMCS:1;
    unsigned :2;
    unsigned SIMRESET:1;
    unsigned SOFTRESET:1;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1CFG1bits_t;
volatile __EMAC1CFG1bits_t EMAC1CFG1bits __asm__ ("EMAC1CFG1");
volatile unsigned int EMACxCFG1;
typedef union {
  struct {
    unsigned RXENABLE:1;
    unsigned PASSALL:1;
    unsigned RXPAUSE:1;
    unsigned TXPAUSE:1;
    unsigned LOOPBACK:1;
    unsigned :3;
    unsigned RESETTFUN:1;
    unsigned RESETTMCS:1;
    unsigned RESETRFUN:1;
    unsigned RESETRMCS:1;
    unsigned :2;
    unsigned SIMRESET:1;
    unsigned SOFTRESET:1;
  };
  struct {
    unsigned w:32;
  };
} __EMACxCFG1bits_t;
volatile __EMACxCFG1bits_t EMACxCFG1bits __asm__ ("EMACxCFG1");
volatile unsigned int EMAC1CFG1CLR;
volatile unsigned int EMACxCFG1CLR;
volatile unsigned int EMAC1CFG1SET;
volatile unsigned int EMACxCFG1SET;
volatile unsigned int EMAC1CFG1INV;
volatile unsigned int EMACxCFG1INV;
volatile unsigned int EMAC1CFG2;
typedef union {
  struct {
    unsigned FULLDPLX:1;
    unsigned LENGTHCK:1;
    unsigned HUGEFRM:1;
    unsigned DELAYCRC:1;
    unsigned CRCENABLE:1;
    unsigned PADENABLE:1;
    unsigned VLANPAD:1;
    unsigned AUTOPAD:1;
    unsigned PUREPRE:1;
    unsigned LONGPRE:1;
    unsigned :2;
    unsigned NOBKOFF:1;
    unsigned BPNOBKOFF:1;
    unsigned EXCESSDFR:1;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1CFG2bits_t;
volatile __EMAC1CFG2bits_t EMAC1CFG2bits __asm__ ("EMAC1CFG2");
volatile unsigned int EMACxCFG2;
typedef union {
  struct {
    unsigned FULLDPLX:1;
    unsigned LENGTHCK:1;
    unsigned HUGEFRM:1;
    unsigned DELAYCRC:1;
    unsigned CRCENABLE:1;
    unsigned PADENABLE:1;
    unsigned VLANPAD:1;
    unsigned AUTOPAD:1;
    unsigned PUREPRE:1;
    unsigned LONGPRE:1;
    unsigned :2;
    unsigned NOBKOFF:1;
    unsigned BPNOBKOFF:1;
    unsigned EXCESSDFR:1;
  };
  struct {
    unsigned w:32;
  };
} __EMACxCFG2bits_t;
volatile __EMACxCFG2bits_t EMACxCFG2bits __asm__ ("EMACxCFG2");
volatile unsigned int EMAC1CFG2CLR;
volatile unsigned int EMACxCFG2CLR;
volatile unsigned int EMAC1CFG2SET;
volatile unsigned int EMACxCFG2SET;
volatile unsigned int EMAC1CFG2INV;
volatile unsigned int EMACxCFG2INV;
volatile unsigned int EMAC1IPGT;
typedef union {
  struct {
    unsigned B2BIPKTGP:7;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1IPGTbits_t;
volatile __EMAC1IPGTbits_t EMAC1IPGTbits __asm__ ("EMAC1IPGT");
volatile unsigned int EMACxIPGT;
typedef union {
  struct {
    unsigned B2BIPKTGP:7;
  };
  struct {
    unsigned w:32;
  };
} __EMACxIPGTbits_t;
volatile __EMACxIPGTbits_t EMACxIPGTbits __asm__ ("EMACxIPGT");
volatile unsigned int EMAC1IPGTCLR;
volatile unsigned int EMACxIPGTCLR;
volatile unsigned int EMAC1IPGTSET;
volatile unsigned int EMACxIPGTSET;
volatile unsigned int EMAC1IPGTINV;
volatile unsigned int EMACxIPGTINV;
volatile unsigned int EMAC1IPGR;
typedef union {
  struct {
    unsigned NB2BIPKTGP2:7;
    unsigned :1;
    unsigned NB2BIPKTGP1:7;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1IPGRbits_t;
volatile __EMAC1IPGRbits_t EMAC1IPGRbits __asm__ ("EMAC1IPGR");
volatile unsigned int EMACxIPGR;
typedef union {
  struct {
    unsigned NB2BIPKTGP2:7;
    unsigned :1;
    unsigned NB2BIPKTGP1:7;
  };
  struct {
    unsigned w:32;
  };
} __EMACxIPGRbits_t;
volatile __EMACxIPGRbits_t EMACxIPGRbits __asm__ ("EMACxIPGR");
volatile unsigned int EMAC1IPGRCLR;
volatile unsigned int EMACxIPGRCLR;
volatile unsigned int EMAC1IPGRSET;
volatile unsigned int EMACxIPGRSET;
volatile unsigned int EMAC1IPGRINV;
volatile unsigned int EMACxIPGRINV;
volatile unsigned int EMAC1CLRT;
typedef union {
  struct {
    unsigned RETX:4;
    unsigned :4;
    unsigned CWINDOW:6;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1CLRTbits_t;
volatile __EMAC1CLRTbits_t EMAC1CLRTbits __asm__ ("EMAC1CLRT");
volatile unsigned int EMACxCLRT;
typedef union {
  struct {
    unsigned RETX:4;
    unsigned :4;
    unsigned CWINDOW:6;
  };
  struct {
    unsigned w:32;
  };
} __EMACxCLRTbits_t;
volatile __EMACxCLRTbits_t EMACxCLRTbits __asm__ ("EMACxCLRT");
volatile unsigned int EMAC1CLRTCLR;
volatile unsigned int EMACxCLRTCLR;
volatile unsigned int EMAC1CLRTSET;
volatile unsigned int EMACxCLRTSET;
volatile unsigned int EMAC1CLRTINV;
volatile unsigned int EMACxCLRTINV;
volatile unsigned int EMAC1MAXF;
typedef union {
  struct {
    unsigned MACMAXF:16;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1MAXFbits_t;
volatile __EMAC1MAXFbits_t EMAC1MAXFbits __asm__ ("EMAC1MAXF");
volatile unsigned int EMACxMAXF;
typedef union {
  struct {
    unsigned MACMAXF:16;
  };
  struct {
    unsigned w:32;
  };
} __EMACxMAXFbits_t;
volatile __EMACxMAXFbits_t EMACxMAXFbits __asm__ ("EMACxMAXF");
volatile unsigned int EMAC1MAXFCLR;
volatile unsigned int EMACxMAXFCLR;
volatile unsigned int EMAC1MAXFSET;
volatile unsigned int EMACxMAXFSET;
volatile unsigned int EMAC1MAXFINV;
volatile unsigned int EMACxMAXFINV;
volatile unsigned int EMAC1SUPP;
typedef union {
  struct {
    unsigned :8;
    unsigned SPEEDRMII:1;
    unsigned :2;
    unsigned RESETRMII:1;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1SUPPbits_t;
volatile __EMAC1SUPPbits_t EMAC1SUPPbits __asm__ ("EMAC1SUPP");
volatile unsigned int EMACxSUPP;
typedef union {
  struct {
    unsigned :8;
    unsigned SPEEDRMII:1;
    unsigned :2;
    unsigned RESETRMII:1;
  };
  struct {
    unsigned w:32;
  };
} __EMACxSUPPbits_t;
volatile __EMACxSUPPbits_t EMACxSUPPbits __asm__ ("EMACxSUPP");
volatile unsigned int EMAC1SUPPCLR;
volatile unsigned int EMACxSUPPCLR;
volatile unsigned int EMAC1SUPPSET;
volatile unsigned int EMACxSUPPSET;
volatile unsigned int EMAC1SUPPINV;
volatile unsigned int EMACxSUPPINV;
volatile unsigned int EMAC1TEST;
typedef union {
  struct {
    unsigned SHRTQNTA:1;
    unsigned TESTPAUSE:1;
    unsigned TESTBP:1;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1TESTbits_t;
volatile __EMAC1TESTbits_t EMAC1TESTbits __asm__ ("EMAC1TEST");
volatile unsigned int EMACxTEST;
typedef union {
  struct {
    unsigned SHRTQNTA:1;
    unsigned TESTPAUSE:1;
    unsigned TESTBP:1;
  };
  struct {
    unsigned w:32;
  };
} __EMACxTESTbits_t;
volatile __EMACxTESTbits_t EMACxTESTbits __asm__ ("EMACxTEST");
volatile unsigned int EMAC1TESTCLR;
volatile unsigned int EMACxTESTCLR;
volatile unsigned int EMAC1TESTSET;
volatile unsigned int EMACxTESTSET;
volatile unsigned int EMAC1TESTINV;
volatile unsigned int EMACxTESTINV;
volatile unsigned int EMAC1MCFG;
typedef union {
  struct {
    unsigned SCANINC:1;
    unsigned NOPRE:1;
    unsigned CLKSEL:4;
    unsigned :9;
    unsigned RESETMGMT:1;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1MCFGbits_t;
volatile __EMAC1MCFGbits_t EMAC1MCFGbits __asm__ ("EMAC1MCFG");
volatile unsigned int EMACxMCFG;
typedef union {
  struct {
    unsigned SCANINC:1;
    unsigned NOPRE:1;
    unsigned CLKSEL:4;
    unsigned :9;
    unsigned RESETMGMT:1;
  };
  struct {
    unsigned w:32;
  };
} __EMACxMCFGbits_t;
volatile __EMACxMCFGbits_t EMACxMCFGbits __asm__ ("EMACxMCFG");
volatile unsigned int EMAC1MCFGCLR;
volatile unsigned int EMACxMCFGCLR;
volatile unsigned int EMAC1MCFGSET;
volatile unsigned int EMACxMCFGSET;
volatile unsigned int EMAC1MCFGINV;
volatile unsigned int EMACxMCFGINV;
volatile unsigned int EMAC1MCMD;
typedef union {
  struct {
    unsigned READ:1;
    unsigned SCAN:1;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1MCMDbits_t;
volatile __EMAC1MCMDbits_t EMAC1MCMDbits __asm__ ("EMAC1MCMD");
volatile unsigned int EMACxMCMD;
typedef union {
  struct {
    unsigned READ:1;
    unsigned SCAN:1;
  };
  struct {
    unsigned w:32;
  };
} __EMACxMCMDbits_t;
volatile __EMACxMCMDbits_t EMACxMCMDbits __asm__ ("EMACxMCMD");
volatile unsigned int EMAC1MCMDCLR;
volatile unsigned int EMACxMCMDCLR;
volatile unsigned int EMAC1MCMDSET;
volatile unsigned int EMACxMCMDSET;
volatile unsigned int EMAC1MCMDINV;
volatile unsigned int EMACxMCMDINV;
volatile unsigned int EMAC1MADR;
typedef union {
  struct {
    unsigned REGADDR:5;
    unsigned :3;
    unsigned PHYADDR:5;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1MADRbits_t;
volatile __EMAC1MADRbits_t EMAC1MADRbits __asm__ ("EMAC1MADR");
volatile unsigned int EMACxMADR;
typedef union {
  struct {
    unsigned REGADDR:5;
    unsigned :3;
    unsigned PHYADDR:5;
  };
  struct {
    unsigned w:32;
  };
} __EMACxMADRbits_t;
volatile __EMACxMADRbits_t EMACxMADRbits __asm__ ("EMACxMADR");
volatile unsigned int EMAC1MADRCLR;
volatile unsigned int EMACxMADRCLR;
volatile unsigned int EMAC1MADRSET;
volatile unsigned int EMACxMADRSET;
volatile unsigned int EMAC1MADRINV;
volatile unsigned int EMACxMADRINV;
volatile unsigned int EMAC1MWTD;
typedef union {
  struct {
    unsigned MWTD:16;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1MWTDbits_t;
volatile __EMAC1MWTDbits_t EMAC1MWTDbits __asm__ ("EMAC1MWTD");
volatile unsigned int EMACxMWTD;
typedef union {
  struct {
    unsigned MWTD:16;
  };
  struct {
    unsigned w:32;
  };
} __EMACxMWTDbits_t;
volatile __EMACxMWTDbits_t EMACxMWTDbits __asm__ ("EMACxMWTD");
volatile unsigned int EMAC1MWTDCLR;
volatile unsigned int EMACxMWTDCLR;
volatile unsigned int EMAC1MWTDSET;
volatile unsigned int EMACxMWTDSET;
volatile unsigned int EMAC1MWTDINV;
volatile unsigned int EMACxMWTDINV;
volatile unsigned int EMAC1MRDD;
typedef union {
  struct {
    unsigned MRDD:16;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1MRDDbits_t;
volatile __EMAC1MRDDbits_t EMAC1MRDDbits __asm__ ("EMAC1MRDD");
volatile unsigned int EMACxMRDD;
typedef union {
  struct {
    unsigned MRDD:16;
  };
  struct {
    unsigned w:32;
  };
} __EMACxMRDDbits_t;
volatile __EMACxMRDDbits_t EMACxMRDDbits __asm__ ("EMACxMRDD");
volatile unsigned int EMAC1MRDDCLR;
volatile unsigned int EMACxMRDDCLR;
volatile unsigned int EMAC1MRDDSET;
volatile unsigned int EMACxMRDDSET;
volatile unsigned int EMAC1MRDDINV;
volatile unsigned int EMACxMRDDINV;
volatile unsigned int EMAC1MIND;
typedef union {
  struct {
    unsigned MIIMBUSY:1;
    unsigned SCAN:1;
    unsigned NOTVALID:1;
    unsigned LINKFAIL:1;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1MINDbits_t;
volatile __EMAC1MINDbits_t EMAC1MINDbits __asm__ ("EMAC1MIND");
volatile unsigned int EMACxMIND;
typedef union {
  struct {
    unsigned MIIMBUSY:1;
    unsigned SCAN:1;
    unsigned NOTVALID:1;
    unsigned LINKFAIL:1;
  };
  struct {
    unsigned w:32;
  };
} __EMACxMINDbits_t;
volatile __EMACxMINDbits_t EMACxMINDbits __asm__ ("EMACxMIND");
volatile unsigned int EMAC1MINDCLR;
volatile unsigned int EMACxMINDCLR;
volatile unsigned int EMAC1MINDSET;
volatile unsigned int EMACxMINDSET;
volatile unsigned int EMAC1MINDINV;
volatile unsigned int EMACxMINDINV;
volatile unsigned int EMAC1SA0;
typedef union {
  struct {
    unsigned STNADDR5:8;
    unsigned STNADDR6:8;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1SA0bits_t;
volatile __EMAC1SA0bits_t EMAC1SA0bits __asm__ ("EMAC1SA0");
volatile unsigned int EMACxSA0;
typedef union {
  struct {
    unsigned STNADDR5:8;
    unsigned STNADDR6:8;
  };
  struct {
    unsigned w:32;
  };
} __EMACxSA0bits_t;
volatile __EMACxSA0bits_t EMACxSA0bits __asm__ ("EMACxSA0");
volatile unsigned int EMAC1SA0CLR;
volatile unsigned int EMACxSA0CLR;
volatile unsigned int EMAC1SA0SET;
volatile unsigned int EMACxSA0SET;
volatile unsigned int EMAC1SA0INV;
volatile unsigned int EMACxSA0INV;
volatile unsigned int EMAC1SA1;
typedef union {
  struct {
    unsigned STNADDR3:8;
    unsigned STNADDR4:8;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1SA1bits_t;
volatile __EMAC1SA1bits_t EMAC1SA1bits __asm__ ("EMAC1SA1");
volatile unsigned int EMACxSA1;
typedef union {
  struct {
    unsigned STNADDR3:8;
    unsigned STNADDR4:8;
  };
  struct {
    unsigned w:32;
  };
} __EMACxSA1bits_t;
volatile __EMACxSA1bits_t EMACxSA1bits __asm__ ("EMACxSA1");
volatile unsigned int EMAC1SA1CLR;
volatile unsigned int EMACxSA1CLR;
volatile unsigned int EMAC1SA1SET;
volatile unsigned int EMACxSA1SET;
volatile unsigned int EMAC1SA1INV;
volatile unsigned int EMACxSA1INV;
volatile unsigned int EMAC1SA2;
typedef union {
  struct {
    unsigned STNADDR1:8;
    unsigned STNADDR2:8;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1SA2bits_t;
volatile __EMAC1SA2bits_t EMAC1SA2bits __asm__ ("EMAC1SA2");
volatile unsigned int EMACxSA2;
typedef union {
  struct {
    unsigned STNADDR1:8;
    unsigned STNADDR2:8;
  };
  struct {
    unsigned w:32;
  };
} __EMACxSA2bits_t;
volatile __EMACxSA2bits_t EMACxSA2bits __asm__ ("EMACxSA2");
volatile unsigned int EMAC1SA2CLR;
volatile unsigned int EMACxSA2CLR;
volatile unsigned int EMAC1SA2SET;
volatile unsigned int EMACxSA2SET;
volatile unsigned int EMAC1SA2INV;
volatile unsigned int EMACxSA2INV;
volatile unsigned int C1CON;
typedef union {
  struct {
    unsigned DNCNT:5;
    unsigned :6;
    unsigned CANBUSY:1;
    unsigned :1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned :4;
    unsigned CANCAP:1;
    unsigned OPMOD:3;
    unsigned REQOP:3;
    unsigned ABAT:1;
  };
  struct {
    unsigned w:32;
  };
} __C1CONbits_t;
volatile __C1CONbits_t C1CONbits __asm__ ("C1CON");
volatile unsigned int C1CONCLR;
volatile unsigned int C1CONSET;
volatile unsigned int C1CONINV;
volatile unsigned int C1CFG;
typedef union {
  struct {
    unsigned BRP:6;
    unsigned SJW:2;
    unsigned PRSEG:3;
    unsigned SEG1PH:3;
    unsigned SAM:1;
    unsigned SEG2PHTS:1;
    unsigned SEG2PH:3;
    unsigned :3;
    unsigned WAKFIL:1;
  };
  struct {
    unsigned w:32;
  };
} __C1CFGbits_t;
volatile __C1CFGbits_t C1CFGbits __asm__ ("C1CFG");
volatile unsigned int C1CFGCLR;
volatile unsigned int C1CFGSET;
volatile unsigned int C1CFGINV;
volatile unsigned int C1INT;
typedef union {
  struct {
    unsigned TBIF:1;
    unsigned RBIF:1;
    unsigned CTMRIF:1;
    unsigned MODIF:1;
    unsigned :7;
    unsigned RBOVIF:1;
    unsigned SERRIF:1;
    unsigned CERRIF:1;
    unsigned WAKIF:1;
    unsigned IVRIF:1;
    unsigned TBIE:1;
    unsigned RBIE:1;
    unsigned CTMRIE:1;
    unsigned MODIE:1;
    unsigned :7;
    unsigned RBOVIE:1;
    unsigned SERRIE:1;
    unsigned CERRIE:1;
    unsigned WAKIE:1;
    unsigned IVRIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1INTbits_t;
volatile __C1INTbits_t C1INTbits __asm__ ("C1INT");
volatile unsigned int C1INTCLR;
volatile unsigned int C1INTSET;
volatile unsigned int C1INTINV;
volatile unsigned int C1VEC;
typedef union {
  struct {
    unsigned ICODE:7;
    unsigned :1;
    unsigned FILHIT:5;
  };
  struct {
    unsigned w:32;
  };
} __C1VECbits_t;
volatile __C1VECbits_t C1VECbits __asm__ ("C1VEC");
volatile unsigned int C1VECCLR;
volatile unsigned int C1VECSET;
volatile unsigned int C1VECINV;
volatile unsigned int C1TREC;
typedef union {
  struct {
    unsigned RERRCNT:8;
    unsigned TERRCNT:8;
    unsigned EWARN:1;
    unsigned RXWARN:1;
    unsigned TXWARN:1;
    unsigned RXBP:1;
    unsigned TXBP:1;
    unsigned TXBO:1;
  };
  struct {
    unsigned w:32;
  };
} __C1TRECbits_t;
volatile __C1TRECbits_t C1TRECbits __asm__ ("C1TREC");
volatile unsigned int C1TRECCLR;
volatile unsigned int C1TRECSET;
volatile unsigned int C1TRECINV;
volatile unsigned int C1FSTAT;
typedef union {
  struct {
    unsigned FIFOIP:32;
  };
  struct {
    unsigned FIFOIP0:1;
    unsigned FIFOIP1:1;
    unsigned FIFOIP2:1;
    unsigned FIFOIP3:1;
    unsigned FIFOIP4:1;
    unsigned FIFOIP5:1;
    unsigned FIFOIP6:1;
    unsigned FIFOIP7:1;
    unsigned FIFOIP8:1;
    unsigned FIFOIP9:1;
    unsigned FIFOIP10:1;
    unsigned FIFOIP11:1;
    unsigned FIFOIP12:1;
    unsigned FIFOIP13:1;
    unsigned FIFOIP14:1;
    unsigned FIFOIP15:1;
    unsigned FIFOIP16:1;
    unsigned FIFOIP17:1;
    unsigned FIFOIP18:1;
    unsigned FIFOIP19:1;
    unsigned FIFOIP20:1;
    unsigned FIFOIP21:1;
    unsigned FIFOIP22:1;
    unsigned FIFOIP23:1;
    unsigned FIFOIP24:1;
    unsigned FIFOIP25:1;
    unsigned FIFOIP26:1;
    unsigned FIFOIP27:1;
    unsigned FIFOIP28:1;
    unsigned FIFOIP29:1;
    unsigned FIFOIP30:1;
    unsigned FIFOIP31:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FSTATbits_t;
volatile __C1FSTATbits_t C1FSTATbits __asm__ ("C1FSTAT");
volatile unsigned int C1FSTATCLR;
volatile unsigned int C1FSTATSET;
volatile unsigned int C1FSTATINV;
volatile unsigned int C1RXOVF;
typedef union {
  struct {
    unsigned RXOVF:32;
  };
  struct {
    unsigned RXOVF0:1;
    unsigned RXOVF1:1;
    unsigned RXOVF2:1;
    unsigned RXOVF3:1;
    unsigned RXOVF4:1;
    unsigned RXOVF5:1;
    unsigned RXOVF6:1;
    unsigned RXOVF7:1;
    unsigned RXOVF8:1;
    unsigned RXOVF9:1;
    unsigned RXOVF10:1;
    unsigned RXOVF11:1;
    unsigned RXOVF12:1;
    unsigned RXOVF13:1;
    unsigned RXOVF14:1;
    unsigned RXOVF15:1;
    unsigned RXOVF16:1;
    unsigned RXOVF17:1;
    unsigned RXOVF18:1;
    unsigned RXOVF19:1;
    unsigned RXOVF20:1;
    unsigned RXOVF21:1;
    unsigned RXOVF22:1;
    unsigned RXOVF23:1;
    unsigned RXOVF24:1;
    unsigned RXOVF25:1;
    unsigned RXOVF26:1;
    unsigned RXOVF27:1;
    unsigned RXOVF28:1;
    unsigned RXOVF29:1;
    unsigned RXOVF30:1;
    unsigned RXOVF31:1;
  };
  struct {
    unsigned w:32;
  };
} __C1RXOVFbits_t;
volatile __C1RXOVFbits_t C1RXOVFbits __asm__ ("C1RXOVF");
volatile unsigned int C1RXOVFCLR;
volatile unsigned int C1RXOVFSET;
volatile unsigned int C1RXOVFINV;
volatile unsigned int C1TMR;
typedef union {
  struct {
    unsigned CANTSPRE:16;
    unsigned CANTS:16;
  };
  struct {
    unsigned w:32;
  };
} __C1TMRbits_t;
volatile __C1TMRbits_t C1TMRbits __asm__ ("C1TMR");
volatile unsigned int C1TMRCLR;
volatile unsigned int C1TMRSET;
volatile unsigned int C1TMRINV;
volatile unsigned int C1RXM0;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXM0bits_t;
volatile __C1RXM0bits_t C1RXM0bits __asm__ ("C1RXM0");
volatile unsigned int C1RXM0CLR;
volatile unsigned int C1RXM0SET;
volatile unsigned int C1RXM0INV;
volatile unsigned int C1RXM1;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXM1bits_t;
volatile __C1RXM1bits_t C1RXM1bits __asm__ ("C1RXM1");
volatile unsigned int C1RXM1CLR;
volatile unsigned int C1RXM1SET;
volatile unsigned int C1RXM1INV;
volatile unsigned int C1RXM2;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXM2bits_t;
volatile __C1RXM2bits_t C1RXM2bits __asm__ ("C1RXM2");
volatile unsigned int C1RXM2CLR;
volatile unsigned int C1RXM2SET;
volatile unsigned int C1RXM2INV;
volatile unsigned int C1RXM3;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXM3bits_t;
volatile __C1RXM3bits_t C1RXM3bits __asm__ ("C1RXM3");
volatile unsigned int C1RXM3CLR;
volatile unsigned int C1RXM3SET;
volatile unsigned int C1RXM3INV;
volatile unsigned int C1FLTCON0;
typedef union {
  struct {
    unsigned FSEL0:5;
    unsigned MSEL0:2;
    unsigned FLTEN0:1;
    unsigned FSEL1:5;
    unsigned MSEL1:2;
    unsigned FLTEN1:1;
    unsigned FSEL2:5;
    unsigned MSEL2:2;
    unsigned FLTEN2:1;
    unsigned FSEL3:5;
    unsigned MSEL3:2;
    unsigned FLTEN3:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FLTCON0bits_t;
volatile __C1FLTCON0bits_t C1FLTCON0bits __asm__ ("C1FLTCON0");
volatile unsigned int C1FLTCON0CLR;
volatile unsigned int C1FLTCON0SET;
volatile unsigned int C1FLTCON0INV;
volatile unsigned int C1FLTCON1;
typedef union {
  struct {
    unsigned FSEL4:5;
    unsigned MSEL4:2;
    unsigned FLTEN4:1;
    unsigned FSEL5:5;
    unsigned MSEL5:2;
    unsigned FLTEN5:1;
    unsigned FSEL6:5;
    unsigned MSEL6:2;
    unsigned FLTEN6:1;
    unsigned FSEL7:5;
    unsigned MSEL7:2;
    unsigned FLTEN7:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FLTCON1bits_t;
volatile __C1FLTCON1bits_t C1FLTCON1bits __asm__ ("C1FLTCON1");
volatile unsigned int C1FLTCON1CLR;
volatile unsigned int C1FLTCON1SET;
volatile unsigned int C1FLTCON1INV;
volatile unsigned int C1FLTCON2;
typedef union {
  struct {
    unsigned FSEL8:5;
    unsigned MSEL8:2;
    unsigned FLTEN8:1;
    unsigned FSEL9:5;
    unsigned MSEL9:2;
    unsigned FLTEN9:1;
    unsigned FSEL10:5;
    unsigned MSEL10:2;
    unsigned FLTEN10:1;
    unsigned FSEL11:5;
    unsigned MSEL11:2;
    unsigned FLTEN11:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FLTCON2bits_t;
volatile __C1FLTCON2bits_t C1FLTCON2bits __asm__ ("C1FLTCON2");
volatile unsigned int C1FLTCON2CLR;
volatile unsigned int C1FLTCON2SET;
volatile unsigned int C1FLTCON2INV;
volatile unsigned int C1FLTCON3;
typedef union {
  struct {
    unsigned FSEL12:5;
    unsigned MSEL12:2;
    unsigned FLTEN12:1;
    unsigned FSEL13:5;
    unsigned MSEL13:2;
    unsigned FLTEN13:1;
    unsigned FSEL14:5;
    unsigned MSEL14:2;
    unsigned FLTEN14:1;
    unsigned FSEL15:5;
    unsigned MSEL15:2;
    unsigned FLTEN15:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FLTCON3bits_t;
volatile __C1FLTCON3bits_t C1FLTCON3bits __asm__ ("C1FLTCON3");
volatile unsigned int C1FLTCON3CLR;
volatile unsigned int C1FLTCON3SET;
volatile unsigned int C1FLTCON3INV;
volatile unsigned int C1FLTCON4;
typedef union {
  struct {
    unsigned FSEL16:5;
    unsigned MSEL16:2;
    unsigned FLTEN16:1;
    unsigned FSEL17:5;
    unsigned MSEL17:2;
    unsigned FLTEN17:1;
    unsigned FSEL18:5;
    unsigned MSEL18:2;
    unsigned FLTEN18:1;
    unsigned FSEL19:5;
    unsigned MSEL19:2;
    unsigned FLTEN19:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FLTCON4bits_t;
volatile __C1FLTCON4bits_t C1FLTCON4bits __asm__ ("C1FLTCON4");
volatile unsigned int C1FLTCON4CLR;
volatile unsigned int C1FLTCON4SET;
volatile unsigned int C1FLTCON4INV;
volatile unsigned int C1FLTCON5;
typedef union {
  struct {
    unsigned FSEL20:5;
    unsigned MSEL20:2;
    unsigned FLTEN20:1;
    unsigned FSEL21:5;
    unsigned MSEL21:2;
    unsigned FLTEN21:1;
    unsigned FSEL22:5;
    unsigned MSEL22:2;
    unsigned FLTEN22:1;
    unsigned FSEL23:5;
    unsigned MSEL23:2;
    unsigned FLTEN23:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FLTCON5bits_t;
volatile __C1FLTCON5bits_t C1FLTCON5bits __asm__ ("C1FLTCON5");
volatile unsigned int C1FLTCON5CLR;
volatile unsigned int C1FLTCON5SET;
volatile unsigned int C1FLTCON5INV;
volatile unsigned int C1FLTCON6;
typedef union {
  struct {
    unsigned FSEL24:5;
    unsigned MSEL24:2;
    unsigned FLTEN24:1;
    unsigned FSEL25:5;
    unsigned MSEL25:2;
    unsigned FLTEN25:1;
    unsigned FSEL26:5;
    unsigned MSEL26:2;
    unsigned FLTEN26:1;
    unsigned FSEL27:5;
    unsigned MSEL27:2;
    unsigned FLTEN27:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FLTCON6bits_t;
volatile __C1FLTCON6bits_t C1FLTCON6bits __asm__ ("C1FLTCON6");
volatile unsigned int C1FLTCON6CLR;
volatile unsigned int C1FLTCON6SET;
volatile unsigned int C1FLTCON6INV;
volatile unsigned int C1FLTCON7;
typedef union {
  struct {
    unsigned FSEL28:5;
    unsigned MSEL28:2;
    unsigned FLTEN28:1;
    unsigned FSEL29:5;
    unsigned MSEL29:2;
    unsigned FLTEN29:1;
    unsigned FSEL30:5;
    unsigned MSEL30:2;
    unsigned FLTEN30:1;
    unsigned FSEL31:5;
    unsigned MSEL31:2;
    unsigned FLTEN31:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FLTCON7bits_t;
volatile __C1FLTCON7bits_t C1FLTCON7bits __asm__ ("C1FLTCON7");
volatile unsigned int C1FLTCON7CLR;
volatile unsigned int C1FLTCON7SET;
volatile unsigned int C1FLTCON7INV;
volatile unsigned int C1RXF0;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF0bits_t;
volatile __C1RXF0bits_t C1RXF0bits __asm__ ("C1RXF0");
volatile unsigned int C1RXF0CLR;
volatile unsigned int C1RXF0SET;
volatile unsigned int C1RXF0INV;
volatile unsigned int C1RXF1;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF1bits_t;
volatile __C1RXF1bits_t C1RXF1bits __asm__ ("C1RXF1");
volatile unsigned int C1RXF1CLR;
volatile unsigned int C1RXF1SET;
volatile unsigned int C1RXF1INV;
volatile unsigned int C1RXF2;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF2bits_t;
volatile __C1RXF2bits_t C1RXF2bits __asm__ ("C1RXF2");
volatile unsigned int C1RXF2CLR;
volatile unsigned int C1RXF2SET;
volatile unsigned int C1RXF2INV;
volatile unsigned int C1RXF3;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF3bits_t;
volatile __C1RXF3bits_t C1RXF3bits __asm__ ("C1RXF3");
volatile unsigned int C1RXF3CLR;
volatile unsigned int C1RXF3SET;
volatile unsigned int C1RXF3INV;
volatile unsigned int C1RXF4;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF4bits_t;
volatile __C1RXF4bits_t C1RXF4bits __asm__ ("C1RXF4");
volatile unsigned int C1RXF4CLR;
volatile unsigned int C1RXF4SET;
volatile unsigned int C1RXF4INV;
volatile unsigned int C1RXF5;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF5bits_t;
volatile __C1RXF5bits_t C1RXF5bits __asm__ ("C1RXF5");
volatile unsigned int C1RXF5CLR;
volatile unsigned int C1RXF5SET;
volatile unsigned int C1RXF5INV;
volatile unsigned int C1RXF6;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF6bits_t;
volatile __C1RXF6bits_t C1RXF6bits __asm__ ("C1RXF6");
volatile unsigned int C1RXF6CLR;
volatile unsigned int C1RXF6SET;
volatile unsigned int C1RXF6INV;
volatile unsigned int C1RXF7;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF7bits_t;
volatile __C1RXF7bits_t C1RXF7bits __asm__ ("C1RXF7");
volatile unsigned int C1RXF7CLR;
volatile unsigned int C1RXF7SET;
volatile unsigned int C1RXF7INV;
volatile unsigned int C1RXF8;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF8bits_t;
volatile __C1RXF8bits_t C1RXF8bits __asm__ ("C1RXF8");
volatile unsigned int C1RXF8CLR;
volatile unsigned int C1RXF8SET;
volatile unsigned int C1RXF8INV;
volatile unsigned int C1RXF9;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF9bits_t;
volatile __C1RXF9bits_t C1RXF9bits __asm__ ("C1RXF9");
volatile unsigned int C1RXF9CLR;
volatile unsigned int C1RXF9SET;
volatile unsigned int C1RXF9INV;
volatile unsigned int C1RXF10;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF10bits_t;
volatile __C1RXF10bits_t C1RXF10bits __asm__ ("C1RXF10");
volatile unsigned int C1RXF10CLR;
volatile unsigned int C1RXF10SET;
volatile unsigned int C1RXF10INV;
volatile unsigned int C1RXF11;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF11bits_t;
volatile __C1RXF11bits_t C1RXF11bits __asm__ ("C1RXF11");
volatile unsigned int C1RXF11CLR;
volatile unsigned int C1RXF11SET;
volatile unsigned int C1RXF11INV;
volatile unsigned int C1RXF12;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF12bits_t;
volatile __C1RXF12bits_t C1RXF12bits __asm__ ("C1RXF12");
volatile unsigned int C1RXF12CLR;
volatile unsigned int C1RXF12SET;
volatile unsigned int C1RXF12INV;
volatile unsigned int C1RXF13;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF13bits_t;
volatile __C1RXF13bits_t C1RXF13bits __asm__ ("C1RXF13");
volatile unsigned int C1RXF13CLR;
volatile unsigned int C1RXF13SET;
volatile unsigned int C1RXF13INV;
volatile unsigned int C1RXF14;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF14bits_t;
volatile __C1RXF14bits_t C1RXF14bits __asm__ ("C1RXF14");
volatile unsigned int C1RXF14CLR;
volatile unsigned int C1RXF14SET;
volatile unsigned int C1RXF14INV;
volatile unsigned int C1RXF15;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF15bits_t;
volatile __C1RXF15bits_t C1RXF15bits __asm__ ("C1RXF15");
volatile unsigned int C1RXF15CLR;
volatile unsigned int C1RXF15SET;
volatile unsigned int C1RXF15INV;
volatile unsigned int C1RXF16;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF16bits_t;
volatile __C1RXF16bits_t C1RXF16bits __asm__ ("C1RXF16");
volatile unsigned int C1RXF16CLR;
volatile unsigned int C1RXF16SET;
volatile unsigned int C1RXF16INV;
volatile unsigned int C1RXF17;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF17bits_t;
volatile __C1RXF17bits_t C1RXF17bits __asm__ ("C1RXF17");
volatile unsigned int C1RXF17CLR;
volatile unsigned int C1RXF17SET;
volatile unsigned int C1RXF17INV;
volatile unsigned int C1RXF18;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF18bits_t;
volatile __C1RXF18bits_t C1RXF18bits __asm__ ("C1RXF18");
volatile unsigned int C1RXF18CLR;
volatile unsigned int C1RXF18SET;
volatile unsigned int C1RXF18INV;
volatile unsigned int C1RXF19;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF19bits_t;
volatile __C1RXF19bits_t C1RXF19bits __asm__ ("C1RXF19");
volatile unsigned int C1RXF19CLR;
volatile unsigned int C1RXF19SET;
volatile unsigned int C1RXF19INV;
volatile unsigned int C1RXF20;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF20bits_t;
volatile __C1RXF20bits_t C1RXF20bits __asm__ ("C1RXF20");
volatile unsigned int C1RXF20CLR;
volatile unsigned int C1RXF20SET;
volatile unsigned int C1RXF20INV;
volatile unsigned int C1RXF21;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF21bits_t;
volatile __C1RXF21bits_t C1RXF21bits __asm__ ("C1RXF21");
volatile unsigned int C1RXF21CLR;
volatile unsigned int C1RXF21SET;
volatile unsigned int C1RXF21INV;
volatile unsigned int C1RXF22;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF22bits_t;
volatile __C1RXF22bits_t C1RXF22bits __asm__ ("C1RXF22");
volatile unsigned int C1RXF22CLR;
volatile unsigned int C1RXF22SET;
volatile unsigned int C1RXF22INV;
volatile unsigned int C1RXF23;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF23bits_t;
volatile __C1RXF23bits_t C1RXF23bits __asm__ ("C1RXF23");
volatile unsigned int C1RXF23CLR;
volatile unsigned int C1RXF23SET;
volatile unsigned int C1RXF23INV;
volatile unsigned int C1RXF24;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF24bits_t;
volatile __C1RXF24bits_t C1RXF24bits __asm__ ("C1RXF24");
volatile unsigned int C1RXF24CLR;
volatile unsigned int C1RXF24SET;
volatile unsigned int C1RXF24INV;
volatile unsigned int C1RXF25;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF25bits_t;
volatile __C1RXF25bits_t C1RXF25bits __asm__ ("C1RXF25");
volatile unsigned int C1RXF25CLR;
volatile unsigned int C1RXF25SET;
volatile unsigned int C1RXF25INV;
volatile unsigned int C1RXF26;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF26bits_t;
volatile __C1RXF26bits_t C1RXF26bits __asm__ ("C1RXF26");
volatile unsigned int C1RXF26CLR;
volatile unsigned int C1RXF26SET;
volatile unsigned int C1RXF26INV;
volatile unsigned int C1RXF27;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF27bits_t;
volatile __C1RXF27bits_t C1RXF27bits __asm__ ("C1RXF27");
volatile unsigned int C1RXF27CLR;
volatile unsigned int C1RXF27SET;
volatile unsigned int C1RXF27INV;
volatile unsigned int C1RXF28;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF28bits_t;
volatile __C1RXF28bits_t C1RXF28bits __asm__ ("C1RXF28");
volatile unsigned int C1RXF28CLR;
volatile unsigned int C1RXF28SET;
volatile unsigned int C1RXF28INV;
volatile unsigned int C1RXF29;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF29bits_t;
volatile __C1RXF29bits_t C1RXF29bits __asm__ ("C1RXF29");
volatile unsigned int C1RXF29CLR;
volatile unsigned int C1RXF29SET;
volatile unsigned int C1RXF29INV;
volatile unsigned int C1RXF30;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF30bits_t;
volatile __C1RXF30bits_t C1RXF30bits __asm__ ("C1RXF30");
volatile unsigned int C1RXF30CLR;
volatile unsigned int C1RXF30SET;
volatile unsigned int C1RXF30INV;
volatile unsigned int C1RXF31;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C1RXF31bits_t;
volatile __C1RXF31bits_t C1RXF31bits __asm__ ("C1RXF31");
volatile unsigned int C1RXF31CLR;
volatile unsigned int C1RXF31SET;
volatile unsigned int C1RXF31INV;
volatile unsigned int C1FIFOBA;
volatile unsigned int C1FIFOBACLR;
volatile unsigned int C1FIFOBASET;
volatile unsigned int C1FIFOBAINV;
volatile unsigned int C1FIFOCON0;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON0bits_t;
volatile __C1FIFOCON0bits_t C1FIFOCON0bits __asm__ ("C1FIFOCON0");
volatile unsigned int C1FIFOCON0CLR;
volatile unsigned int C1FIFOCON0SET;
volatile unsigned int C1FIFOCON0INV;
volatile unsigned int C1FIFOINT0;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT0bits_t;
volatile __C1FIFOINT0bits_t C1FIFOINT0bits __asm__ ("C1FIFOINT0");
volatile unsigned int C1FIFOINT0CLR;
volatile unsigned int C1FIFOINT0SET;
volatile unsigned int C1FIFOINT0INV;
volatile unsigned int C1FIFOUA0;
volatile unsigned int C1FIFOUA0CLR;
volatile unsigned int C1FIFOUA0SET;
volatile unsigned int C1FIFOUA0INV;
volatile unsigned int C1FIFOCI0;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI0bits_t;
volatile __C1FIFOCI0bits_t C1FIFOCI0bits __asm__ ("C1FIFOCI0");
volatile unsigned int C1FIFOCI0CLR;
volatile unsigned int C1FIFOCI0SET;
volatile unsigned int C1FIFOCI0INV;
volatile unsigned int C1FIFOCON1;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON1bits_t;
volatile __C1FIFOCON1bits_t C1FIFOCON1bits __asm__ ("C1FIFOCON1");
volatile unsigned int C1FIFOCON1CLR;
volatile unsigned int C1FIFOCON1SET;
volatile unsigned int C1FIFOCON1INV;
volatile unsigned int C1FIFOINT1;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT1bits_t;
volatile __C1FIFOINT1bits_t C1FIFOINT1bits __asm__ ("C1FIFOINT1");
volatile unsigned int C1FIFOINT1CLR;
volatile unsigned int C1FIFOINT1SET;
volatile unsigned int C1FIFOINT1INV;
volatile unsigned int C1FIFOUA1;
volatile unsigned int C1FIFOUA1CLR;
volatile unsigned int C1FIFOUA1SET;
volatile unsigned int C1FIFOUA1INV;
volatile unsigned int C1FIFOCI1;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI1bits_t;
volatile __C1FIFOCI1bits_t C1FIFOCI1bits __asm__ ("C1FIFOCI1");
volatile unsigned int C1FIFOCI1CLR;
volatile unsigned int C1FIFOCI1SET;
volatile unsigned int C1FIFOCI1INV;
volatile unsigned int C1FIFOCON2;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON2bits_t;
volatile __C1FIFOCON2bits_t C1FIFOCON2bits __asm__ ("C1FIFOCON2");
volatile unsigned int C1FIFOCON2CLR;
volatile unsigned int C1FIFOCON2SET;
volatile unsigned int C1FIFOCON2INV;
volatile unsigned int C1FIFOINT2;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT2bits_t;
volatile __C1FIFOINT2bits_t C1FIFOINT2bits __asm__ ("C1FIFOINT2");
volatile unsigned int C1FIFOINT2CLR;
volatile unsigned int C1FIFOINT2SET;
volatile unsigned int C1FIFOINT2INV;
volatile unsigned int C1FIFOUA2;
volatile unsigned int C1FIFOUA2CLR;
volatile unsigned int C1FIFOUA2SET;
volatile unsigned int C1FIFOUA2INV;
volatile unsigned int C1FIFOCI2;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI2bits_t;
volatile __C1FIFOCI2bits_t C1FIFOCI2bits __asm__ ("C1FIFOCI2");
volatile unsigned int C1FIFOCI2CLR;
volatile unsigned int C1FIFOCI2SET;
volatile unsigned int C1FIFOCI2INV;
volatile unsigned int C1FIFOCON3;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON3bits_t;
volatile __C1FIFOCON3bits_t C1FIFOCON3bits __asm__ ("C1FIFOCON3");
volatile unsigned int C1FIFOCON3CLR;
volatile unsigned int C1FIFOCON3SET;
volatile unsigned int C1FIFOCON3INV;
volatile unsigned int C1FIFOINT3;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT3bits_t;
volatile __C1FIFOINT3bits_t C1FIFOINT3bits __asm__ ("C1FIFOINT3");
volatile unsigned int C1FIFOINT3CLR;
volatile unsigned int C1FIFOINT3SET;
volatile unsigned int C1FIFOINT3INV;
volatile unsigned int C1FIFOUA3;
volatile unsigned int C1FIFOUA3CLR;
volatile unsigned int C1FIFOUA3SET;
volatile unsigned int C1FIFOUA3INV;
volatile unsigned int C1FIFOCI3;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI3bits_t;
volatile __C1FIFOCI3bits_t C1FIFOCI3bits __asm__ ("C1FIFOCI3");
volatile unsigned int C1FIFOCI3CLR;
volatile unsigned int C1FIFOCI3SET;
volatile unsigned int C1FIFOCI3INV;
volatile unsigned int C1FIFOCON4;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON4bits_t;
volatile __C1FIFOCON4bits_t C1FIFOCON4bits __asm__ ("C1FIFOCON4");
volatile unsigned int C1FIFOCON4CLR;
volatile unsigned int C1FIFOCON4SET;
volatile unsigned int C1FIFOCON4INV;
volatile unsigned int C1FIFOINT4;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT4bits_t;
volatile __C1FIFOINT4bits_t C1FIFOINT4bits __asm__ ("C1FIFOINT4");
volatile unsigned int C1FIFOINT4CLR;
volatile unsigned int C1FIFOINT4SET;
volatile unsigned int C1FIFOINT4INV;
volatile unsigned int C1FIFOUA4;
volatile unsigned int C1FIFOUA4CLR;
volatile unsigned int C1FIFOUA4SET;
volatile unsigned int C1FIFOUA4INV;
volatile unsigned int C1FIFOCI4;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI4bits_t;
volatile __C1FIFOCI4bits_t C1FIFOCI4bits __asm__ ("C1FIFOCI4");
volatile unsigned int C1FIFOCI4CLR;
volatile unsigned int C1FIFOCI4SET;
volatile unsigned int C1FIFOCI4INV;
volatile unsigned int C1FIFOCON5;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON5bits_t;
volatile __C1FIFOCON5bits_t C1FIFOCON5bits __asm__ ("C1FIFOCON5");
volatile unsigned int C1FIFOCON5CLR;
volatile unsigned int C1FIFOCON5SET;
volatile unsigned int C1FIFOCON5INV;
volatile unsigned int C1FIFOINT5;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT5bits_t;
volatile __C1FIFOINT5bits_t C1FIFOINT5bits __asm__ ("C1FIFOINT5");
volatile unsigned int C1FIFOINT5CLR;
volatile unsigned int C1FIFOINT5SET;
volatile unsigned int C1FIFOINT5INV;
volatile unsigned int C1FIFOUA5;
volatile unsigned int C1FIFOUA5CLR;
volatile unsigned int C1FIFOUA5SET;
volatile unsigned int C1FIFOUA5INV;
volatile unsigned int C1FIFOCI5;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI5bits_t;
volatile __C1FIFOCI5bits_t C1FIFOCI5bits __asm__ ("C1FIFOCI5");
volatile unsigned int C1FIFOCI5CLR;
volatile unsigned int C1FIFOCI5SET;
volatile unsigned int C1FIFOCI5INV;
volatile unsigned int C1FIFOCON6;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON6bits_t;
volatile __C1FIFOCON6bits_t C1FIFOCON6bits __asm__ ("C1FIFOCON6");
volatile unsigned int C1FIFOCON6CLR;
volatile unsigned int C1FIFOCON6SET;
volatile unsigned int C1FIFOCON6INV;
volatile unsigned int C1FIFOINT6;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT6bits_t;
volatile __C1FIFOINT6bits_t C1FIFOINT6bits __asm__ ("C1FIFOINT6");
volatile unsigned int C1FIFOINT6CLR;
volatile unsigned int C1FIFOINT6SET;
volatile unsigned int C1FIFOINT6INV;
volatile unsigned int C1FIFOUA6;
volatile unsigned int C1FIFOUA6CLR;
volatile unsigned int C1FIFOUA6SET;
volatile unsigned int C1FIFOUA6INV;
volatile unsigned int C1FIFOCI6;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI6bits_t;
volatile __C1FIFOCI6bits_t C1FIFOCI6bits __asm__ ("C1FIFOCI6");
volatile unsigned int C1FIFOCI6CLR;
volatile unsigned int C1FIFOCI6SET;
volatile unsigned int C1FIFOCI6INV;
volatile unsigned int C1FIFOCON7;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON7bits_t;
volatile __C1FIFOCON7bits_t C1FIFOCON7bits __asm__ ("C1FIFOCON7");
volatile unsigned int C1FIFOCON7CLR;
volatile unsigned int C1FIFOCON7SET;
volatile unsigned int C1FIFOCON7INV;
volatile unsigned int C1FIFOINT7;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT7bits_t;
volatile __C1FIFOINT7bits_t C1FIFOINT7bits __asm__ ("C1FIFOINT7");
volatile unsigned int C1FIFOINT7CLR;
volatile unsigned int C1FIFOINT7SET;
volatile unsigned int C1FIFOINT7INV;
volatile unsigned int C1FIFOUA7;
volatile unsigned int C1FIFOUA7CLR;
volatile unsigned int C1FIFOUA7SET;
volatile unsigned int C1FIFOUA7INV;
volatile unsigned int C1FIFOCI7;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI7bits_t;
volatile __C1FIFOCI7bits_t C1FIFOCI7bits __asm__ ("C1FIFOCI7");
volatile unsigned int C1FIFOCI7CLR;
volatile unsigned int C1FIFOCI7SET;
volatile unsigned int C1FIFOCI7INV;
volatile unsigned int C1FIFOCON8;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON8bits_t;
volatile __C1FIFOCON8bits_t C1FIFOCON8bits __asm__ ("C1FIFOCON8");
volatile unsigned int C1FIFOCON8CLR;
volatile unsigned int C1FIFOCON8SET;
volatile unsigned int C1FIFOCON8INV;
volatile unsigned int C1FIFOINT8;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT8bits_t;
volatile __C1FIFOINT8bits_t C1FIFOINT8bits __asm__ ("C1FIFOINT8");
volatile unsigned int C1FIFOINT8CLR;
volatile unsigned int C1FIFOINT8SET;
volatile unsigned int C1FIFOINT8INV;
volatile unsigned int C1FIFOUA8;
volatile unsigned int C1FIFOUA8CLR;
volatile unsigned int C1FIFOUA8SET;
volatile unsigned int C1FIFOUA8INV;
volatile unsigned int C1FIFOCI8;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI8bits_t;
volatile __C1FIFOCI8bits_t C1FIFOCI8bits __asm__ ("C1FIFOCI8");
volatile unsigned int C1FIFOCI8CLR;
volatile unsigned int C1FIFOCI8SET;
volatile unsigned int C1FIFOCI8INV;
volatile unsigned int C1FIFOCON9;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON9bits_t;
volatile __C1FIFOCON9bits_t C1FIFOCON9bits __asm__ ("C1FIFOCON9");
volatile unsigned int C1FIFOCON9CLR;
volatile unsigned int C1FIFOCON9SET;
volatile unsigned int C1FIFOCON9INV;
volatile unsigned int C1FIFOINT9;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT9bits_t;
volatile __C1FIFOINT9bits_t C1FIFOINT9bits __asm__ ("C1FIFOINT9");
volatile unsigned int C1FIFOINT9CLR;
volatile unsigned int C1FIFOINT9SET;
volatile unsigned int C1FIFOINT9INV;
volatile unsigned int C1FIFOUA9;
volatile unsigned int C1FIFOUA9CLR;
volatile unsigned int C1FIFOUA9SET;
volatile unsigned int C1FIFOUA9INV;
volatile unsigned int C1FIFOCI9;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI9bits_t;
volatile __C1FIFOCI9bits_t C1FIFOCI9bits __asm__ ("C1FIFOCI9");
volatile unsigned int C1FIFOCI9CLR;
volatile unsigned int C1FIFOCI9SET;
volatile unsigned int C1FIFOCI9INV;
volatile unsigned int C1FIFOCON10;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON10bits_t;
volatile __C1FIFOCON10bits_t C1FIFOCON10bits __asm__ ("C1FIFOCON10");
volatile unsigned int C1FIFOCON10CLR;
volatile unsigned int C1FIFOCON10SET;
volatile unsigned int C1FIFOCON10INV;
volatile unsigned int C1FIFOINT10;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT10bits_t;
volatile __C1FIFOINT10bits_t C1FIFOINT10bits __asm__ ("C1FIFOINT10");
volatile unsigned int C1FIFOINT10CLR;
volatile unsigned int C1FIFOINT10SET;
volatile unsigned int C1FIFOINT10INV;
volatile unsigned int C1FIFOUA10;
volatile unsigned int C1FIFOUA10CLR;
volatile unsigned int C1FIFOUA10SET;
volatile unsigned int C1FIFOUA10INV;
volatile unsigned int C1FIFOCI10;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI10bits_t;
volatile __C1FIFOCI10bits_t C1FIFOCI10bits __asm__ ("C1FIFOCI10");
volatile unsigned int C1FIFOCI10CLR;
volatile unsigned int C1FIFOCI10SET;
volatile unsigned int C1FIFOCI10INV;
volatile unsigned int C1FIFOCON11;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON11bits_t;
volatile __C1FIFOCON11bits_t C1FIFOCON11bits __asm__ ("C1FIFOCON11");
volatile unsigned int C1FIFOCON11CLR;
volatile unsigned int C1FIFOCON11SET;
volatile unsigned int C1FIFOCON11INV;
volatile unsigned int C1FIFOINT11;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT11bits_t;
volatile __C1FIFOINT11bits_t C1FIFOINT11bits __asm__ ("C1FIFOINT11");
volatile unsigned int C1FIFOINT11CLR;
volatile unsigned int C1FIFOINT11SET;
volatile unsigned int C1FIFOINT11INV;
volatile unsigned int C1FIFOUA11;
volatile unsigned int C1FIFOUA11CLR;
volatile unsigned int C1FIFOUA11SET;
volatile unsigned int C1FIFOUA11INV;
volatile unsigned int C1FIFOCI11;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI11bits_t;
volatile __C1FIFOCI11bits_t C1FIFOCI11bits __asm__ ("C1FIFOCI11");
volatile unsigned int C1FIFOCI11CLR;
volatile unsigned int C1FIFOCI11SET;
volatile unsigned int C1FIFOCI11INV;
volatile unsigned int C1FIFOCON12;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON12bits_t;
volatile __C1FIFOCON12bits_t C1FIFOCON12bits __asm__ ("C1FIFOCON12");
volatile unsigned int C1FIFOCON12CLR;
volatile unsigned int C1FIFOCON12SET;
volatile unsigned int C1FIFOCON12INV;
volatile unsigned int C1FIFOINT12;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT12bits_t;
volatile __C1FIFOINT12bits_t C1FIFOINT12bits __asm__ ("C1FIFOINT12");
volatile unsigned int C1FIFOINT12CLR;
volatile unsigned int C1FIFOINT12SET;
volatile unsigned int C1FIFOINT12INV;
volatile unsigned int C1FIFOUA12;
volatile unsigned int C1FIFOUA12CLR;
volatile unsigned int C1FIFOUA12SET;
volatile unsigned int C1FIFOUA12INV;
volatile unsigned int C1FIFOCI12;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI12bits_t;
volatile __C1FIFOCI12bits_t C1FIFOCI12bits __asm__ ("C1FIFOCI12");
volatile unsigned int C1FIFOCI12CLR;
volatile unsigned int C1FIFOCI12SET;
volatile unsigned int C1FIFOCI12INV;
volatile unsigned int C1FIFOCON13;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON13bits_t;
volatile __C1FIFOCON13bits_t C1FIFOCON13bits __asm__ ("C1FIFOCON13");
volatile unsigned int C1FIFOCON13CLR;
volatile unsigned int C1FIFOCON13SET;
volatile unsigned int C1FIFOCON13INV;
volatile unsigned int C1FIFOINT13;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT13bits_t;
volatile __C1FIFOINT13bits_t C1FIFOINT13bits __asm__ ("C1FIFOINT13");
volatile unsigned int C1FIFOINT13CLR;
volatile unsigned int C1FIFOINT13SET;
volatile unsigned int C1FIFOINT13INV;
volatile unsigned int C1FIFOUA13;
volatile unsigned int C1FIFOUA13CLR;
volatile unsigned int C1FIFOUA13SET;
volatile unsigned int C1FIFOUA13INV;
volatile unsigned int C1FIFOCI13;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI13bits_t;
volatile __C1FIFOCI13bits_t C1FIFOCI13bits __asm__ ("C1FIFOCI13");
volatile unsigned int C1FIFOCI13CLR;
volatile unsigned int C1FIFOCI13SET;
volatile unsigned int C1FIFOCI13INV;
volatile unsigned int C1FIFOCON14;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON14bits_t;
volatile __C1FIFOCON14bits_t C1FIFOCON14bits __asm__ ("C1FIFOCON14");
volatile unsigned int C1FIFOCON14CLR;
volatile unsigned int C1FIFOCON14SET;
volatile unsigned int C1FIFOCON14INV;
volatile unsigned int C1FIFOINT14;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT14bits_t;
volatile __C1FIFOINT14bits_t C1FIFOINT14bits __asm__ ("C1FIFOINT14");
volatile unsigned int C1FIFOINT14CLR;
volatile unsigned int C1FIFOINT14SET;
volatile unsigned int C1FIFOINT14INV;
volatile unsigned int C1FIFOUA14;
volatile unsigned int C1FIFOUA14CLR;
volatile unsigned int C1FIFOUA14SET;
volatile unsigned int C1FIFOUA14INV;
volatile unsigned int C1FIFOCI14;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI14bits_t;
volatile __C1FIFOCI14bits_t C1FIFOCI14bits __asm__ ("C1FIFOCI14");
volatile unsigned int C1FIFOCI14CLR;
volatile unsigned int C1FIFOCI14SET;
volatile unsigned int C1FIFOCI14INV;
volatile unsigned int C1FIFOCON15;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON15bits_t;
volatile __C1FIFOCON15bits_t C1FIFOCON15bits __asm__ ("C1FIFOCON15");
volatile unsigned int C1FIFOCON15CLR;
volatile unsigned int C1FIFOCON15SET;
volatile unsigned int C1FIFOCON15INV;
volatile unsigned int C1FIFOINT15;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT15bits_t;
volatile __C1FIFOINT15bits_t C1FIFOINT15bits __asm__ ("C1FIFOINT15");
volatile unsigned int C1FIFOINT15CLR;
volatile unsigned int C1FIFOINT15SET;
volatile unsigned int C1FIFOINT15INV;
volatile unsigned int C1FIFOUA15;
volatile unsigned int C1FIFOUA15CLR;
volatile unsigned int C1FIFOUA15SET;
volatile unsigned int C1FIFOUA15INV;
volatile unsigned int C1FIFOCI15;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI15bits_t;
volatile __C1FIFOCI15bits_t C1FIFOCI15bits __asm__ ("C1FIFOCI15");
volatile unsigned int C1FIFOCI15CLR;
volatile unsigned int C1FIFOCI15SET;
volatile unsigned int C1FIFOCI15INV;
volatile unsigned int C1FIFOCON16;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON16bits_t;
volatile __C1FIFOCON16bits_t C1FIFOCON16bits __asm__ ("C1FIFOCON16");
volatile unsigned int C1FIFOCON16CLR;
volatile unsigned int C1FIFOCON16SET;
volatile unsigned int C1FIFOCON16INV;
volatile unsigned int C1FIFOINT16;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT16bits_t;
volatile __C1FIFOINT16bits_t C1FIFOINT16bits __asm__ ("C1FIFOINT16");
volatile unsigned int C1FIFOINT16CLR;
volatile unsigned int C1FIFOINT16SET;
volatile unsigned int C1FIFOINT16INV;
volatile unsigned int C1FIFOUA16;
volatile unsigned int C1FIFOUA16CLR;
volatile unsigned int C1FIFOUA16SET;
volatile unsigned int C1FIFOUA16INV;
volatile unsigned int C1FIFOCI16;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI16bits_t;
volatile __C1FIFOCI16bits_t C1FIFOCI16bits __asm__ ("C1FIFOCI16");
volatile unsigned int C1FIFOCI16CLR;
volatile unsigned int C1FIFOCI16SET;
volatile unsigned int C1FIFOCI16INV;
volatile unsigned int C1FIFOCON17;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON17bits_t;
volatile __C1FIFOCON17bits_t C1FIFOCON17bits __asm__ ("C1FIFOCON17");
volatile unsigned int C1FIFOCON17CLR;
volatile unsigned int C1FIFOCON17SET;
volatile unsigned int C1FIFOCON17INV;
volatile unsigned int C1FIFOINT17;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT17bits_t;
volatile __C1FIFOINT17bits_t C1FIFOINT17bits __asm__ ("C1FIFOINT17");
volatile unsigned int C1FIFOINT17CLR;
volatile unsigned int C1FIFOINT17SET;
volatile unsigned int C1FIFOINT17INV;
volatile unsigned int C1FIFOUA17;
volatile unsigned int C1FIFOUA17CLR;
volatile unsigned int C1FIFOUA17SET;
volatile unsigned int C1FIFOUA17INV;
volatile unsigned int C1FIFOCI17;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI17bits_t;
volatile __C1FIFOCI17bits_t C1FIFOCI17bits __asm__ ("C1FIFOCI17");
volatile unsigned int C1FIFOCI17CLR;
volatile unsigned int C1FIFOCI17SET;
volatile unsigned int C1FIFOCI17INV;
volatile unsigned int C1FIFOCON18;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON18bits_t;
volatile __C1FIFOCON18bits_t C1FIFOCON18bits __asm__ ("C1FIFOCON18");
volatile unsigned int C1FIFOCON18CLR;
volatile unsigned int C1FIFOCON18SET;
volatile unsigned int C1FIFOCON18INV;
volatile unsigned int C1FIFOINT18;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT18bits_t;
volatile __C1FIFOINT18bits_t C1FIFOINT18bits __asm__ ("C1FIFOINT18");
volatile unsigned int C1FIFOINT18CLR;
volatile unsigned int C1FIFOINT18SET;
volatile unsigned int C1FIFOINT18INV;
volatile unsigned int C1FIFOUA18;
volatile unsigned int C1FIFOUA18CLR;
volatile unsigned int C1FIFOUA18SET;
volatile unsigned int C1FIFOUA18INV;
volatile unsigned int C1FIFOCI18;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI18bits_t;
volatile __C1FIFOCI18bits_t C1FIFOCI18bits __asm__ ("C1FIFOCI18");
volatile unsigned int C1FIFOCI18CLR;
volatile unsigned int C1FIFOCI18SET;
volatile unsigned int C1FIFOCI18INV;
volatile unsigned int C1FIFOCON19;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON19bits_t;
volatile __C1FIFOCON19bits_t C1FIFOCON19bits __asm__ ("C1FIFOCON19");
volatile unsigned int C1FIFOCON19CLR;
volatile unsigned int C1FIFOCON19SET;
volatile unsigned int C1FIFOCON19INV;
volatile unsigned int C1FIFOINT19;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT19bits_t;
volatile __C1FIFOINT19bits_t C1FIFOINT19bits __asm__ ("C1FIFOINT19");
volatile unsigned int C1FIFOINT19CLR;
volatile unsigned int C1FIFOINT19SET;
volatile unsigned int C1FIFOINT19INV;
volatile unsigned int C1FIFOUA19;
volatile unsigned int C1FIFOUA19CLR;
volatile unsigned int C1FIFOUA19SET;
volatile unsigned int C1FIFOUA19INV;
volatile unsigned int C1FIFOCI19;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI19bits_t;
volatile __C1FIFOCI19bits_t C1FIFOCI19bits __asm__ ("C1FIFOCI19");
volatile unsigned int C1FIFOCI19CLR;
volatile unsigned int C1FIFOCI19SET;
volatile unsigned int C1FIFOCI19INV;
volatile unsigned int C1FIFOCON20;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON20bits_t;
volatile __C1FIFOCON20bits_t C1FIFOCON20bits __asm__ ("C1FIFOCON20");
volatile unsigned int C1FIFOCON20CLR;
volatile unsigned int C1FIFOCON20SET;
volatile unsigned int C1FIFOCON20INV;
volatile unsigned int C1FIFOINT20;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT20bits_t;
volatile __C1FIFOINT20bits_t C1FIFOINT20bits __asm__ ("C1FIFOINT20");
volatile unsigned int C1FIFOINT20CLR;
volatile unsigned int C1FIFOINT20SET;
volatile unsigned int C1FIFOINT20INV;
volatile unsigned int C1FIFOUA20;
volatile unsigned int C1FIFOUA20CLR;
volatile unsigned int C1FIFOUA20SET;
volatile unsigned int C1FIFOUA20INV;
volatile unsigned int C1FIFOCI20;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI20bits_t;
volatile __C1FIFOCI20bits_t C1FIFOCI20bits __asm__ ("C1FIFOCI20");
volatile unsigned int C1FIFOCI20CLR;
volatile unsigned int C1FIFOCI20SET;
volatile unsigned int C1FIFOCI20INV;
volatile unsigned int C1FIFOCON21;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON21bits_t;
volatile __C1FIFOCON21bits_t C1FIFOCON21bits __asm__ ("C1FIFOCON21");
volatile unsigned int C1FIFOCON21CLR;
volatile unsigned int C1FIFOCON21SET;
volatile unsigned int C1FIFOCON21INV;
volatile unsigned int C1FIFOINT21;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT21bits_t;
volatile __C1FIFOINT21bits_t C1FIFOINT21bits __asm__ ("C1FIFOINT21");
volatile unsigned int C1FIFOINT21CLR;
volatile unsigned int C1FIFOINT21SET;
volatile unsigned int C1FIFOINT21INV;
volatile unsigned int C1FIFOUA21;
volatile unsigned int C1FIFOUA21CLR;
volatile unsigned int C1FIFOUA21SET;
volatile unsigned int C1FIFOUA21INV;
volatile unsigned int C1FIFOCI21;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI21bits_t;
volatile __C1FIFOCI21bits_t C1FIFOCI21bits __asm__ ("C1FIFOCI21");
volatile unsigned int C1FIFOCI21CLR;
volatile unsigned int C1FIFOCI21SET;
volatile unsigned int C1FIFOCI21INV;
volatile unsigned int C1FIFOCON22;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON22bits_t;
volatile __C1FIFOCON22bits_t C1FIFOCON22bits __asm__ ("C1FIFOCON22");
volatile unsigned int C1FIFOCON22CLR;
volatile unsigned int C1FIFOCON22SET;
volatile unsigned int C1FIFOCON22INV;
volatile unsigned int C1FIFOINT22;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT22bits_t;
volatile __C1FIFOINT22bits_t C1FIFOINT22bits __asm__ ("C1FIFOINT22");
volatile unsigned int C1FIFOINT22CLR;
volatile unsigned int C1FIFOINT22SET;
volatile unsigned int C1FIFOINT22INV;
volatile unsigned int C1FIFOUA22;
volatile unsigned int C1FIFOUA22CLR;
volatile unsigned int C1FIFOUA22SET;
volatile unsigned int C1FIFOUA22INV;
volatile unsigned int C1FIFOCI22;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI22bits_t;
volatile __C1FIFOCI22bits_t C1FIFOCI22bits __asm__ ("C1FIFOCI22");
volatile unsigned int C1FIFOCI22CLR;
volatile unsigned int C1FIFOCI22SET;
volatile unsigned int C1FIFOCI22INV;
volatile unsigned int C1FIFOCON23;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON23bits_t;
volatile __C1FIFOCON23bits_t C1FIFOCON23bits __asm__ ("C1FIFOCON23");
volatile unsigned int C1FIFOCON23CLR;
volatile unsigned int C1FIFOCON23SET;
volatile unsigned int C1FIFOCON23INV;
volatile unsigned int C1FIFOINT23;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT23bits_t;
volatile __C1FIFOINT23bits_t C1FIFOINT23bits __asm__ ("C1FIFOINT23");
volatile unsigned int C1FIFOINT23CLR;
volatile unsigned int C1FIFOINT23SET;
volatile unsigned int C1FIFOINT23INV;
volatile unsigned int C1FIFOUA23;
volatile unsigned int C1FIFOUA23CLR;
volatile unsigned int C1FIFOUA23SET;
volatile unsigned int C1FIFOUA23INV;
volatile unsigned int C1FIFOCI23;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI23bits_t;
volatile __C1FIFOCI23bits_t C1FIFOCI23bits __asm__ ("C1FIFOCI23");
volatile unsigned int C1FIFOCI23CLR;
volatile unsigned int C1FIFOCI23SET;
volatile unsigned int C1FIFOCI23INV;
volatile unsigned int C1FIFOCON24;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON24bits_t;
volatile __C1FIFOCON24bits_t C1FIFOCON24bits __asm__ ("C1FIFOCON24");
volatile unsigned int C1FIFOCON24CLR;
volatile unsigned int C1FIFOCON24SET;
volatile unsigned int C1FIFOCON24INV;
volatile unsigned int C1FIFOINT24;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT24bits_t;
volatile __C1FIFOINT24bits_t C1FIFOINT24bits __asm__ ("C1FIFOINT24");
volatile unsigned int C1FIFOINT24CLR;
volatile unsigned int C1FIFOINT24SET;
volatile unsigned int C1FIFOINT24INV;
volatile unsigned int C1FIFOUA24;
volatile unsigned int C1FIFOUA24CLR;
volatile unsigned int C1FIFOUA24SET;
volatile unsigned int C1FIFOUA24INV;
volatile unsigned int C1FIFOCI24;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI24bits_t;
volatile __C1FIFOCI24bits_t C1FIFOCI24bits __asm__ ("C1FIFOCI24");
volatile unsigned int C1FIFOCI24CLR;
volatile unsigned int C1FIFOCI24SET;
volatile unsigned int C1FIFOCI24INV;
volatile unsigned int C1FIFOCON25;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON25bits_t;
volatile __C1FIFOCON25bits_t C1FIFOCON25bits __asm__ ("C1FIFOCON25");
volatile unsigned int C1FIFOCON25CLR;
volatile unsigned int C1FIFOCON25SET;
volatile unsigned int C1FIFOCON25INV;
volatile unsigned int C1FIFOINT25;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT25bits_t;
volatile __C1FIFOINT25bits_t C1FIFOINT25bits __asm__ ("C1FIFOINT25");
volatile unsigned int C1FIFOINT25CLR;
volatile unsigned int C1FIFOINT25SET;
volatile unsigned int C1FIFOINT25INV;
volatile unsigned int C1FIFOUA25;
volatile unsigned int C1FIFOUA25CLR;
volatile unsigned int C1FIFOUA25SET;
volatile unsigned int C1FIFOUA25INV;
volatile unsigned int C1FIFOCI25;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI25bits_t;
volatile __C1FIFOCI25bits_t C1FIFOCI25bits __asm__ ("C1FIFOCI25");
volatile unsigned int C1FIFOCI25CLR;
volatile unsigned int C1FIFOCI25SET;
volatile unsigned int C1FIFOCI25INV;
volatile unsigned int C1FIFOCON26;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON26bits_t;
volatile __C1FIFOCON26bits_t C1FIFOCON26bits __asm__ ("C1FIFOCON26");
volatile unsigned int C1FIFOCON26CLR;
volatile unsigned int C1FIFOCON26SET;
volatile unsigned int C1FIFOCON26INV;
volatile unsigned int C1FIFOINT26;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT26bits_t;
volatile __C1FIFOINT26bits_t C1FIFOINT26bits __asm__ ("C1FIFOINT26");
volatile unsigned int C1FIFOINT26CLR;
volatile unsigned int C1FIFOINT26SET;
volatile unsigned int C1FIFOINT26INV;
volatile unsigned int C1FIFOUA26;
volatile unsigned int C1FIFOUA26CLR;
volatile unsigned int C1FIFOUA26SET;
volatile unsigned int C1FIFOUA26INV;
volatile unsigned int C1FIFOCI26;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI26bits_t;
volatile __C1FIFOCI26bits_t C1FIFOCI26bits __asm__ ("C1FIFOCI26");
volatile unsigned int C1FIFOCI26CLR;
volatile unsigned int C1FIFOCI26SET;
volatile unsigned int C1FIFOCI26INV;
volatile unsigned int C1FIFOCON27;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON27bits_t;
volatile __C1FIFOCON27bits_t C1FIFOCON27bits __asm__ ("C1FIFOCON27");
volatile unsigned int C1FIFOCON27CLR;
volatile unsigned int C1FIFOCON27SET;
volatile unsigned int C1FIFOCON27INV;
volatile unsigned int C1FIFOINT27;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT27bits_t;
volatile __C1FIFOINT27bits_t C1FIFOINT27bits __asm__ ("C1FIFOINT27");
volatile unsigned int C1FIFOINT27CLR;
volatile unsigned int C1FIFOINT27SET;
volatile unsigned int C1FIFOINT27INV;
volatile unsigned int C1FIFOUA27;
volatile unsigned int C1FIFOUA27CLR;
volatile unsigned int C1FIFOUA27SET;
volatile unsigned int C1FIFOUA27INV;
volatile unsigned int C1FIFOCI27;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI27bits_t;
volatile __C1FIFOCI27bits_t C1FIFOCI27bits __asm__ ("C1FIFOCI27");
volatile unsigned int C1FIFOCI27CLR;
volatile unsigned int C1FIFOCI27SET;
volatile unsigned int C1FIFOCI27INV;
volatile unsigned int C1FIFOCON28;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON28bits_t;
volatile __C1FIFOCON28bits_t C1FIFOCON28bits __asm__ ("C1FIFOCON28");
volatile unsigned int C1FIFOCON28CLR;
volatile unsigned int C1FIFOCON28SET;
volatile unsigned int C1FIFOCON28INV;
volatile unsigned int C1FIFOINT28;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT28bits_t;
volatile __C1FIFOINT28bits_t C1FIFOINT28bits __asm__ ("C1FIFOINT28");
volatile unsigned int C1FIFOINT28CLR;
volatile unsigned int C1FIFOINT28SET;
volatile unsigned int C1FIFOINT28INV;
volatile unsigned int C1FIFOUA28;
volatile unsigned int C1FIFOUA28CLR;
volatile unsigned int C1FIFOUA28SET;
volatile unsigned int C1FIFOUA28INV;
volatile unsigned int C1FIFOCI28;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI28bits_t;
volatile __C1FIFOCI28bits_t C1FIFOCI28bits __asm__ ("C1FIFOCI28");
volatile unsigned int C1FIFOCI28CLR;
volatile unsigned int C1FIFOCI28SET;
volatile unsigned int C1FIFOCI28INV;
volatile unsigned int C1FIFOCON29;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON29bits_t;
volatile __C1FIFOCON29bits_t C1FIFOCON29bits __asm__ ("C1FIFOCON29");
volatile unsigned int C1FIFOCON29CLR;
volatile unsigned int C1FIFOCON29SET;
volatile unsigned int C1FIFOCON29INV;
volatile unsigned int C1FIFOINT29;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT29bits_t;
volatile __C1FIFOINT29bits_t C1FIFOINT29bits __asm__ ("C1FIFOINT29");
volatile unsigned int C1FIFOINT29CLR;
volatile unsigned int C1FIFOINT29SET;
volatile unsigned int C1FIFOINT29INV;
volatile unsigned int C1FIFOUA29;
volatile unsigned int C1FIFOUA29CLR;
volatile unsigned int C1FIFOUA29SET;
volatile unsigned int C1FIFOUA29INV;
volatile unsigned int C1FIFOCI29;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI29bits_t;
volatile __C1FIFOCI29bits_t C1FIFOCI29bits __asm__ ("C1FIFOCI29");
volatile unsigned int C1FIFOCI29CLR;
volatile unsigned int C1FIFOCI29SET;
volatile unsigned int C1FIFOCI29INV;
volatile unsigned int C1FIFOCON30;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON30bits_t;
volatile __C1FIFOCON30bits_t C1FIFOCON30bits __asm__ ("C1FIFOCON30");
volatile unsigned int C1FIFOCON30CLR;
volatile unsigned int C1FIFOCON30SET;
volatile unsigned int C1FIFOCON30INV;
volatile unsigned int C1FIFOINT30;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT30bits_t;
volatile __C1FIFOINT30bits_t C1FIFOINT30bits __asm__ ("C1FIFOINT30");
volatile unsigned int C1FIFOINT30CLR;
volatile unsigned int C1FIFOINT30SET;
volatile unsigned int C1FIFOINT30INV;
volatile unsigned int C1FIFOUA30;
volatile unsigned int C1FIFOUA30CLR;
volatile unsigned int C1FIFOUA30SET;
volatile unsigned int C1FIFOUA30INV;
volatile unsigned int C1FIFOCI30;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI30bits_t;
volatile __C1FIFOCI30bits_t C1FIFOCI30bits __asm__ ("C1FIFOCI30");
volatile unsigned int C1FIFOCI30CLR;
volatile unsigned int C1FIFOCI30SET;
volatile unsigned int C1FIFOCI30INV;
volatile unsigned int C1FIFOCON31;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCON31bits_t;
volatile __C1FIFOCON31bits_t C1FIFOCON31bits __asm__ ("C1FIFOCON31");
volatile unsigned int C1FIFOCON31CLR;
volatile unsigned int C1FIFOCON31SET;
volatile unsigned int C1FIFOCON31INV;
volatile unsigned int C1FIFOINT31;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOINT31bits_t;
volatile __C1FIFOINT31bits_t C1FIFOINT31bits __asm__ ("C1FIFOINT31");
volatile unsigned int C1FIFOINT31CLR;
volatile unsigned int C1FIFOINT31SET;
volatile unsigned int C1FIFOINT31INV;
volatile unsigned int C1FIFOUA31;
volatile unsigned int C1FIFOUA31CLR;
volatile unsigned int C1FIFOUA31SET;
volatile unsigned int C1FIFOUA31INV;
volatile unsigned int C1FIFOCI31;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI31bits_t;
volatile __C1FIFOCI31bits_t C1FIFOCI31bits __asm__ ("C1FIFOCI31");
volatile unsigned int C1FIFOCI31CLR;
volatile unsigned int C1FIFOCI31SET;
volatile unsigned int C1FIFOCI31INV;
volatile unsigned int C2CON;
typedef union {
  struct {
    unsigned DNCNT:5;
    unsigned :6;
    unsigned CANBUSY:1;
    unsigned :1;
    unsigned SIDL:1;
    unsigned :1;
    unsigned ON:1;
    unsigned :4;
    unsigned CANCAP:1;
    unsigned OPMOD:3;
    unsigned REQOP:3;
    unsigned ABAT:1;
  };
  struct {
    unsigned w:32;
  };
} __C2CONbits_t;
volatile __C2CONbits_t C2CONbits __asm__ ("C2CON");
volatile unsigned int C2CONCLR;
volatile unsigned int C2CONSET;
volatile unsigned int C2CONINV;
volatile unsigned int C2CFG;
typedef union {
  struct {
    unsigned BRP:6;
    unsigned SJW:2;
    unsigned PRSEG:3;
    unsigned SEG1PH:3;
    unsigned SAM:1;
    unsigned SEG2PHTS:1;
    unsigned SEG2PH:3;
    unsigned :3;
    unsigned WAKFIL:1;
  };
  struct {
    unsigned w:32;
  };
} __C2CFGbits_t;
volatile __C2CFGbits_t C2CFGbits __asm__ ("C2CFG");
volatile unsigned int C2CFGCLR;
volatile unsigned int C2CFGSET;
volatile unsigned int C2CFGINV;
volatile unsigned int C2INT;
typedef union {
  struct {
    unsigned TBIF:1;
    unsigned RBIF:1;
    unsigned CTMRIF:1;
    unsigned MODIF:1;
    unsigned :7;
    unsigned RBOVIF:1;
    unsigned SERRIF:1;
    unsigned CERRIF:1;
    unsigned WAKIF:1;
    unsigned IVRIF:1;
    unsigned TBIE:1;
    unsigned RBIE:1;
    unsigned CTMRIE:1;
    unsigned MODIE:1;
    unsigned :7;
    unsigned RBOVIE:1;
    unsigned SERRIE:1;
    unsigned CERRIE:1;
    unsigned WAKIE:1;
    unsigned IVRIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2INTbits_t;
volatile __C2INTbits_t C2INTbits __asm__ ("C2INT");
volatile unsigned int C2INTCLR;
volatile unsigned int C2INTSET;
volatile unsigned int C2INTINV;
volatile unsigned int C2VEC;
typedef union {
  struct {
    unsigned ICODE:7;
    unsigned :1;
    unsigned FILHIT:5;
  };
  struct {
    unsigned w:32;
  };
} __C2VECbits_t;
volatile __C2VECbits_t C2VECbits __asm__ ("C2VEC");
volatile unsigned int C2VECCLR;
volatile unsigned int C2VECSET;
volatile unsigned int C2VECINV;
volatile unsigned int C2TREC;
typedef union {
  struct {
    unsigned RERRCNT:8;
    unsigned TERRCNT:8;
    unsigned EWARN:1;
    unsigned RXWARN:1;
    unsigned TXWARN:1;
    unsigned RXBP:1;
    unsigned TXBP:1;
    unsigned TXBO:1;
  };
  struct {
    unsigned w:32;
  };
} __C2TRECbits_t;
volatile __C2TRECbits_t C2TRECbits __asm__ ("C2TREC");
volatile unsigned int C2TRECCLR;
volatile unsigned int C2TRECSET;
volatile unsigned int C2TRECINV;
volatile unsigned int C2FSTAT;
typedef union {
  struct {
    unsigned FIFOIP:32;
  };
  struct {
    unsigned FIFOIP0:1;
    unsigned FIFOIP1:1;
    unsigned FIFOIP2:1;
    unsigned FIFOIP3:1;
    unsigned FIFOIP4:1;
    unsigned FIFOIP5:1;
    unsigned FIFOIP6:1;
    unsigned FIFOIP7:1;
    unsigned FIFOIP8:1;
    unsigned FIFOIP9:1;
    unsigned FIFOIP10:1;
    unsigned FIFOIP11:1;
    unsigned FIFOIP12:1;
    unsigned FIFOIP13:1;
    unsigned FIFOIP14:1;
    unsigned FIFOIP15:1;
    unsigned FIFOIP16:1;
    unsigned FIFOIP17:1;
    unsigned FIFOIP18:1;
    unsigned FIFOIP19:1;
    unsigned FIFOIP20:1;
    unsigned FIFOIP21:1;
    unsigned FIFOIP22:1;
    unsigned FIFOIP23:1;
    unsigned FIFOIP24:1;
    unsigned FIFOIP25:1;
    unsigned FIFOIP26:1;
    unsigned FIFOIP27:1;
    unsigned FIFOIP28:1;
    unsigned FIFOIP29:1;
    unsigned FIFOIP30:1;
    unsigned FIFOIP31:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FSTATbits_t;
volatile __C2FSTATbits_t C2FSTATbits __asm__ ("C2FSTAT");
volatile unsigned int C2FSTATCLR;
volatile unsigned int C2FSTATSET;
volatile unsigned int C2FSTATINV;
volatile unsigned int C2RXOVF;
typedef union {
  struct {
    unsigned RXOVF:32;
  };
  struct {
    unsigned RXOVF0:1;
    unsigned RXOVF1:1;
    unsigned RXOVF2:1;
    unsigned RXOVF3:1;
    unsigned RXOVF4:1;
    unsigned RXOVF5:1;
    unsigned RXOVF6:1;
    unsigned RXOVF7:1;
    unsigned RXOVF8:1;
    unsigned RXOVF9:1;
    unsigned RXOVF10:1;
    unsigned RXOVF11:1;
    unsigned RXOVF12:1;
    unsigned RXOVF13:1;
    unsigned RXOVF14:1;
    unsigned RXOVF15:1;
    unsigned RXOVF16:1;
    unsigned RXOVF17:1;
    unsigned RXOVF18:1;
    unsigned RXOVF19:1;
    unsigned RXOVF20:1;
    unsigned RXOVF21:1;
    unsigned RXOVF22:1;
    unsigned RXOVF23:1;
    unsigned RXOVF24:1;
    unsigned RXOVF25:1;
    unsigned RXOVF26:1;
    unsigned RXOVF27:1;
    unsigned RXOVF28:1;
    unsigned RXOVF29:1;
    unsigned RXOVF30:1;
    unsigned RXOVF31:1;
  };
  struct {
    unsigned w:32;
  };
} __C2RXOVFbits_t;
volatile __C2RXOVFbits_t C2RXOVFbits __asm__ ("C2RXOVF");
volatile unsigned int C2RXOVFCLR;
volatile unsigned int C2RXOVFSET;
volatile unsigned int C2RXOVFINV;
volatile unsigned int C2TMR;
typedef union {
  struct {
    unsigned CANTSPRE:16;
    unsigned CANTS:16;
  };
  struct {
    unsigned w:32;
  };
} __C2TMRbits_t;
volatile __C2TMRbits_t C2TMRbits __asm__ ("C2TMR");
volatile unsigned int C2TMRCLR;
volatile unsigned int C2TMRSET;
volatile unsigned int C2TMRINV;
volatile unsigned int C2RXM0;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXM0bits_t;
volatile __C2RXM0bits_t C2RXM0bits __asm__ ("C2RXM0");
volatile unsigned int C2RXM0CLR;
volatile unsigned int C2RXM0SET;
volatile unsigned int C2RXM0INV;
volatile unsigned int C2RXM1;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXM1bits_t;
volatile __C2RXM1bits_t C2RXM1bits __asm__ ("C2RXM1");
volatile unsigned int C2RXM1CLR;
volatile unsigned int C2RXM1SET;
volatile unsigned int C2RXM1INV;
volatile unsigned int C2RXM2;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXM2bits_t;
volatile __C2RXM2bits_t C2RXM2bits __asm__ ("C2RXM2");
volatile unsigned int C2RXM2CLR;
volatile unsigned int C2RXM2SET;
volatile unsigned int C2RXM2INV;
volatile unsigned int C2RXM3;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned MIDE:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXM3bits_t;
volatile __C2RXM3bits_t C2RXM3bits __asm__ ("C2RXM3");
volatile unsigned int C2RXM3CLR;
volatile unsigned int C2RXM3SET;
volatile unsigned int C2RXM3INV;
volatile unsigned int C2FLTCON0;
typedef union {
  struct {
    unsigned FSEL0:5;
    unsigned MSEL0:2;
    unsigned FLTEN0:1;
    unsigned FSEL1:5;
    unsigned MSEL1:2;
    unsigned FLTEN1:1;
    unsigned FSEL2:5;
    unsigned MSEL2:2;
    unsigned FLTEN2:1;
    unsigned FSEL3:5;
    unsigned MSEL3:2;
    unsigned FLTEN3:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FLTCON0bits_t;
volatile __C2FLTCON0bits_t C2FLTCON0bits __asm__ ("C2FLTCON0");
volatile unsigned int C2FLTCON0CLR;
volatile unsigned int C2FLTCON0SET;
volatile unsigned int C2FLTCON0INV;
volatile unsigned int C2FLTCON1;
typedef union {
  struct {
    unsigned FSEL4:5;
    unsigned MSEL4:2;
    unsigned FLTEN4:1;
    unsigned FSEL5:5;
    unsigned MSEL5:2;
    unsigned FLTEN5:1;
    unsigned FSEL6:5;
    unsigned MSEL6:2;
    unsigned FLTEN6:1;
    unsigned FSEL7:5;
    unsigned MSEL7:2;
    unsigned FLTEN7:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FLTCON1bits_t;
volatile __C2FLTCON1bits_t C2FLTCON1bits __asm__ ("C2FLTCON1");
volatile unsigned int C2FLTCON1CLR;
volatile unsigned int C2FLTCON1SET;
volatile unsigned int C2FLTCON1INV;
volatile unsigned int C2FLTCON2;
typedef union {
  struct {
    unsigned FSEL8:5;
    unsigned MSEL8:2;
    unsigned FLTEN8:1;
    unsigned FSEL9:5;
    unsigned MSEL9:2;
    unsigned FLTEN9:1;
    unsigned FSEL10:5;
    unsigned MSEL10:2;
    unsigned FLTEN10:1;
    unsigned FSEL11:5;
    unsigned MSEL11:2;
    unsigned FLTEN11:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FLTCON2bits_t;
volatile __C2FLTCON2bits_t C2FLTCON2bits __asm__ ("C2FLTCON2");
volatile unsigned int C2FLTCON2CLR;
volatile unsigned int C2FLTCON2SET;
volatile unsigned int C2FLTCON2INV;
volatile unsigned int C2FLTCON3;
typedef union {
  struct {
    unsigned FSEL12:5;
    unsigned MSEL12:2;
    unsigned FLTEN12:1;
    unsigned FSEL13:5;
    unsigned MSEL13:2;
    unsigned FLTEN13:1;
    unsigned FSEL14:5;
    unsigned MSEL14:2;
    unsigned FLTEN14:1;
    unsigned FSEL15:5;
    unsigned MSEL15:2;
    unsigned FLTEN15:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FLTCON3bits_t;
volatile __C2FLTCON3bits_t C2FLTCON3bits __asm__ ("C2FLTCON3");
volatile unsigned int C2FLTCON3CLR;
volatile unsigned int C2FLTCON3SET;
volatile unsigned int C2FLTCON3INV;
volatile unsigned int C2FLTCON4;
typedef union {
  struct {
    unsigned FSEL16:5;
    unsigned MSEL16:2;
    unsigned FLTEN16:1;
    unsigned FSEL17:5;
    unsigned MSEL17:2;
    unsigned FLTEN17:1;
    unsigned FSEL18:5;
    unsigned MSEL18:2;
    unsigned FLTEN18:1;
    unsigned FSEL19:5;
    unsigned MSEL19:2;
    unsigned FLTEN19:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FLTCON4bits_t;
volatile __C2FLTCON4bits_t C2FLTCON4bits __asm__ ("C2FLTCON4");
volatile unsigned int C2FLTCON4CLR;
volatile unsigned int C2FLTCON4SET;
volatile unsigned int C2FLTCON4INV;
volatile unsigned int C2FLTCON5;
typedef union {
  struct {
    unsigned FSEL20:5;
    unsigned MSEL20:2;
    unsigned FLTEN20:1;
    unsigned FSEL21:5;
    unsigned MSEL21:2;
    unsigned FLTEN21:1;
    unsigned FSEL22:5;
    unsigned MSEL22:2;
    unsigned FLTEN22:1;
    unsigned FSEL23:5;
    unsigned MSEL23:2;
    unsigned FLTEN23:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FLTCON5bits_t;
volatile __C2FLTCON5bits_t C2FLTCON5bits __asm__ ("C2FLTCON5");
volatile unsigned int C2FLTCON5CLR;
volatile unsigned int C2FLTCON5SET;
volatile unsigned int C2FLTCON5INV;
volatile unsigned int C2FLTCON6;
typedef union {
  struct {
    unsigned FSEL24:5;
    unsigned MSEL24:2;
    unsigned FLTEN24:1;
    unsigned FSEL25:5;
    unsigned MSEL25:2;
    unsigned FLTEN25:1;
    unsigned FSEL26:5;
    unsigned MSEL26:2;
    unsigned FLTEN26:1;
    unsigned FSEL27:5;
    unsigned MSEL27:2;
    unsigned FLTEN27:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FLTCON6bits_t;
volatile __C2FLTCON6bits_t C2FLTCON6bits __asm__ ("C2FLTCON6");
volatile unsigned int C2FLTCON6CLR;
volatile unsigned int C2FLTCON6SET;
volatile unsigned int C2FLTCON6INV;
volatile unsigned int C2FLTCON7;
typedef union {
  struct {
    unsigned FSEL28:5;
    unsigned MSEL28:2;
    unsigned FLTEN28:1;
    unsigned FSEL29:5;
    unsigned MSEL29:2;
    unsigned FLTEN29:1;
    unsigned FSEL30:5;
    unsigned MSEL30:2;
    unsigned FLTEN30:1;
    unsigned FSEL31:5;
    unsigned MSEL31:2;
    unsigned FLTEN31:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FLTCON7bits_t;
volatile __C2FLTCON7bits_t C2FLTCON7bits __asm__ ("C2FLTCON7");
volatile unsigned int C2FLTCON7CLR;
volatile unsigned int C2FLTCON7SET;
volatile unsigned int C2FLTCON7INV;
volatile unsigned int C2RXF0;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF0bits_t;
volatile __C2RXF0bits_t C2RXF0bits __asm__ ("C2RXF0");
volatile unsigned int C2RXF0CLR;
volatile unsigned int C2RXF0SET;
volatile unsigned int C2RXF0INV;
volatile unsigned int C2RXF1;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF1bits_t;
volatile __C2RXF1bits_t C2RXF1bits __asm__ ("C2RXF1");
volatile unsigned int C2RXF1CLR;
volatile unsigned int C2RXF1SET;
volatile unsigned int C2RXF1INV;
volatile unsigned int C2RXF2;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF2bits_t;
volatile __C2RXF2bits_t C2RXF2bits __asm__ ("C2RXF2");
volatile unsigned int C2RXF2CLR;
volatile unsigned int C2RXF2SET;
volatile unsigned int C2RXF2INV;
volatile unsigned int C2RXF3;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF3bits_t;
volatile __C2RXF3bits_t C2RXF3bits __asm__ ("C2RXF3");
volatile unsigned int C2RXF3CLR;
volatile unsigned int C2RXF3SET;
volatile unsigned int C2RXF3INV;
volatile unsigned int C2RXF4;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF4bits_t;
volatile __C2RXF4bits_t C2RXF4bits __asm__ ("C2RXF4");
volatile unsigned int C2RXF4CLR;
volatile unsigned int C2RXF4SET;
volatile unsigned int C2RXF4INV;
volatile unsigned int C2RXF5;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF5bits_t;
volatile __C2RXF5bits_t C2RXF5bits __asm__ ("C2RXF5");
volatile unsigned int C2RXF5CLR;
volatile unsigned int C2RXF5SET;
volatile unsigned int C2RXF5INV;
volatile unsigned int C2RXF6;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF6bits_t;
volatile __C2RXF6bits_t C2RXF6bits __asm__ ("C2RXF6");
volatile unsigned int C2RXF6CLR;
volatile unsigned int C2RXF6SET;
volatile unsigned int C2RXF6INV;
volatile unsigned int C2RXF7;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF7bits_t;
volatile __C2RXF7bits_t C2RXF7bits __asm__ ("C2RXF7");
volatile unsigned int C2RXF7CLR;
volatile unsigned int C2RXF7SET;
volatile unsigned int C2RXF7INV;
volatile unsigned int C2RXF8;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF8bits_t;
volatile __C2RXF8bits_t C2RXF8bits __asm__ ("C2RXF8");
volatile unsigned int C2RXF8CLR;
volatile unsigned int C2RXF8SET;
volatile unsigned int C2RXF8INV;
volatile unsigned int C2RXF9;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF9bits_t;
volatile __C2RXF9bits_t C2RXF9bits __asm__ ("C2RXF9");
volatile unsigned int C2RXF9CLR;
volatile unsigned int C2RXF9SET;
volatile unsigned int C2RXF9INV;
volatile unsigned int C2RXF10;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF10bits_t;
volatile __C2RXF10bits_t C2RXF10bits __asm__ ("C2RXF10");
volatile unsigned int C2RXF10CLR;
volatile unsigned int C2RXF10SET;
volatile unsigned int C2RXF10INV;
volatile unsigned int C2RXF11;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF11bits_t;
volatile __C2RXF11bits_t C2RXF11bits __asm__ ("C2RXF11");
volatile unsigned int C2RXF11CLR;
volatile unsigned int C2RXF11SET;
volatile unsigned int C2RXF11INV;
volatile unsigned int C2RXF12;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF12bits_t;
volatile __C2RXF12bits_t C2RXF12bits __asm__ ("C2RXF12");
volatile unsigned int C2RXF12CLR;
volatile unsigned int C2RXF12SET;
volatile unsigned int C2RXF12INV;
volatile unsigned int C2RXF13;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF13bits_t;
volatile __C2RXF13bits_t C2RXF13bits __asm__ ("C2RXF13");
volatile unsigned int C2RXF13CLR;
volatile unsigned int C2RXF13SET;
volatile unsigned int C2RXF13INV;
volatile unsigned int C2RXF14;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF14bits_t;
volatile __C2RXF14bits_t C2RXF14bits __asm__ ("C2RXF14");
volatile unsigned int C2RXF14CLR;
volatile unsigned int C2RXF14SET;
volatile unsigned int C2RXF14INV;
volatile unsigned int C2RXF15;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF15bits_t;
volatile __C2RXF15bits_t C2RXF15bits __asm__ ("C2RXF15");
volatile unsigned int C2RXF15CLR;
volatile unsigned int C2RXF15SET;
volatile unsigned int C2RXF15INV;
volatile unsigned int C2RXF16;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF16bits_t;
volatile __C2RXF16bits_t C2RXF16bits __asm__ ("C2RXF16");
volatile unsigned int C2RXF16CLR;
volatile unsigned int C2RXF16SET;
volatile unsigned int C2RXF16INV;
volatile unsigned int C2RXF17;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF17bits_t;
volatile __C2RXF17bits_t C2RXF17bits __asm__ ("C2RXF17");
volatile unsigned int C2RXF17CLR;
volatile unsigned int C2RXF17SET;
volatile unsigned int C2RXF17INV;
volatile unsigned int C2RXF18;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF18bits_t;
volatile __C2RXF18bits_t C2RXF18bits __asm__ ("C2RXF18");
volatile unsigned int C2RXF18CLR;
volatile unsigned int C2RXF18SET;
volatile unsigned int C2RXF18INV;
volatile unsigned int C2RXF19;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF19bits_t;
volatile __C2RXF19bits_t C2RXF19bits __asm__ ("C2RXF19");
volatile unsigned int C2RXF19CLR;
volatile unsigned int C2RXF19SET;
volatile unsigned int C2RXF19INV;
volatile unsigned int C2RXF20;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF20bits_t;
volatile __C2RXF20bits_t C2RXF20bits __asm__ ("C2RXF20");
volatile unsigned int C2RXF20CLR;
volatile unsigned int C2RXF20SET;
volatile unsigned int C2RXF20INV;
volatile unsigned int C2RXF21;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF21bits_t;
volatile __C2RXF21bits_t C2RXF21bits __asm__ ("C2RXF21");
volatile unsigned int C2RXF21CLR;
volatile unsigned int C2RXF21SET;
volatile unsigned int C2RXF21INV;
volatile unsigned int C2RXF22;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF22bits_t;
volatile __C2RXF22bits_t C2RXF22bits __asm__ ("C2RXF22");
volatile unsigned int C2RXF22CLR;
volatile unsigned int C2RXF22SET;
volatile unsigned int C2RXF22INV;
volatile unsigned int C2RXF23;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF23bits_t;
volatile __C2RXF23bits_t C2RXF23bits __asm__ ("C2RXF23");
volatile unsigned int C2RXF23CLR;
volatile unsigned int C2RXF23SET;
volatile unsigned int C2RXF23INV;
volatile unsigned int C2RXF24;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF24bits_t;
volatile __C2RXF24bits_t C2RXF24bits __asm__ ("C2RXF24");
volatile unsigned int C2RXF24CLR;
volatile unsigned int C2RXF24SET;
volatile unsigned int C2RXF24INV;
volatile unsigned int C2RXF25;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF25bits_t;
volatile __C2RXF25bits_t C2RXF25bits __asm__ ("C2RXF25");
volatile unsigned int C2RXF25CLR;
volatile unsigned int C2RXF25SET;
volatile unsigned int C2RXF25INV;
volatile unsigned int C2RXF26;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF26bits_t;
volatile __C2RXF26bits_t C2RXF26bits __asm__ ("C2RXF26");
volatile unsigned int C2RXF26CLR;
volatile unsigned int C2RXF26SET;
volatile unsigned int C2RXF26INV;
volatile unsigned int C2RXF27;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF27bits_t;
volatile __C2RXF27bits_t C2RXF27bits __asm__ ("C2RXF27");
volatile unsigned int C2RXF27CLR;
volatile unsigned int C2RXF27SET;
volatile unsigned int C2RXF27INV;
volatile unsigned int C2RXF28;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF28bits_t;
volatile __C2RXF28bits_t C2RXF28bits __asm__ ("C2RXF28");
volatile unsigned int C2RXF28CLR;
volatile unsigned int C2RXF28SET;
volatile unsigned int C2RXF28INV;
volatile unsigned int C2RXF29;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF29bits_t;
volatile __C2RXF29bits_t C2RXF29bits __asm__ ("C2RXF29");
volatile unsigned int C2RXF29CLR;
volatile unsigned int C2RXF29SET;
volatile unsigned int C2RXF29INV;
volatile unsigned int C2RXF30;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF30bits_t;
volatile __C2RXF30bits_t C2RXF30bits __asm__ ("C2RXF30");
volatile unsigned int C2RXF30CLR;
volatile unsigned int C2RXF30SET;
volatile unsigned int C2RXF30INV;
volatile unsigned int C2RXF31;
typedef union {
  struct {
    unsigned EID:18;
    unsigned :1;
    unsigned EXID:1;
    unsigned :1;
    unsigned SID:11;
  };
  struct {
    unsigned w:32;
  };
} __C2RXF31bits_t;
volatile __C2RXF31bits_t C2RXF31bits __asm__ ("C2RXF31");
volatile unsigned int C2RXF31CLR;
volatile unsigned int C2RXF31SET;
volatile unsigned int C2RXF31INV;
volatile unsigned int C2FIFOBA;
volatile unsigned int C2FIFOBACLR;
volatile unsigned int C2FIFOBASET;
volatile unsigned int C2FIFOBAINV;
volatile unsigned int C2FIFOCON0;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON0bits_t;
volatile __C2FIFOCON0bits_t C2FIFOCON0bits __asm__ ("C2FIFOCON0");
volatile unsigned int C2FIFOCON0CLR;
volatile unsigned int C2FIFOCON0SET;
volatile unsigned int C2FIFOCON0INV;
volatile unsigned int C2FIFOINT0;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT0bits_t;
volatile __C2FIFOINT0bits_t C2FIFOINT0bits __asm__ ("C2FIFOINT0");
volatile unsigned int C2FIFOINT0CLR;
volatile unsigned int C2FIFOINT0SET;
volatile unsigned int C2FIFOINT0INV;
volatile unsigned int C2FIFOUA0;
volatile unsigned int C2FIFOUA0CLR;
volatile unsigned int C2FIFOUA0SET;
volatile unsigned int C2FIFOUA0INV;
volatile unsigned int C2FIFOCI0;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI0bits_t;
volatile __C2FIFOCI0bits_t C2FIFOCI0bits __asm__ ("C2FIFOCI0");
volatile unsigned int C2FIFOCI0CLR;
volatile unsigned int C2FIFOCI0SET;
volatile unsigned int C2FIFOCI0INV;
volatile unsigned int C2FIFOCON1;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON1bits_t;
volatile __C2FIFOCON1bits_t C2FIFOCON1bits __asm__ ("C2FIFOCON1");
volatile unsigned int C2FIFOCON1CLR;
volatile unsigned int C2FIFOCON1SET;
volatile unsigned int C2FIFOCON1INV;
volatile unsigned int C2FIFOINT1;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT1bits_t;
volatile __C2FIFOINT1bits_t C2FIFOINT1bits __asm__ ("C2FIFOINT1");
volatile unsigned int C2FIFOINT1CLR;
volatile unsigned int C2FIFOINT1SET;
volatile unsigned int C2FIFOINT1INV;
volatile unsigned int C2FIFOUA1;
volatile unsigned int C2FIFOUA1CLR;
volatile unsigned int C2FIFOUA1SET;
volatile unsigned int C2FIFOUA1INV;
volatile unsigned int C2FIFOCI1;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI1bits_t;
volatile __C2FIFOCI1bits_t C2FIFOCI1bits __asm__ ("C2FIFOCI1");
volatile unsigned int C2FIFOCI1CLR;
volatile unsigned int C2FIFOCI1SET;
volatile unsigned int C2FIFOCI1INV;
volatile unsigned int C2FIFOCON2;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON2bits_t;
volatile __C2FIFOCON2bits_t C2FIFOCON2bits __asm__ ("C2FIFOCON2");
volatile unsigned int C2FIFOCON2CLR;
volatile unsigned int C2FIFOCON2SET;
volatile unsigned int C2FIFOCON2INV;
volatile unsigned int C2FIFOINT2;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT2bits_t;
volatile __C2FIFOINT2bits_t C2FIFOINT2bits __asm__ ("C2FIFOINT2");
volatile unsigned int C2FIFOINT2CLR;
volatile unsigned int C2FIFOINT2SET;
volatile unsigned int C2FIFOINT2INV;
volatile unsigned int C2FIFOUA2;
volatile unsigned int C2FIFOUA2CLR;
volatile unsigned int C2FIFOUA2SET;
volatile unsigned int C2FIFOUA2INV;
volatile unsigned int C2FIFOCI2;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI2bits_t;
volatile __C2FIFOCI2bits_t C2FIFOCI2bits __asm__ ("C2FIFOCI2");
volatile unsigned int C2FIFOCI2CLR;
volatile unsigned int C2FIFOCI2SET;
volatile unsigned int C2FIFOCI2INV;
volatile unsigned int C2FIFOCON3;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON3bits_t;
volatile __C2FIFOCON3bits_t C2FIFOCON3bits __asm__ ("C2FIFOCON3");
volatile unsigned int C2FIFOCON3CLR;
volatile unsigned int C2FIFOCON3SET;
volatile unsigned int C2FIFOCON3INV;
volatile unsigned int C2FIFOINT3;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT3bits_t;
volatile __C2FIFOINT3bits_t C2FIFOINT3bits __asm__ ("C2FIFOINT3");
volatile unsigned int C2FIFOINT3CLR;
volatile unsigned int C2FIFOINT3SET;
volatile unsigned int C2FIFOINT3INV;
volatile unsigned int C2FIFOUA3;
volatile unsigned int C2FIFOUA3CLR;
volatile unsigned int C2FIFOUA3SET;
volatile unsigned int C2FIFOUA3INV;
volatile unsigned int C2FIFOCI3;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI3bits_t;
volatile __C2FIFOCI3bits_t C2FIFOCI3bits __asm__ ("C2FIFOCI3");
volatile unsigned int C2FIFOCI3CLR;
volatile unsigned int C2FIFOCI3SET;
volatile unsigned int C2FIFOCI3INV;
volatile unsigned int C2FIFOCON4;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON4bits_t;
volatile __C2FIFOCON4bits_t C2FIFOCON4bits __asm__ ("C2FIFOCON4");
volatile unsigned int C2FIFOCON4CLR;
volatile unsigned int C2FIFOCON4SET;
volatile unsigned int C2FIFOCON4INV;
volatile unsigned int C2FIFOINT4;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT4bits_t;
volatile __C2FIFOINT4bits_t C2FIFOINT4bits __asm__ ("C2FIFOINT4");
volatile unsigned int C2FIFOINT4CLR;
volatile unsigned int C2FIFOINT4SET;
volatile unsigned int C2FIFOINT4INV;
volatile unsigned int C2FIFOUA4;
volatile unsigned int C2FIFOUA4CLR;
volatile unsigned int C2FIFOUA4SET;
volatile unsigned int C2FIFOUA4INV;
volatile unsigned int C2FIFOCI4;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI4bits_t;
volatile __C2FIFOCI4bits_t C2FIFOCI4bits __asm__ ("C2FIFOCI4");
volatile unsigned int C2FIFOCI4CLR;
volatile unsigned int C2FIFOCI4SET;
volatile unsigned int C2FIFOCI4INV;
volatile unsigned int C2FIFOCON5;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON5bits_t;
volatile __C2FIFOCON5bits_t C2FIFOCON5bits __asm__ ("C2FIFOCON5");
volatile unsigned int C2FIFOCON5CLR;
volatile unsigned int C2FIFOCON5SET;
volatile unsigned int C2FIFOCON5INV;
volatile unsigned int C2FIFOINT5;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT5bits_t;
volatile __C2FIFOINT5bits_t C2FIFOINT5bits __asm__ ("C2FIFOINT5");
volatile unsigned int C2FIFOINT5CLR;
volatile unsigned int C2FIFOINT5SET;
volatile unsigned int C2FIFOINT5INV;
volatile unsigned int C2FIFOUA5;
volatile unsigned int C2FIFOUA5CLR;
volatile unsigned int C2FIFOUA5SET;
volatile unsigned int C2FIFOUA5INV;
volatile unsigned int C2FIFOCI5;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI5bits_t;
volatile __C2FIFOCI5bits_t C2FIFOCI5bits __asm__ ("C2FIFOCI5");
volatile unsigned int C2FIFOCI5CLR;
volatile unsigned int C2FIFOCI5SET;
volatile unsigned int C2FIFOCI5INV;
volatile unsigned int C2FIFOCON6;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON6bits_t;
volatile __C2FIFOCON6bits_t C2FIFOCON6bits __asm__ ("C2FIFOCON6");
volatile unsigned int C2FIFOCON6CLR;
volatile unsigned int C2FIFOCON6SET;
volatile unsigned int C2FIFOCON6INV;
volatile unsigned int C2FIFOINT6;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT6bits_t;
volatile __C2FIFOINT6bits_t C2FIFOINT6bits __asm__ ("C2FIFOINT6");
volatile unsigned int C2FIFOINT6CLR;
volatile unsigned int C2FIFOINT6SET;
volatile unsigned int C2FIFOINT6INV;
volatile unsigned int C2FIFOUA6;
volatile unsigned int C2FIFOUA6CLR;
volatile unsigned int C2FIFOUA6SET;
volatile unsigned int C2FIFOUA6INV;
volatile unsigned int C2FIFOCI6;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI6bits_t;
volatile __C2FIFOCI6bits_t C2FIFOCI6bits __asm__ ("C2FIFOCI6");
volatile unsigned int C2FIFOCI6CLR;
volatile unsigned int C2FIFOCI6SET;
volatile unsigned int C2FIFOCI6INV;
volatile unsigned int C2FIFOCON7;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON7bits_t;
volatile __C2FIFOCON7bits_t C2FIFOCON7bits __asm__ ("C2FIFOCON7");
volatile unsigned int C2FIFOCON7CLR;
volatile unsigned int C2FIFOCON7SET;
volatile unsigned int C2FIFOCON7INV;
volatile unsigned int C2FIFOINT7;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT7bits_t;
volatile __C2FIFOINT7bits_t C2FIFOINT7bits __asm__ ("C2FIFOINT7");
volatile unsigned int C2FIFOINT7CLR;
volatile unsigned int C2FIFOINT7SET;
volatile unsigned int C2FIFOINT7INV;
volatile unsigned int C2FIFOUA7;
volatile unsigned int C2FIFOUA7CLR;
volatile unsigned int C2FIFOUA7SET;
volatile unsigned int C2FIFOUA7INV;
volatile unsigned int C2FIFOCI7;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI7bits_t;
volatile __C2FIFOCI7bits_t C2FIFOCI7bits __asm__ ("C2FIFOCI7");
volatile unsigned int C2FIFOCI7CLR;
volatile unsigned int C2FIFOCI7SET;
volatile unsigned int C2FIFOCI7INV;
volatile unsigned int C2FIFOCON8;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON8bits_t;
volatile __C2FIFOCON8bits_t C2FIFOCON8bits __asm__ ("C2FIFOCON8");
volatile unsigned int C2FIFOCON8CLR;
volatile unsigned int C2FIFOCON8SET;
volatile unsigned int C2FIFOCON8INV;
volatile unsigned int C2FIFOINT8;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT8bits_t;
volatile __C2FIFOINT8bits_t C2FIFOINT8bits __asm__ ("C2FIFOINT8");
volatile unsigned int C2FIFOINT8CLR;
volatile unsigned int C2FIFOINT8SET;
volatile unsigned int C2FIFOINT8INV;
volatile unsigned int C2FIFOUA8;
volatile unsigned int C2FIFOUA8CLR;
volatile unsigned int C2FIFOUA8SET;
volatile unsigned int C2FIFOUA8INV;
volatile unsigned int C2FIFOCI8;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI8bits_t;
volatile __C2FIFOCI8bits_t C2FIFOCI8bits __asm__ ("C2FIFOCI8");
volatile unsigned int C2FIFOCI8CLR;
volatile unsigned int C2FIFOCI8SET;
volatile unsigned int C2FIFOCI8INV;
volatile unsigned int C2FIFOCON9;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON9bits_t;
volatile __C2FIFOCON9bits_t C2FIFOCON9bits __asm__ ("C2FIFOCON9");
volatile unsigned int C2FIFOCON9CLR;
volatile unsigned int C2FIFOCON9SET;
volatile unsigned int C2FIFOCON9INV;
volatile unsigned int C2FIFOINT9;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT9bits_t;
volatile __C2FIFOINT9bits_t C2FIFOINT9bits __asm__ ("C2FIFOINT9");
volatile unsigned int C2FIFOINT9CLR;
volatile unsigned int C2FIFOINT9SET;
volatile unsigned int C2FIFOINT9INV;
volatile unsigned int C2FIFOUA9;
volatile unsigned int C2FIFOUA9CLR;
volatile unsigned int C2FIFOUA9SET;
volatile unsigned int C2FIFOUA9INV;
volatile unsigned int C2FIFOCI9;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI9bits_t;
volatile __C2FIFOCI9bits_t C2FIFOCI9bits __asm__ ("C2FIFOCI9");
volatile unsigned int C2FIFOCI9CLR;
volatile unsigned int C2FIFOCI9SET;
volatile unsigned int C2FIFOCI9INV;
volatile unsigned int C2FIFOCON10;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON10bits_t;
volatile __C2FIFOCON10bits_t C2FIFOCON10bits __asm__ ("C2FIFOCON10");
volatile unsigned int C2FIFOCON10CLR;
volatile unsigned int C2FIFOCON10SET;
volatile unsigned int C2FIFOCON10INV;
volatile unsigned int C2FIFOINT10;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT10bits_t;
volatile __C2FIFOINT10bits_t C2FIFOINT10bits __asm__ ("C2FIFOINT10");
volatile unsigned int C2FIFOINT10CLR;
volatile unsigned int C2FIFOINT10SET;
volatile unsigned int C2FIFOINT10INV;
volatile unsigned int C2FIFOUA10;
volatile unsigned int C2FIFOUA10CLR;
volatile unsigned int C2FIFOUA10SET;
volatile unsigned int C2FIFOUA10INV;
volatile unsigned int C2FIFOCI10;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI10bits_t;
volatile __C2FIFOCI10bits_t C2FIFOCI10bits __asm__ ("C2FIFOCI10");
volatile unsigned int C2FIFOCI10CLR;
volatile unsigned int C2FIFOCI10SET;
volatile unsigned int C2FIFOCI10INV;
volatile unsigned int C2FIFOCON11;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON11bits_t;
volatile __C2FIFOCON11bits_t C2FIFOCON11bits __asm__ ("C2FIFOCON11");
volatile unsigned int C2FIFOCON11CLR;
volatile unsigned int C2FIFOCON11SET;
volatile unsigned int C2FIFOCON11INV;
volatile unsigned int C2FIFOINT11;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT11bits_t;
volatile __C2FIFOINT11bits_t C2FIFOINT11bits __asm__ ("C2FIFOINT11");
volatile unsigned int C2FIFOINT11CLR;
volatile unsigned int C2FIFOINT11SET;
volatile unsigned int C2FIFOINT11INV;
volatile unsigned int C2FIFOUA11;
volatile unsigned int C2FIFOUA11CLR;
volatile unsigned int C2FIFOUA11SET;
volatile unsigned int C2FIFOUA11INV;
volatile unsigned int C2FIFOCI11;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI11bits_t;
volatile __C2FIFOCI11bits_t C2FIFOCI11bits __asm__ ("C2FIFOCI11");
volatile unsigned int C2FIFOCI11CLR;
volatile unsigned int C2FIFOCI11SET;
volatile unsigned int C2FIFOCI11INV;
volatile unsigned int C2FIFOCON12;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON12bits_t;
volatile __C2FIFOCON12bits_t C2FIFOCON12bits __asm__ ("C2FIFOCON12");
volatile unsigned int C2FIFOCON12CLR;
volatile unsigned int C2FIFOCON12SET;
volatile unsigned int C2FIFOCON12INV;
volatile unsigned int C2FIFOINT12;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT12bits_t;
volatile __C2FIFOINT12bits_t C2FIFOINT12bits __asm__ ("C2FIFOINT12");
volatile unsigned int C2FIFOINT12CLR;
volatile unsigned int C2FIFOINT12SET;
volatile unsigned int C2FIFOINT12INV;
volatile unsigned int C2FIFOUA12;
volatile unsigned int C2FIFOUA12CLR;
volatile unsigned int C2FIFOUA12SET;
volatile unsigned int C2FIFOUA12INV;
volatile unsigned int C2FIFOCI12;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI12bits_t;
volatile __C2FIFOCI12bits_t C2FIFOCI12bits __asm__ ("C2FIFOCI12");
volatile unsigned int C2FIFOCI12CLR;
volatile unsigned int C2FIFOCI12SET;
volatile unsigned int C2FIFOCI12INV;
volatile unsigned int C2FIFOCON13;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON13bits_t;
volatile __C2FIFOCON13bits_t C2FIFOCON13bits __asm__ ("C2FIFOCON13");
volatile unsigned int C2FIFOCON13CLR;
volatile unsigned int C2FIFOCON13SET;
volatile unsigned int C2FIFOCON13INV;
volatile unsigned int C2FIFOINT13;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT13bits_t;
volatile __C2FIFOINT13bits_t C2FIFOINT13bits __asm__ ("C2FIFOINT13");
volatile unsigned int C2FIFOINT13CLR;
volatile unsigned int C2FIFOINT13SET;
volatile unsigned int C2FIFOINT13INV;
volatile unsigned int C2FIFOUA13;
volatile unsigned int C2FIFOUA13CLR;
volatile unsigned int C2FIFOUA13SET;
volatile unsigned int C2FIFOUA13INV;
volatile unsigned int C2FIFOCI13;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI13bits_t;
volatile __C2FIFOCI13bits_t C2FIFOCI13bits __asm__ ("C2FIFOCI13");
volatile unsigned int C2FIFOCI13CLR;
volatile unsigned int C2FIFOCI13SET;
volatile unsigned int C2FIFOCI13INV;
volatile unsigned int C2FIFOCON14;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON14bits_t;
volatile __C2FIFOCON14bits_t C2FIFOCON14bits __asm__ ("C2FIFOCON14");
volatile unsigned int C2FIFOCON14CLR;
volatile unsigned int C2FIFOCON14SET;
volatile unsigned int C2FIFOCON14INV;
volatile unsigned int C2FIFOINT14;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT14bits_t;
volatile __C2FIFOINT14bits_t C2FIFOINT14bits __asm__ ("C2FIFOINT14");
volatile unsigned int C2FIFOINT14CLR;
volatile unsigned int C2FIFOINT14SET;
volatile unsigned int C2FIFOINT14INV;
volatile unsigned int C2FIFOUA14;
volatile unsigned int C2FIFOUA14CLR;
volatile unsigned int C2FIFOUA14SET;
volatile unsigned int C2FIFOUA14INV;
volatile unsigned int C2FIFOCI14;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI14bits_t;
volatile __C2FIFOCI14bits_t C2FIFOCI14bits __asm__ ("C2FIFOCI14");
volatile unsigned int C2FIFOCI14CLR;
volatile unsigned int C2FIFOCI14SET;
volatile unsigned int C2FIFOCI14INV;
volatile unsigned int C2FIFOCON15;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON15bits_t;
volatile __C2FIFOCON15bits_t C2FIFOCON15bits __asm__ ("C2FIFOCON15");
volatile unsigned int C2FIFOCON15CLR;
volatile unsigned int C2FIFOCON15SET;
volatile unsigned int C2FIFOCON15INV;
volatile unsigned int C2FIFOINT15;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT15bits_t;
volatile __C2FIFOINT15bits_t C2FIFOINT15bits __asm__ ("C2FIFOINT15");
volatile unsigned int C2FIFOINT15CLR;
volatile unsigned int C2FIFOINT15SET;
volatile unsigned int C2FIFOINT15INV;
volatile unsigned int C2FIFOUA15;
volatile unsigned int C2FIFOUA15CLR;
volatile unsigned int C2FIFOUA15SET;
volatile unsigned int C2FIFOUA15INV;
volatile unsigned int C2FIFOCI15;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI15bits_t;
volatile __C2FIFOCI15bits_t C2FIFOCI15bits __asm__ ("C2FIFOCI15");
volatile unsigned int C2FIFOCI15CLR;
volatile unsigned int C2FIFOCI15SET;
volatile unsigned int C2FIFOCI15INV;
volatile unsigned int C2FIFOCON16;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON16bits_t;
volatile __C2FIFOCON16bits_t C2FIFOCON16bits __asm__ ("C2FIFOCON16");
volatile unsigned int C2FIFOCON16CLR;
volatile unsigned int C2FIFOCON16SET;
volatile unsigned int C2FIFOCON16INV;
volatile unsigned int C2FIFOINT16;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT16bits_t;
volatile __C2FIFOINT16bits_t C2FIFOINT16bits __asm__ ("C2FIFOINT16");
volatile unsigned int C2FIFOINT16CLR;
volatile unsigned int C2FIFOINT16SET;
volatile unsigned int C2FIFOINT16INV;
volatile unsigned int C2FIFOUA16;
volatile unsigned int C2FIFOUA16CLR;
volatile unsigned int C2FIFOUA16SET;
volatile unsigned int C2FIFOUA16INV;
volatile unsigned int C2FIFOCI16;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI16bits_t;
volatile __C2FIFOCI16bits_t C2FIFOCI16bits __asm__ ("C2FIFOCI16");
volatile unsigned int C2FIFOCI16CLR;
volatile unsigned int C2FIFOCI16SET;
volatile unsigned int C2FIFOCI16INV;
volatile unsigned int C2FIFOCON17;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON17bits_t;
volatile __C2FIFOCON17bits_t C2FIFOCON17bits __asm__ ("C2FIFOCON17");
volatile unsigned int C2FIFOCON17CLR;
volatile unsigned int C2FIFOCON17SET;
volatile unsigned int C2FIFOCON17INV;
volatile unsigned int C2FIFOINT17;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT17bits_t;
volatile __C2FIFOINT17bits_t C2FIFOINT17bits __asm__ ("C2FIFOINT17");
volatile unsigned int C2FIFOINT17CLR;
volatile unsigned int C2FIFOINT17SET;
volatile unsigned int C2FIFOINT17INV;
volatile unsigned int C2FIFOUA17;
volatile unsigned int C2FIFOUA17CLR;
volatile unsigned int C2FIFOUA17SET;
volatile unsigned int C2FIFOUA17INV;
volatile unsigned int C2FIFOCI17;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI17bits_t;
volatile __C2FIFOCI17bits_t C2FIFOCI17bits __asm__ ("C2FIFOCI17");
volatile unsigned int C2FIFOCI17CLR;
volatile unsigned int C2FIFOCI17SET;
volatile unsigned int C2FIFOCI17INV;
volatile unsigned int C2FIFOCON18;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON18bits_t;
volatile __C2FIFOCON18bits_t C2FIFOCON18bits __asm__ ("C2FIFOCON18");
volatile unsigned int C2FIFOCON18CLR;
volatile unsigned int C2FIFOCON18SET;
volatile unsigned int C2FIFOCON18INV;
volatile unsigned int C2FIFOINT18;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT18bits_t;
volatile __C2FIFOINT18bits_t C2FIFOINT18bits __asm__ ("C2FIFOINT18");
volatile unsigned int C2FIFOINT18CLR;
volatile unsigned int C2FIFOINT18SET;
volatile unsigned int C2FIFOINT18INV;
volatile unsigned int C2FIFOUA18;
volatile unsigned int C2FIFOUA18CLR;
volatile unsigned int C2FIFOUA18SET;
volatile unsigned int C2FIFOUA18INV;
volatile unsigned int C2FIFOCI18;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI18bits_t;
volatile __C2FIFOCI18bits_t C2FIFOCI18bits __asm__ ("C2FIFOCI18");
volatile unsigned int C2FIFOCI18CLR;
volatile unsigned int C2FIFOCI18SET;
volatile unsigned int C2FIFOCI18INV;
volatile unsigned int C2FIFOCON19;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON19bits_t;
volatile __C2FIFOCON19bits_t C2FIFOCON19bits __asm__ ("C2FIFOCON19");
volatile unsigned int C2FIFOCON19CLR;
volatile unsigned int C2FIFOCON19SET;
volatile unsigned int C2FIFOCON19INV;
volatile unsigned int C2FIFOINT19;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT19bits_t;
volatile __C2FIFOINT19bits_t C2FIFOINT19bits __asm__ ("C2FIFOINT19");
volatile unsigned int C2FIFOINT19CLR;
volatile unsigned int C2FIFOINT19SET;
volatile unsigned int C2FIFOINT19INV;
volatile unsigned int C2FIFOUA19;
volatile unsigned int C2FIFOUA19CLR;
volatile unsigned int C2FIFOUA19SET;
volatile unsigned int C2FIFOUA19INV;
volatile unsigned int C2FIFOCI19;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI19bits_t;
volatile __C2FIFOCI19bits_t C2FIFOCI19bits __asm__ ("C2FIFOCI19");
volatile unsigned int C2FIFOCI19CLR;
volatile unsigned int C2FIFOCI19SET;
volatile unsigned int C2FIFOCI19INV;
volatile unsigned int C2FIFOCON20;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON20bits_t;
volatile __C2FIFOCON20bits_t C2FIFOCON20bits __asm__ ("C2FIFOCON20");
volatile unsigned int C2FIFOCON20CLR;
volatile unsigned int C2FIFOCON20SET;
volatile unsigned int C2FIFOCON20INV;
volatile unsigned int C2FIFOINT20;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT20bits_t;
volatile __C2FIFOINT20bits_t C2FIFOINT20bits __asm__ ("C2FIFOINT20");
volatile unsigned int C2FIFOINT20CLR;
volatile unsigned int C2FIFOINT20SET;
volatile unsigned int C2FIFOINT20INV;
volatile unsigned int C2FIFOUA20;
volatile unsigned int C2FIFOUA20CLR;
volatile unsigned int C2FIFOUA20SET;
volatile unsigned int C2FIFOUA20INV;
volatile unsigned int C2FIFOCI20;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI20bits_t;
volatile __C2FIFOCI20bits_t C2FIFOCI20bits __asm__ ("C2FIFOCI20");
volatile unsigned int C2FIFOCI20CLR;
volatile unsigned int C2FIFOCI20SET;
volatile unsigned int C2FIFOCI20INV;
volatile unsigned int C2FIFOCON21;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON21bits_t;
volatile __C2FIFOCON21bits_t C2FIFOCON21bits __asm__ ("C2FIFOCON21");
volatile unsigned int C2FIFOCON21CLR;
volatile unsigned int C2FIFOCON21SET;
volatile unsigned int C2FIFOCON21INV;
volatile unsigned int C2FIFOINT21;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT21bits_t;
volatile __C2FIFOINT21bits_t C2FIFOINT21bits __asm__ ("C2FIFOINT21");
volatile unsigned int C2FIFOINT21CLR;
volatile unsigned int C2FIFOINT21SET;
volatile unsigned int C2FIFOINT21INV;
volatile unsigned int C2FIFOUA21;
volatile unsigned int C2FIFOUA21CLR;
volatile unsigned int C2FIFOUA21SET;
volatile unsigned int C2FIFOUA21INV;
volatile unsigned int C2FIFOCI21;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI21bits_t;
volatile __C2FIFOCI21bits_t C2FIFOCI21bits __asm__ ("C2FIFOCI21");
volatile unsigned int C2FIFOCI21CLR;
volatile unsigned int C2FIFOCI21SET;
volatile unsigned int C2FIFOCI21INV;
volatile unsigned int C2FIFOCON22;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON22bits_t;
volatile __C2FIFOCON22bits_t C2FIFOCON22bits __asm__ ("C2FIFOCON22");
volatile unsigned int C2FIFOCON22CLR;
volatile unsigned int C2FIFOCON22SET;
volatile unsigned int C2FIFOCON22INV;
volatile unsigned int C2FIFOINT22;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT22bits_t;
volatile __C2FIFOINT22bits_t C2FIFOINT22bits __asm__ ("C2FIFOINT22");
volatile unsigned int C2FIFOINT22CLR;
volatile unsigned int C2FIFOINT22SET;
volatile unsigned int C2FIFOINT22INV;
volatile unsigned int C2FIFOUA22;
volatile unsigned int C2FIFOUA22CLR;
volatile unsigned int C2FIFOUA22SET;
volatile unsigned int C2FIFOUA22INV;
volatile unsigned int C2FIFOCI22;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI22bits_t;
volatile __C2FIFOCI22bits_t C2FIFOCI22bits __asm__ ("C2FIFOCI22");
volatile unsigned int C2FIFOCI22CLR;
volatile unsigned int C2FIFOCI22SET;
volatile unsigned int C2FIFOCI22INV;
volatile unsigned int C2FIFOCON23;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON23bits_t;
volatile __C2FIFOCON23bits_t C2FIFOCON23bits __asm__ ("C2FIFOCON23");
volatile unsigned int C2FIFOCON23CLR;
volatile unsigned int C2FIFOCON23SET;
volatile unsigned int C2FIFOCON23INV;
volatile unsigned int C2FIFOINT23;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT23bits_t;
volatile __C2FIFOINT23bits_t C2FIFOINT23bits __asm__ ("C2FIFOINT23");
volatile unsigned int C2FIFOINT23CLR;
volatile unsigned int C2FIFOINT23SET;
volatile unsigned int C2FIFOINT23INV;
volatile unsigned int C2FIFOUA23;
volatile unsigned int C2FIFOUA23CLR;
volatile unsigned int C2FIFOUA23SET;
volatile unsigned int C2FIFOUA23INV;
volatile unsigned int C2FIFOCI23;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI23bits_t;
volatile __C2FIFOCI23bits_t C2FIFOCI23bits __asm__ ("C2FIFOCI23");
volatile unsigned int C2FIFOCI23CLR;
volatile unsigned int C2FIFOCI23SET;
volatile unsigned int C2FIFOCI23INV;
volatile unsigned int C2FIFOCON24;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON24bits_t;
volatile __C2FIFOCON24bits_t C2FIFOCON24bits __asm__ ("C2FIFOCON24");
volatile unsigned int C2FIFOCON24CLR;
volatile unsigned int C2FIFOCON24SET;
volatile unsigned int C2FIFOCON24INV;
volatile unsigned int C2FIFOINT24;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT24bits_t;
volatile __C2FIFOINT24bits_t C2FIFOINT24bits __asm__ ("C2FIFOINT24");
volatile unsigned int C2FIFOINT24CLR;
volatile unsigned int C2FIFOINT24SET;
volatile unsigned int C2FIFOINT24INV;
volatile unsigned int C2FIFOUA24;
volatile unsigned int C2FIFOUA24CLR;
volatile unsigned int C2FIFOUA24SET;
volatile unsigned int C2FIFOUA24INV;
volatile unsigned int C2FIFOCI24;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI24bits_t;
volatile __C2FIFOCI24bits_t C2FIFOCI24bits __asm__ ("C2FIFOCI24");
volatile unsigned int C2FIFOCI24CLR;
volatile unsigned int C2FIFOCI24SET;
volatile unsigned int C2FIFOCI24INV;
volatile unsigned int C2FIFOCON25;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON25bits_t;
volatile __C2FIFOCON25bits_t C2FIFOCON25bits __asm__ ("C2FIFOCON25");
volatile unsigned int C2FIFOCON25CLR;
volatile unsigned int C2FIFOCON25SET;
volatile unsigned int C2FIFOCON25INV;
volatile unsigned int C2FIFOINT25;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT25bits_t;
volatile __C2FIFOINT25bits_t C2FIFOINT25bits __asm__ ("C2FIFOINT25");
volatile unsigned int C2FIFOINT25CLR;
volatile unsigned int C2FIFOINT25SET;
volatile unsigned int C2FIFOINT25INV;
volatile unsigned int C2FIFOUA25;
volatile unsigned int C2FIFOUA25CLR;
volatile unsigned int C2FIFOUA25SET;
volatile unsigned int C2FIFOUA25INV;
volatile unsigned int C2FIFOCI25;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI25bits_t;
volatile __C2FIFOCI25bits_t C2FIFOCI25bits __asm__ ("C2FIFOCI25");
volatile unsigned int C2FIFOCI25CLR;
volatile unsigned int C2FIFOCI25SET;
volatile unsigned int C2FIFOCI25INV;
volatile unsigned int C2FIFOCON26;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON26bits_t;
volatile __C2FIFOCON26bits_t C2FIFOCON26bits __asm__ ("C2FIFOCON26");
volatile unsigned int C2FIFOCON26CLR;
volatile unsigned int C2FIFOCON26SET;
volatile unsigned int C2FIFOCON26INV;
volatile unsigned int C2FIFOINT26;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT26bits_t;
volatile __C2FIFOINT26bits_t C2FIFOINT26bits __asm__ ("C2FIFOINT26");
volatile unsigned int C2FIFOINT26CLR;
volatile unsigned int C2FIFOINT26SET;
volatile unsigned int C2FIFOINT26INV;
volatile unsigned int C2FIFOUA26;
volatile unsigned int C2FIFOUA26CLR;
volatile unsigned int C2FIFOUA26SET;
volatile unsigned int C2FIFOUA26INV;
volatile unsigned int C2FIFOCI26;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI26bits_t;
volatile __C2FIFOCI26bits_t C2FIFOCI26bits __asm__ ("C2FIFOCI26");
volatile unsigned int C2FIFOCI26CLR;
volatile unsigned int C2FIFOCI26SET;
volatile unsigned int C2FIFOCI26INV;
volatile unsigned int C2FIFOCON27;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON27bits_t;
volatile __C2FIFOCON27bits_t C2FIFOCON27bits __asm__ ("C2FIFOCON27");
volatile unsigned int C2FIFOCON27CLR;
volatile unsigned int C2FIFOCON27SET;
volatile unsigned int C2FIFOCON27INV;
volatile unsigned int C2FIFOINT27;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT27bits_t;
volatile __C2FIFOINT27bits_t C2FIFOINT27bits __asm__ ("C2FIFOINT27");
volatile unsigned int C2FIFOINT27CLR;
volatile unsigned int C2FIFOINT27SET;
volatile unsigned int C2FIFOINT27INV;
volatile unsigned int C2FIFOUA27;
volatile unsigned int C2FIFOUA27CLR;
volatile unsigned int C2FIFOUA27SET;
volatile unsigned int C2FIFOUA27INV;
volatile unsigned int C2FIFOCI27;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI27bits_t;
volatile __C2FIFOCI27bits_t C2FIFOCI27bits __asm__ ("C2FIFOCI27");
volatile unsigned int C2FIFOCI27CLR;
volatile unsigned int C2FIFOCI27SET;
volatile unsigned int C2FIFOCI27INV;
volatile unsigned int C2FIFOCON28;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON28bits_t;
volatile __C2FIFOCON28bits_t C2FIFOCON28bits __asm__ ("C2FIFOCON28");
volatile unsigned int C2FIFOCON28CLR;
volatile unsigned int C2FIFOCON28SET;
volatile unsigned int C2FIFOCON28INV;
volatile unsigned int C2FIFOINT28;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT28bits_t;
volatile __C2FIFOINT28bits_t C2FIFOINT28bits __asm__ ("C2FIFOINT28");
volatile unsigned int C2FIFOINT28CLR;
volatile unsigned int C2FIFOINT28SET;
volatile unsigned int C2FIFOINT28INV;
volatile unsigned int C2FIFOUA28;
volatile unsigned int C2FIFOUA28CLR;
volatile unsigned int C2FIFOUA28SET;
volatile unsigned int C2FIFOUA28INV;
volatile unsigned int C2FIFOCI28;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI28bits_t;
volatile __C2FIFOCI28bits_t C2FIFOCI28bits __asm__ ("C2FIFOCI28");
volatile unsigned int C2FIFOCI28CLR;
volatile unsigned int C2FIFOCI28SET;
volatile unsigned int C2FIFOCI28INV;
volatile unsigned int C2FIFOCON29;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON29bits_t;
volatile __C2FIFOCON29bits_t C2FIFOCON29bits __asm__ ("C2FIFOCON29");
volatile unsigned int C2FIFOCON29CLR;
volatile unsigned int C2FIFOCON29SET;
volatile unsigned int C2FIFOCON29INV;
volatile unsigned int C2FIFOINT29;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT29bits_t;
volatile __C2FIFOINT29bits_t C2FIFOINT29bits __asm__ ("C2FIFOINT29");
volatile unsigned int C2FIFOINT29CLR;
volatile unsigned int C2FIFOINT29SET;
volatile unsigned int C2FIFOINT29INV;
volatile unsigned int C2FIFOUA29;
volatile unsigned int C2FIFOUA29CLR;
volatile unsigned int C2FIFOUA29SET;
volatile unsigned int C2FIFOUA29INV;
volatile unsigned int C2FIFOCI29;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI29bits_t;
volatile __C2FIFOCI29bits_t C2FIFOCI29bits __asm__ ("C2FIFOCI29");
volatile unsigned int C2FIFOCI29CLR;
volatile unsigned int C2FIFOCI29SET;
volatile unsigned int C2FIFOCI29INV;
volatile unsigned int C2FIFOCON30;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON30bits_t;
volatile __C2FIFOCON30bits_t C2FIFOCON30bits __asm__ ("C2FIFOCON30");
volatile unsigned int C2FIFOCON30CLR;
volatile unsigned int C2FIFOCON30SET;
volatile unsigned int C2FIFOCON30INV;
volatile unsigned int C2FIFOINT30;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT30bits_t;
volatile __C2FIFOINT30bits_t C2FIFOINT30bits __asm__ ("C2FIFOINT30");
volatile unsigned int C2FIFOINT30CLR;
volatile unsigned int C2FIFOINT30SET;
volatile unsigned int C2FIFOINT30INV;
volatile unsigned int C2FIFOUA30;
volatile unsigned int C2FIFOUA30CLR;
volatile unsigned int C2FIFOUA30SET;
volatile unsigned int C2FIFOUA30INV;
volatile unsigned int C2FIFOCI30;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI30bits_t;
volatile __C2FIFOCI30bits_t C2FIFOCI30bits __asm__ ("C2FIFOCI30");
volatile unsigned int C2FIFOCI30CLR;
volatile unsigned int C2FIFOCI30SET;
volatile unsigned int C2FIFOCI30INV;
volatile unsigned int C2FIFOCON31;
typedef union {
  struct {
    unsigned TXPRI:2;
    unsigned RTREN:1;
    unsigned TXREQ:1;
    unsigned TXERR:1;
    unsigned TXLARB:1;
    unsigned TXABAT:1;
    unsigned TXEN:1;
    unsigned :4;
    unsigned DONLY:1;
    unsigned UINC:1;
    unsigned FRESET:1;
    unsigned :1;
    unsigned FSIZE:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCON31bits_t;
volatile __C2FIFOCON31bits_t C2FIFOCON31bits __asm__ ("C2FIFOCON31");
volatile unsigned int C2FIFOCON31CLR;
volatile unsigned int C2FIFOCON31SET;
volatile unsigned int C2FIFOCON31INV;
volatile unsigned int C2FIFOINT31;
typedef union {
  struct {
    unsigned RXNEMPTYIF:1;
    unsigned RXHALFIF:1;
    unsigned RXFULLIF:1;
    unsigned RXOVFLIF:1;
    unsigned :4;
    unsigned TXEMPTYIF:1;
    unsigned TXHALFIF:1;
    unsigned TXNFULLIF:1;
    unsigned :5;
    unsigned RXNEMPTYIE:1;
    unsigned RXHALFIE:1;
    unsigned RXFULLIE:1;
    unsigned RXOVFLIE:1;
    unsigned :4;
    unsigned TXEMPTYIE:1;
    unsigned TXHALFIE:1;
    unsigned TXNFULLIE:1;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOINT31bits_t;
volatile __C2FIFOINT31bits_t C2FIFOINT31bits __asm__ ("C2FIFOINT31");
volatile unsigned int C2FIFOINT31CLR;
volatile unsigned int C2FIFOINT31SET;
volatile unsigned int C2FIFOINT31INV;
volatile unsigned int C2FIFOUA31;
volatile unsigned int C2FIFOUA31CLR;
volatile unsigned int C2FIFOUA31SET;
volatile unsigned int C2FIFOUA31INV;
volatile unsigned int C2FIFOCI31;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI31bits_t;
volatile __C2FIFOCI31bits_t C2FIFOCI31bits __asm__ ("C2FIFOCI31");
volatile unsigned int C2FIFOCI31CLR;
volatile unsigned int C2FIFOCI31SET;
volatile unsigned int C2FIFOCI31INV;
volatile unsigned int DEVCFG3;
typedef union {
  struct {
    unsigned USERID:16;
    unsigned FSRSSEL:3;
    unsigned :5;
    unsigned FMIIEN:1;
    unsigned FETHIO:1;
    unsigned FCANIO:1;
    unsigned :3;
    unsigned FUSBIDIO:1;
    unsigned FVBUSONIO:1;
  };
  struct {
    unsigned w:32;
  };
} __DEVCFG3bits_t;
volatile __DEVCFG3bits_t DEVCFG3bits __asm__ ("DEVCFG3");
volatile unsigned int DEVCFG2;
typedef union {
  struct {
    unsigned FPLLIDIV:3;
    unsigned :1;
    unsigned FPLLMUL:3;
    unsigned :1;
    unsigned UPLLIDIV:3;
    unsigned :4;
    unsigned UPLLEN:1;
    unsigned FPLLODIV:3;
  };
  struct {
    unsigned w:32;
  };
} __DEVCFG2bits_t;
volatile __DEVCFG2bits_t DEVCFG2bits __asm__ ("DEVCFG2");
volatile unsigned int DEVCFG1;
typedef union {
  struct {
    unsigned FNOSC:3;
    unsigned :2;
    unsigned FSOSCEN:1;
    unsigned :1;
    unsigned IESO:1;
    unsigned POSCMOD:2;
    unsigned OSCIOFNC:1;
    unsigned :1;
    unsigned FPBDIV:2;
    unsigned FCKSM:2;
    unsigned WDTPS:5;
    unsigned :2;
    unsigned FWDTEN:1;
  };
  struct {
    unsigned w:32;
  };
} __DEVCFG1bits_t;
volatile __DEVCFG1bits_t DEVCFG1bits __asm__ ("DEVCFG1");
volatile unsigned int DEVCFG0;
typedef union {
  struct {
    unsigned DEBUG:2;
    unsigned :1;
    unsigned ICESEL:1;
    unsigned :8;
    unsigned PWP:8;
    unsigned :4;
    unsigned BWP:1;
    unsigned :3;
    unsigned CP:1;
  };
  struct {
    unsigned FDEBUG:2;
  };
  struct {
    unsigned w:32;
  };
} __DEVCFG0bits_t;
volatile __DEVCFG0bits_t DEVCFG0bits __asm__ ("DEVCFG0");
int __XC_UART;
typedef unsigned long _reg_t;
unsigned int _xchsrspss (unsigned int);
       
       
