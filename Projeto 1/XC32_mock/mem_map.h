       
       
extern volatile unsigned int WDTCON;
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
extern volatile __WDTCONbits_t WDTCONbits __asm__ ("WDTCON");
extern volatile unsigned int WDTCONCLR;
extern volatile unsigned int WDTCONSET;
extern volatile unsigned int WDTCONINV;
extern volatile unsigned int RTCCON;
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
extern volatile __RTCCONbits_t RTCCONbits __asm__ ("RTCCON");
extern volatile unsigned int RTCCONCLR;
extern volatile unsigned int RTCCONSET;
extern volatile unsigned int RTCCONINV;
extern volatile unsigned int RTCALRM;
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
extern volatile __RTCALRMbits_t RTCALRMbits __asm__ ("RTCALRM");
extern volatile unsigned int RTCALRMCLR;
extern volatile unsigned int RTCALRMSET;
extern volatile unsigned int RTCALRMINV;
extern volatile unsigned int RTCTIME;
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
extern volatile __RTCTIMEbits_t RTCTIMEbits __asm__ ("RTCTIME");
extern volatile unsigned int RTCTIMECLR;
extern volatile unsigned int RTCTIMESET;
extern volatile unsigned int RTCTIMEINV;
extern volatile unsigned int RTCDATE;
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
extern volatile __RTCDATEbits_t RTCDATEbits __asm__ ("RTCDATE");
extern volatile unsigned int RTCDATECLR;
extern volatile unsigned int RTCDATESET;
extern volatile unsigned int RTCDATEINV;
extern volatile unsigned int ALRMTIME;
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
extern volatile __ALRMTIMEbits_t ALRMTIMEbits __asm__ ("ALRMTIME");
extern volatile unsigned int ALRMTIMECLR;
extern volatile unsigned int ALRMTIMESET;
extern volatile unsigned int ALRMTIMEINV;
extern volatile unsigned int ALRMDATE;
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
extern volatile __ALRMDATEbits_t ALRMDATEbits __asm__ ("ALRMDATE");
extern volatile unsigned int ALRMDATECLR;
extern volatile unsigned int ALRMDATESET;
extern volatile unsigned int ALRMDATEINV;
extern volatile unsigned int T1CON;
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
extern volatile __T1CONbits_t T1CONbits __asm__ ("T1CON");
extern volatile unsigned int T1CONCLR;
extern volatile unsigned int T1CONSET;
extern volatile unsigned int T1CONINV;
extern volatile unsigned int TMR1;
extern volatile unsigned int TMR1CLR;
extern volatile unsigned int TMR1SET;
extern volatile unsigned int TMR1INV;
extern volatile unsigned int PR1;
extern volatile unsigned int PR1CLR;
extern volatile unsigned int PR1SET;
extern volatile unsigned int PR1INV;
extern volatile unsigned int T2CON;
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
extern volatile __T2CONbits_t T2CONbits __asm__ ("T2CON");
extern volatile unsigned int T2CONCLR;
extern volatile unsigned int T2CONSET;
extern volatile unsigned int T2CONINV;
extern volatile unsigned int TMR2;
extern volatile unsigned int TMR2CLR;
extern volatile unsigned int TMR2SET;
extern volatile unsigned int TMR2INV;
extern volatile unsigned int PR2;
extern volatile unsigned int PR2CLR;
extern volatile unsigned int PR2SET;
extern volatile unsigned int PR2INV;
extern volatile unsigned int T3CON;
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
extern volatile __T3CONbits_t T3CONbits __asm__ ("T3CON");
extern volatile unsigned int T3CONCLR;
extern volatile unsigned int T3CONSET;
extern volatile unsigned int T3CONINV;
extern volatile unsigned int TMR3;
extern volatile unsigned int TMR3CLR;
extern volatile unsigned int TMR3SET;
extern volatile unsigned int TMR3INV;
extern volatile unsigned int PR3;
extern volatile unsigned int PR3CLR;
extern volatile unsigned int PR3SET;
extern volatile unsigned int PR3INV;
extern volatile unsigned int T4CON;
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
extern volatile __T4CONbits_t T4CONbits __asm__ ("T4CON");
extern volatile unsigned int T4CONCLR;
extern volatile unsigned int T4CONSET;
extern volatile unsigned int T4CONINV;
extern volatile unsigned int TMR4;
extern volatile unsigned int TMR4CLR;
extern volatile unsigned int TMR4SET;
extern volatile unsigned int TMR4INV;
extern volatile unsigned int PR4;
extern volatile unsigned int PR4CLR;
extern volatile unsigned int PR4SET;
extern volatile unsigned int PR4INV;
extern volatile unsigned int T5CON;
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
extern volatile __T5CONbits_t T5CONbits __asm__ ("T5CON");
extern volatile unsigned int T5CONCLR;
extern volatile unsigned int T5CONSET;
extern volatile unsigned int T5CONINV;
extern volatile unsigned int TMR5;
extern volatile unsigned int TMR5CLR;
extern volatile unsigned int TMR5SET;
extern volatile unsigned int TMR5INV;
extern volatile unsigned int PR5;
extern volatile unsigned int PR5CLR;
extern volatile unsigned int PR5SET;
extern volatile unsigned int PR5INV;
extern volatile unsigned int IC1CON;
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
extern volatile __IC1CONbits_t IC1CONbits __asm__ ("IC1CON");
extern volatile unsigned int IC1CONCLR;
extern volatile unsigned int IC1CONSET;
extern volatile unsigned int IC1CONINV;
extern volatile unsigned int IC1BUF;
extern volatile unsigned int IC2CON;
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
extern volatile __IC2CONbits_t IC2CONbits __asm__ ("IC2CON");
extern volatile unsigned int IC2CONCLR;
extern volatile unsigned int IC2CONSET;
extern volatile unsigned int IC2CONINV;
extern volatile unsigned int IC2BUF;
extern volatile unsigned int IC3CON;
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
extern volatile __IC3CONbits_t IC3CONbits __asm__ ("IC3CON");
extern volatile unsigned int IC3CONCLR;
extern volatile unsigned int IC3CONSET;
extern volatile unsigned int IC3CONINV;
extern volatile unsigned int IC3BUF;
extern volatile unsigned int IC4CON;
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
extern volatile __IC4CONbits_t IC4CONbits __asm__ ("IC4CON");
extern volatile unsigned int IC4CONCLR;
extern volatile unsigned int IC4CONSET;
extern volatile unsigned int IC4CONINV;
extern volatile unsigned int IC4BUF;
extern volatile unsigned int IC5CON;
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
extern volatile __IC5CONbits_t IC5CONbits __asm__ ("IC5CON");
extern volatile unsigned int IC5CONCLR;
extern volatile unsigned int IC5CONSET;
extern volatile unsigned int IC5CONINV;
extern volatile unsigned int IC5BUF;
extern volatile unsigned int OC1CON;
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
extern volatile __OC1CONbits_t OC1CONbits __asm__ ("OC1CON");
extern volatile unsigned int OC1CONCLR;
extern volatile unsigned int OC1CONSET;
extern volatile unsigned int OC1CONINV;
extern volatile unsigned int OC1R;
extern volatile unsigned int OC1RCLR;
extern volatile unsigned int OC1RSET;
extern volatile unsigned int OC1RINV;
extern volatile unsigned int OC1RS;
extern volatile unsigned int OC1RSCLR;
extern volatile unsigned int OC1RSSET;
extern volatile unsigned int OC1RSINV;
extern volatile unsigned int OC2CON;
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
extern volatile __OC2CONbits_t OC2CONbits __asm__ ("OC2CON");
extern volatile unsigned int OC2CONCLR;
extern volatile unsigned int OC2CONSET;
extern volatile unsigned int OC2CONINV;
extern volatile unsigned int OC2R;
extern volatile unsigned int OC2RCLR;
extern volatile unsigned int OC2RSET;
extern volatile unsigned int OC2RINV;
extern volatile unsigned int OC2RS;
extern volatile unsigned int OC2RSCLR;
extern volatile unsigned int OC2RSSET;
extern volatile unsigned int OC2RSINV;
extern volatile unsigned int OC3CON;
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
extern volatile __OC3CONbits_t OC3CONbits __asm__ ("OC3CON");
extern volatile unsigned int OC3CONCLR;
extern volatile unsigned int OC3CONSET;
extern volatile unsigned int OC3CONINV;
extern volatile unsigned int OC3R;
extern volatile unsigned int OC3RCLR;
extern volatile unsigned int OC3RSET;
extern volatile unsigned int OC3RINV;
extern volatile unsigned int OC3RS;
extern volatile unsigned int OC3RSCLR;
extern volatile unsigned int OC3RSSET;
extern volatile unsigned int OC3RSINV;
extern volatile unsigned int OC4CON;
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
extern volatile __OC4CONbits_t OC4CONbits __asm__ ("OC4CON");
extern volatile unsigned int OC4CONCLR;
extern volatile unsigned int OC4CONSET;
extern volatile unsigned int OC4CONINV;
extern volatile unsigned int OC4R;
extern volatile unsigned int OC4RCLR;
extern volatile unsigned int OC4RSET;
extern volatile unsigned int OC4RINV;
extern volatile unsigned int OC4RS;
extern volatile unsigned int OC4RSCLR;
extern volatile unsigned int OC4RSSET;
extern volatile unsigned int OC4RSINV;
extern volatile unsigned int OC5CON;
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
extern volatile __OC5CONbits_t OC5CONbits __asm__ ("OC5CON");
extern volatile unsigned int OC5CONCLR;
extern volatile unsigned int OC5CONSET;
extern volatile unsigned int OC5CONINV;
extern volatile unsigned int OC5R;
extern volatile unsigned int OC5RCLR;
extern volatile unsigned int OC5RSET;
extern volatile unsigned int OC5RINV;
extern volatile unsigned int OC5RS;
extern volatile unsigned int OC5RSCLR;
extern volatile unsigned int OC5RSSET;
extern volatile unsigned int OC5RSINV;
extern volatile unsigned int I2C1ACON;
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
extern volatile __I2C1ACONbits_t I2C1ACONbits __asm__ ("I2C1ACON");
extern volatile unsigned int I2C3CON;
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
extern volatile __I2C3CONbits_t I2C3CONbits __asm__ ("I2C3CON");
extern volatile unsigned int I2C1ACONCLR;
extern volatile unsigned int I2C3CONCLR;
extern volatile unsigned int I2C1ACONSET;
extern volatile unsigned int I2C3CONSET;
extern volatile unsigned int I2C1ACONINV;
extern volatile unsigned int I2C3CONINV;
extern volatile unsigned int I2C1ASTAT;
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
extern volatile __I2C1ASTATbits_t I2C1ASTATbits __asm__ ("I2C1ASTAT");
extern volatile unsigned int I2C3STAT;
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
extern volatile __I2C3STATbits_t I2C3STATbits __asm__ ("I2C3STAT");
extern volatile unsigned int I2C1ASTATCLR;
extern volatile unsigned int I2C3STATCLR;
extern volatile unsigned int I2C1ASTATSET;
extern volatile unsigned int I2C3STATSET;
extern volatile unsigned int I2C1ASTATINV;
extern volatile unsigned int I2C3STATINV;
extern volatile unsigned int I2C1AADD;
extern volatile unsigned int I2C3ADD;
extern volatile unsigned int I2C1AADDCLR;
extern volatile unsigned int I2C3ADDCLR;
extern volatile unsigned int I2C1AADDSET;
extern volatile unsigned int I2C3ADDSET;
extern volatile unsigned int I2C1AADDINV;
extern volatile unsigned int I2C3ADDINV;
extern volatile unsigned int I2C1AMSK;
extern volatile unsigned int I2C3MSK;
extern volatile unsigned int I2C1AMSKCLR;
extern volatile unsigned int I2C3MSKCLR;
extern volatile unsigned int I2C1AMSKSET;
extern volatile unsigned int I2C3MSKSET;
extern volatile unsigned int I2C1AMSKINV;
extern volatile unsigned int I2C3MSKINV;
extern volatile unsigned int I2C1ABRG;
extern volatile unsigned int I2C3BRG;
extern volatile unsigned int I2C1ABRGCLR;
extern volatile unsigned int I2C3BRGCLR;
extern volatile unsigned int I2C1ABRGSET;
extern volatile unsigned int I2C3BRGSET;
extern volatile unsigned int I2C1ABRGINV;
extern volatile unsigned int I2C3BRGINV;
extern volatile unsigned int I2C1ATRN;
extern volatile unsigned int I2C3TRN;
extern volatile unsigned int I2C1ATRNCLR;
extern volatile unsigned int I2C3TRNCLR;
extern volatile unsigned int I2C1ATRNSET;
extern volatile unsigned int I2C3TRNSET;
extern volatile unsigned int I2C1ATRNINV;
extern volatile unsigned int I2C3TRNINV;
extern volatile unsigned int I2C1ARCV;
extern volatile unsigned int I2C3RCV;
extern volatile unsigned int I2C2ACON;
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
extern volatile __I2C2ACONbits_t I2C2ACONbits __asm__ ("I2C2ACON");
extern volatile unsigned int I2C4CON;
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
extern volatile __I2C4CONbits_t I2C4CONbits __asm__ ("I2C4CON");
extern volatile unsigned int I2C2ACONCLR;
extern volatile unsigned int I2C4CONCLR;
extern volatile unsigned int I2C2ACONSET;
extern volatile unsigned int I2C4CONSET;
extern volatile unsigned int I2C2ACONINV;
extern volatile unsigned int I2C4CONINV;
extern volatile unsigned int I2C2ASTAT;
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
extern volatile __I2C2ASTATbits_t I2C2ASTATbits __asm__ ("I2C2ASTAT");
extern volatile unsigned int I2C4STAT;
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
extern volatile __I2C4STATbits_t I2C4STATbits __asm__ ("I2C4STAT");
extern volatile unsigned int I2C2ASTATCLR;
extern volatile unsigned int I2C4STATCLR;
extern volatile unsigned int I2C2ASTATSET;
extern volatile unsigned int I2C4STATSET;
extern volatile unsigned int I2C2ASTATINV;
extern volatile unsigned int I2C4STATINV;
extern volatile unsigned int I2C2AADD;
extern volatile unsigned int I2C4ADD;
extern volatile unsigned int I2C2AADDCLR;
extern volatile unsigned int I2C4ADDCLR;
extern volatile unsigned int I2C2AADDSET;
extern volatile unsigned int I2C4ADDSET;
extern volatile unsigned int I2C2AADDINV;
extern volatile unsigned int I2C4ADDINV;
extern volatile unsigned int I2C2AMSK;
extern volatile unsigned int I2C4MSK;
extern volatile unsigned int I2C2AMSKCLR;
extern volatile unsigned int I2C4MSKCLR;
extern volatile unsigned int I2C2AMSKSET;
extern volatile unsigned int I2C4MSKSET;
extern volatile unsigned int I2C2AMSKINV;
extern volatile unsigned int I2C4MSKINV;
extern volatile unsigned int I2C2ABRG;
extern volatile unsigned int I2C4BRG;
extern volatile unsigned int I2C2ABRGCLR;
extern volatile unsigned int I2C4BRGCLR;
extern volatile unsigned int I2C2ABRGSET;
extern volatile unsigned int I2C4BRGSET;
extern volatile unsigned int I2C2ABRGINV;
extern volatile unsigned int I2C4BRGINV;
extern volatile unsigned int I2C2ATRN;
extern volatile unsigned int I2C4TRN;
extern volatile unsigned int I2C2ATRNCLR;
extern volatile unsigned int I2C4TRNCLR;
extern volatile unsigned int I2C2ATRNSET;
extern volatile unsigned int I2C4TRNSET;
extern volatile unsigned int I2C2ATRNINV;
extern volatile unsigned int I2C4TRNINV;
extern volatile unsigned int I2C2ARCV;
extern volatile unsigned int I2C4RCV;
extern volatile unsigned int I2C3ACON;
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
extern volatile __I2C3ACONbits_t I2C3ACONbits __asm__ ("I2C3ACON");
extern volatile unsigned int I2C5CON;
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
extern volatile __I2C5CONbits_t I2C5CONbits __asm__ ("I2C5CON");
extern volatile unsigned int I2C3ACONCLR;
extern volatile unsigned int I2C5CONCLR;
extern volatile unsigned int I2C3ACONSET;
extern volatile unsigned int I2C5CONSET;
extern volatile unsigned int I2C3ACONINV;
extern volatile unsigned int I2C5CONINV;
extern volatile unsigned int I2C3ASTAT;
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
extern volatile __I2C3ASTATbits_t I2C3ASTATbits __asm__ ("I2C3ASTAT");
extern volatile unsigned int I2C5STAT;
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
extern volatile __I2C5STATbits_t I2C5STATbits __asm__ ("I2C5STAT");
extern volatile unsigned int I2C3ASTATCLR;
extern volatile unsigned int I2C5STATCLR;
extern volatile unsigned int I2C3ASTATSET;
extern volatile unsigned int I2C5STATSET;
extern volatile unsigned int I2C3ASTATINV;
extern volatile unsigned int I2C5STATINV;
extern volatile unsigned int I2C3AADD;
extern volatile unsigned int I2C5ADD;
extern volatile unsigned int I2C3AADDCLR;
extern volatile unsigned int I2C5ADDCLR;
extern volatile unsigned int I2C3AADDSET;
extern volatile unsigned int I2C5ADDSET;
extern volatile unsigned int I2C3AADDINV;
extern volatile unsigned int I2C5ADDINV;
extern volatile unsigned int I2C3AMSK;
extern volatile unsigned int I2C5MSK;
extern volatile unsigned int I2C3AMSKCLR;
extern volatile unsigned int I2C5MSKCLR;
extern volatile unsigned int I2C3AMSKSET;
extern volatile unsigned int I2C5MSKSET;
extern volatile unsigned int I2C3AMSKINV;
extern volatile unsigned int I2C5MSKINV;
extern volatile unsigned int I2C3ABRG;
extern volatile unsigned int I2C5BRG;
extern volatile unsigned int I2C3ABRGCLR;
extern volatile unsigned int I2C5BRGCLR;
extern volatile unsigned int I2C3ABRGSET;
extern volatile unsigned int I2C5BRGSET;
extern volatile unsigned int I2C3ABRGINV;
extern volatile unsigned int I2C5BRGINV;
extern volatile unsigned int I2C3ATRN;
extern volatile unsigned int I2C5TRN;
extern volatile unsigned int I2C3ATRNCLR;
extern volatile unsigned int I2C5TRNCLR;
extern volatile unsigned int I2C3ATRNSET;
extern volatile unsigned int I2C5TRNSET;
extern volatile unsigned int I2C3ATRNINV;
extern volatile unsigned int I2C5TRNINV;
extern volatile unsigned int I2C3ARCV;
extern volatile unsigned int I2C5RCV;
extern volatile unsigned int I2C1CON;
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
extern volatile __I2C1CONbits_t I2C1CONbits __asm__ ("I2C1CON");
extern volatile unsigned int I2C1CONCLR;
extern volatile unsigned int I2C1CONSET;
extern volatile unsigned int I2C1CONINV;
extern volatile unsigned int I2C1STAT;
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
extern volatile __I2C1STATbits_t I2C1STATbits __asm__ ("I2C1STAT");
extern volatile unsigned int I2C1STATCLR;
extern volatile unsigned int I2C1STATSET;
extern volatile unsigned int I2C1STATINV;
extern volatile unsigned int I2C1ADD;
extern volatile unsigned int I2C1ADDCLR;
extern volatile unsigned int I2C1ADDSET;
extern volatile unsigned int I2C1ADDINV;
extern volatile unsigned int I2C1MSK;
extern volatile unsigned int I2C1MSKCLR;
extern volatile unsigned int I2C1MSKSET;
extern volatile unsigned int I2C1MSKINV;
extern volatile unsigned int I2C1BRG;
extern volatile unsigned int I2C1BRGCLR;
extern volatile unsigned int I2C1BRGSET;
extern volatile unsigned int I2C1BRGINV;
extern volatile unsigned int I2C1TRN;
extern volatile unsigned int I2C1TRNCLR;
extern volatile unsigned int I2C1TRNSET;
extern volatile unsigned int I2C1TRNINV;
extern volatile unsigned int I2C1RCV;
extern volatile unsigned int I2C2CON;
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
extern volatile __I2C2CONbits_t I2C2CONbits __asm__ ("I2C2CON");
extern volatile unsigned int I2C2CONCLR;
extern volatile unsigned int I2C2CONSET;
extern volatile unsigned int I2C2CONINV;
extern volatile unsigned int I2C2STAT;
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
extern volatile __I2C2STATbits_t I2C2STATbits __asm__ ("I2C2STAT");
extern volatile unsigned int I2C2STATCLR;
extern volatile unsigned int I2C2STATSET;
extern volatile unsigned int I2C2STATINV;
extern volatile unsigned int I2C2ADD;
extern volatile unsigned int I2C2ADDCLR;
extern volatile unsigned int I2C2ADDSET;
extern volatile unsigned int I2C2ADDINV;
extern volatile unsigned int I2C2MSK;
extern volatile unsigned int I2C2MSKCLR;
extern volatile unsigned int I2C2MSKSET;
extern volatile unsigned int I2C2MSKINV;
extern volatile unsigned int I2C2BRG;
extern volatile unsigned int I2C2BRGCLR;
extern volatile unsigned int I2C2BRGSET;
extern volatile unsigned int I2C2BRGINV;
extern volatile unsigned int I2C2TRN;
extern volatile unsigned int I2C2TRNCLR;
extern volatile unsigned int I2C2TRNSET;
extern volatile unsigned int I2C2TRNINV;
extern volatile unsigned int I2C2RCV;
extern volatile unsigned int SPI1ACON;
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
extern volatile __SPI1ACONbits_t SPI1ACONbits __asm__ ("SPI1ACON");
extern volatile unsigned int SPI3CON;
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
extern volatile __SPI3CONbits_t SPI3CONbits __asm__ ("SPI3CON");
extern volatile unsigned int SPI1ACONCLR;
extern volatile unsigned int SPI3CONCLR;
extern volatile unsigned int SPI1ACONSET;
extern volatile unsigned int SPI3CONSET;
extern volatile unsigned int SPI1ACONINV;
extern volatile unsigned int SPI3CONINV;
extern volatile unsigned int SPI1ASTAT;
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
extern volatile __SPI1ASTATbits_t SPI1ASTATbits __asm__ ("SPI1ASTAT");
extern volatile unsigned int SPI3STAT;
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
extern volatile __SPI3STATbits_t SPI3STATbits __asm__ ("SPI3STAT");
extern volatile unsigned int SPI1ASTATCLR;
extern volatile unsigned int SPI3STATCLR;
extern volatile unsigned int SPI1ASTATSET;
extern volatile unsigned int SPI3STATSET;
extern volatile unsigned int SPI1ASTATINV;
extern volatile unsigned int SPI3STATINV;
extern volatile unsigned int SPI1ABUF;
extern volatile unsigned int SPI3BUF;
extern volatile unsigned int SPI1ABRG;
extern volatile unsigned int SPI3BRG;
extern volatile unsigned int SPI1ABRGCLR;
extern volatile unsigned int SPI3BRGCLR;
extern volatile unsigned int SPI1ABRGSET;
extern volatile unsigned int SPI3BRGSET;
extern volatile unsigned int SPI1ABRGINV;
extern volatile unsigned int SPI3BRGINV;
extern volatile unsigned int SPI2ACON;
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
extern volatile __SPI2ACONbits_t SPI2ACONbits __asm__ ("SPI2ACON");
extern volatile unsigned int SPI2CON;
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
extern volatile __SPI2CONbits_t SPI2CONbits __asm__ ("SPI2CON");
extern volatile unsigned int SPI2ACONCLR;
extern volatile unsigned int SPI2CONCLR;
extern volatile unsigned int SPI2ACONSET;
extern volatile unsigned int SPI2CONSET;
extern volatile unsigned int SPI2ACONINV;
extern volatile unsigned int SPI2CONINV;
extern volatile unsigned int SPI2ASTAT;
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
extern volatile __SPI2ASTATbits_t SPI2ASTATbits __asm__ ("SPI2ASTAT");
extern volatile unsigned int SPI2STAT;
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
extern volatile __SPI2STATbits_t SPI2STATbits __asm__ ("SPI2STAT");
extern volatile unsigned int SPI2ASTATCLR;
extern volatile unsigned int SPI2STATCLR;
extern volatile unsigned int SPI2ASTATSET;
extern volatile unsigned int SPI2STATSET;
extern volatile unsigned int SPI2ASTATINV;
extern volatile unsigned int SPI2STATINV;
extern volatile unsigned int SPI2ABUF;
extern volatile unsigned int SPI2BUF;
extern volatile unsigned int SPI2ABRG;
extern volatile unsigned int SPI2BRG;
extern volatile unsigned int SPI2ABRGCLR;
extern volatile unsigned int SPI2BRGCLR;
extern volatile unsigned int SPI2ABRGSET;
extern volatile unsigned int SPI2BRGSET;
extern volatile unsigned int SPI2ABRGINV;
extern volatile unsigned int SPI2BRGINV;
extern volatile unsigned int SPI3ACON;
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
extern volatile __SPI3ACONbits_t SPI3ACONbits __asm__ ("SPI3ACON");
extern volatile unsigned int SPI4CON;
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
extern volatile __SPI4CONbits_t SPI4CONbits __asm__ ("SPI4CON");
extern volatile unsigned int SPI3ACONCLR;
extern volatile unsigned int SPI4CONCLR;
extern volatile unsigned int SPI3ACONSET;
extern volatile unsigned int SPI4CONSET;
extern volatile unsigned int SPI3ACONINV;
extern volatile unsigned int SPI4CONINV;
extern volatile unsigned int SPI3ASTAT;
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
extern volatile __SPI3ASTATbits_t SPI3ASTATbits __asm__ ("SPI3ASTAT");
extern volatile unsigned int SPI4STAT;
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
extern volatile __SPI4STATbits_t SPI4STATbits __asm__ ("SPI4STAT");
extern volatile unsigned int SPI3ASTATCLR;
extern volatile unsigned int SPI4STATCLR;
extern volatile unsigned int SPI3ASTATSET;
extern volatile unsigned int SPI4STATSET;
extern volatile unsigned int SPI3ASTATINV;
extern volatile unsigned int SPI4STATINV;
extern volatile unsigned int SPI3ABUF;
extern volatile unsigned int SPI4BUF;
extern volatile unsigned int SPI3ABRG;
extern volatile unsigned int SPI4BRG;
extern volatile unsigned int SPI3ABRGCLR;
extern volatile unsigned int SPI4BRGCLR;
extern volatile unsigned int SPI3ABRGSET;
extern volatile unsigned int SPI4BRGSET;
extern volatile unsigned int SPI3ABRGINV;
extern volatile unsigned int SPI4BRGINV;
extern volatile unsigned int SPI1CON;
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
extern volatile __SPI1CONbits_t SPI1CONbits __asm__ ("SPI1CON");
extern volatile unsigned int SPI1CONCLR;
extern volatile unsigned int SPI1CONSET;
extern volatile unsigned int SPI1CONINV;
extern volatile unsigned int SPI1STAT;
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
extern volatile __SPI1STATbits_t SPI1STATbits __asm__ ("SPI1STAT");
extern volatile unsigned int SPI1STATCLR;
extern volatile unsigned int SPI1STATSET;
extern volatile unsigned int SPI1STATINV;
extern volatile unsigned int SPI1BUF;
extern volatile unsigned int SPI1BRG;
extern volatile unsigned int SPI1BRGCLR;
extern volatile unsigned int SPI1BRGSET;
extern volatile unsigned int SPI1BRGINV;
extern volatile unsigned int U1AMODE;
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
extern volatile __U1AMODEbits_t U1AMODEbits __asm__ ("U1AMODE");
extern volatile unsigned int U1MODE;
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
extern volatile __U1MODEbits_t U1MODEbits __asm__ ("U1MODE");
extern volatile unsigned int U1AMODECLR;
extern volatile unsigned int U1MODECLR;
extern volatile unsigned int U1AMODESET;
extern volatile unsigned int U1MODESET;
extern volatile unsigned int U1AMODEINV;
extern volatile unsigned int U1MODEINV;
extern volatile unsigned int U1ASTA;
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
extern volatile __U1ASTAbits_t U1ASTAbits __asm__ ("U1ASTA");
extern volatile unsigned int U1STA;
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
extern volatile __U1STAbits_t U1STAbits __asm__ ("U1STA");
extern volatile unsigned int U1ASTACLR;
extern volatile unsigned int U1STACLR;
extern volatile unsigned int U1ASTASET;
extern volatile unsigned int U1STASET;
extern volatile unsigned int U1ASTAINV;
extern volatile unsigned int U1STAINV;
extern volatile unsigned int U1ATXREG;
extern volatile unsigned int U1TXREG;
extern volatile unsigned int U1ARXREG;
extern volatile unsigned int U1RXREG;
extern volatile unsigned int U1ABRG;
extern volatile unsigned int U1BRG;
extern volatile unsigned int U1ABRGCLR;
extern volatile unsigned int U1BRGCLR;
extern volatile unsigned int U1ABRGSET;
extern volatile unsigned int U1BRGSET;
extern volatile unsigned int U1ABRGINV;
extern volatile unsigned int U1BRGINV;
extern volatile unsigned int U1BMODE;
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
extern volatile __U1BMODEbits_t U1BMODEbits __asm__ ("U1BMODE");
extern volatile unsigned int U4MODE;
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
extern volatile __U4MODEbits_t U4MODEbits __asm__ ("U4MODE");
extern volatile unsigned int U1BMODECLR;
extern volatile unsigned int U4MODECLR;
extern volatile unsigned int U1BMODESET;
extern volatile unsigned int U4MODESET;
extern volatile unsigned int U1BMODEINV;
extern volatile unsigned int U4MODEINV;
extern volatile unsigned int U1BSTA;
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
extern volatile __U1BSTAbits_t U1BSTAbits __asm__ ("U1BSTA");
extern volatile unsigned int U4STA;
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
extern volatile __U4STAbits_t U4STAbits __asm__ ("U4STA");
extern volatile unsigned int U1BSTACLR;
extern volatile unsigned int U4STACLR;
extern volatile unsigned int U1BSTASET;
extern volatile unsigned int U4STASET;
extern volatile unsigned int U1BSTAINV;
extern volatile unsigned int U4STAINV;
extern volatile unsigned int U1BTXREG;
extern volatile unsigned int U4TXREG;
extern volatile unsigned int U1BRXREG;
extern volatile unsigned int U4RXREG;
extern volatile unsigned int U1BBRG;
extern volatile unsigned int U4BRG;
extern volatile unsigned int U1BBRGCLR;
extern volatile unsigned int U4BRGCLR;
extern volatile unsigned int U1BBRGSET;
extern volatile unsigned int U4BRGSET;
extern volatile unsigned int U1BBRGINV;
extern volatile unsigned int U4BRGINV;
extern volatile unsigned int U2AMODE;
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
extern volatile __U2AMODEbits_t U2AMODEbits __asm__ ("U2AMODE");
extern volatile unsigned int U3MODE;
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
extern volatile __U3MODEbits_t U3MODEbits __asm__ ("U3MODE");
extern volatile unsigned int U2AMODECLR;
extern volatile unsigned int U3MODECLR;
extern volatile unsigned int U2AMODESET;
extern volatile unsigned int U3MODESET;
extern volatile unsigned int U2AMODEINV;
extern volatile unsigned int U3MODEINV;
extern volatile unsigned int U2ASTA;
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
extern volatile __U2ASTAbits_t U2ASTAbits __asm__ ("U2ASTA");
extern volatile unsigned int U3STA;
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
extern volatile __U3STAbits_t U3STAbits __asm__ ("U3STA");
extern volatile unsigned int U2ASTACLR;
extern volatile unsigned int U3STACLR;
extern volatile unsigned int U2ASTASET;
extern volatile unsigned int U3STASET;
extern volatile unsigned int U2ASTAINV;
extern volatile unsigned int U3STAINV;
extern volatile unsigned int U2ATXREG;
extern volatile unsigned int U3TXREG;
extern volatile unsigned int U2ARXREG;
extern volatile unsigned int U3RXREG;
extern volatile unsigned int U2ABRG;
extern volatile unsigned int U3BRG;
extern volatile unsigned int U2ABRGCLR;
extern volatile unsigned int U3BRGCLR;
extern volatile unsigned int U2ABRGSET;
extern volatile unsigned int U3BRGSET;
extern volatile unsigned int U2ABRGINV;
extern volatile unsigned int U3BRGINV;
extern volatile unsigned int U2BMODE;
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
extern volatile __U2BMODEbits_t U2BMODEbits __asm__ ("U2BMODE");
extern volatile unsigned int U6MODE;
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
extern volatile __U6MODEbits_t U6MODEbits __asm__ ("U6MODE");
extern volatile unsigned int U2BMODECLR;
extern volatile unsigned int U6MODECLR;
extern volatile unsigned int U2BMODESET;
extern volatile unsigned int U6MODESET;
extern volatile unsigned int U2BMODEINV;
extern volatile unsigned int U6MODEINV;
extern volatile unsigned int U2BSTA;
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
extern volatile __U2BSTAbits_t U2BSTAbits __asm__ ("U2BSTA");
extern volatile unsigned int U6STA;
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
extern volatile __U6STAbits_t U6STAbits __asm__ ("U6STA");
extern volatile unsigned int U2BSTACLR;
extern volatile unsigned int U6STACLR;
extern volatile unsigned int U2BSTASET;
extern volatile unsigned int U6STASET;
extern volatile unsigned int U2BSTAINV;
extern volatile unsigned int U6STAINV;
extern volatile unsigned int U2BTXREG;
extern volatile unsigned int U6TXREG;
extern volatile unsigned int U2BRXREG;
extern volatile unsigned int U6RXREG;
extern volatile unsigned int U2BBRG;
extern volatile unsigned int U6BRG;
extern volatile unsigned int U2BBRGCLR;
extern volatile unsigned int U6BRGCLR;
extern volatile unsigned int U2BBRGSET;
extern volatile unsigned int U6BRGSET;
extern volatile unsigned int U2BBRGINV;
extern volatile unsigned int U6BRGINV;
extern volatile unsigned int U2MODE;
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
extern volatile __U2MODEbits_t U2MODEbits __asm__ ("U2MODE");
extern volatile unsigned int U3AMODE;
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
extern volatile __U3AMODEbits_t U3AMODEbits __asm__ ("U3AMODE");
extern volatile unsigned int U2MODECLR;
extern volatile unsigned int U3AMODECLR;
extern volatile unsigned int U2MODESET;
extern volatile unsigned int U3AMODESET;
extern volatile unsigned int U2MODEINV;
extern volatile unsigned int U3AMODEINV;
extern volatile unsigned int U2STA;
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
extern volatile __U2STAbits_t U2STAbits __asm__ ("U2STA");
extern volatile unsigned int U3ASTA;
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
extern volatile __U3ASTAbits_t U3ASTAbits __asm__ ("U3ASTA");
extern volatile unsigned int U2STACLR;
extern volatile unsigned int U3ASTACLR;
extern volatile unsigned int U2STASET;
extern volatile unsigned int U3ASTASET;
extern volatile unsigned int U2STAINV;
extern volatile unsigned int U3ASTAINV;
extern volatile unsigned int U2TXREG;
extern volatile unsigned int U3ATXREG;
extern volatile unsigned int U2RXREG;
extern volatile unsigned int U3ARXREG;
extern volatile unsigned int U2BRG;
extern volatile unsigned int U3ABRG;
extern volatile unsigned int U2BRGCLR;
extern volatile unsigned int U3ABRGCLR;
extern volatile unsigned int U2BRGSET;
extern volatile unsigned int U3ABRGSET;
extern volatile unsigned int U2BRGINV;
extern volatile unsigned int U3ABRGINV;
extern volatile unsigned int U3BMODE;
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
extern volatile __U3BMODEbits_t U3BMODEbits __asm__ ("U3BMODE");
extern volatile unsigned int U5MODE;
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
extern volatile __U5MODEbits_t U5MODEbits __asm__ ("U5MODE");
extern volatile unsigned int U3BMODECLR;
extern volatile unsigned int U5MODECLR;
extern volatile unsigned int U3BMODESET;
extern volatile unsigned int U5MODESET;
extern volatile unsigned int U3BMODEINV;
extern volatile unsigned int U5MODEINV;
extern volatile unsigned int U3BSTA;
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
extern volatile __U3BSTAbits_t U3BSTAbits __asm__ ("U3BSTA");
extern volatile unsigned int U5STA;
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
extern volatile __U5STAbits_t U5STAbits __asm__ ("U5STA");
extern volatile unsigned int U3BSTACLR;
extern volatile unsigned int U5STACLR;
extern volatile unsigned int U3BSTASET;
extern volatile unsigned int U5STASET;
extern volatile unsigned int U3BSTAINV;
extern volatile unsigned int U5STAINV;
extern volatile unsigned int U3BTXREG;
extern volatile unsigned int U5TXREG;
extern volatile unsigned int U3BRXREG;
extern volatile unsigned int U5RXREG;
extern volatile unsigned int U3BBRG;
extern volatile unsigned int U5BRG;
extern volatile unsigned int U3BBRGCLR;
extern volatile unsigned int U5BRGCLR;
extern volatile unsigned int U3BBRGSET;
extern volatile unsigned int U5BRGSET;
extern volatile unsigned int U3BBRGINV;
extern volatile unsigned int U5BRGINV;
extern volatile unsigned int PMCON;
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
extern volatile __PMCONbits_t PMCONbits __asm__ ("PMCON");
extern volatile unsigned int PMCONCLR;
extern volatile unsigned int PMCONSET;
extern volatile unsigned int PMCONINV;
extern volatile unsigned int PMMODE;
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
extern volatile __PMMODEbits_t PMMODEbits __asm__ ("PMMODE");
extern volatile unsigned int PMMODECLR;
extern volatile unsigned int PMMODESET;
extern volatile unsigned int PMMODEINV;
extern volatile unsigned int PMADDR;
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
extern volatile __PMADDRbits_t PMADDRbits __asm__ ("PMADDR");
extern volatile unsigned int PMADDRCLR;
extern volatile unsigned int PMADDRSET;
extern volatile unsigned int PMADDRINV;
extern volatile unsigned int PMDOUT;
typedef union {
  struct {
    unsigned DATAOUT:32;
  };
  struct {
    unsigned w:32;
  };
} __PMDOUTbits_t;
extern volatile __PMDOUTbits_t PMDOUTbits __asm__ ("PMDOUT");
extern volatile unsigned int PMDOUTCLR;
extern volatile unsigned int PMDOUTSET;
extern volatile unsigned int PMDOUTINV;
extern volatile unsigned int PMDIN;
typedef union {
  struct {
    unsigned DATAIN:32;
  };
  struct {
    unsigned w:32;
  };
} __PMDINbits_t;
extern volatile __PMDINbits_t PMDINbits __asm__ ("PMDIN");
extern volatile unsigned int PMDINCLR;
extern volatile unsigned int PMDINSET;
extern volatile unsigned int PMDININV;
extern volatile unsigned int PMAEN;
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
extern volatile __PMAENbits_t PMAENbits __asm__ ("PMAEN");
extern volatile unsigned int PMAENCLR;
extern volatile unsigned int PMAENSET;
extern volatile unsigned int PMAENINV;
extern volatile unsigned int PMSTAT;
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
extern volatile __PMSTATbits_t PMSTATbits __asm__ ("PMSTAT");
extern volatile unsigned int PMSTATCLR;
extern volatile unsigned int PMSTATSET;
extern volatile unsigned int PMSTATINV;
extern volatile unsigned int AD1CON1;
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
extern volatile __AD1CON1bits_t AD1CON1bits __asm__ ("AD1CON1");
extern volatile unsigned int AD1CON1CLR;
extern volatile unsigned int AD1CON1SET;
extern volatile unsigned int AD1CON1INV;
extern volatile unsigned int AD1CON2;
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
extern volatile __AD1CON2bits_t AD1CON2bits __asm__ ("AD1CON2");
extern volatile unsigned int AD1CON2CLR;
extern volatile unsigned int AD1CON2SET;
extern volatile unsigned int AD1CON2INV;
extern volatile unsigned int AD1CON3;
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
extern volatile __AD1CON3bits_t AD1CON3bits __asm__ ("AD1CON3");
extern volatile unsigned int AD1CON3CLR;
extern volatile unsigned int AD1CON3SET;
extern volatile unsigned int AD1CON3INV;
extern volatile unsigned int AD1CHS;
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
extern volatile __AD1CHSbits_t AD1CHSbits __asm__ ("AD1CHS");
extern volatile unsigned int AD1CHSCLR;
extern volatile unsigned int AD1CHSSET;
extern volatile unsigned int AD1CHSINV;
extern volatile unsigned int AD1CSSL;
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
extern volatile __AD1CSSLbits_t AD1CSSLbits __asm__ ("AD1CSSL");
extern volatile unsigned int AD1CSSLCLR;
extern volatile unsigned int AD1CSSLSET;
extern volatile unsigned int AD1CSSLINV;
extern volatile unsigned int AD1PCFG;
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
extern volatile __AD1PCFGbits_t AD1PCFGbits __asm__ ("AD1PCFG");
extern volatile unsigned int AD1PCFGCLR;
extern volatile unsigned int AD1PCFGSET;
extern volatile unsigned int AD1PCFGINV;
extern volatile unsigned int ADC1BUF0;
extern volatile unsigned int ADC1BUF1;
extern volatile unsigned int ADC1BUF2;
extern volatile unsigned int ADC1BUF3;
extern volatile unsigned int ADC1BUF4;
extern volatile unsigned int ADC1BUF5;
extern volatile unsigned int ADC1BUF6;
extern volatile unsigned int ADC1BUF7;
extern volatile unsigned int ADC1BUF8;
extern volatile unsigned int ADC1BUF9;
extern volatile unsigned int ADC1BUFA;
extern volatile unsigned int ADC1BUFB;
extern volatile unsigned int ADC1BUFC;
extern volatile unsigned int ADC1BUFD;
extern volatile unsigned int ADC1BUFE;
extern volatile unsigned int ADC1BUFF;
extern volatile unsigned int CVRCON;
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
extern volatile __CVRCONbits_t CVRCONbits __asm__ ("CVRCON");
extern volatile unsigned int CVRCONCLR;
extern volatile unsigned int CVRCONSET;
extern volatile unsigned int CVRCONINV;
extern volatile unsigned int CM1CON;
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
extern volatile __CM1CONbits_t CM1CONbits __asm__ ("CM1CON");
extern volatile unsigned int CM1CONCLR;
extern volatile unsigned int CM1CONSET;
extern volatile unsigned int CM1CONINV;
extern volatile unsigned int CM2CON;
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
extern volatile __CM2CONbits_t CM2CONbits __asm__ ("CM2CON");
extern volatile unsigned int CM2CONCLR;
extern volatile unsigned int CM2CONSET;
extern volatile unsigned int CM2CONINV;
extern volatile unsigned int CMSTAT;
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
extern volatile __CMSTATbits_t CMSTATbits __asm__ ("CMSTAT");
extern volatile unsigned int CMSTATCLR;
extern volatile unsigned int CMSTATSET;
extern volatile unsigned int CMSTATINV;
extern volatile unsigned int OSCCON;
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
extern volatile __OSCCONbits_t OSCCONbits __asm__ ("OSCCON");
extern volatile unsigned int OSCCONCLR;
extern volatile unsigned int OSCCONSET;
extern volatile unsigned int OSCCONINV;
extern volatile unsigned int OSCTUN;
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
extern volatile __OSCTUNbits_t OSCTUNbits __asm__ ("OSCTUN");
extern volatile unsigned int OSCTUNCLR;
extern volatile unsigned int OSCTUNSET;
extern volatile unsigned int OSCTUNINV;
extern volatile unsigned int DDPCON;
typedef struct {
  unsigned TDOEN:1;
  unsigned :1;
  unsigned TROEN:1;
  unsigned JTAGEN:1;
} __DDPCONbits_t;
extern volatile __DDPCONbits_t DDPCONbits __asm__ ("DDPCON");
extern volatile unsigned int DEVID;
typedef struct {
  unsigned DEVID:28;
  unsigned VER:4;
} __DEVIDbits_t;
extern volatile __DEVIDbits_t DEVIDbits __asm__ ("DEVID");
extern volatile unsigned int SYSKEY;
extern volatile unsigned int SYSKEYCLR;
extern volatile unsigned int SYSKEYSET;
extern volatile unsigned int SYSKEYINV;
extern volatile unsigned int NVMCON;
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
extern volatile __NVMCONbits_t NVMCONbits __asm__ ("NVMCON");
extern volatile unsigned int NVMCONCLR;
extern volatile unsigned int NVMCONSET;
extern volatile unsigned int NVMCONINV;
extern volatile unsigned int NVMKEY;
extern volatile unsigned int NVMADDR;
extern volatile unsigned int NVMADDRCLR;
extern volatile unsigned int NVMADDRSET;
extern volatile unsigned int NVMADDRINV;
extern volatile unsigned int NVMDATA;
extern volatile unsigned int NVMSRCADDR;
extern volatile unsigned int RCON;
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
extern volatile __RCONbits_t RCONbits __asm__ ("RCON");
extern volatile unsigned int RCONCLR;
extern volatile unsigned int RCONSET;
extern volatile unsigned int RCONINV;
extern volatile unsigned int RSWRST;
typedef union {
  struct {
    unsigned SWRST:1;
  };
  struct {
    unsigned w:32;
  };
} __RSWRSTbits_t;
extern volatile __RSWRSTbits_t RSWRSTbits __asm__ ("RSWRST");
extern volatile unsigned int RSWRSTCLR;
extern volatile unsigned int RSWRSTSET;
extern volatile unsigned int RSWRSTINV;
extern volatile unsigned int _DDPSTAT;
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
extern volatile ___DDPSTATbits_t _DDPSTATbits __asm__ ("_DDPSTAT");
extern volatile unsigned int _STRO;
extern volatile unsigned int _STROCLR;
extern volatile unsigned int _STROSET;
extern volatile unsigned int _STROINV;
extern volatile unsigned int _APPO;
extern volatile unsigned int _APPOCLR;
extern volatile unsigned int _APPOSET;
extern volatile unsigned int _APPOINV;
extern volatile unsigned int _APPI;
extern volatile unsigned int INTCON;
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
extern volatile __INTCONbits_t INTCONbits __asm__ ("INTCON");
extern volatile unsigned int INTCONCLR;
extern volatile unsigned int INTCONSET;
extern volatile unsigned int INTCONINV;
extern volatile unsigned int INTSTAT;
typedef struct {
  unsigned VEC:6;
  unsigned :2;
  unsigned SRIPL:3;
} __INTSTATbits_t;
extern volatile __INTSTATbits_t INTSTATbits __asm__ ("INTSTAT");
extern volatile unsigned int IPTMR;
extern volatile unsigned int IPTMRCLR;
extern volatile unsigned int IPTMRSET;
extern volatile unsigned int IPTMRINV;
extern volatile unsigned int IFS0;
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
extern volatile __IFS0bits_t IFS0bits __asm__ ("IFS0");
extern volatile unsigned int IFS0CLR;
extern volatile unsigned int IFS0SET;
extern volatile unsigned int IFS0INV;
extern volatile unsigned int IFS1;
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
extern volatile __IFS1bits_t IFS1bits __asm__ ("IFS1");
extern volatile unsigned int IFS1CLR;
extern volatile unsigned int IFS1SET;
extern volatile unsigned int IFS1INV;
extern volatile unsigned int IFS2;
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
extern volatile __IFS2bits_t IFS2bits __asm__ ("IFS2");
extern volatile unsigned int IFS2CLR;
extern volatile unsigned int IFS2SET;
extern volatile unsigned int IFS2INV;
extern volatile unsigned int IEC0;
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
extern volatile __IEC0bits_t IEC0bits __asm__ ("IEC0");
extern volatile unsigned int IEC0CLR;
extern volatile unsigned int IEC0SET;
extern volatile unsigned int IEC0INV;
extern volatile unsigned int IEC1;
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
extern volatile __IEC1bits_t IEC1bits __asm__ ("IEC1");
extern volatile unsigned int IEC1CLR;
extern volatile unsigned int IEC1SET;
extern volatile unsigned int IEC1INV;
extern volatile unsigned int IEC2;
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
extern volatile __IEC2bits_t IEC2bits __asm__ ("IEC2");
extern volatile unsigned int IEC2CLR;
extern volatile unsigned int IEC2SET;
extern volatile unsigned int IEC2INV;
extern volatile unsigned int IPC0;
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
extern volatile __IPC0bits_t IPC0bits __asm__ ("IPC0");
extern volatile unsigned int IPC0CLR;
extern volatile unsigned int IPC0SET;
extern volatile unsigned int IPC0INV;
extern volatile unsigned int IPC1;
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
extern volatile __IPC1bits_t IPC1bits __asm__ ("IPC1");
extern volatile unsigned int IPC1CLR;
extern volatile unsigned int IPC1SET;
extern volatile unsigned int IPC1INV;
extern volatile unsigned int IPC2;
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
extern volatile __IPC2bits_t IPC2bits __asm__ ("IPC2");
extern volatile unsigned int IPC2CLR;
extern volatile unsigned int IPC2SET;
extern volatile unsigned int IPC2INV;
extern volatile unsigned int IPC3;
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
extern volatile __IPC3bits_t IPC3bits __asm__ ("IPC3");
extern volatile unsigned int IPC3CLR;
extern volatile unsigned int IPC3SET;
extern volatile unsigned int IPC3INV;
extern volatile unsigned int IPC4;
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
extern volatile __IPC4bits_t IPC4bits __asm__ ("IPC4");
extern volatile unsigned int IPC4CLR;
extern volatile unsigned int IPC4SET;
extern volatile unsigned int IPC4INV;
extern volatile unsigned int IPC5;
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
extern volatile __IPC5bits_t IPC5bits __asm__ ("IPC5");
extern volatile unsigned int IPC5CLR;
extern volatile unsigned int IPC5SET;
extern volatile unsigned int IPC5INV;
extern volatile unsigned int IPC6;
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
extern volatile __IPC6bits_t IPC6bits __asm__ ("IPC6");
extern volatile unsigned int IPC6CLR;
extern volatile unsigned int IPC6SET;
extern volatile unsigned int IPC6INV;
extern volatile unsigned int IPC7;
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
extern volatile __IPC7bits_t IPC7bits __asm__ ("IPC7");
extern volatile unsigned int IPC7CLR;
extern volatile unsigned int IPC7SET;
extern volatile unsigned int IPC7INV;
extern volatile unsigned int IPC8;
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
extern volatile __IPC8bits_t IPC8bits __asm__ ("IPC8");
extern volatile unsigned int IPC8CLR;
extern volatile unsigned int IPC8SET;
extern volatile unsigned int IPC8INV;
extern volatile unsigned int IPC9;
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
extern volatile __IPC9bits_t IPC9bits __asm__ ("IPC9");
extern volatile unsigned int IPC9CLR;
extern volatile unsigned int IPC9SET;
extern volatile unsigned int IPC9INV;
extern volatile unsigned int IPC10;
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
extern volatile __IPC10bits_t IPC10bits __asm__ ("IPC10");
extern volatile unsigned int IPC10CLR;
extern volatile unsigned int IPC10SET;
extern volatile unsigned int IPC10INV;
extern volatile unsigned int IPC11;
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
extern volatile __IPC11bits_t IPC11bits __asm__ ("IPC11");
extern volatile unsigned int IPC11CLR;
extern volatile unsigned int IPC11SET;
extern volatile unsigned int IPC11INV;
extern volatile unsigned int IPC12;
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
extern volatile __IPC12bits_t IPC12bits __asm__ ("IPC12");
extern volatile unsigned int IPC12CLR;
extern volatile unsigned int IPC12SET;
extern volatile unsigned int IPC12INV;
extern volatile unsigned int BMXCON;
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
extern volatile __BMXCONbits_t BMXCONbits __asm__ ("BMXCON");
extern volatile unsigned int BMXCONCLR;
extern volatile unsigned int BMXCONSET;
extern volatile unsigned int BMXCONINV;
extern volatile unsigned int BMXDKPBA;
extern volatile unsigned int BMXDKPBACLR;
extern volatile unsigned int BMXDKPBASET;
extern volatile unsigned int BMXDKPBAINV;
extern volatile unsigned int BMXDUDBA;
extern volatile unsigned int BMXDUDBACLR;
extern volatile unsigned int BMXDUDBASET;
extern volatile unsigned int BMXDUDBAINV;
extern volatile unsigned int BMXDUPBA;
extern volatile unsigned int BMXDUPBACLR;
extern volatile unsigned int BMXDUPBASET;
extern volatile unsigned int BMXDUPBAINV;
extern volatile unsigned int BMXDRMSZ;
extern volatile unsigned int BMXPUPBA;
extern volatile unsigned int BMXPUPBACLR;
extern volatile unsigned int BMXPUPBASET;
extern volatile unsigned int BMXPUPBAINV;
extern volatile unsigned int BMXPFMSZ;
extern volatile unsigned int BMXBOOTSZ;
extern volatile unsigned int DMACON;
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
extern volatile __DMACONbits_t DMACONbits __asm__ ("DMACON");
extern volatile unsigned int DMACONCLR;
extern volatile unsigned int DMACONSET;
extern volatile unsigned int DMACONINV;
extern volatile unsigned int DMASTAT;
typedef union {
  struct {
    unsigned DMACH:3;
    unsigned RDWR:1;
  };
  struct {
    unsigned w:32;
  };
} __DMASTATbits_t;
extern volatile __DMASTATbits_t DMASTATbits __asm__ ("DMASTAT");
extern volatile unsigned int DMASTATCLR;
extern volatile unsigned int DMASTATSET;
extern volatile unsigned int DMASTATINV;
extern volatile unsigned int DMAADDR;
extern volatile unsigned int DMAADDRCLR;
extern volatile unsigned int DMAADDRSET;
extern volatile unsigned int DMAADDRINV;
extern volatile unsigned int DCRCCON;
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
extern volatile __DCRCCONbits_t DCRCCONbits __asm__ ("DCRCCON");
extern volatile unsigned int DCRCCONCLR;
extern volatile unsigned int DCRCCONSET;
extern volatile unsigned int DCRCCONINV;
extern volatile unsigned int DCRCDATA;
extern volatile unsigned int DCRCDATACLR;
extern volatile unsigned int DCRCDATASET;
extern volatile unsigned int DCRCDATAINV;
extern volatile unsigned int DCRCXOR;
extern volatile unsigned int DCRCXORCLR;
extern volatile unsigned int DCRCXORSET;
extern volatile unsigned int DCRCXORINV;
extern volatile unsigned int DCH0CON;
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
extern volatile __DCH0CONbits_t DCH0CONbits __asm__ ("DCH0CON");
extern volatile unsigned int DCH0CONCLR;
extern volatile unsigned int DCH0CONSET;
extern volatile unsigned int DCH0CONINV;
extern volatile unsigned int DCH0ECON;
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
extern volatile __DCH0ECONbits_t DCH0ECONbits __asm__ ("DCH0ECON");
extern volatile unsigned int DCH0ECONCLR;
extern volatile unsigned int DCH0ECONSET;
extern volatile unsigned int DCH0ECONINV;
extern volatile unsigned int DCH0INT;
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
extern volatile __DCH0INTbits_t DCH0INTbits __asm__ ("DCH0INT");
extern volatile unsigned int DCH0INTCLR;
extern volatile unsigned int DCH0INTSET;
extern volatile unsigned int DCH0INTINV;
extern volatile unsigned int DCH0SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH0SSAbits_t;
extern volatile __DCH0SSAbits_t DCH0SSAbits __asm__ ("DCH0SSA");
extern volatile unsigned int DCH0SSACLR;
extern volatile unsigned int DCH0SSASET;
extern volatile unsigned int DCH0SSAINV;
extern volatile unsigned int DCH0DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH0DSAbits_t;
extern volatile __DCH0DSAbits_t DCH0DSAbits __asm__ ("DCH0DSA");
extern volatile unsigned int DCH0DSACLR;
extern volatile unsigned int DCH0DSASET;
extern volatile unsigned int DCH0DSAINV;
extern volatile unsigned int DCH0SSIZ;
extern volatile unsigned int DCH0SSIZCLR;
extern volatile unsigned int DCH0SSIZSET;
extern volatile unsigned int DCH0SSIZINV;
extern volatile unsigned int DCH0DSIZ;
extern volatile unsigned int DCH0DSIZCLR;
extern volatile unsigned int DCH0DSIZSET;
extern volatile unsigned int DCH0DSIZINV;
extern volatile unsigned int DCH0SPTR;
extern volatile unsigned int DCH0SPTRCLR;
extern volatile unsigned int DCH0SPTRSET;
extern volatile unsigned int DCH0SPTRINV;
extern volatile unsigned int DCH0DPTR;
extern volatile unsigned int DCH0DPTRCLR;
extern volatile unsigned int DCH0DPTRSET;
extern volatile unsigned int DCH0DPTRINV;
extern volatile unsigned int DCH0CSIZ;
extern volatile unsigned int DCH0CSIZCLR;
extern volatile unsigned int DCH0CSIZSET;
extern volatile unsigned int DCH0CSIZINV;
extern volatile unsigned int DCH0CPTR;
extern volatile unsigned int DCH0CPTRCLR;
extern volatile unsigned int DCH0CPTRSET;
extern volatile unsigned int DCH0CPTRINV;
extern volatile unsigned int DCH0DAT;
extern volatile unsigned int DCH0DATCLR;
extern volatile unsigned int DCH0DATSET;
extern volatile unsigned int DCH0DATINV;
extern volatile unsigned int DCH1CON;
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
extern volatile __DCH1CONbits_t DCH1CONbits __asm__ ("DCH1CON");
extern volatile unsigned int DCH1CONCLR;
extern volatile unsigned int DCH1CONSET;
extern volatile unsigned int DCH1CONINV;
extern volatile unsigned int DCH1ECON;
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
extern volatile __DCH1ECONbits_t DCH1ECONbits __asm__ ("DCH1ECON");
extern volatile unsigned int DCH1ECONCLR;
extern volatile unsigned int DCH1ECONSET;
extern volatile unsigned int DCH1ECONINV;
extern volatile unsigned int DCH1INT;
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
extern volatile __DCH1INTbits_t DCH1INTbits __asm__ ("DCH1INT");
extern volatile unsigned int DCH1INTCLR;
extern volatile unsigned int DCH1INTSET;
extern volatile unsigned int DCH1INTINV;
extern volatile unsigned int DCH1SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH1SSAbits_t;
extern volatile __DCH1SSAbits_t DCH1SSAbits __asm__ ("DCH1SSA");
extern volatile unsigned int DCH1SSACLR;
extern volatile unsigned int DCH1SSASET;
extern volatile unsigned int DCH1SSAINV;
extern volatile unsigned int DCH1DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH1DSAbits_t;
extern volatile __DCH1DSAbits_t DCH1DSAbits __asm__ ("DCH1DSA");
extern volatile unsigned int DCH1DSACLR;
extern volatile unsigned int DCH1DSASET;
extern volatile unsigned int DCH1DSAINV;
extern volatile unsigned int DCH1SSIZ;
extern volatile unsigned int DCH1SSIZCLR;
extern volatile unsigned int DCH1SSIZSET;
extern volatile unsigned int DCH1SSIZINV;
extern volatile unsigned int DCH1DSIZ;
extern volatile unsigned int DCH1DSIZCLR;
extern volatile unsigned int DCH1DSIZSET;
extern volatile unsigned int DCH1DSIZINV;
extern volatile unsigned int DCH1SPTR;
extern volatile unsigned int DCH1SPTRCLR;
extern volatile unsigned int DCH1SPTRSET;
extern volatile unsigned int DCH1SPTRINV;
extern volatile unsigned int DCH1DPTR;
extern volatile unsigned int DCH1DPTRCLR;
extern volatile unsigned int DCH1DPTRSET;
extern volatile unsigned int DCH1DPTRINV;
extern volatile unsigned int DCH1CSIZ;
extern volatile unsigned int DCH1CSIZCLR;
extern volatile unsigned int DCH1CSIZSET;
extern volatile unsigned int DCH1CSIZINV;
extern volatile unsigned int DCH1CPTR;
extern volatile unsigned int DCH1CPTRCLR;
extern volatile unsigned int DCH1CPTRSET;
extern volatile unsigned int DCH1CPTRINV;
extern volatile unsigned int DCH1DAT;
extern volatile unsigned int DCH1DATCLR;
extern volatile unsigned int DCH1DATSET;
extern volatile unsigned int DCH1DATINV;
extern volatile unsigned int DCH2CON;
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
extern volatile __DCH2CONbits_t DCH2CONbits __asm__ ("DCH2CON");
extern volatile unsigned int DCH2CONCLR;
extern volatile unsigned int DCH2CONSET;
extern volatile unsigned int DCH2CONINV;
extern volatile unsigned int DCH2ECON;
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
extern volatile __DCH2ECONbits_t DCH2ECONbits __asm__ ("DCH2ECON");
extern volatile unsigned int DCH2ECONCLR;
extern volatile unsigned int DCH2ECONSET;
extern volatile unsigned int DCH2ECONINV;
extern volatile unsigned int DCH2INT;
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
extern volatile __DCH2INTbits_t DCH2INTbits __asm__ ("DCH2INT");
extern volatile unsigned int DCH2INTCLR;
extern volatile unsigned int DCH2INTSET;
extern volatile unsigned int DCH2INTINV;
extern volatile unsigned int DCH2SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH2SSAbits_t;
extern volatile __DCH2SSAbits_t DCH2SSAbits __asm__ ("DCH2SSA");
extern volatile unsigned int DCH2SSACLR;
extern volatile unsigned int DCH2SSASET;
extern volatile unsigned int DCH2SSAINV;
extern volatile unsigned int DCH2DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH2DSAbits_t;
extern volatile __DCH2DSAbits_t DCH2DSAbits __asm__ ("DCH2DSA");
extern volatile unsigned int DCH2DSACLR;
extern volatile unsigned int DCH2DSASET;
extern volatile unsigned int DCH2DSAINV;
extern volatile unsigned int DCH2SSIZ;
extern volatile unsigned int DCH2SSIZCLR;
extern volatile unsigned int DCH2SSIZSET;
extern volatile unsigned int DCH2SSIZINV;
extern volatile unsigned int DCH2DSIZ;
extern volatile unsigned int DCH2DSIZCLR;
extern volatile unsigned int DCH2DSIZSET;
extern volatile unsigned int DCH2DSIZINV;
extern volatile unsigned int DCH2SPTR;
extern volatile unsigned int DCH2SPTRCLR;
extern volatile unsigned int DCH2SPTRSET;
extern volatile unsigned int DCH2SPTRINV;
extern volatile unsigned int DCH2DPTR;
extern volatile unsigned int DCH2DPTRCLR;
extern volatile unsigned int DCH2DPTRSET;
extern volatile unsigned int DCH2DPTRINV;
extern volatile unsigned int DCH2CSIZ;
extern volatile unsigned int DCH2CSIZCLR;
extern volatile unsigned int DCH2CSIZSET;
extern volatile unsigned int DCH2CSIZINV;
extern volatile unsigned int DCH2CPTR;
extern volatile unsigned int DCH2CPTRCLR;
extern volatile unsigned int DCH2CPTRSET;
extern volatile unsigned int DCH2CPTRINV;
extern volatile unsigned int DCH2DAT;
extern volatile unsigned int DCH2DATCLR;
extern volatile unsigned int DCH2DATSET;
extern volatile unsigned int DCH2DATINV;
extern volatile unsigned int DCH3CON;
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
extern volatile __DCH3CONbits_t DCH3CONbits __asm__ ("DCH3CON");
extern volatile unsigned int DCH3CONCLR;
extern volatile unsigned int DCH3CONSET;
extern volatile unsigned int DCH3CONINV;
extern volatile unsigned int DCH3ECON;
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
extern volatile __DCH3ECONbits_t DCH3ECONbits __asm__ ("DCH3ECON");
extern volatile unsigned int DCH3ECONCLR;
extern volatile unsigned int DCH3ECONSET;
extern volatile unsigned int DCH3ECONINV;
extern volatile unsigned int DCH3INT;
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
extern volatile __DCH3INTbits_t DCH3INTbits __asm__ ("DCH3INT");
extern volatile unsigned int DCH3INTCLR;
extern volatile unsigned int DCH3INTSET;
extern volatile unsigned int DCH3INTINV;
extern volatile unsigned int DCH3SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH3SSAbits_t;
extern volatile __DCH3SSAbits_t DCH3SSAbits __asm__ ("DCH3SSA");
extern volatile unsigned int DCH3SSACLR;
extern volatile unsigned int DCH3SSASET;
extern volatile unsigned int DCH3SSAINV;
extern volatile unsigned int DCH3DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH3DSAbits_t;
extern volatile __DCH3DSAbits_t DCH3DSAbits __asm__ ("DCH3DSA");
extern volatile unsigned int DCH3DSACLR;
extern volatile unsigned int DCH3DSASET;
extern volatile unsigned int DCH3DSAINV;
extern volatile unsigned int DCH3SSIZ;
extern volatile unsigned int DCH3SSIZCLR;
extern volatile unsigned int DCH3SSIZSET;
extern volatile unsigned int DCH3SSIZINV;
extern volatile unsigned int DCH3DSIZ;
extern volatile unsigned int DCH3DSIZCLR;
extern volatile unsigned int DCH3DSIZSET;
extern volatile unsigned int DCH3DSIZINV;
extern volatile unsigned int DCH3SPTR;
extern volatile unsigned int DCH3SPTRCLR;
extern volatile unsigned int DCH3SPTRSET;
extern volatile unsigned int DCH3SPTRINV;
extern volatile unsigned int DCH3DPTR;
extern volatile unsigned int DCH3DPTRCLR;
extern volatile unsigned int DCH3DPTRSET;
extern volatile unsigned int DCH3DPTRINV;
extern volatile unsigned int DCH3CSIZ;
extern volatile unsigned int DCH3CSIZCLR;
extern volatile unsigned int DCH3CSIZSET;
extern volatile unsigned int DCH3CSIZINV;
extern volatile unsigned int DCH3CPTR;
extern volatile unsigned int DCH3CPTRCLR;
extern volatile unsigned int DCH3CPTRSET;
extern volatile unsigned int DCH3CPTRINV;
extern volatile unsigned int DCH3DAT;
extern volatile unsigned int DCH3DATCLR;
extern volatile unsigned int DCH3DATSET;
extern volatile unsigned int DCH3DATINV;
extern volatile unsigned int DCH4CON;
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
extern volatile __DCH4CONbits_t DCH4CONbits __asm__ ("DCH4CON");
extern volatile unsigned int DCH4CONCLR;
extern volatile unsigned int DCH4CONSET;
extern volatile unsigned int DCH4CONINV;
extern volatile unsigned int DCH4ECON;
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
extern volatile __DCH4ECONbits_t DCH4ECONbits __asm__ ("DCH4ECON");
extern volatile unsigned int DCH4ECONCLR;
extern volatile unsigned int DCH4ECONSET;
extern volatile unsigned int DCH4ECONINV;
extern volatile unsigned int DCH4INT;
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
extern volatile __DCH4INTbits_t DCH4INTbits __asm__ ("DCH4INT");
extern volatile unsigned int DCH4INTCLR;
extern volatile unsigned int DCH4INTSET;
extern volatile unsigned int DCH4INTINV;
extern volatile unsigned int DCH4SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH4SSAbits_t;
extern volatile __DCH4SSAbits_t DCH4SSAbits __asm__ ("DCH4SSA");
extern volatile unsigned int DCH4SSACLR;
extern volatile unsigned int DCH4SSASET;
extern volatile unsigned int DCH4SSAINV;
extern volatile unsigned int DCH4DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH4DSAbits_t;
extern volatile __DCH4DSAbits_t DCH4DSAbits __asm__ ("DCH4DSA");
extern volatile unsigned int DCH4DSACLR;
extern volatile unsigned int DCH4DSASET;
extern volatile unsigned int DCH4DSAINV;
extern volatile unsigned int DCH4SSIZ;
extern volatile unsigned int DCH4SSIZCLR;
extern volatile unsigned int DCH4SSIZSET;
extern volatile unsigned int DCH4SSIZINV;
extern volatile unsigned int DCH4DSIZ;
extern volatile unsigned int DCH4DSIZCLR;
extern volatile unsigned int DCH4DSIZSET;
extern volatile unsigned int DCH4DSIZINV;
extern volatile unsigned int DCH4SPTR;
extern volatile unsigned int DCH4SPTRCLR;
extern volatile unsigned int DCH4SPTRSET;
extern volatile unsigned int DCH4SPTRINV;
extern volatile unsigned int DCH4DPTR;
extern volatile unsigned int DCH4DPTRCLR;
extern volatile unsigned int DCH4DPTRSET;
extern volatile unsigned int DCH4DPTRINV;
extern volatile unsigned int DCH4CSIZ;
extern volatile unsigned int DCH4CSIZCLR;
extern volatile unsigned int DCH4CSIZSET;
extern volatile unsigned int DCH4CSIZINV;
extern volatile unsigned int DCH4CPTR;
extern volatile unsigned int DCH4CPTRCLR;
extern volatile unsigned int DCH4CPTRSET;
extern volatile unsigned int DCH4CPTRINV;
extern volatile unsigned int DCH4DAT;
extern volatile unsigned int DCH4DATCLR;
extern volatile unsigned int DCH4DATSET;
extern volatile unsigned int DCH4DATINV;
extern volatile unsigned int DCH5CON;
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
extern volatile __DCH5CONbits_t DCH5CONbits __asm__ ("DCH5CON");
extern volatile unsigned int DCH5CONCLR;
extern volatile unsigned int DCH5CONSET;
extern volatile unsigned int DCH5CONINV;
extern volatile unsigned int DCH5ECON;
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
extern volatile __DCH5ECONbits_t DCH5ECONbits __asm__ ("DCH5ECON");
extern volatile unsigned int DCH5ECONCLR;
extern volatile unsigned int DCH5ECONSET;
extern volatile unsigned int DCH5ECONINV;
extern volatile unsigned int DCH5INT;
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
extern volatile __DCH5INTbits_t DCH5INTbits __asm__ ("DCH5INT");
extern volatile unsigned int DCH5INTCLR;
extern volatile unsigned int DCH5INTSET;
extern volatile unsigned int DCH5INTINV;
extern volatile unsigned int DCH5SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH5SSAbits_t;
extern volatile __DCH5SSAbits_t DCH5SSAbits __asm__ ("DCH5SSA");
extern volatile unsigned int DCH5SSACLR;
extern volatile unsigned int DCH5SSASET;
extern volatile unsigned int DCH5SSAINV;
extern volatile unsigned int DCH5DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH5DSAbits_t;
extern volatile __DCH5DSAbits_t DCH5DSAbits __asm__ ("DCH5DSA");
extern volatile unsigned int DCH5DSACLR;
extern volatile unsigned int DCH5DSASET;
extern volatile unsigned int DCH5DSAINV;
extern volatile unsigned int DCH5SSIZ;
extern volatile unsigned int DCH5SSIZCLR;
extern volatile unsigned int DCH5SSIZSET;
extern volatile unsigned int DCH5SSIZINV;
extern volatile unsigned int DCH5DSIZ;
extern volatile unsigned int DCH5DSIZCLR;
extern volatile unsigned int DCH5DSIZSET;
extern volatile unsigned int DCH5DSIZINV;
extern volatile unsigned int DCH5SPTR;
extern volatile unsigned int DCH5SPTRCLR;
extern volatile unsigned int DCH5SPTRSET;
extern volatile unsigned int DCH5SPTRINV;
extern volatile unsigned int DCH5DPTR;
extern volatile unsigned int DCH5DPTRCLR;
extern volatile unsigned int DCH5DPTRSET;
extern volatile unsigned int DCH5DPTRINV;
extern volatile unsigned int DCH5CSIZ;
extern volatile unsigned int DCH5CSIZCLR;
extern volatile unsigned int DCH5CSIZSET;
extern volatile unsigned int DCH5CSIZINV;
extern volatile unsigned int DCH5CPTR;
extern volatile unsigned int DCH5CPTRCLR;
extern volatile unsigned int DCH5CPTRSET;
extern volatile unsigned int DCH5CPTRINV;
extern volatile unsigned int DCH5DAT;
extern volatile unsigned int DCH5DATCLR;
extern volatile unsigned int DCH5DATSET;
extern volatile unsigned int DCH5DATINV;
extern volatile unsigned int DCH6CON;
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
extern volatile __DCH6CONbits_t DCH6CONbits __asm__ ("DCH6CON");
extern volatile unsigned int DCH6CONCLR;
extern volatile unsigned int DCH6CONSET;
extern volatile unsigned int DCH6CONINV;
extern volatile unsigned int DCH6ECON;
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
extern volatile __DCH6ECONbits_t DCH6ECONbits __asm__ ("DCH6ECON");
extern volatile unsigned int DCH6ECONCLR;
extern volatile unsigned int DCH6ECONSET;
extern volatile unsigned int DCH6ECONINV;
extern volatile unsigned int DCH6INT;
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
extern volatile __DCH6INTbits_t DCH6INTbits __asm__ ("DCH6INT");
extern volatile unsigned int DCH6INTCLR;
extern volatile unsigned int DCH6INTSET;
extern volatile unsigned int DCH6INTINV;
extern volatile unsigned int DCH6SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH6SSAbits_t;
extern volatile __DCH6SSAbits_t DCH6SSAbits __asm__ ("DCH6SSA");
extern volatile unsigned int DCH6SSACLR;
extern volatile unsigned int DCH6SSASET;
extern volatile unsigned int DCH6SSAINV;
extern volatile unsigned int DCH6DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH6DSAbits_t;
extern volatile __DCH6DSAbits_t DCH6DSAbits __asm__ ("DCH6DSA");
extern volatile unsigned int DCH6DSACLR;
extern volatile unsigned int DCH6DSASET;
extern volatile unsigned int DCH6DSAINV;
extern volatile unsigned int DCH6SSIZ;
extern volatile unsigned int DCH6SSIZCLR;
extern volatile unsigned int DCH6SSIZSET;
extern volatile unsigned int DCH6SSIZINV;
extern volatile unsigned int DCH6DSIZ;
extern volatile unsigned int DCH6DSIZCLR;
extern volatile unsigned int DCH6DSIZSET;
extern volatile unsigned int DCH6DSIZINV;
extern volatile unsigned int DCH6SPTR;
extern volatile unsigned int DCH6SPTRCLR;
extern volatile unsigned int DCH6SPTRSET;
extern volatile unsigned int DCH6SPTRINV;
extern volatile unsigned int DCH6DPTR;
extern volatile unsigned int DCH6DPTRCLR;
extern volatile unsigned int DCH6DPTRSET;
extern volatile unsigned int DCH6DPTRINV;
extern volatile unsigned int DCH6CSIZ;
extern volatile unsigned int DCH6CSIZCLR;
extern volatile unsigned int DCH6CSIZSET;
extern volatile unsigned int DCH6CSIZINV;
extern volatile unsigned int DCH6CPTR;
extern volatile unsigned int DCH6CPTRCLR;
extern volatile unsigned int DCH6CPTRSET;
extern volatile unsigned int DCH6CPTRINV;
extern volatile unsigned int DCH6DAT;
extern volatile unsigned int DCH6DATCLR;
extern volatile unsigned int DCH6DATSET;
extern volatile unsigned int DCH6DATINV;
extern volatile unsigned int DCH7CON;
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
extern volatile __DCH7CONbits_t DCH7CONbits __asm__ ("DCH7CON");
extern volatile unsigned int DCH7CONCLR;
extern volatile unsigned int DCH7CONSET;
extern volatile unsigned int DCH7CONINV;
extern volatile unsigned int DCH7ECON;
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
extern volatile __DCH7ECONbits_t DCH7ECONbits __asm__ ("DCH7ECON");
extern volatile unsigned int DCH7ECONCLR;
extern volatile unsigned int DCH7ECONSET;
extern volatile unsigned int DCH7ECONINV;
extern volatile unsigned int DCH7INT;
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
extern volatile __DCH7INTbits_t DCH7INTbits __asm__ ("DCH7INT");
extern volatile unsigned int DCH7INTCLR;
extern volatile unsigned int DCH7INTSET;
extern volatile unsigned int DCH7INTINV;
extern volatile unsigned int DCH7SSA;
typedef struct {
  unsigned CHSSA:32;
} __DCH7SSAbits_t;
extern volatile __DCH7SSAbits_t DCH7SSAbits __asm__ ("DCH7SSA");
extern volatile unsigned int DCH7SSACLR;
extern volatile unsigned int DCH7SSASET;
extern volatile unsigned int DCH7SSAINV;
extern volatile unsigned int DCH7DSA;
typedef struct {
  unsigned CHDSA:32;
} __DCH7DSAbits_t;
extern volatile __DCH7DSAbits_t DCH7DSAbits __asm__ ("DCH7DSA");
extern volatile unsigned int DCH7DSACLR;
extern volatile unsigned int DCH7DSASET;
extern volatile unsigned int DCH7DSAINV;
extern volatile unsigned int DCH7SSIZ;
extern volatile unsigned int DCH7SSIZCLR;
extern volatile unsigned int DCH7SSIZSET;
extern volatile unsigned int DCH7SSIZINV;
extern volatile unsigned int DCH7DSIZ;
extern volatile unsigned int DCH7DSIZCLR;
extern volatile unsigned int DCH7DSIZSET;
extern volatile unsigned int DCH7DSIZINV;
extern volatile unsigned int DCH7SPTR;
extern volatile unsigned int DCH7SPTRCLR;
extern volatile unsigned int DCH7SPTRSET;
extern volatile unsigned int DCH7SPTRINV;
extern volatile unsigned int DCH7DPTR;
extern volatile unsigned int DCH7DPTRCLR;
extern volatile unsigned int DCH7DPTRSET;
extern volatile unsigned int DCH7DPTRINV;
extern volatile unsigned int DCH7CSIZ;
extern volatile unsigned int DCH7CSIZCLR;
extern volatile unsigned int DCH7CSIZSET;
extern volatile unsigned int DCH7CSIZINV;
extern volatile unsigned int DCH7CPTR;
extern volatile unsigned int DCH7CPTRCLR;
extern volatile unsigned int DCH7CPTRSET;
extern volatile unsigned int DCH7CPTRINV;
extern volatile unsigned int DCH7DAT;
extern volatile unsigned int DCH7DATCLR;
extern volatile unsigned int DCH7DATSET;
extern volatile unsigned int DCH7DATINV;
extern volatile unsigned int CHECON;
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
extern volatile __CHECONbits_t CHECONbits __asm__ ("CHECON");
extern volatile unsigned int CHECONCLR;
extern volatile unsigned int CHECONSET;
extern volatile unsigned int CHECONINV;
extern volatile unsigned int CHEACC;
typedef struct {
  unsigned CHEIDX:4;
  unsigned :27;
  unsigned CHEWEN:1;
} __CHEACCbits_t;
extern volatile __CHEACCbits_t CHEACCbits __asm__ ("CHEACC");
extern volatile unsigned int CHEACCCLR;
extern volatile unsigned int CHEACCSET;
extern volatile unsigned int CHEACCINV;
extern volatile unsigned int CHETAG;
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
extern volatile __CHETAGbits_t CHETAGbits __asm__ ("CHETAG");
extern volatile unsigned int CHETAGCLR;
extern volatile unsigned int CHETAGSET;
extern volatile unsigned int CHETAGINV;
extern volatile unsigned int CHEMSK;
typedef struct {
  unsigned :5;
  unsigned LMASK:11;
} __CHEMSKbits_t;
extern volatile __CHEMSKbits_t CHEMSKbits __asm__ ("CHEMSK");
extern volatile unsigned int CHEMSKCLR;
extern volatile unsigned int CHEMSKSET;
extern volatile unsigned int CHEMSKINV;
extern volatile unsigned int CHEW0;
typedef struct {
  unsigned CHEW0:32;
} __CHEW0bits_t;
extern volatile __CHEW0bits_t CHEW0bits __asm__ ("CHEW0");
extern volatile unsigned int CHEW1;
typedef struct {
  unsigned CHEW1:32;
} __CHEW1bits_t;
extern volatile __CHEW1bits_t CHEW1bits __asm__ ("CHEW1");
extern volatile unsigned int CHEW2;
typedef struct {
  unsigned CHEW2:32;
} __CHEW2bits_t;
extern volatile __CHEW2bits_t CHEW2bits __asm__ ("CHEW2");
extern volatile unsigned int CHEW3;
typedef struct {
  unsigned CHEW3:32;
} __CHEW3bits_t;
extern volatile __CHEW3bits_t CHEW3bits __asm__ ("CHEW3");
extern volatile unsigned int CHELRU;
typedef struct {
  unsigned CHELRU:25;
} __CHELRUbits_t;
extern volatile __CHELRUbits_t CHELRUbits __asm__ ("CHELRU");
extern volatile unsigned int CHEHIT;
typedef struct {
  unsigned CHEHIT:32;
} __CHEHITbits_t;
extern volatile __CHEHITbits_t CHEHITbits __asm__ ("CHEHIT");
extern volatile unsigned int CHEMIS;
typedef struct {
  unsigned CHEMIS:32;
} __CHEMISbits_t;
extern volatile __CHEMISbits_t CHEMISbits __asm__ ("CHEMIS");
extern volatile unsigned int CHEPFABT;
typedef struct {
  unsigned CHEPFABT:32;
} __CHEPFABTbits_t;
extern volatile __CHEPFABTbits_t CHEPFABTbits __asm__ ("CHEPFABT");
extern volatile unsigned int U1OTGIR;
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
extern volatile __U1OTGIRbits_t U1OTGIRbits __asm__ ("U1OTGIR");
extern volatile unsigned int U1OTGIRCLR;
extern volatile unsigned int U1OTGIE;
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
extern volatile __U1OTGIEbits_t U1OTGIEbits __asm__ ("U1OTGIE");
extern volatile unsigned int U1OTGIECLR;
extern volatile unsigned int U1OTGIESET;
extern volatile unsigned int U1OTGIEINV;
extern volatile unsigned int U1OTGSTAT;
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
extern volatile __U1OTGSTATbits_t U1OTGSTATbits __asm__ ("U1OTGSTAT");
extern volatile unsigned int U1OTGCON;
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
extern volatile __U1OTGCONbits_t U1OTGCONbits __asm__ ("U1OTGCON");
extern volatile unsigned int U1OTGCONCLR;
extern volatile unsigned int U1OTGCONSET;
extern volatile unsigned int U1OTGCONINV;
extern volatile unsigned int U1PWRC;
typedef struct {
  unsigned USBPWR:1;
  unsigned USUSPEND:1;
  unsigned :1;
  unsigned USBBUSY:1;
  unsigned USLPGRD:1;
  unsigned :2;
  unsigned UACTPND:1;
} __U1PWRCbits_t;
extern volatile __U1PWRCbits_t U1PWRCbits __asm__ ("U1PWRC");
extern volatile unsigned int U1PWRCCLR;
extern volatile unsigned int U1PWRCSET;
extern volatile unsigned int U1PWRCINV;
extern volatile unsigned int U1IR;
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
extern volatile __U1IRbits_t U1IRbits __asm__ ("U1IR");
extern volatile unsigned int U1IRCLR;
extern volatile unsigned int U1IE;
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
extern volatile __U1IEbits_t U1IEbits __asm__ ("U1IE");
extern volatile unsigned int U1IECLR;
extern volatile unsigned int U1IESET;
extern volatile unsigned int U1IEINV;
extern volatile unsigned int U1EIR;
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
extern volatile __U1EIRbits_t U1EIRbits __asm__ ("U1EIR");
extern volatile unsigned int U1EIRCLR;
extern volatile unsigned int U1EIE;
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
extern volatile __U1EIEbits_t U1EIEbits __asm__ ("U1EIE");
extern volatile unsigned int U1EIECLR;
extern volatile unsigned int U1EIESET;
extern volatile unsigned int U1EIEINV;
extern volatile unsigned int U1STAT;
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
extern volatile __U1STATbits_t U1STATbits __asm__ ("U1STAT");
extern volatile unsigned int U1CON;
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
extern volatile __U1CONbits_t U1CONbits __asm__ ("U1CON");
extern volatile unsigned int U1CONCLR;
extern volatile unsigned int U1CONSET;
extern volatile unsigned int U1CONINV;
extern volatile unsigned int U1ADDR;
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
extern volatile __U1ADDRbits_t U1ADDRbits __asm__ ("U1ADDR");
extern volatile unsigned int U1ADDRCLR;
extern volatile unsigned int U1ADDRSET;
extern volatile unsigned int U1ADDRINV;
extern volatile unsigned int U1BDTP1;
typedef struct {
  unsigned :1;
  unsigned BDTPTRL:7;
} __U1BDTP1bits_t;
extern volatile __U1BDTP1bits_t U1BDTP1bits __asm__ ("U1BDTP1");
extern volatile unsigned int U1BDTP1CLR;
extern volatile unsigned int U1BDTP1SET;
extern volatile unsigned int U1BDTP1INV;
extern volatile unsigned int U1FRML;
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
extern volatile __U1FRMLbits_t U1FRMLbits __asm__ ("U1FRML");
extern volatile unsigned int U1FRMH;
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
extern volatile __U1FRMHbits_t U1FRMHbits __asm__ ("U1FRMH");
extern volatile unsigned int U1TOK;
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
extern volatile __U1TOKbits_t U1TOKbits __asm__ ("U1TOK");
extern volatile unsigned int U1TOKCLR;
extern volatile unsigned int U1TOKSET;
extern volatile unsigned int U1TOKINV;
extern volatile unsigned int U1SOF;
typedef struct {
  unsigned CNT:8;
} __U1SOFbits_t;
extern volatile __U1SOFbits_t U1SOFbits __asm__ ("U1SOF");
extern volatile unsigned int U1SOFCLR;
extern volatile unsigned int U1SOFSET;
extern volatile unsigned int U1SOFINV;
extern volatile unsigned int U1BDTP2;
typedef struct {
  unsigned BDTPTRH:8;
} __U1BDTP2bits_t;
extern volatile __U1BDTP2bits_t U1BDTP2bits __asm__ ("U1BDTP2");
extern volatile unsigned int U1BDTP2CLR;
extern volatile unsigned int U1BDTP2SET;
extern volatile unsigned int U1BDTP2INV;
extern volatile unsigned int U1BDTP3;
typedef struct {
  unsigned BDTPTRU:8;
} __U1BDTP3bits_t;
extern volatile __U1BDTP3bits_t U1BDTP3bits __asm__ ("U1BDTP3");
extern volatile unsigned int U1BDTP3CLR;
extern volatile unsigned int U1BDTP3SET;
extern volatile unsigned int U1BDTP3INV;
extern volatile unsigned int U1CNFG1;
typedef struct {
  unsigned UASUSPND:1;
  unsigned :3;
  unsigned USBSIDL:1;
  unsigned :1;
  unsigned UOEMON:1;
  unsigned UTEYE:1;
} __U1CNFG1bits_t;
extern volatile __U1CNFG1bits_t U1CNFG1bits __asm__ ("U1CNFG1");
extern volatile unsigned int U1CNFG1CLR;
extern volatile unsigned int U1CNFG1SET;
extern volatile unsigned int U1CNFG1INV;
extern volatile unsigned int U1EP0;
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
extern volatile __U1EP0bits_t U1EP0bits __asm__ ("U1EP0");
extern volatile unsigned int U1EP0CLR;
extern volatile unsigned int U1EP0SET;
extern volatile unsigned int U1EP0INV;
extern volatile unsigned int U1EP1;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP1bits_t;
extern volatile __U1EP1bits_t U1EP1bits __asm__ ("U1EP1");
extern volatile unsigned int U1EP1CLR;
extern volatile unsigned int U1EP1SET;
extern volatile unsigned int U1EP1INV;
extern volatile unsigned int U1EP2;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP2bits_t;
extern volatile __U1EP2bits_t U1EP2bits __asm__ ("U1EP2");
extern volatile unsigned int U1EP2CLR;
extern volatile unsigned int U1EP2SET;
extern volatile unsigned int U1EP2INV;
extern volatile unsigned int U1EP3;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP3bits_t;
extern volatile __U1EP3bits_t U1EP3bits __asm__ ("U1EP3");
extern volatile unsigned int U1EP3CLR;
extern volatile unsigned int U1EP3SET;
extern volatile unsigned int U1EP3INV;
extern volatile unsigned int U1EP4;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP4bits_t;
extern volatile __U1EP4bits_t U1EP4bits __asm__ ("U1EP4");
extern volatile unsigned int U1EP4CLR;
extern volatile unsigned int U1EP4SET;
extern volatile unsigned int U1EP4INV;
extern volatile unsigned int U1EP5;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP5bits_t;
extern volatile __U1EP5bits_t U1EP5bits __asm__ ("U1EP5");
extern volatile unsigned int U1EP5CLR;
extern volatile unsigned int U1EP5SET;
extern volatile unsigned int U1EP5INV;
extern volatile unsigned int U1EP6;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP6bits_t;
extern volatile __U1EP6bits_t U1EP6bits __asm__ ("U1EP6");
extern volatile unsigned int U1EP6CLR;
extern volatile unsigned int U1EP6SET;
extern volatile unsigned int U1EP6INV;
extern volatile unsigned int U1EP7;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP7bits_t;
extern volatile __U1EP7bits_t U1EP7bits __asm__ ("U1EP7");
extern volatile unsigned int U1EP7CLR;
extern volatile unsigned int U1EP7SET;
extern volatile unsigned int U1EP7INV;
extern volatile unsigned int U1EP8;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP8bits_t;
extern volatile __U1EP8bits_t U1EP8bits __asm__ ("U1EP8");
extern volatile unsigned int U1EP8CLR;
extern volatile unsigned int U1EP8SET;
extern volatile unsigned int U1EP8INV;
extern volatile unsigned int U1EP9;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP9bits_t;
extern volatile __U1EP9bits_t U1EP9bits __asm__ ("U1EP9");
extern volatile unsigned int U1EP9CLR;
extern volatile unsigned int U1EP9SET;
extern volatile unsigned int U1EP9INV;
extern volatile unsigned int U1EP10;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP10bits_t;
extern volatile __U1EP10bits_t U1EP10bits __asm__ ("U1EP10");
extern volatile unsigned int U1EP10CLR;
extern volatile unsigned int U1EP10SET;
extern volatile unsigned int U1EP10INV;
extern volatile unsigned int U1EP11;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP11bits_t;
extern volatile __U1EP11bits_t U1EP11bits __asm__ ("U1EP11");
extern volatile unsigned int U1EP11CLR;
extern volatile unsigned int U1EP11SET;
extern volatile unsigned int U1EP11INV;
extern volatile unsigned int U1EP12;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP12bits_t;
extern volatile __U1EP12bits_t U1EP12bits __asm__ ("U1EP12");
extern volatile unsigned int U1EP12CLR;
extern volatile unsigned int U1EP12SET;
extern volatile unsigned int U1EP12INV;
extern volatile unsigned int U1EP13;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP13bits_t;
extern volatile __U1EP13bits_t U1EP13bits __asm__ ("U1EP13");
extern volatile unsigned int U1EP13CLR;
extern volatile unsigned int U1EP13SET;
extern volatile unsigned int U1EP13INV;
extern volatile unsigned int U1EP14;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP14bits_t;
extern volatile __U1EP14bits_t U1EP14bits __asm__ ("U1EP14");
extern volatile unsigned int U1EP14CLR;
extern volatile unsigned int U1EP14SET;
extern volatile unsigned int U1EP14INV;
extern volatile unsigned int U1EP15;
typedef struct {
  unsigned EPHSHK:1;
  unsigned EPSTALL:1;
  unsigned EPTXEN:1;
  unsigned EPRXEN:1;
  unsigned EPCONDIS:1;
} __U1EP15bits_t;
extern volatile __U1EP15bits_t U1EP15bits __asm__ ("U1EP15");
extern volatile unsigned int U1EP15CLR;
extern volatile unsigned int U1EP15SET;
extern volatile unsigned int U1EP15INV;
extern volatile unsigned int TRISA;
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
extern volatile __TRISAbits_t TRISAbits __asm__ ("TRISA");
extern volatile unsigned int TRISACLR;
extern volatile unsigned int TRISASET;
extern volatile unsigned int TRISAINV;
extern volatile unsigned int PORTA;
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
extern volatile __PORTAbits_t PORTAbits __asm__ ("PORTA");
extern volatile unsigned int PORTACLR;
extern volatile unsigned int PORTASET;
extern volatile unsigned int PORTAINV;
extern volatile unsigned int LATA;
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
extern volatile __LATAbits_t LATAbits __asm__ ("LATA");
extern volatile unsigned int LATACLR;
extern volatile unsigned int LATASET;
extern volatile unsigned int LATAINV;
extern volatile unsigned int ODCA;
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
extern volatile __ODCAbits_t ODCAbits __asm__ ("ODCA");
extern volatile unsigned int ODCACLR;
extern volatile unsigned int ODCASET;
extern volatile unsigned int ODCAINV;
extern volatile unsigned int TRISB;
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
extern volatile __TRISBbits_t TRISBbits __asm__ ("TRISB");
extern volatile unsigned int TRISBCLR;
extern volatile unsigned int TRISBSET;
extern volatile unsigned int TRISBINV;
extern volatile unsigned int PORTB;
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
extern volatile __PORTBbits_t PORTBbits __asm__ ("PORTB");
extern volatile unsigned int PORTBCLR;
extern volatile unsigned int PORTBSET;
extern volatile unsigned int PORTBINV;
extern volatile unsigned int LATB;
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
extern volatile __LATBbits_t LATBbits __asm__ ("LATB");
extern volatile unsigned int LATBCLR;
extern volatile unsigned int LATBSET;
extern volatile unsigned int LATBINV;
extern volatile unsigned int ODCB;
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
extern volatile __ODCBbits_t ODCBbits __asm__ ("ODCB");
extern volatile unsigned int ODCBCLR;
extern volatile unsigned int ODCBSET;
extern volatile unsigned int ODCBINV;
extern volatile unsigned int TRISC;
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
extern volatile __TRISCbits_t TRISCbits __asm__ ("TRISC");
extern volatile unsigned int TRISCCLR;
extern volatile unsigned int TRISCSET;
extern volatile unsigned int TRISCINV;
extern volatile unsigned int PORTC;
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
extern volatile __PORTCbits_t PORTCbits __asm__ ("PORTC");
extern volatile unsigned int PORTCCLR;
extern volatile unsigned int PORTCSET;
extern volatile unsigned int PORTCINV;
extern volatile unsigned int LATC;
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
extern volatile __LATCbits_t LATCbits __asm__ ("LATC");
extern volatile unsigned int LATCCLR;
extern volatile unsigned int LATCSET;
extern volatile unsigned int LATCINV;
extern volatile unsigned int ODCC;
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
extern volatile __ODCCbits_t ODCCbits __asm__ ("ODCC");
extern volatile unsigned int ODCCCLR;
extern volatile unsigned int ODCCSET;
extern volatile unsigned int ODCCINV;
extern volatile unsigned int TRISD;
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
extern volatile __TRISDbits_t TRISDbits __asm__ ("TRISD");
extern volatile unsigned int TRISDCLR;
extern volatile unsigned int TRISDSET;
extern volatile unsigned int TRISDINV;
extern volatile unsigned int PORTD;
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
extern volatile __PORTDbits_t PORTDbits __asm__ ("PORTD");
extern volatile unsigned int PORTDCLR;
extern volatile unsigned int PORTDSET;
extern volatile unsigned int PORTDINV;
extern volatile unsigned int LATD;
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
extern volatile __LATDbits_t LATDbits __asm__ ("LATD");
extern volatile unsigned int LATDCLR;
extern volatile unsigned int LATDSET;
extern volatile unsigned int LATDINV;
extern volatile unsigned int ODCD;
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
extern volatile __ODCDbits_t ODCDbits __asm__ ("ODCD");
extern volatile unsigned int ODCDCLR;
extern volatile unsigned int ODCDSET;
extern volatile unsigned int ODCDINV;
extern volatile unsigned int TRISE;
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
extern volatile __TRISEbits_t TRISEbits __asm__ ("TRISE");
extern volatile unsigned int TRISECLR;
extern volatile unsigned int TRISESET;
extern volatile unsigned int TRISEINV;
extern volatile unsigned int PORTE;
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
extern volatile __PORTEbits_t PORTEbits __asm__ ("PORTE");
extern volatile unsigned int PORTECLR;
extern volatile unsigned int PORTESET;
extern volatile unsigned int PORTEINV;
extern volatile unsigned int LATE;
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
extern volatile __LATEbits_t LATEbits __asm__ ("LATE");
extern volatile unsigned int LATECLR;
extern volatile unsigned int LATESET;
extern volatile unsigned int LATEINV;
extern volatile unsigned int ODCE;
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
extern volatile __ODCEbits_t ODCEbits __asm__ ("ODCE");
extern volatile unsigned int ODCECLR;
extern volatile unsigned int ODCESET;
extern volatile unsigned int ODCEINV;
extern volatile unsigned int TRISF;
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
extern volatile __TRISFbits_t TRISFbits __asm__ ("TRISF");
extern volatile unsigned int TRISFCLR;
extern volatile unsigned int TRISFSET;
extern volatile unsigned int TRISFINV;
extern volatile unsigned int PORTF;
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
extern volatile __PORTFbits_t PORTFbits __asm__ ("PORTF");
extern volatile unsigned int PORTFCLR;
extern volatile unsigned int PORTFSET;
extern volatile unsigned int PORTFINV;
extern volatile unsigned int LATF;
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
extern volatile __LATFbits_t LATFbits __asm__ ("LATF");
extern volatile unsigned int LATFCLR;
extern volatile unsigned int LATFSET;
extern volatile unsigned int LATFINV;
extern volatile unsigned int ODCF;
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
extern volatile __ODCFbits_t ODCFbits __asm__ ("ODCF");
extern volatile unsigned int ODCFCLR;
extern volatile unsigned int ODCFSET;
extern volatile unsigned int ODCFINV;
extern volatile unsigned int TRISG;
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
extern volatile __TRISGbits_t TRISGbits __asm__ ("TRISG");
extern volatile unsigned int TRISGCLR;
extern volatile unsigned int TRISGSET;
extern volatile unsigned int TRISGINV;
extern volatile unsigned int PORTG;
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
extern volatile __PORTGbits_t PORTGbits __asm__ ("PORTG");
extern volatile unsigned int PORTGCLR;
extern volatile unsigned int PORTGSET;
extern volatile unsigned int PORTGINV;
extern volatile unsigned int LATG;
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
extern volatile __LATGbits_t LATGbits __asm__ ("LATG");
extern volatile unsigned int LATGCLR;
extern volatile unsigned int LATGSET;
extern volatile unsigned int LATGINV;
extern volatile unsigned int ODCG;
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
extern volatile __ODCGbits_t ODCGbits __asm__ ("ODCG");
extern volatile unsigned int ODCGCLR;
extern volatile unsigned int ODCGSET;
extern volatile unsigned int ODCGINV;
extern volatile unsigned int CNCON;
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
extern volatile __CNCONbits_t CNCONbits __asm__ ("CNCON");
extern volatile unsigned int CNCONCLR;
extern volatile unsigned int CNCONSET;
extern volatile unsigned int CNCONINV;
extern volatile unsigned int CNEN;
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
extern volatile __CNENbits_t CNENbits __asm__ ("CNEN");
extern volatile unsigned int CNENCLR;
extern volatile unsigned int CNENSET;
extern volatile unsigned int CNENINV;
extern volatile unsigned int CNPUE;
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
extern volatile __CNPUEbits_t CNPUEbits __asm__ ("CNPUE");
extern volatile unsigned int CNPUECLR;
extern volatile unsigned int CNPUESET;
extern volatile unsigned int CNPUEINV;
extern volatile unsigned int ETHCON1;
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
extern volatile __ETHCON1bits_t ETHCON1bits __asm__ ("ETHCON1");
extern volatile unsigned int ETHCON1CLR;
extern volatile unsigned int ETHCON1SET;
extern volatile unsigned int ETHCON1INV;
extern volatile unsigned int ETHCON2;
typedef union {
  struct {
    unsigned :4;
    unsigned RXBUF_SZ:7;
  };
  struct {
    unsigned w:32;
  };
} __ETHCON2bits_t;
extern volatile __ETHCON2bits_t ETHCON2bits __asm__ ("ETHCON2");
extern volatile unsigned int ETHCON2CLR;
extern volatile unsigned int ETHCON2SET;
extern volatile unsigned int ETHCON2INV;
extern volatile unsigned int ETHTXST;
typedef union {
  struct {
    unsigned :2;
    unsigned TXSTADDR:30;
  };
  struct {
    unsigned w:32;
  };
} __ETHTXSTbits_t;
extern volatile __ETHTXSTbits_t ETHTXSTbits __asm__ ("ETHTXST");
extern volatile unsigned int ETHTXSTCLR;
extern volatile unsigned int ETHTXSTSET;
extern volatile unsigned int ETHTXSTINV;
extern volatile unsigned int ETHRXST;
typedef union {
  struct {
    unsigned :2;
    unsigned RXSTADDR:30;
  };
  struct {
    unsigned w:32;
  };
} __ETHRXSTbits_t;
extern volatile __ETHRXSTbits_t ETHRXSTbits __asm__ ("ETHRXST");
extern volatile unsigned int ETHRXSTCLR;
extern volatile unsigned int ETHRXSTSET;
extern volatile unsigned int ETHRXSTINV;
extern volatile unsigned int ETHHT0;
typedef union {
  struct {
    unsigned w:32;
  };
  struct {
    unsigned HTLOWER:32;
  };
} __ETHHT0bits_t;
extern volatile __ETHHT0bits_t ETHHT0bits __asm__ ("ETHHT0");
extern volatile unsigned int ETHHT0CLR;
extern volatile unsigned int ETHHT0SET;
extern volatile unsigned int ETHHT0INV;
extern volatile unsigned int ETHHT1;
typedef union {
  struct {
    unsigned w:32;
  };
  struct {
    unsigned HTUPPER:32;
  };
} __ETHHT1bits_t;
extern volatile __ETHHT1bits_t ETHHT1bits __asm__ ("ETHHT1");
extern volatile unsigned int ETHHT1CLR;
extern volatile unsigned int ETHHT1SET;
extern volatile unsigned int ETHHT1INV;
extern volatile unsigned int ETHPMM0;
typedef union {
  struct {
    unsigned w:32;
  };
  struct {
    unsigned PMMLOWER:32;
  };
} __ETHPMM0bits_t;
extern volatile __ETHPMM0bits_t ETHPMM0bits __asm__ ("ETHPMM0");
extern volatile unsigned int ETHPMM0CLR;
extern volatile unsigned int ETHPMM0SET;
extern volatile unsigned int ETHPMM0INV;
extern volatile unsigned int ETHPMM1;
typedef union {
  struct {
    unsigned w:32;
  };
  struct {
    unsigned PMMUPPER:32;
  };
} __ETHPMM1bits_t;
extern volatile __ETHPMM1bits_t ETHPMM1bits __asm__ ("ETHPMM1");
extern volatile unsigned int ETHPMM1CLR;
extern volatile unsigned int ETHPMM1SET;
extern volatile unsigned int ETHPMM1INV;
extern volatile unsigned int ETHPMCS;
typedef union {
  struct {
    unsigned PMCS:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHPMCSbits_t;
extern volatile __ETHPMCSbits_t ETHPMCSbits __asm__ ("ETHPMCS");
extern volatile unsigned int ETHPMCSCLR;
extern volatile unsigned int ETHPMCSSET;
extern volatile unsigned int ETHPMCSINV;
extern volatile unsigned int ETHPMO;
typedef union {
  struct {
    unsigned PMO:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHPMObits_t;
extern volatile __ETHPMObits_t ETHPMObits __asm__ ("ETHPMO");
extern volatile unsigned int ETHPMOCLR;
extern volatile unsigned int ETHPMOSET;
extern volatile unsigned int ETHPMOINV;
extern volatile unsigned int ETHRXFC;
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
extern volatile __ETHRXFCbits_t ETHRXFCbits __asm__ ("ETHRXFC");
extern volatile unsigned int ETHRXFCCLR;
extern volatile unsigned int ETHRXFCSET;
extern volatile unsigned int ETHRXFCINV;
extern volatile unsigned int ETHRXWM;
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
extern volatile __ETHRXWMbits_t ETHRXWMbits __asm__ ("ETHRXWM");
extern volatile unsigned int ETHRXWMCLR;
extern volatile unsigned int ETHRXWMSET;
extern volatile unsigned int ETHRXWMINV;
extern volatile unsigned int ETHIEN;
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
extern volatile __ETHIENbits_t ETHIENbits __asm__ ("ETHIEN");
extern volatile unsigned int ETHIENCLR;
extern volatile unsigned int ETHIENSET;
extern volatile unsigned int ETHIENINV;
extern volatile unsigned int ETHIRQ;
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
extern volatile __ETHIRQbits_t ETHIRQbits __asm__ ("ETHIRQ");
extern volatile unsigned int ETHIRQCLR;
extern volatile unsigned int ETHIRQSET;
extern volatile unsigned int ETHIRQINV;
extern volatile unsigned int ETHSTAT;
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
extern volatile __ETHSTATbits_t ETHSTATbits __asm__ ("ETHSTAT");
extern volatile unsigned int ETHSTATCLR;
extern volatile unsigned int ETHSTATSET;
extern volatile unsigned int ETHSTATINV;
extern volatile unsigned int ETHRXOVFLOW;
typedef union {
  struct {
    unsigned RXOVFLWCNT:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHRXOVFLOWbits_t;
extern volatile __ETHRXOVFLOWbits_t ETHRXOVFLOWbits __asm__ ("ETHRXOVFLOW");
extern volatile unsigned int ETHRXOVFLOWCLR;
extern volatile unsigned int ETHRXOVFLOWSET;
extern volatile unsigned int ETHRXOVFLOWINV;
extern volatile unsigned int ETHFRMTXOK;
typedef union {
  struct {
    unsigned FRMTXOKCNT:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHFRMTXOKbits_t;
extern volatile __ETHFRMTXOKbits_t ETHFRMTXOKbits __asm__ ("ETHFRMTXOK");
extern volatile unsigned int ETHFRMTXOKCLR;
extern volatile unsigned int ETHFRMTXOKSET;
extern volatile unsigned int ETHFRMTXOKINV;
extern volatile unsigned int ETHSCOLFRM;
typedef union {
  struct {
    unsigned SCOLFRMCNT:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHSCOLFRMbits_t;
extern volatile __ETHSCOLFRMbits_t ETHSCOLFRMbits __asm__ ("ETHSCOLFRM");
extern volatile unsigned int ETHSCOLFRMCLR;
extern volatile unsigned int ETHSCOLFRMSET;
extern volatile unsigned int ETHSCOLFRMINV;
extern volatile unsigned int ETHMCOLFRM;
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
extern volatile __ETHMCOLFRMbits_t ETHMCOLFRMbits __asm__ ("ETHMCOLFRM");
extern volatile unsigned int ETHMCOLFRMCLR;
extern volatile unsigned int ETHMCOLFRMSET;
extern volatile unsigned int ETHMCOLFRMINV;
extern volatile unsigned int ETHFRMRXOK;
typedef union {
  struct {
    unsigned FRMRXOKCNT:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHFRMRXOKbits_t;
extern volatile __ETHFRMRXOKbits_t ETHFRMRXOKbits __asm__ ("ETHFRMRXOK");
extern volatile unsigned int ETHFRMRXOKCLR;
extern volatile unsigned int ETHFRMRXOKSET;
extern volatile unsigned int ETHFRMRXOKINV;
extern volatile unsigned int ETHFCSERR;
typedef union {
  struct {
    unsigned FCSERRCNT:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHFCSERRbits_t;
extern volatile __ETHFCSERRbits_t ETHFCSERRbits __asm__ ("ETHFCSERR");
extern volatile unsigned int ETHFCSERRCLR;
extern volatile unsigned int ETHFCSERRSET;
extern volatile unsigned int ETHFCSERRINV;
extern volatile unsigned int ETHALGNERR;
typedef union {
  struct {
    unsigned ALGNERRCNT:16;
  };
  struct {
    unsigned w:32;
  };
} __ETHALGNERRbits_t;
extern volatile __ETHALGNERRbits_t ETHALGNERRbits __asm__ ("ETHALGNERR");
extern volatile unsigned int ETHALGNERRCLR;
extern volatile unsigned int ETHALGNERRSET;
extern volatile unsigned int ETHALGNERRINV;
extern volatile unsigned int EMAC1CFG1;
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
extern volatile __EMAC1CFG1bits_t EMAC1CFG1bits __asm__ ("EMAC1CFG1");
extern volatile unsigned int EMACxCFG1;
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
extern volatile __EMACxCFG1bits_t EMACxCFG1bits __asm__ ("EMACxCFG1");
extern volatile unsigned int EMAC1CFG1CLR;
extern volatile unsigned int EMACxCFG1CLR;
extern volatile unsigned int EMAC1CFG1SET;
extern volatile unsigned int EMACxCFG1SET;
extern volatile unsigned int EMAC1CFG1INV;
extern volatile unsigned int EMACxCFG1INV;
extern volatile unsigned int EMAC1CFG2;
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
extern volatile __EMAC1CFG2bits_t EMAC1CFG2bits __asm__ ("EMAC1CFG2");
extern volatile unsigned int EMACxCFG2;
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
extern volatile __EMACxCFG2bits_t EMACxCFG2bits __asm__ ("EMACxCFG2");
extern volatile unsigned int EMAC1CFG2CLR;
extern volatile unsigned int EMACxCFG2CLR;
extern volatile unsigned int EMAC1CFG2SET;
extern volatile unsigned int EMACxCFG2SET;
extern volatile unsigned int EMAC1CFG2INV;
extern volatile unsigned int EMACxCFG2INV;
extern volatile unsigned int EMAC1IPGT;
typedef union {
  struct {
    unsigned B2BIPKTGP:7;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1IPGTbits_t;
extern volatile __EMAC1IPGTbits_t EMAC1IPGTbits __asm__ ("EMAC1IPGT");
extern volatile unsigned int EMACxIPGT;
typedef union {
  struct {
    unsigned B2BIPKTGP:7;
  };
  struct {
    unsigned w:32;
  };
} __EMACxIPGTbits_t;
extern volatile __EMACxIPGTbits_t EMACxIPGTbits __asm__ ("EMACxIPGT");
extern volatile unsigned int EMAC1IPGTCLR;
extern volatile unsigned int EMACxIPGTCLR;
extern volatile unsigned int EMAC1IPGTSET;
extern volatile unsigned int EMACxIPGTSET;
extern volatile unsigned int EMAC1IPGTINV;
extern volatile unsigned int EMACxIPGTINV;
extern volatile unsigned int EMAC1IPGR;
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
extern volatile __EMAC1IPGRbits_t EMAC1IPGRbits __asm__ ("EMAC1IPGR");
extern volatile unsigned int EMACxIPGR;
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
extern volatile __EMACxIPGRbits_t EMACxIPGRbits __asm__ ("EMACxIPGR");
extern volatile unsigned int EMAC1IPGRCLR;
extern volatile unsigned int EMACxIPGRCLR;
extern volatile unsigned int EMAC1IPGRSET;
extern volatile unsigned int EMACxIPGRSET;
extern volatile unsigned int EMAC1IPGRINV;
extern volatile unsigned int EMACxIPGRINV;
extern volatile unsigned int EMAC1CLRT;
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
extern volatile __EMAC1CLRTbits_t EMAC1CLRTbits __asm__ ("EMAC1CLRT");
extern volatile unsigned int EMACxCLRT;
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
extern volatile __EMACxCLRTbits_t EMACxCLRTbits __asm__ ("EMACxCLRT");
extern volatile unsigned int EMAC1CLRTCLR;
extern volatile unsigned int EMACxCLRTCLR;
extern volatile unsigned int EMAC1CLRTSET;
extern volatile unsigned int EMACxCLRTSET;
extern volatile unsigned int EMAC1CLRTINV;
extern volatile unsigned int EMACxCLRTINV;
extern volatile unsigned int EMAC1MAXF;
typedef union {
  struct {
    unsigned MACMAXF:16;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1MAXFbits_t;
extern volatile __EMAC1MAXFbits_t EMAC1MAXFbits __asm__ ("EMAC1MAXF");
extern volatile unsigned int EMACxMAXF;
typedef union {
  struct {
    unsigned MACMAXF:16;
  };
  struct {
    unsigned w:32;
  };
} __EMACxMAXFbits_t;
extern volatile __EMACxMAXFbits_t EMACxMAXFbits __asm__ ("EMACxMAXF");
extern volatile unsigned int EMAC1MAXFCLR;
extern volatile unsigned int EMACxMAXFCLR;
extern volatile unsigned int EMAC1MAXFSET;
extern volatile unsigned int EMACxMAXFSET;
extern volatile unsigned int EMAC1MAXFINV;
extern volatile unsigned int EMACxMAXFINV;
extern volatile unsigned int EMAC1SUPP;
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
extern volatile __EMAC1SUPPbits_t EMAC1SUPPbits __asm__ ("EMAC1SUPP");
extern volatile unsigned int EMACxSUPP;
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
extern volatile __EMACxSUPPbits_t EMACxSUPPbits __asm__ ("EMACxSUPP");
extern volatile unsigned int EMAC1SUPPCLR;
extern volatile unsigned int EMACxSUPPCLR;
extern volatile unsigned int EMAC1SUPPSET;
extern volatile unsigned int EMACxSUPPSET;
extern volatile unsigned int EMAC1SUPPINV;
extern volatile unsigned int EMACxSUPPINV;
extern volatile unsigned int EMAC1TEST;
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
extern volatile __EMAC1TESTbits_t EMAC1TESTbits __asm__ ("EMAC1TEST");
extern volatile unsigned int EMACxTEST;
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
extern volatile __EMACxTESTbits_t EMACxTESTbits __asm__ ("EMACxTEST");
extern volatile unsigned int EMAC1TESTCLR;
extern volatile unsigned int EMACxTESTCLR;
extern volatile unsigned int EMAC1TESTSET;
extern volatile unsigned int EMACxTESTSET;
extern volatile unsigned int EMAC1TESTINV;
extern volatile unsigned int EMACxTESTINV;
extern volatile unsigned int EMAC1MCFG;
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
extern volatile __EMAC1MCFGbits_t EMAC1MCFGbits __asm__ ("EMAC1MCFG");
extern volatile unsigned int EMACxMCFG;
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
extern volatile __EMACxMCFGbits_t EMACxMCFGbits __asm__ ("EMACxMCFG");
extern volatile unsigned int EMAC1MCFGCLR;
extern volatile unsigned int EMACxMCFGCLR;
extern volatile unsigned int EMAC1MCFGSET;
extern volatile unsigned int EMACxMCFGSET;
extern volatile unsigned int EMAC1MCFGINV;
extern volatile unsigned int EMACxMCFGINV;
extern volatile unsigned int EMAC1MCMD;
typedef union {
  struct {
    unsigned READ:1;
    unsigned SCAN:1;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1MCMDbits_t;
extern volatile __EMAC1MCMDbits_t EMAC1MCMDbits __asm__ ("EMAC1MCMD");
extern volatile unsigned int EMACxMCMD;
typedef union {
  struct {
    unsigned READ:1;
    unsigned SCAN:1;
  };
  struct {
    unsigned w:32;
  };
} __EMACxMCMDbits_t;
extern volatile __EMACxMCMDbits_t EMACxMCMDbits __asm__ ("EMACxMCMD");
extern volatile unsigned int EMAC1MCMDCLR;
extern volatile unsigned int EMACxMCMDCLR;
extern volatile unsigned int EMAC1MCMDSET;
extern volatile unsigned int EMACxMCMDSET;
extern volatile unsigned int EMAC1MCMDINV;
extern volatile unsigned int EMACxMCMDINV;
extern volatile unsigned int EMAC1MADR;
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
extern volatile __EMAC1MADRbits_t EMAC1MADRbits __asm__ ("EMAC1MADR");
extern volatile unsigned int EMACxMADR;
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
extern volatile __EMACxMADRbits_t EMACxMADRbits __asm__ ("EMACxMADR");
extern volatile unsigned int EMAC1MADRCLR;
extern volatile unsigned int EMACxMADRCLR;
extern volatile unsigned int EMAC1MADRSET;
extern volatile unsigned int EMACxMADRSET;
extern volatile unsigned int EMAC1MADRINV;
extern volatile unsigned int EMACxMADRINV;
extern volatile unsigned int EMAC1MWTD;
typedef union {
  struct {
    unsigned MWTD:16;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1MWTDbits_t;
extern volatile __EMAC1MWTDbits_t EMAC1MWTDbits __asm__ ("EMAC1MWTD");
extern volatile unsigned int EMACxMWTD;
typedef union {
  struct {
    unsigned MWTD:16;
  };
  struct {
    unsigned w:32;
  };
} __EMACxMWTDbits_t;
extern volatile __EMACxMWTDbits_t EMACxMWTDbits __asm__ ("EMACxMWTD");
extern volatile unsigned int EMAC1MWTDCLR;
extern volatile unsigned int EMACxMWTDCLR;
extern volatile unsigned int EMAC1MWTDSET;
extern volatile unsigned int EMACxMWTDSET;
extern volatile unsigned int EMAC1MWTDINV;
extern volatile unsigned int EMACxMWTDINV;
extern volatile unsigned int EMAC1MRDD;
typedef union {
  struct {
    unsigned MRDD:16;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1MRDDbits_t;
extern volatile __EMAC1MRDDbits_t EMAC1MRDDbits __asm__ ("EMAC1MRDD");
extern volatile unsigned int EMACxMRDD;
typedef union {
  struct {
    unsigned MRDD:16;
  };
  struct {
    unsigned w:32;
  };
} __EMACxMRDDbits_t;
extern volatile __EMACxMRDDbits_t EMACxMRDDbits __asm__ ("EMACxMRDD");
extern volatile unsigned int EMAC1MRDDCLR;
extern volatile unsigned int EMACxMRDDCLR;
extern volatile unsigned int EMAC1MRDDSET;
extern volatile unsigned int EMACxMRDDSET;
extern volatile unsigned int EMAC1MRDDINV;
extern volatile unsigned int EMACxMRDDINV;
extern volatile unsigned int EMAC1MIND;
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
extern volatile __EMAC1MINDbits_t EMAC1MINDbits __asm__ ("EMAC1MIND");
extern volatile unsigned int EMACxMIND;
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
extern volatile __EMACxMINDbits_t EMACxMINDbits __asm__ ("EMACxMIND");
extern volatile unsigned int EMAC1MINDCLR;
extern volatile unsigned int EMACxMINDCLR;
extern volatile unsigned int EMAC1MINDSET;
extern volatile unsigned int EMACxMINDSET;
extern volatile unsigned int EMAC1MINDINV;
extern volatile unsigned int EMACxMINDINV;
extern volatile unsigned int EMAC1SA0;
typedef union {
  struct {
    unsigned STNADDR5:8;
    unsigned STNADDR6:8;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1SA0bits_t;
extern volatile __EMAC1SA0bits_t EMAC1SA0bits __asm__ ("EMAC1SA0");
extern volatile unsigned int EMACxSA0;
typedef union {
  struct {
    unsigned STNADDR5:8;
    unsigned STNADDR6:8;
  };
  struct {
    unsigned w:32;
  };
} __EMACxSA0bits_t;
extern volatile __EMACxSA0bits_t EMACxSA0bits __asm__ ("EMACxSA0");
extern volatile unsigned int EMAC1SA0CLR;
extern volatile unsigned int EMACxSA0CLR;
extern volatile unsigned int EMAC1SA0SET;
extern volatile unsigned int EMACxSA0SET;
extern volatile unsigned int EMAC1SA0INV;
extern volatile unsigned int EMACxSA0INV;
extern volatile unsigned int EMAC1SA1;
typedef union {
  struct {
    unsigned STNADDR3:8;
    unsigned STNADDR4:8;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1SA1bits_t;
extern volatile __EMAC1SA1bits_t EMAC1SA1bits __asm__ ("EMAC1SA1");
extern volatile unsigned int EMACxSA1;
typedef union {
  struct {
    unsigned STNADDR3:8;
    unsigned STNADDR4:8;
  };
  struct {
    unsigned w:32;
  };
} __EMACxSA1bits_t;
extern volatile __EMACxSA1bits_t EMACxSA1bits __asm__ ("EMACxSA1");
extern volatile unsigned int EMAC1SA1CLR;
extern volatile unsigned int EMACxSA1CLR;
extern volatile unsigned int EMAC1SA1SET;
extern volatile unsigned int EMACxSA1SET;
extern volatile unsigned int EMAC1SA1INV;
extern volatile unsigned int EMACxSA1INV;
extern volatile unsigned int EMAC1SA2;
typedef union {
  struct {
    unsigned STNADDR1:8;
    unsigned STNADDR2:8;
  };
  struct {
    unsigned w:32;
  };
} __EMAC1SA2bits_t;
extern volatile __EMAC1SA2bits_t EMAC1SA2bits __asm__ ("EMAC1SA2");
extern volatile unsigned int EMACxSA2;
typedef union {
  struct {
    unsigned STNADDR1:8;
    unsigned STNADDR2:8;
  };
  struct {
    unsigned w:32;
  };
} __EMACxSA2bits_t;
extern volatile __EMACxSA2bits_t EMACxSA2bits __asm__ ("EMACxSA2");
extern volatile unsigned int EMAC1SA2CLR;
extern volatile unsigned int EMACxSA2CLR;
extern volatile unsigned int EMAC1SA2SET;
extern volatile unsigned int EMACxSA2SET;
extern volatile unsigned int EMAC1SA2INV;
extern volatile unsigned int EMACxSA2INV;
extern volatile unsigned int C1CON;
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
extern volatile __C1CONbits_t C1CONbits __asm__ ("C1CON");
extern volatile unsigned int C1CONCLR;
extern volatile unsigned int C1CONSET;
extern volatile unsigned int C1CONINV;
extern volatile unsigned int C1CFG;
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
extern volatile __C1CFGbits_t C1CFGbits __asm__ ("C1CFG");
extern volatile unsigned int C1CFGCLR;
extern volatile unsigned int C1CFGSET;
extern volatile unsigned int C1CFGINV;
extern volatile unsigned int C1INT;
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
extern volatile __C1INTbits_t C1INTbits __asm__ ("C1INT");
extern volatile unsigned int C1INTCLR;
extern volatile unsigned int C1INTSET;
extern volatile unsigned int C1INTINV;
extern volatile unsigned int C1VEC;
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
extern volatile __C1VECbits_t C1VECbits __asm__ ("C1VEC");
extern volatile unsigned int C1VECCLR;
extern volatile unsigned int C1VECSET;
extern volatile unsigned int C1VECINV;
extern volatile unsigned int C1TREC;
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
extern volatile __C1TRECbits_t C1TRECbits __asm__ ("C1TREC");
extern volatile unsigned int C1TRECCLR;
extern volatile unsigned int C1TRECSET;
extern volatile unsigned int C1TRECINV;
extern volatile unsigned int C1FSTAT;
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
extern volatile __C1FSTATbits_t C1FSTATbits __asm__ ("C1FSTAT");
extern volatile unsigned int C1FSTATCLR;
extern volatile unsigned int C1FSTATSET;
extern volatile unsigned int C1FSTATINV;
extern volatile unsigned int C1RXOVF;
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
extern volatile __C1RXOVFbits_t C1RXOVFbits __asm__ ("C1RXOVF");
extern volatile unsigned int C1RXOVFCLR;
extern volatile unsigned int C1RXOVFSET;
extern volatile unsigned int C1RXOVFINV;
extern volatile unsigned int C1TMR;
typedef union {
  struct {
    unsigned CANTSPRE:16;
    unsigned CANTS:16;
  };
  struct {
    unsigned w:32;
  };
} __C1TMRbits_t;
extern volatile __C1TMRbits_t C1TMRbits __asm__ ("C1TMR");
extern volatile unsigned int C1TMRCLR;
extern volatile unsigned int C1TMRSET;
extern volatile unsigned int C1TMRINV;
extern volatile unsigned int C1RXM0;
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
extern volatile __C1RXM0bits_t C1RXM0bits __asm__ ("C1RXM0");
extern volatile unsigned int C1RXM0CLR;
extern volatile unsigned int C1RXM0SET;
extern volatile unsigned int C1RXM0INV;
extern volatile unsigned int C1RXM1;
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
extern volatile __C1RXM1bits_t C1RXM1bits __asm__ ("C1RXM1");
extern volatile unsigned int C1RXM1CLR;
extern volatile unsigned int C1RXM1SET;
extern volatile unsigned int C1RXM1INV;
extern volatile unsigned int C1RXM2;
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
extern volatile __C1RXM2bits_t C1RXM2bits __asm__ ("C1RXM2");
extern volatile unsigned int C1RXM2CLR;
extern volatile unsigned int C1RXM2SET;
extern volatile unsigned int C1RXM2INV;
extern volatile unsigned int C1RXM3;
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
extern volatile __C1RXM3bits_t C1RXM3bits __asm__ ("C1RXM3");
extern volatile unsigned int C1RXM3CLR;
extern volatile unsigned int C1RXM3SET;
extern volatile unsigned int C1RXM3INV;
extern volatile unsigned int C1FLTCON0;
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
extern volatile __C1FLTCON0bits_t C1FLTCON0bits __asm__ ("C1FLTCON0");
extern volatile unsigned int C1FLTCON0CLR;
extern volatile unsigned int C1FLTCON0SET;
extern volatile unsigned int C1FLTCON0INV;
extern volatile unsigned int C1FLTCON1;
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
extern volatile __C1FLTCON1bits_t C1FLTCON1bits __asm__ ("C1FLTCON1");
extern volatile unsigned int C1FLTCON1CLR;
extern volatile unsigned int C1FLTCON1SET;
extern volatile unsigned int C1FLTCON1INV;
extern volatile unsigned int C1FLTCON2;
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
extern volatile __C1FLTCON2bits_t C1FLTCON2bits __asm__ ("C1FLTCON2");
extern volatile unsigned int C1FLTCON2CLR;
extern volatile unsigned int C1FLTCON2SET;
extern volatile unsigned int C1FLTCON2INV;
extern volatile unsigned int C1FLTCON3;
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
extern volatile __C1FLTCON3bits_t C1FLTCON3bits __asm__ ("C1FLTCON3");
extern volatile unsigned int C1FLTCON3CLR;
extern volatile unsigned int C1FLTCON3SET;
extern volatile unsigned int C1FLTCON3INV;
extern volatile unsigned int C1FLTCON4;
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
extern volatile __C1FLTCON4bits_t C1FLTCON4bits __asm__ ("C1FLTCON4");
extern volatile unsigned int C1FLTCON4CLR;
extern volatile unsigned int C1FLTCON4SET;
extern volatile unsigned int C1FLTCON4INV;
extern volatile unsigned int C1FLTCON5;
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
extern volatile __C1FLTCON5bits_t C1FLTCON5bits __asm__ ("C1FLTCON5");
extern volatile unsigned int C1FLTCON5CLR;
extern volatile unsigned int C1FLTCON5SET;
extern volatile unsigned int C1FLTCON5INV;
extern volatile unsigned int C1FLTCON6;
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
extern volatile __C1FLTCON6bits_t C1FLTCON6bits __asm__ ("C1FLTCON6");
extern volatile unsigned int C1FLTCON6CLR;
extern volatile unsigned int C1FLTCON6SET;
extern volatile unsigned int C1FLTCON6INV;
extern volatile unsigned int C1FLTCON7;
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
extern volatile __C1FLTCON7bits_t C1FLTCON7bits __asm__ ("C1FLTCON7");
extern volatile unsigned int C1FLTCON7CLR;
extern volatile unsigned int C1FLTCON7SET;
extern volatile unsigned int C1FLTCON7INV;
extern volatile unsigned int C1RXF0;
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
extern volatile __C1RXF0bits_t C1RXF0bits __asm__ ("C1RXF0");
extern volatile unsigned int C1RXF0CLR;
extern volatile unsigned int C1RXF0SET;
extern volatile unsigned int C1RXF0INV;
extern volatile unsigned int C1RXF1;
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
extern volatile __C1RXF1bits_t C1RXF1bits __asm__ ("C1RXF1");
extern volatile unsigned int C1RXF1CLR;
extern volatile unsigned int C1RXF1SET;
extern volatile unsigned int C1RXF1INV;
extern volatile unsigned int C1RXF2;
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
extern volatile __C1RXF2bits_t C1RXF2bits __asm__ ("C1RXF2");
extern volatile unsigned int C1RXF2CLR;
extern volatile unsigned int C1RXF2SET;
extern volatile unsigned int C1RXF2INV;
extern volatile unsigned int C1RXF3;
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
extern volatile __C1RXF3bits_t C1RXF3bits __asm__ ("C1RXF3");
extern volatile unsigned int C1RXF3CLR;
extern volatile unsigned int C1RXF3SET;
extern volatile unsigned int C1RXF3INV;
extern volatile unsigned int C1RXF4;
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
extern volatile __C1RXF4bits_t C1RXF4bits __asm__ ("C1RXF4");
extern volatile unsigned int C1RXF4CLR;
extern volatile unsigned int C1RXF4SET;
extern volatile unsigned int C1RXF4INV;
extern volatile unsigned int C1RXF5;
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
extern volatile __C1RXF5bits_t C1RXF5bits __asm__ ("C1RXF5");
extern volatile unsigned int C1RXF5CLR;
extern volatile unsigned int C1RXF5SET;
extern volatile unsigned int C1RXF5INV;
extern volatile unsigned int C1RXF6;
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
extern volatile __C1RXF6bits_t C1RXF6bits __asm__ ("C1RXF6");
extern volatile unsigned int C1RXF6CLR;
extern volatile unsigned int C1RXF6SET;
extern volatile unsigned int C1RXF6INV;
extern volatile unsigned int C1RXF7;
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
extern volatile __C1RXF7bits_t C1RXF7bits __asm__ ("C1RXF7");
extern volatile unsigned int C1RXF7CLR;
extern volatile unsigned int C1RXF7SET;
extern volatile unsigned int C1RXF7INV;
extern volatile unsigned int C1RXF8;
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
extern volatile __C1RXF8bits_t C1RXF8bits __asm__ ("C1RXF8");
extern volatile unsigned int C1RXF8CLR;
extern volatile unsigned int C1RXF8SET;
extern volatile unsigned int C1RXF8INV;
extern volatile unsigned int C1RXF9;
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
extern volatile __C1RXF9bits_t C1RXF9bits __asm__ ("C1RXF9");
extern volatile unsigned int C1RXF9CLR;
extern volatile unsigned int C1RXF9SET;
extern volatile unsigned int C1RXF9INV;
extern volatile unsigned int C1RXF10;
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
extern volatile __C1RXF10bits_t C1RXF10bits __asm__ ("C1RXF10");
extern volatile unsigned int C1RXF10CLR;
extern volatile unsigned int C1RXF10SET;
extern volatile unsigned int C1RXF10INV;
extern volatile unsigned int C1RXF11;
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
extern volatile __C1RXF11bits_t C1RXF11bits __asm__ ("C1RXF11");
extern volatile unsigned int C1RXF11CLR;
extern volatile unsigned int C1RXF11SET;
extern volatile unsigned int C1RXF11INV;
extern volatile unsigned int C1RXF12;
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
extern volatile __C1RXF12bits_t C1RXF12bits __asm__ ("C1RXF12");
extern volatile unsigned int C1RXF12CLR;
extern volatile unsigned int C1RXF12SET;
extern volatile unsigned int C1RXF12INV;
extern volatile unsigned int C1RXF13;
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
extern volatile __C1RXF13bits_t C1RXF13bits __asm__ ("C1RXF13");
extern volatile unsigned int C1RXF13CLR;
extern volatile unsigned int C1RXF13SET;
extern volatile unsigned int C1RXF13INV;
extern volatile unsigned int C1RXF14;
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
extern volatile __C1RXF14bits_t C1RXF14bits __asm__ ("C1RXF14");
extern volatile unsigned int C1RXF14CLR;
extern volatile unsigned int C1RXF14SET;
extern volatile unsigned int C1RXF14INV;
extern volatile unsigned int C1RXF15;
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
extern volatile __C1RXF15bits_t C1RXF15bits __asm__ ("C1RXF15");
extern volatile unsigned int C1RXF15CLR;
extern volatile unsigned int C1RXF15SET;
extern volatile unsigned int C1RXF15INV;
extern volatile unsigned int C1RXF16;
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
extern volatile __C1RXF16bits_t C1RXF16bits __asm__ ("C1RXF16");
extern volatile unsigned int C1RXF16CLR;
extern volatile unsigned int C1RXF16SET;
extern volatile unsigned int C1RXF16INV;
extern volatile unsigned int C1RXF17;
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
extern volatile __C1RXF17bits_t C1RXF17bits __asm__ ("C1RXF17");
extern volatile unsigned int C1RXF17CLR;
extern volatile unsigned int C1RXF17SET;
extern volatile unsigned int C1RXF17INV;
extern volatile unsigned int C1RXF18;
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
extern volatile __C1RXF18bits_t C1RXF18bits __asm__ ("C1RXF18");
extern volatile unsigned int C1RXF18CLR;
extern volatile unsigned int C1RXF18SET;
extern volatile unsigned int C1RXF18INV;
extern volatile unsigned int C1RXF19;
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
extern volatile __C1RXF19bits_t C1RXF19bits __asm__ ("C1RXF19");
extern volatile unsigned int C1RXF19CLR;
extern volatile unsigned int C1RXF19SET;
extern volatile unsigned int C1RXF19INV;
extern volatile unsigned int C1RXF20;
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
extern volatile __C1RXF20bits_t C1RXF20bits __asm__ ("C1RXF20");
extern volatile unsigned int C1RXF20CLR;
extern volatile unsigned int C1RXF20SET;
extern volatile unsigned int C1RXF20INV;
extern volatile unsigned int C1RXF21;
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
extern volatile __C1RXF21bits_t C1RXF21bits __asm__ ("C1RXF21");
extern volatile unsigned int C1RXF21CLR;
extern volatile unsigned int C1RXF21SET;
extern volatile unsigned int C1RXF21INV;
extern volatile unsigned int C1RXF22;
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
extern volatile __C1RXF22bits_t C1RXF22bits __asm__ ("C1RXF22");
extern volatile unsigned int C1RXF22CLR;
extern volatile unsigned int C1RXF22SET;
extern volatile unsigned int C1RXF22INV;
extern volatile unsigned int C1RXF23;
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
extern volatile __C1RXF23bits_t C1RXF23bits __asm__ ("C1RXF23");
extern volatile unsigned int C1RXF23CLR;
extern volatile unsigned int C1RXF23SET;
extern volatile unsigned int C1RXF23INV;
extern volatile unsigned int C1RXF24;
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
extern volatile __C1RXF24bits_t C1RXF24bits __asm__ ("C1RXF24");
extern volatile unsigned int C1RXF24CLR;
extern volatile unsigned int C1RXF24SET;
extern volatile unsigned int C1RXF24INV;
extern volatile unsigned int C1RXF25;
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
extern volatile __C1RXF25bits_t C1RXF25bits __asm__ ("C1RXF25");
extern volatile unsigned int C1RXF25CLR;
extern volatile unsigned int C1RXF25SET;
extern volatile unsigned int C1RXF25INV;
extern volatile unsigned int C1RXF26;
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
extern volatile __C1RXF26bits_t C1RXF26bits __asm__ ("C1RXF26");
extern volatile unsigned int C1RXF26CLR;
extern volatile unsigned int C1RXF26SET;
extern volatile unsigned int C1RXF26INV;
extern volatile unsigned int C1RXF27;
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
extern volatile __C1RXF27bits_t C1RXF27bits __asm__ ("C1RXF27");
extern volatile unsigned int C1RXF27CLR;
extern volatile unsigned int C1RXF27SET;
extern volatile unsigned int C1RXF27INV;
extern volatile unsigned int C1RXF28;
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
extern volatile __C1RXF28bits_t C1RXF28bits __asm__ ("C1RXF28");
extern volatile unsigned int C1RXF28CLR;
extern volatile unsigned int C1RXF28SET;
extern volatile unsigned int C1RXF28INV;
extern volatile unsigned int C1RXF29;
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
extern volatile __C1RXF29bits_t C1RXF29bits __asm__ ("C1RXF29");
extern volatile unsigned int C1RXF29CLR;
extern volatile unsigned int C1RXF29SET;
extern volatile unsigned int C1RXF29INV;
extern volatile unsigned int C1RXF30;
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
extern volatile __C1RXF30bits_t C1RXF30bits __asm__ ("C1RXF30");
extern volatile unsigned int C1RXF30CLR;
extern volatile unsigned int C1RXF30SET;
extern volatile unsigned int C1RXF30INV;
extern volatile unsigned int C1RXF31;
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
extern volatile __C1RXF31bits_t C1RXF31bits __asm__ ("C1RXF31");
extern volatile unsigned int C1RXF31CLR;
extern volatile unsigned int C1RXF31SET;
extern volatile unsigned int C1RXF31INV;
extern volatile unsigned int C1FIFOBA;
extern volatile unsigned int C1FIFOBACLR;
extern volatile unsigned int C1FIFOBASET;
extern volatile unsigned int C1FIFOBAINV;
extern volatile unsigned int C1FIFOCON0;
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
extern volatile __C1FIFOCON0bits_t C1FIFOCON0bits __asm__ ("C1FIFOCON0");
extern volatile unsigned int C1FIFOCON0CLR;
extern volatile unsigned int C1FIFOCON0SET;
extern volatile unsigned int C1FIFOCON0INV;
extern volatile unsigned int C1FIFOINT0;
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
extern volatile __C1FIFOINT0bits_t C1FIFOINT0bits __asm__ ("C1FIFOINT0");
extern volatile unsigned int C1FIFOINT0CLR;
extern volatile unsigned int C1FIFOINT0SET;
extern volatile unsigned int C1FIFOINT0INV;
extern volatile unsigned int C1FIFOUA0;
extern volatile unsigned int C1FIFOUA0CLR;
extern volatile unsigned int C1FIFOUA0SET;
extern volatile unsigned int C1FIFOUA0INV;
extern volatile unsigned int C1FIFOCI0;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI0bits_t;
extern volatile __C1FIFOCI0bits_t C1FIFOCI0bits __asm__ ("C1FIFOCI0");
extern volatile unsigned int C1FIFOCI0CLR;
extern volatile unsigned int C1FIFOCI0SET;
extern volatile unsigned int C1FIFOCI0INV;
extern volatile unsigned int C1FIFOCON1;
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
extern volatile __C1FIFOCON1bits_t C1FIFOCON1bits __asm__ ("C1FIFOCON1");
extern volatile unsigned int C1FIFOCON1CLR;
extern volatile unsigned int C1FIFOCON1SET;
extern volatile unsigned int C1FIFOCON1INV;
extern volatile unsigned int C1FIFOINT1;
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
extern volatile __C1FIFOINT1bits_t C1FIFOINT1bits __asm__ ("C1FIFOINT1");
extern volatile unsigned int C1FIFOINT1CLR;
extern volatile unsigned int C1FIFOINT1SET;
extern volatile unsigned int C1FIFOINT1INV;
extern volatile unsigned int C1FIFOUA1;
extern volatile unsigned int C1FIFOUA1CLR;
extern volatile unsigned int C1FIFOUA1SET;
extern volatile unsigned int C1FIFOUA1INV;
extern volatile unsigned int C1FIFOCI1;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI1bits_t;
extern volatile __C1FIFOCI1bits_t C1FIFOCI1bits __asm__ ("C1FIFOCI1");
extern volatile unsigned int C1FIFOCI1CLR;
extern volatile unsigned int C1FIFOCI1SET;
extern volatile unsigned int C1FIFOCI1INV;
extern volatile unsigned int C1FIFOCON2;
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
extern volatile __C1FIFOCON2bits_t C1FIFOCON2bits __asm__ ("C1FIFOCON2");
extern volatile unsigned int C1FIFOCON2CLR;
extern volatile unsigned int C1FIFOCON2SET;
extern volatile unsigned int C1FIFOCON2INV;
extern volatile unsigned int C1FIFOINT2;
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
extern volatile __C1FIFOINT2bits_t C1FIFOINT2bits __asm__ ("C1FIFOINT2");
extern volatile unsigned int C1FIFOINT2CLR;
extern volatile unsigned int C1FIFOINT2SET;
extern volatile unsigned int C1FIFOINT2INV;
extern volatile unsigned int C1FIFOUA2;
extern volatile unsigned int C1FIFOUA2CLR;
extern volatile unsigned int C1FIFOUA2SET;
extern volatile unsigned int C1FIFOUA2INV;
extern volatile unsigned int C1FIFOCI2;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI2bits_t;
extern volatile __C1FIFOCI2bits_t C1FIFOCI2bits __asm__ ("C1FIFOCI2");
extern volatile unsigned int C1FIFOCI2CLR;
extern volatile unsigned int C1FIFOCI2SET;
extern volatile unsigned int C1FIFOCI2INV;
extern volatile unsigned int C1FIFOCON3;
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
extern volatile __C1FIFOCON3bits_t C1FIFOCON3bits __asm__ ("C1FIFOCON3");
extern volatile unsigned int C1FIFOCON3CLR;
extern volatile unsigned int C1FIFOCON3SET;
extern volatile unsigned int C1FIFOCON3INV;
extern volatile unsigned int C1FIFOINT3;
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
extern volatile __C1FIFOINT3bits_t C1FIFOINT3bits __asm__ ("C1FIFOINT3");
extern volatile unsigned int C1FIFOINT3CLR;
extern volatile unsigned int C1FIFOINT3SET;
extern volatile unsigned int C1FIFOINT3INV;
extern volatile unsigned int C1FIFOUA3;
extern volatile unsigned int C1FIFOUA3CLR;
extern volatile unsigned int C1FIFOUA3SET;
extern volatile unsigned int C1FIFOUA3INV;
extern volatile unsigned int C1FIFOCI3;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI3bits_t;
extern volatile __C1FIFOCI3bits_t C1FIFOCI3bits __asm__ ("C1FIFOCI3");
extern volatile unsigned int C1FIFOCI3CLR;
extern volatile unsigned int C1FIFOCI3SET;
extern volatile unsigned int C1FIFOCI3INV;
extern volatile unsigned int C1FIFOCON4;
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
extern volatile __C1FIFOCON4bits_t C1FIFOCON4bits __asm__ ("C1FIFOCON4");
extern volatile unsigned int C1FIFOCON4CLR;
extern volatile unsigned int C1FIFOCON4SET;
extern volatile unsigned int C1FIFOCON4INV;
extern volatile unsigned int C1FIFOINT4;
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
extern volatile __C1FIFOINT4bits_t C1FIFOINT4bits __asm__ ("C1FIFOINT4");
extern volatile unsigned int C1FIFOINT4CLR;
extern volatile unsigned int C1FIFOINT4SET;
extern volatile unsigned int C1FIFOINT4INV;
extern volatile unsigned int C1FIFOUA4;
extern volatile unsigned int C1FIFOUA4CLR;
extern volatile unsigned int C1FIFOUA4SET;
extern volatile unsigned int C1FIFOUA4INV;
extern volatile unsigned int C1FIFOCI4;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI4bits_t;
extern volatile __C1FIFOCI4bits_t C1FIFOCI4bits __asm__ ("C1FIFOCI4");
extern volatile unsigned int C1FIFOCI4CLR;
extern volatile unsigned int C1FIFOCI4SET;
extern volatile unsigned int C1FIFOCI4INV;
extern volatile unsigned int C1FIFOCON5;
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
extern volatile __C1FIFOCON5bits_t C1FIFOCON5bits __asm__ ("C1FIFOCON5");
extern volatile unsigned int C1FIFOCON5CLR;
extern volatile unsigned int C1FIFOCON5SET;
extern volatile unsigned int C1FIFOCON5INV;
extern volatile unsigned int C1FIFOINT5;
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
extern volatile __C1FIFOINT5bits_t C1FIFOINT5bits __asm__ ("C1FIFOINT5");
extern volatile unsigned int C1FIFOINT5CLR;
extern volatile unsigned int C1FIFOINT5SET;
extern volatile unsigned int C1FIFOINT5INV;
extern volatile unsigned int C1FIFOUA5;
extern volatile unsigned int C1FIFOUA5CLR;
extern volatile unsigned int C1FIFOUA5SET;
extern volatile unsigned int C1FIFOUA5INV;
extern volatile unsigned int C1FIFOCI5;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI5bits_t;
extern volatile __C1FIFOCI5bits_t C1FIFOCI5bits __asm__ ("C1FIFOCI5");
extern volatile unsigned int C1FIFOCI5CLR;
extern volatile unsigned int C1FIFOCI5SET;
extern volatile unsigned int C1FIFOCI5INV;
extern volatile unsigned int C1FIFOCON6;
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
extern volatile __C1FIFOCON6bits_t C1FIFOCON6bits __asm__ ("C1FIFOCON6");
extern volatile unsigned int C1FIFOCON6CLR;
extern volatile unsigned int C1FIFOCON6SET;
extern volatile unsigned int C1FIFOCON6INV;
extern volatile unsigned int C1FIFOINT6;
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
extern volatile __C1FIFOINT6bits_t C1FIFOINT6bits __asm__ ("C1FIFOINT6");
extern volatile unsigned int C1FIFOINT6CLR;
extern volatile unsigned int C1FIFOINT6SET;
extern volatile unsigned int C1FIFOINT6INV;
extern volatile unsigned int C1FIFOUA6;
extern volatile unsigned int C1FIFOUA6CLR;
extern volatile unsigned int C1FIFOUA6SET;
extern volatile unsigned int C1FIFOUA6INV;
extern volatile unsigned int C1FIFOCI6;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI6bits_t;
extern volatile __C1FIFOCI6bits_t C1FIFOCI6bits __asm__ ("C1FIFOCI6");
extern volatile unsigned int C1FIFOCI6CLR;
extern volatile unsigned int C1FIFOCI6SET;
extern volatile unsigned int C1FIFOCI6INV;
extern volatile unsigned int C1FIFOCON7;
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
extern volatile __C1FIFOCON7bits_t C1FIFOCON7bits __asm__ ("C1FIFOCON7");
extern volatile unsigned int C1FIFOCON7CLR;
extern volatile unsigned int C1FIFOCON7SET;
extern volatile unsigned int C1FIFOCON7INV;
extern volatile unsigned int C1FIFOINT7;
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
extern volatile __C1FIFOINT7bits_t C1FIFOINT7bits __asm__ ("C1FIFOINT7");
extern volatile unsigned int C1FIFOINT7CLR;
extern volatile unsigned int C1FIFOINT7SET;
extern volatile unsigned int C1FIFOINT7INV;
extern volatile unsigned int C1FIFOUA7;
extern volatile unsigned int C1FIFOUA7CLR;
extern volatile unsigned int C1FIFOUA7SET;
extern volatile unsigned int C1FIFOUA7INV;
extern volatile unsigned int C1FIFOCI7;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI7bits_t;
extern volatile __C1FIFOCI7bits_t C1FIFOCI7bits __asm__ ("C1FIFOCI7");
extern volatile unsigned int C1FIFOCI7CLR;
extern volatile unsigned int C1FIFOCI7SET;
extern volatile unsigned int C1FIFOCI7INV;
extern volatile unsigned int C1FIFOCON8;
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
extern volatile __C1FIFOCON8bits_t C1FIFOCON8bits __asm__ ("C1FIFOCON8");
extern volatile unsigned int C1FIFOCON8CLR;
extern volatile unsigned int C1FIFOCON8SET;
extern volatile unsigned int C1FIFOCON8INV;
extern volatile unsigned int C1FIFOINT8;
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
extern volatile __C1FIFOINT8bits_t C1FIFOINT8bits __asm__ ("C1FIFOINT8");
extern volatile unsigned int C1FIFOINT8CLR;
extern volatile unsigned int C1FIFOINT8SET;
extern volatile unsigned int C1FIFOINT8INV;
extern volatile unsigned int C1FIFOUA8;
extern volatile unsigned int C1FIFOUA8CLR;
extern volatile unsigned int C1FIFOUA8SET;
extern volatile unsigned int C1FIFOUA8INV;
extern volatile unsigned int C1FIFOCI8;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI8bits_t;
extern volatile __C1FIFOCI8bits_t C1FIFOCI8bits __asm__ ("C1FIFOCI8");
extern volatile unsigned int C1FIFOCI8CLR;
extern volatile unsigned int C1FIFOCI8SET;
extern volatile unsigned int C1FIFOCI8INV;
extern volatile unsigned int C1FIFOCON9;
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
extern volatile __C1FIFOCON9bits_t C1FIFOCON9bits __asm__ ("C1FIFOCON9");
extern volatile unsigned int C1FIFOCON9CLR;
extern volatile unsigned int C1FIFOCON9SET;
extern volatile unsigned int C1FIFOCON9INV;
extern volatile unsigned int C1FIFOINT9;
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
extern volatile __C1FIFOINT9bits_t C1FIFOINT9bits __asm__ ("C1FIFOINT9");
extern volatile unsigned int C1FIFOINT9CLR;
extern volatile unsigned int C1FIFOINT9SET;
extern volatile unsigned int C1FIFOINT9INV;
extern volatile unsigned int C1FIFOUA9;
extern volatile unsigned int C1FIFOUA9CLR;
extern volatile unsigned int C1FIFOUA9SET;
extern volatile unsigned int C1FIFOUA9INV;
extern volatile unsigned int C1FIFOCI9;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI9bits_t;
extern volatile __C1FIFOCI9bits_t C1FIFOCI9bits __asm__ ("C1FIFOCI9");
extern volatile unsigned int C1FIFOCI9CLR;
extern volatile unsigned int C1FIFOCI9SET;
extern volatile unsigned int C1FIFOCI9INV;
extern volatile unsigned int C1FIFOCON10;
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
extern volatile __C1FIFOCON10bits_t C1FIFOCON10bits __asm__ ("C1FIFOCON10");
extern volatile unsigned int C1FIFOCON10CLR;
extern volatile unsigned int C1FIFOCON10SET;
extern volatile unsigned int C1FIFOCON10INV;
extern volatile unsigned int C1FIFOINT10;
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
extern volatile __C1FIFOINT10bits_t C1FIFOINT10bits __asm__ ("C1FIFOINT10");
extern volatile unsigned int C1FIFOINT10CLR;
extern volatile unsigned int C1FIFOINT10SET;
extern volatile unsigned int C1FIFOINT10INV;
extern volatile unsigned int C1FIFOUA10;
extern volatile unsigned int C1FIFOUA10CLR;
extern volatile unsigned int C1FIFOUA10SET;
extern volatile unsigned int C1FIFOUA10INV;
extern volatile unsigned int C1FIFOCI10;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI10bits_t;
extern volatile __C1FIFOCI10bits_t C1FIFOCI10bits __asm__ ("C1FIFOCI10");
extern volatile unsigned int C1FIFOCI10CLR;
extern volatile unsigned int C1FIFOCI10SET;
extern volatile unsigned int C1FIFOCI10INV;
extern volatile unsigned int C1FIFOCON11;
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
extern volatile __C1FIFOCON11bits_t C1FIFOCON11bits __asm__ ("C1FIFOCON11");
extern volatile unsigned int C1FIFOCON11CLR;
extern volatile unsigned int C1FIFOCON11SET;
extern volatile unsigned int C1FIFOCON11INV;
extern volatile unsigned int C1FIFOINT11;
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
extern volatile __C1FIFOINT11bits_t C1FIFOINT11bits __asm__ ("C1FIFOINT11");
extern volatile unsigned int C1FIFOINT11CLR;
extern volatile unsigned int C1FIFOINT11SET;
extern volatile unsigned int C1FIFOINT11INV;
extern volatile unsigned int C1FIFOUA11;
extern volatile unsigned int C1FIFOUA11CLR;
extern volatile unsigned int C1FIFOUA11SET;
extern volatile unsigned int C1FIFOUA11INV;
extern volatile unsigned int C1FIFOCI11;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI11bits_t;
extern volatile __C1FIFOCI11bits_t C1FIFOCI11bits __asm__ ("C1FIFOCI11");
extern volatile unsigned int C1FIFOCI11CLR;
extern volatile unsigned int C1FIFOCI11SET;
extern volatile unsigned int C1FIFOCI11INV;
extern volatile unsigned int C1FIFOCON12;
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
extern volatile __C1FIFOCON12bits_t C1FIFOCON12bits __asm__ ("C1FIFOCON12");
extern volatile unsigned int C1FIFOCON12CLR;
extern volatile unsigned int C1FIFOCON12SET;
extern volatile unsigned int C1FIFOCON12INV;
extern volatile unsigned int C1FIFOINT12;
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
extern volatile __C1FIFOINT12bits_t C1FIFOINT12bits __asm__ ("C1FIFOINT12");
extern volatile unsigned int C1FIFOINT12CLR;
extern volatile unsigned int C1FIFOINT12SET;
extern volatile unsigned int C1FIFOINT12INV;
extern volatile unsigned int C1FIFOUA12;
extern volatile unsigned int C1FIFOUA12CLR;
extern volatile unsigned int C1FIFOUA12SET;
extern volatile unsigned int C1FIFOUA12INV;
extern volatile unsigned int C1FIFOCI12;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI12bits_t;
extern volatile __C1FIFOCI12bits_t C1FIFOCI12bits __asm__ ("C1FIFOCI12");
extern volatile unsigned int C1FIFOCI12CLR;
extern volatile unsigned int C1FIFOCI12SET;
extern volatile unsigned int C1FIFOCI12INV;
extern volatile unsigned int C1FIFOCON13;
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
extern volatile __C1FIFOCON13bits_t C1FIFOCON13bits __asm__ ("C1FIFOCON13");
extern volatile unsigned int C1FIFOCON13CLR;
extern volatile unsigned int C1FIFOCON13SET;
extern volatile unsigned int C1FIFOCON13INV;
extern volatile unsigned int C1FIFOINT13;
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
extern volatile __C1FIFOINT13bits_t C1FIFOINT13bits __asm__ ("C1FIFOINT13");
extern volatile unsigned int C1FIFOINT13CLR;
extern volatile unsigned int C1FIFOINT13SET;
extern volatile unsigned int C1FIFOINT13INV;
extern volatile unsigned int C1FIFOUA13;
extern volatile unsigned int C1FIFOUA13CLR;
extern volatile unsigned int C1FIFOUA13SET;
extern volatile unsigned int C1FIFOUA13INV;
extern volatile unsigned int C1FIFOCI13;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI13bits_t;
extern volatile __C1FIFOCI13bits_t C1FIFOCI13bits __asm__ ("C1FIFOCI13");
extern volatile unsigned int C1FIFOCI13CLR;
extern volatile unsigned int C1FIFOCI13SET;
extern volatile unsigned int C1FIFOCI13INV;
extern volatile unsigned int C1FIFOCON14;
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
extern volatile __C1FIFOCON14bits_t C1FIFOCON14bits __asm__ ("C1FIFOCON14");
extern volatile unsigned int C1FIFOCON14CLR;
extern volatile unsigned int C1FIFOCON14SET;
extern volatile unsigned int C1FIFOCON14INV;
extern volatile unsigned int C1FIFOINT14;
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
extern volatile __C1FIFOINT14bits_t C1FIFOINT14bits __asm__ ("C1FIFOINT14");
extern volatile unsigned int C1FIFOINT14CLR;
extern volatile unsigned int C1FIFOINT14SET;
extern volatile unsigned int C1FIFOINT14INV;
extern volatile unsigned int C1FIFOUA14;
extern volatile unsigned int C1FIFOUA14CLR;
extern volatile unsigned int C1FIFOUA14SET;
extern volatile unsigned int C1FIFOUA14INV;
extern volatile unsigned int C1FIFOCI14;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI14bits_t;
extern volatile __C1FIFOCI14bits_t C1FIFOCI14bits __asm__ ("C1FIFOCI14");
extern volatile unsigned int C1FIFOCI14CLR;
extern volatile unsigned int C1FIFOCI14SET;
extern volatile unsigned int C1FIFOCI14INV;
extern volatile unsigned int C1FIFOCON15;
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
extern volatile __C1FIFOCON15bits_t C1FIFOCON15bits __asm__ ("C1FIFOCON15");
extern volatile unsigned int C1FIFOCON15CLR;
extern volatile unsigned int C1FIFOCON15SET;
extern volatile unsigned int C1FIFOCON15INV;
extern volatile unsigned int C1FIFOINT15;
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
extern volatile __C1FIFOINT15bits_t C1FIFOINT15bits __asm__ ("C1FIFOINT15");
extern volatile unsigned int C1FIFOINT15CLR;
extern volatile unsigned int C1FIFOINT15SET;
extern volatile unsigned int C1FIFOINT15INV;
extern volatile unsigned int C1FIFOUA15;
extern volatile unsigned int C1FIFOUA15CLR;
extern volatile unsigned int C1FIFOUA15SET;
extern volatile unsigned int C1FIFOUA15INV;
extern volatile unsigned int C1FIFOCI15;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI15bits_t;
extern volatile __C1FIFOCI15bits_t C1FIFOCI15bits __asm__ ("C1FIFOCI15");
extern volatile unsigned int C1FIFOCI15CLR;
extern volatile unsigned int C1FIFOCI15SET;
extern volatile unsigned int C1FIFOCI15INV;
extern volatile unsigned int C1FIFOCON16;
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
extern volatile __C1FIFOCON16bits_t C1FIFOCON16bits __asm__ ("C1FIFOCON16");
extern volatile unsigned int C1FIFOCON16CLR;
extern volatile unsigned int C1FIFOCON16SET;
extern volatile unsigned int C1FIFOCON16INV;
extern volatile unsigned int C1FIFOINT16;
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
extern volatile __C1FIFOINT16bits_t C1FIFOINT16bits __asm__ ("C1FIFOINT16");
extern volatile unsigned int C1FIFOINT16CLR;
extern volatile unsigned int C1FIFOINT16SET;
extern volatile unsigned int C1FIFOINT16INV;
extern volatile unsigned int C1FIFOUA16;
extern volatile unsigned int C1FIFOUA16CLR;
extern volatile unsigned int C1FIFOUA16SET;
extern volatile unsigned int C1FIFOUA16INV;
extern volatile unsigned int C1FIFOCI16;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI16bits_t;
extern volatile __C1FIFOCI16bits_t C1FIFOCI16bits __asm__ ("C1FIFOCI16");
extern volatile unsigned int C1FIFOCI16CLR;
extern volatile unsigned int C1FIFOCI16SET;
extern volatile unsigned int C1FIFOCI16INV;
extern volatile unsigned int C1FIFOCON17;
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
extern volatile __C1FIFOCON17bits_t C1FIFOCON17bits __asm__ ("C1FIFOCON17");
extern volatile unsigned int C1FIFOCON17CLR;
extern volatile unsigned int C1FIFOCON17SET;
extern volatile unsigned int C1FIFOCON17INV;
extern volatile unsigned int C1FIFOINT17;
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
extern volatile __C1FIFOINT17bits_t C1FIFOINT17bits __asm__ ("C1FIFOINT17");
extern volatile unsigned int C1FIFOINT17CLR;
extern volatile unsigned int C1FIFOINT17SET;
extern volatile unsigned int C1FIFOINT17INV;
extern volatile unsigned int C1FIFOUA17;
extern volatile unsigned int C1FIFOUA17CLR;
extern volatile unsigned int C1FIFOUA17SET;
extern volatile unsigned int C1FIFOUA17INV;
extern volatile unsigned int C1FIFOCI17;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI17bits_t;
extern volatile __C1FIFOCI17bits_t C1FIFOCI17bits __asm__ ("C1FIFOCI17");
extern volatile unsigned int C1FIFOCI17CLR;
extern volatile unsigned int C1FIFOCI17SET;
extern volatile unsigned int C1FIFOCI17INV;
extern volatile unsigned int C1FIFOCON18;
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
extern volatile __C1FIFOCON18bits_t C1FIFOCON18bits __asm__ ("C1FIFOCON18");
extern volatile unsigned int C1FIFOCON18CLR;
extern volatile unsigned int C1FIFOCON18SET;
extern volatile unsigned int C1FIFOCON18INV;
extern volatile unsigned int C1FIFOINT18;
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
extern volatile __C1FIFOINT18bits_t C1FIFOINT18bits __asm__ ("C1FIFOINT18");
extern volatile unsigned int C1FIFOINT18CLR;
extern volatile unsigned int C1FIFOINT18SET;
extern volatile unsigned int C1FIFOINT18INV;
extern volatile unsigned int C1FIFOUA18;
extern volatile unsigned int C1FIFOUA18CLR;
extern volatile unsigned int C1FIFOUA18SET;
extern volatile unsigned int C1FIFOUA18INV;
extern volatile unsigned int C1FIFOCI18;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI18bits_t;
extern volatile __C1FIFOCI18bits_t C1FIFOCI18bits __asm__ ("C1FIFOCI18");
extern volatile unsigned int C1FIFOCI18CLR;
extern volatile unsigned int C1FIFOCI18SET;
extern volatile unsigned int C1FIFOCI18INV;
extern volatile unsigned int C1FIFOCON19;
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
extern volatile __C1FIFOCON19bits_t C1FIFOCON19bits __asm__ ("C1FIFOCON19");
extern volatile unsigned int C1FIFOCON19CLR;
extern volatile unsigned int C1FIFOCON19SET;
extern volatile unsigned int C1FIFOCON19INV;
extern volatile unsigned int C1FIFOINT19;
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
extern volatile __C1FIFOINT19bits_t C1FIFOINT19bits __asm__ ("C1FIFOINT19");
extern volatile unsigned int C1FIFOINT19CLR;
extern volatile unsigned int C1FIFOINT19SET;
extern volatile unsigned int C1FIFOINT19INV;
extern volatile unsigned int C1FIFOUA19;
extern volatile unsigned int C1FIFOUA19CLR;
extern volatile unsigned int C1FIFOUA19SET;
extern volatile unsigned int C1FIFOUA19INV;
extern volatile unsigned int C1FIFOCI19;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI19bits_t;
extern volatile __C1FIFOCI19bits_t C1FIFOCI19bits __asm__ ("C1FIFOCI19");
extern volatile unsigned int C1FIFOCI19CLR;
extern volatile unsigned int C1FIFOCI19SET;
extern volatile unsigned int C1FIFOCI19INV;
extern volatile unsigned int C1FIFOCON20;
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
extern volatile __C1FIFOCON20bits_t C1FIFOCON20bits __asm__ ("C1FIFOCON20");
extern volatile unsigned int C1FIFOCON20CLR;
extern volatile unsigned int C1FIFOCON20SET;
extern volatile unsigned int C1FIFOCON20INV;
extern volatile unsigned int C1FIFOINT20;
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
extern volatile __C1FIFOINT20bits_t C1FIFOINT20bits __asm__ ("C1FIFOINT20");
extern volatile unsigned int C1FIFOINT20CLR;
extern volatile unsigned int C1FIFOINT20SET;
extern volatile unsigned int C1FIFOINT20INV;
extern volatile unsigned int C1FIFOUA20;
extern volatile unsigned int C1FIFOUA20CLR;
extern volatile unsigned int C1FIFOUA20SET;
extern volatile unsigned int C1FIFOUA20INV;
extern volatile unsigned int C1FIFOCI20;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI20bits_t;
extern volatile __C1FIFOCI20bits_t C1FIFOCI20bits __asm__ ("C1FIFOCI20");
extern volatile unsigned int C1FIFOCI20CLR;
extern volatile unsigned int C1FIFOCI20SET;
extern volatile unsigned int C1FIFOCI20INV;
extern volatile unsigned int C1FIFOCON21;
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
extern volatile __C1FIFOCON21bits_t C1FIFOCON21bits __asm__ ("C1FIFOCON21");
extern volatile unsigned int C1FIFOCON21CLR;
extern volatile unsigned int C1FIFOCON21SET;
extern volatile unsigned int C1FIFOCON21INV;
extern volatile unsigned int C1FIFOINT21;
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
extern volatile __C1FIFOINT21bits_t C1FIFOINT21bits __asm__ ("C1FIFOINT21");
extern volatile unsigned int C1FIFOINT21CLR;
extern volatile unsigned int C1FIFOINT21SET;
extern volatile unsigned int C1FIFOINT21INV;
extern volatile unsigned int C1FIFOUA21;
extern volatile unsigned int C1FIFOUA21CLR;
extern volatile unsigned int C1FIFOUA21SET;
extern volatile unsigned int C1FIFOUA21INV;
extern volatile unsigned int C1FIFOCI21;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI21bits_t;
extern volatile __C1FIFOCI21bits_t C1FIFOCI21bits __asm__ ("C1FIFOCI21");
extern volatile unsigned int C1FIFOCI21CLR;
extern volatile unsigned int C1FIFOCI21SET;
extern volatile unsigned int C1FIFOCI21INV;
extern volatile unsigned int C1FIFOCON22;
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
extern volatile __C1FIFOCON22bits_t C1FIFOCON22bits __asm__ ("C1FIFOCON22");
extern volatile unsigned int C1FIFOCON22CLR;
extern volatile unsigned int C1FIFOCON22SET;
extern volatile unsigned int C1FIFOCON22INV;
extern volatile unsigned int C1FIFOINT22;
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
extern volatile __C1FIFOINT22bits_t C1FIFOINT22bits __asm__ ("C1FIFOINT22");
extern volatile unsigned int C1FIFOINT22CLR;
extern volatile unsigned int C1FIFOINT22SET;
extern volatile unsigned int C1FIFOINT22INV;
extern volatile unsigned int C1FIFOUA22;
extern volatile unsigned int C1FIFOUA22CLR;
extern volatile unsigned int C1FIFOUA22SET;
extern volatile unsigned int C1FIFOUA22INV;
extern volatile unsigned int C1FIFOCI22;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI22bits_t;
extern volatile __C1FIFOCI22bits_t C1FIFOCI22bits __asm__ ("C1FIFOCI22");
extern volatile unsigned int C1FIFOCI22CLR;
extern volatile unsigned int C1FIFOCI22SET;
extern volatile unsigned int C1FIFOCI22INV;
extern volatile unsigned int C1FIFOCON23;
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
extern volatile __C1FIFOCON23bits_t C1FIFOCON23bits __asm__ ("C1FIFOCON23");
extern volatile unsigned int C1FIFOCON23CLR;
extern volatile unsigned int C1FIFOCON23SET;
extern volatile unsigned int C1FIFOCON23INV;
extern volatile unsigned int C1FIFOINT23;
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
extern volatile __C1FIFOINT23bits_t C1FIFOINT23bits __asm__ ("C1FIFOINT23");
extern volatile unsigned int C1FIFOINT23CLR;
extern volatile unsigned int C1FIFOINT23SET;
extern volatile unsigned int C1FIFOINT23INV;
extern volatile unsigned int C1FIFOUA23;
extern volatile unsigned int C1FIFOUA23CLR;
extern volatile unsigned int C1FIFOUA23SET;
extern volatile unsigned int C1FIFOUA23INV;
extern volatile unsigned int C1FIFOCI23;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI23bits_t;
extern volatile __C1FIFOCI23bits_t C1FIFOCI23bits __asm__ ("C1FIFOCI23");
extern volatile unsigned int C1FIFOCI23CLR;
extern volatile unsigned int C1FIFOCI23SET;
extern volatile unsigned int C1FIFOCI23INV;
extern volatile unsigned int C1FIFOCON24;
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
extern volatile __C1FIFOCON24bits_t C1FIFOCON24bits __asm__ ("C1FIFOCON24");
extern volatile unsigned int C1FIFOCON24CLR;
extern volatile unsigned int C1FIFOCON24SET;
extern volatile unsigned int C1FIFOCON24INV;
extern volatile unsigned int C1FIFOINT24;
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
extern volatile __C1FIFOINT24bits_t C1FIFOINT24bits __asm__ ("C1FIFOINT24");
extern volatile unsigned int C1FIFOINT24CLR;
extern volatile unsigned int C1FIFOINT24SET;
extern volatile unsigned int C1FIFOINT24INV;
extern volatile unsigned int C1FIFOUA24;
extern volatile unsigned int C1FIFOUA24CLR;
extern volatile unsigned int C1FIFOUA24SET;
extern volatile unsigned int C1FIFOUA24INV;
extern volatile unsigned int C1FIFOCI24;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI24bits_t;
extern volatile __C1FIFOCI24bits_t C1FIFOCI24bits __asm__ ("C1FIFOCI24");
extern volatile unsigned int C1FIFOCI24CLR;
extern volatile unsigned int C1FIFOCI24SET;
extern volatile unsigned int C1FIFOCI24INV;
extern volatile unsigned int C1FIFOCON25;
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
extern volatile __C1FIFOCON25bits_t C1FIFOCON25bits __asm__ ("C1FIFOCON25");
extern volatile unsigned int C1FIFOCON25CLR;
extern volatile unsigned int C1FIFOCON25SET;
extern volatile unsigned int C1FIFOCON25INV;
extern volatile unsigned int C1FIFOINT25;
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
extern volatile __C1FIFOINT25bits_t C1FIFOINT25bits __asm__ ("C1FIFOINT25");
extern volatile unsigned int C1FIFOINT25CLR;
extern volatile unsigned int C1FIFOINT25SET;
extern volatile unsigned int C1FIFOINT25INV;
extern volatile unsigned int C1FIFOUA25;
extern volatile unsigned int C1FIFOUA25CLR;
extern volatile unsigned int C1FIFOUA25SET;
extern volatile unsigned int C1FIFOUA25INV;
extern volatile unsigned int C1FIFOCI25;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI25bits_t;
extern volatile __C1FIFOCI25bits_t C1FIFOCI25bits __asm__ ("C1FIFOCI25");
extern volatile unsigned int C1FIFOCI25CLR;
extern volatile unsigned int C1FIFOCI25SET;
extern volatile unsigned int C1FIFOCI25INV;
extern volatile unsigned int C1FIFOCON26;
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
extern volatile __C1FIFOCON26bits_t C1FIFOCON26bits __asm__ ("C1FIFOCON26");
extern volatile unsigned int C1FIFOCON26CLR;
extern volatile unsigned int C1FIFOCON26SET;
extern volatile unsigned int C1FIFOCON26INV;
extern volatile unsigned int C1FIFOINT26;
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
extern volatile __C1FIFOINT26bits_t C1FIFOINT26bits __asm__ ("C1FIFOINT26");
extern volatile unsigned int C1FIFOINT26CLR;
extern volatile unsigned int C1FIFOINT26SET;
extern volatile unsigned int C1FIFOINT26INV;
extern volatile unsigned int C1FIFOUA26;
extern volatile unsigned int C1FIFOUA26CLR;
extern volatile unsigned int C1FIFOUA26SET;
extern volatile unsigned int C1FIFOUA26INV;
extern volatile unsigned int C1FIFOCI26;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI26bits_t;
extern volatile __C1FIFOCI26bits_t C1FIFOCI26bits __asm__ ("C1FIFOCI26");
extern volatile unsigned int C1FIFOCI26CLR;
extern volatile unsigned int C1FIFOCI26SET;
extern volatile unsigned int C1FIFOCI26INV;
extern volatile unsigned int C1FIFOCON27;
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
extern volatile __C1FIFOCON27bits_t C1FIFOCON27bits __asm__ ("C1FIFOCON27");
extern volatile unsigned int C1FIFOCON27CLR;
extern volatile unsigned int C1FIFOCON27SET;
extern volatile unsigned int C1FIFOCON27INV;
extern volatile unsigned int C1FIFOINT27;
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
extern volatile __C1FIFOINT27bits_t C1FIFOINT27bits __asm__ ("C1FIFOINT27");
extern volatile unsigned int C1FIFOINT27CLR;
extern volatile unsigned int C1FIFOINT27SET;
extern volatile unsigned int C1FIFOINT27INV;
extern volatile unsigned int C1FIFOUA27;
extern volatile unsigned int C1FIFOUA27CLR;
extern volatile unsigned int C1FIFOUA27SET;
extern volatile unsigned int C1FIFOUA27INV;
extern volatile unsigned int C1FIFOCI27;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI27bits_t;
extern volatile __C1FIFOCI27bits_t C1FIFOCI27bits __asm__ ("C1FIFOCI27");
extern volatile unsigned int C1FIFOCI27CLR;
extern volatile unsigned int C1FIFOCI27SET;
extern volatile unsigned int C1FIFOCI27INV;
extern volatile unsigned int C1FIFOCON28;
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
extern volatile __C1FIFOCON28bits_t C1FIFOCON28bits __asm__ ("C1FIFOCON28");
extern volatile unsigned int C1FIFOCON28CLR;
extern volatile unsigned int C1FIFOCON28SET;
extern volatile unsigned int C1FIFOCON28INV;
extern volatile unsigned int C1FIFOINT28;
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
extern volatile __C1FIFOINT28bits_t C1FIFOINT28bits __asm__ ("C1FIFOINT28");
extern volatile unsigned int C1FIFOINT28CLR;
extern volatile unsigned int C1FIFOINT28SET;
extern volatile unsigned int C1FIFOINT28INV;
extern volatile unsigned int C1FIFOUA28;
extern volatile unsigned int C1FIFOUA28CLR;
extern volatile unsigned int C1FIFOUA28SET;
extern volatile unsigned int C1FIFOUA28INV;
extern volatile unsigned int C1FIFOCI28;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI28bits_t;
extern volatile __C1FIFOCI28bits_t C1FIFOCI28bits __asm__ ("C1FIFOCI28");
extern volatile unsigned int C1FIFOCI28CLR;
extern volatile unsigned int C1FIFOCI28SET;
extern volatile unsigned int C1FIFOCI28INV;
extern volatile unsigned int C1FIFOCON29;
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
extern volatile __C1FIFOCON29bits_t C1FIFOCON29bits __asm__ ("C1FIFOCON29");
extern volatile unsigned int C1FIFOCON29CLR;
extern volatile unsigned int C1FIFOCON29SET;
extern volatile unsigned int C1FIFOCON29INV;
extern volatile unsigned int C1FIFOINT29;
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
extern volatile __C1FIFOINT29bits_t C1FIFOINT29bits __asm__ ("C1FIFOINT29");
extern volatile unsigned int C1FIFOINT29CLR;
extern volatile unsigned int C1FIFOINT29SET;
extern volatile unsigned int C1FIFOINT29INV;
extern volatile unsigned int C1FIFOUA29;
extern volatile unsigned int C1FIFOUA29CLR;
extern volatile unsigned int C1FIFOUA29SET;
extern volatile unsigned int C1FIFOUA29INV;
extern volatile unsigned int C1FIFOCI29;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI29bits_t;
extern volatile __C1FIFOCI29bits_t C1FIFOCI29bits __asm__ ("C1FIFOCI29");
extern volatile unsigned int C1FIFOCI29CLR;
extern volatile unsigned int C1FIFOCI29SET;
extern volatile unsigned int C1FIFOCI29INV;
extern volatile unsigned int C1FIFOCON30;
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
extern volatile __C1FIFOCON30bits_t C1FIFOCON30bits __asm__ ("C1FIFOCON30");
extern volatile unsigned int C1FIFOCON30CLR;
extern volatile unsigned int C1FIFOCON30SET;
extern volatile unsigned int C1FIFOCON30INV;
extern volatile unsigned int C1FIFOINT30;
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
extern volatile __C1FIFOINT30bits_t C1FIFOINT30bits __asm__ ("C1FIFOINT30");
extern volatile unsigned int C1FIFOINT30CLR;
extern volatile unsigned int C1FIFOINT30SET;
extern volatile unsigned int C1FIFOINT30INV;
extern volatile unsigned int C1FIFOUA30;
extern volatile unsigned int C1FIFOUA30CLR;
extern volatile unsigned int C1FIFOUA30SET;
extern volatile unsigned int C1FIFOUA30INV;
extern volatile unsigned int C1FIFOCI30;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI30bits_t;
extern volatile __C1FIFOCI30bits_t C1FIFOCI30bits __asm__ ("C1FIFOCI30");
extern volatile unsigned int C1FIFOCI30CLR;
extern volatile unsigned int C1FIFOCI30SET;
extern volatile unsigned int C1FIFOCI30INV;
extern volatile unsigned int C1FIFOCON31;
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
extern volatile __C1FIFOCON31bits_t C1FIFOCON31bits __asm__ ("C1FIFOCON31");
extern volatile unsigned int C1FIFOCON31CLR;
extern volatile unsigned int C1FIFOCON31SET;
extern volatile unsigned int C1FIFOCON31INV;
extern volatile unsigned int C1FIFOINT31;
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
extern volatile __C1FIFOINT31bits_t C1FIFOINT31bits __asm__ ("C1FIFOINT31");
extern volatile unsigned int C1FIFOINT31CLR;
extern volatile unsigned int C1FIFOINT31SET;
extern volatile unsigned int C1FIFOINT31INV;
extern volatile unsigned int C1FIFOUA31;
extern volatile unsigned int C1FIFOUA31CLR;
extern volatile unsigned int C1FIFOUA31SET;
extern volatile unsigned int C1FIFOUA31INV;
extern volatile unsigned int C1FIFOCI31;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C1FIFOCI31bits_t;
extern volatile __C1FIFOCI31bits_t C1FIFOCI31bits __asm__ ("C1FIFOCI31");
extern volatile unsigned int C1FIFOCI31CLR;
extern volatile unsigned int C1FIFOCI31SET;
extern volatile unsigned int C1FIFOCI31INV;
extern volatile unsigned int C2CON;
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
extern volatile __C2CONbits_t C2CONbits __asm__ ("C2CON");
extern volatile unsigned int C2CONCLR;
extern volatile unsigned int C2CONSET;
extern volatile unsigned int C2CONINV;
extern volatile unsigned int C2CFG;
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
extern volatile __C2CFGbits_t C2CFGbits __asm__ ("C2CFG");
extern volatile unsigned int C2CFGCLR;
extern volatile unsigned int C2CFGSET;
extern volatile unsigned int C2CFGINV;
extern volatile unsigned int C2INT;
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
extern volatile __C2INTbits_t C2INTbits __asm__ ("C2INT");
extern volatile unsigned int C2INTCLR;
extern volatile unsigned int C2INTSET;
extern volatile unsigned int C2INTINV;
extern volatile unsigned int C2VEC;
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
extern volatile __C2VECbits_t C2VECbits __asm__ ("C2VEC");
extern volatile unsigned int C2VECCLR;
extern volatile unsigned int C2VECSET;
extern volatile unsigned int C2VECINV;
extern volatile unsigned int C2TREC;
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
extern volatile __C2TRECbits_t C2TRECbits __asm__ ("C2TREC");
extern volatile unsigned int C2TRECCLR;
extern volatile unsigned int C2TRECSET;
extern volatile unsigned int C2TRECINV;
extern volatile unsigned int C2FSTAT;
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
extern volatile __C2FSTATbits_t C2FSTATbits __asm__ ("C2FSTAT");
extern volatile unsigned int C2FSTATCLR;
extern volatile unsigned int C2FSTATSET;
extern volatile unsigned int C2FSTATINV;
extern volatile unsigned int C2RXOVF;
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
extern volatile __C2RXOVFbits_t C2RXOVFbits __asm__ ("C2RXOVF");
extern volatile unsigned int C2RXOVFCLR;
extern volatile unsigned int C2RXOVFSET;
extern volatile unsigned int C2RXOVFINV;
extern volatile unsigned int C2TMR;
typedef union {
  struct {
    unsigned CANTSPRE:16;
    unsigned CANTS:16;
  };
  struct {
    unsigned w:32;
  };
} __C2TMRbits_t;
extern volatile __C2TMRbits_t C2TMRbits __asm__ ("C2TMR");
extern volatile unsigned int C2TMRCLR;
extern volatile unsigned int C2TMRSET;
extern volatile unsigned int C2TMRINV;
extern volatile unsigned int C2RXM0;
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
extern volatile __C2RXM0bits_t C2RXM0bits __asm__ ("C2RXM0");
extern volatile unsigned int C2RXM0CLR;
extern volatile unsigned int C2RXM0SET;
extern volatile unsigned int C2RXM0INV;
extern volatile unsigned int C2RXM1;
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
extern volatile __C2RXM1bits_t C2RXM1bits __asm__ ("C2RXM1");
extern volatile unsigned int C2RXM1CLR;
extern volatile unsigned int C2RXM1SET;
extern volatile unsigned int C2RXM1INV;
extern volatile unsigned int C2RXM2;
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
extern volatile __C2RXM2bits_t C2RXM2bits __asm__ ("C2RXM2");
extern volatile unsigned int C2RXM2CLR;
extern volatile unsigned int C2RXM2SET;
extern volatile unsigned int C2RXM2INV;
extern volatile unsigned int C2RXM3;
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
extern volatile __C2RXM3bits_t C2RXM3bits __asm__ ("C2RXM3");
extern volatile unsigned int C2RXM3CLR;
extern volatile unsigned int C2RXM3SET;
extern volatile unsigned int C2RXM3INV;
extern volatile unsigned int C2FLTCON0;
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
extern volatile __C2FLTCON0bits_t C2FLTCON0bits __asm__ ("C2FLTCON0");
extern volatile unsigned int C2FLTCON0CLR;
extern volatile unsigned int C2FLTCON0SET;
extern volatile unsigned int C2FLTCON0INV;
extern volatile unsigned int C2FLTCON1;
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
extern volatile __C2FLTCON1bits_t C2FLTCON1bits __asm__ ("C2FLTCON1");
extern volatile unsigned int C2FLTCON1CLR;
extern volatile unsigned int C2FLTCON1SET;
extern volatile unsigned int C2FLTCON1INV;
extern volatile unsigned int C2FLTCON2;
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
extern volatile __C2FLTCON2bits_t C2FLTCON2bits __asm__ ("C2FLTCON2");
extern volatile unsigned int C2FLTCON2CLR;
extern volatile unsigned int C2FLTCON2SET;
extern volatile unsigned int C2FLTCON2INV;
extern volatile unsigned int C2FLTCON3;
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
extern volatile __C2FLTCON3bits_t C2FLTCON3bits __asm__ ("C2FLTCON3");
extern volatile unsigned int C2FLTCON3CLR;
extern volatile unsigned int C2FLTCON3SET;
extern volatile unsigned int C2FLTCON3INV;
extern volatile unsigned int C2FLTCON4;
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
extern volatile __C2FLTCON4bits_t C2FLTCON4bits __asm__ ("C2FLTCON4");
extern volatile unsigned int C2FLTCON4CLR;
extern volatile unsigned int C2FLTCON4SET;
extern volatile unsigned int C2FLTCON4INV;
extern volatile unsigned int C2FLTCON5;
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
extern volatile __C2FLTCON5bits_t C2FLTCON5bits __asm__ ("C2FLTCON5");
extern volatile unsigned int C2FLTCON5CLR;
extern volatile unsigned int C2FLTCON5SET;
extern volatile unsigned int C2FLTCON5INV;
extern volatile unsigned int C2FLTCON6;
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
extern volatile __C2FLTCON6bits_t C2FLTCON6bits __asm__ ("C2FLTCON6");
extern volatile unsigned int C2FLTCON6CLR;
extern volatile unsigned int C2FLTCON6SET;
extern volatile unsigned int C2FLTCON6INV;
extern volatile unsigned int C2FLTCON7;
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
extern volatile __C2FLTCON7bits_t C2FLTCON7bits __asm__ ("C2FLTCON7");
extern volatile unsigned int C2FLTCON7CLR;
extern volatile unsigned int C2FLTCON7SET;
extern volatile unsigned int C2FLTCON7INV;
extern volatile unsigned int C2RXF0;
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
extern volatile __C2RXF0bits_t C2RXF0bits __asm__ ("C2RXF0");
extern volatile unsigned int C2RXF0CLR;
extern volatile unsigned int C2RXF0SET;
extern volatile unsigned int C2RXF0INV;
extern volatile unsigned int C2RXF1;
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
extern volatile __C2RXF1bits_t C2RXF1bits __asm__ ("C2RXF1");
extern volatile unsigned int C2RXF1CLR;
extern volatile unsigned int C2RXF1SET;
extern volatile unsigned int C2RXF1INV;
extern volatile unsigned int C2RXF2;
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
extern volatile __C2RXF2bits_t C2RXF2bits __asm__ ("C2RXF2");
extern volatile unsigned int C2RXF2CLR;
extern volatile unsigned int C2RXF2SET;
extern volatile unsigned int C2RXF2INV;
extern volatile unsigned int C2RXF3;
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
extern volatile __C2RXF3bits_t C2RXF3bits __asm__ ("C2RXF3");
extern volatile unsigned int C2RXF3CLR;
extern volatile unsigned int C2RXF3SET;
extern volatile unsigned int C2RXF3INV;
extern volatile unsigned int C2RXF4;
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
extern volatile __C2RXF4bits_t C2RXF4bits __asm__ ("C2RXF4");
extern volatile unsigned int C2RXF4CLR;
extern volatile unsigned int C2RXF4SET;
extern volatile unsigned int C2RXF4INV;
extern volatile unsigned int C2RXF5;
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
extern volatile __C2RXF5bits_t C2RXF5bits __asm__ ("C2RXF5");
extern volatile unsigned int C2RXF5CLR;
extern volatile unsigned int C2RXF5SET;
extern volatile unsigned int C2RXF5INV;
extern volatile unsigned int C2RXF6;
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
extern volatile __C2RXF6bits_t C2RXF6bits __asm__ ("C2RXF6");
extern volatile unsigned int C2RXF6CLR;
extern volatile unsigned int C2RXF6SET;
extern volatile unsigned int C2RXF6INV;
extern volatile unsigned int C2RXF7;
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
extern volatile __C2RXF7bits_t C2RXF7bits __asm__ ("C2RXF7");
extern volatile unsigned int C2RXF7CLR;
extern volatile unsigned int C2RXF7SET;
extern volatile unsigned int C2RXF7INV;
extern volatile unsigned int C2RXF8;
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
extern volatile __C2RXF8bits_t C2RXF8bits __asm__ ("C2RXF8");
extern volatile unsigned int C2RXF8CLR;
extern volatile unsigned int C2RXF8SET;
extern volatile unsigned int C2RXF8INV;
extern volatile unsigned int C2RXF9;
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
extern volatile __C2RXF9bits_t C2RXF9bits __asm__ ("C2RXF9");
extern volatile unsigned int C2RXF9CLR;
extern volatile unsigned int C2RXF9SET;
extern volatile unsigned int C2RXF9INV;
extern volatile unsigned int C2RXF10;
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
extern volatile __C2RXF10bits_t C2RXF10bits __asm__ ("C2RXF10");
extern volatile unsigned int C2RXF10CLR;
extern volatile unsigned int C2RXF10SET;
extern volatile unsigned int C2RXF10INV;
extern volatile unsigned int C2RXF11;
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
extern volatile __C2RXF11bits_t C2RXF11bits __asm__ ("C2RXF11");
extern volatile unsigned int C2RXF11CLR;
extern volatile unsigned int C2RXF11SET;
extern volatile unsigned int C2RXF11INV;
extern volatile unsigned int C2RXF12;
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
extern volatile __C2RXF12bits_t C2RXF12bits __asm__ ("C2RXF12");
extern volatile unsigned int C2RXF12CLR;
extern volatile unsigned int C2RXF12SET;
extern volatile unsigned int C2RXF12INV;
extern volatile unsigned int C2RXF13;
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
extern volatile __C2RXF13bits_t C2RXF13bits __asm__ ("C2RXF13");
extern volatile unsigned int C2RXF13CLR;
extern volatile unsigned int C2RXF13SET;
extern volatile unsigned int C2RXF13INV;
extern volatile unsigned int C2RXF14;
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
extern volatile __C2RXF14bits_t C2RXF14bits __asm__ ("C2RXF14");
extern volatile unsigned int C2RXF14CLR;
extern volatile unsigned int C2RXF14SET;
extern volatile unsigned int C2RXF14INV;
extern volatile unsigned int C2RXF15;
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
extern volatile __C2RXF15bits_t C2RXF15bits __asm__ ("C2RXF15");
extern volatile unsigned int C2RXF15CLR;
extern volatile unsigned int C2RXF15SET;
extern volatile unsigned int C2RXF15INV;
extern volatile unsigned int C2RXF16;
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
extern volatile __C2RXF16bits_t C2RXF16bits __asm__ ("C2RXF16");
extern volatile unsigned int C2RXF16CLR;
extern volatile unsigned int C2RXF16SET;
extern volatile unsigned int C2RXF16INV;
extern volatile unsigned int C2RXF17;
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
extern volatile __C2RXF17bits_t C2RXF17bits __asm__ ("C2RXF17");
extern volatile unsigned int C2RXF17CLR;
extern volatile unsigned int C2RXF17SET;
extern volatile unsigned int C2RXF17INV;
extern volatile unsigned int C2RXF18;
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
extern volatile __C2RXF18bits_t C2RXF18bits __asm__ ("C2RXF18");
extern volatile unsigned int C2RXF18CLR;
extern volatile unsigned int C2RXF18SET;
extern volatile unsigned int C2RXF18INV;
extern volatile unsigned int C2RXF19;
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
extern volatile __C2RXF19bits_t C2RXF19bits __asm__ ("C2RXF19");
extern volatile unsigned int C2RXF19CLR;
extern volatile unsigned int C2RXF19SET;
extern volatile unsigned int C2RXF19INV;
extern volatile unsigned int C2RXF20;
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
extern volatile __C2RXF20bits_t C2RXF20bits __asm__ ("C2RXF20");
extern volatile unsigned int C2RXF20CLR;
extern volatile unsigned int C2RXF20SET;
extern volatile unsigned int C2RXF20INV;
extern volatile unsigned int C2RXF21;
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
extern volatile __C2RXF21bits_t C2RXF21bits __asm__ ("C2RXF21");
extern volatile unsigned int C2RXF21CLR;
extern volatile unsigned int C2RXF21SET;
extern volatile unsigned int C2RXF21INV;
extern volatile unsigned int C2RXF22;
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
extern volatile __C2RXF22bits_t C2RXF22bits __asm__ ("C2RXF22");
extern volatile unsigned int C2RXF22CLR;
extern volatile unsigned int C2RXF22SET;
extern volatile unsigned int C2RXF22INV;
extern volatile unsigned int C2RXF23;
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
extern volatile __C2RXF23bits_t C2RXF23bits __asm__ ("C2RXF23");
extern volatile unsigned int C2RXF23CLR;
extern volatile unsigned int C2RXF23SET;
extern volatile unsigned int C2RXF23INV;
extern volatile unsigned int C2RXF24;
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
extern volatile __C2RXF24bits_t C2RXF24bits __asm__ ("C2RXF24");
extern volatile unsigned int C2RXF24CLR;
extern volatile unsigned int C2RXF24SET;
extern volatile unsigned int C2RXF24INV;
extern volatile unsigned int C2RXF25;
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
extern volatile __C2RXF25bits_t C2RXF25bits __asm__ ("C2RXF25");
extern volatile unsigned int C2RXF25CLR;
extern volatile unsigned int C2RXF25SET;
extern volatile unsigned int C2RXF25INV;
extern volatile unsigned int C2RXF26;
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
extern volatile __C2RXF26bits_t C2RXF26bits __asm__ ("C2RXF26");
extern volatile unsigned int C2RXF26CLR;
extern volatile unsigned int C2RXF26SET;
extern volatile unsigned int C2RXF26INV;
extern volatile unsigned int C2RXF27;
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
extern volatile __C2RXF27bits_t C2RXF27bits __asm__ ("C2RXF27");
extern volatile unsigned int C2RXF27CLR;
extern volatile unsigned int C2RXF27SET;
extern volatile unsigned int C2RXF27INV;
extern volatile unsigned int C2RXF28;
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
extern volatile __C2RXF28bits_t C2RXF28bits __asm__ ("C2RXF28");
extern volatile unsigned int C2RXF28CLR;
extern volatile unsigned int C2RXF28SET;
extern volatile unsigned int C2RXF28INV;
extern volatile unsigned int C2RXF29;
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
extern volatile __C2RXF29bits_t C2RXF29bits __asm__ ("C2RXF29");
extern volatile unsigned int C2RXF29CLR;
extern volatile unsigned int C2RXF29SET;
extern volatile unsigned int C2RXF29INV;
extern volatile unsigned int C2RXF30;
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
extern volatile __C2RXF30bits_t C2RXF30bits __asm__ ("C2RXF30");
extern volatile unsigned int C2RXF30CLR;
extern volatile unsigned int C2RXF30SET;
extern volatile unsigned int C2RXF30INV;
extern volatile unsigned int C2RXF31;
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
extern volatile __C2RXF31bits_t C2RXF31bits __asm__ ("C2RXF31");
extern volatile unsigned int C2RXF31CLR;
extern volatile unsigned int C2RXF31SET;
extern volatile unsigned int C2RXF31INV;
extern volatile unsigned int C2FIFOBA;
extern volatile unsigned int C2FIFOBACLR;
extern volatile unsigned int C2FIFOBASET;
extern volatile unsigned int C2FIFOBAINV;
extern volatile unsigned int C2FIFOCON0;
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
extern volatile __C2FIFOCON0bits_t C2FIFOCON0bits __asm__ ("C2FIFOCON0");
extern volatile unsigned int C2FIFOCON0CLR;
extern volatile unsigned int C2FIFOCON0SET;
extern volatile unsigned int C2FIFOCON0INV;
extern volatile unsigned int C2FIFOINT0;
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
extern volatile __C2FIFOINT0bits_t C2FIFOINT0bits __asm__ ("C2FIFOINT0");
extern volatile unsigned int C2FIFOINT0CLR;
extern volatile unsigned int C2FIFOINT0SET;
extern volatile unsigned int C2FIFOINT0INV;
extern volatile unsigned int C2FIFOUA0;
extern volatile unsigned int C2FIFOUA0CLR;
extern volatile unsigned int C2FIFOUA0SET;
extern volatile unsigned int C2FIFOUA0INV;
extern volatile unsigned int C2FIFOCI0;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI0bits_t;
extern volatile __C2FIFOCI0bits_t C2FIFOCI0bits __asm__ ("C2FIFOCI0");
extern volatile unsigned int C2FIFOCI0CLR;
extern volatile unsigned int C2FIFOCI0SET;
extern volatile unsigned int C2FIFOCI0INV;
extern volatile unsigned int C2FIFOCON1;
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
extern volatile __C2FIFOCON1bits_t C2FIFOCON1bits __asm__ ("C2FIFOCON1");
extern volatile unsigned int C2FIFOCON1CLR;
extern volatile unsigned int C2FIFOCON1SET;
extern volatile unsigned int C2FIFOCON1INV;
extern volatile unsigned int C2FIFOINT1;
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
extern volatile __C2FIFOINT1bits_t C2FIFOINT1bits __asm__ ("C2FIFOINT1");
extern volatile unsigned int C2FIFOINT1CLR;
extern volatile unsigned int C2FIFOINT1SET;
extern volatile unsigned int C2FIFOINT1INV;
extern volatile unsigned int C2FIFOUA1;
extern volatile unsigned int C2FIFOUA1CLR;
extern volatile unsigned int C2FIFOUA1SET;
extern volatile unsigned int C2FIFOUA1INV;
extern volatile unsigned int C2FIFOCI1;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI1bits_t;
extern volatile __C2FIFOCI1bits_t C2FIFOCI1bits __asm__ ("C2FIFOCI1");
extern volatile unsigned int C2FIFOCI1CLR;
extern volatile unsigned int C2FIFOCI1SET;
extern volatile unsigned int C2FIFOCI1INV;
extern volatile unsigned int C2FIFOCON2;
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
extern volatile __C2FIFOCON2bits_t C2FIFOCON2bits __asm__ ("C2FIFOCON2");
extern volatile unsigned int C2FIFOCON2CLR;
extern volatile unsigned int C2FIFOCON2SET;
extern volatile unsigned int C2FIFOCON2INV;
extern volatile unsigned int C2FIFOINT2;
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
extern volatile __C2FIFOINT2bits_t C2FIFOINT2bits __asm__ ("C2FIFOINT2");
extern volatile unsigned int C2FIFOINT2CLR;
extern volatile unsigned int C2FIFOINT2SET;
extern volatile unsigned int C2FIFOINT2INV;
extern volatile unsigned int C2FIFOUA2;
extern volatile unsigned int C2FIFOUA2CLR;
extern volatile unsigned int C2FIFOUA2SET;
extern volatile unsigned int C2FIFOUA2INV;
extern volatile unsigned int C2FIFOCI2;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI2bits_t;
extern volatile __C2FIFOCI2bits_t C2FIFOCI2bits __asm__ ("C2FIFOCI2");
extern volatile unsigned int C2FIFOCI2CLR;
extern volatile unsigned int C2FIFOCI2SET;
extern volatile unsigned int C2FIFOCI2INV;
extern volatile unsigned int C2FIFOCON3;
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
extern volatile __C2FIFOCON3bits_t C2FIFOCON3bits __asm__ ("C2FIFOCON3");
extern volatile unsigned int C2FIFOCON3CLR;
extern volatile unsigned int C2FIFOCON3SET;
extern volatile unsigned int C2FIFOCON3INV;
extern volatile unsigned int C2FIFOINT3;
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
extern volatile __C2FIFOINT3bits_t C2FIFOINT3bits __asm__ ("C2FIFOINT3");
extern volatile unsigned int C2FIFOINT3CLR;
extern volatile unsigned int C2FIFOINT3SET;
extern volatile unsigned int C2FIFOINT3INV;
extern volatile unsigned int C2FIFOUA3;
extern volatile unsigned int C2FIFOUA3CLR;
extern volatile unsigned int C2FIFOUA3SET;
extern volatile unsigned int C2FIFOUA3INV;
extern volatile unsigned int C2FIFOCI3;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI3bits_t;
extern volatile __C2FIFOCI3bits_t C2FIFOCI3bits __asm__ ("C2FIFOCI3");
extern volatile unsigned int C2FIFOCI3CLR;
extern volatile unsigned int C2FIFOCI3SET;
extern volatile unsigned int C2FIFOCI3INV;
extern volatile unsigned int C2FIFOCON4;
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
extern volatile __C2FIFOCON4bits_t C2FIFOCON4bits __asm__ ("C2FIFOCON4");
extern volatile unsigned int C2FIFOCON4CLR;
extern volatile unsigned int C2FIFOCON4SET;
extern volatile unsigned int C2FIFOCON4INV;
extern volatile unsigned int C2FIFOINT4;
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
extern volatile __C2FIFOINT4bits_t C2FIFOINT4bits __asm__ ("C2FIFOINT4");
extern volatile unsigned int C2FIFOINT4CLR;
extern volatile unsigned int C2FIFOINT4SET;
extern volatile unsigned int C2FIFOINT4INV;
extern volatile unsigned int C2FIFOUA4;
extern volatile unsigned int C2FIFOUA4CLR;
extern volatile unsigned int C2FIFOUA4SET;
extern volatile unsigned int C2FIFOUA4INV;
extern volatile unsigned int C2FIFOCI4;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI4bits_t;
extern volatile __C2FIFOCI4bits_t C2FIFOCI4bits __asm__ ("C2FIFOCI4");
extern volatile unsigned int C2FIFOCI4CLR;
extern volatile unsigned int C2FIFOCI4SET;
extern volatile unsigned int C2FIFOCI4INV;
extern volatile unsigned int C2FIFOCON5;
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
extern volatile __C2FIFOCON5bits_t C2FIFOCON5bits __asm__ ("C2FIFOCON5");
extern volatile unsigned int C2FIFOCON5CLR;
extern volatile unsigned int C2FIFOCON5SET;
extern volatile unsigned int C2FIFOCON5INV;
extern volatile unsigned int C2FIFOINT5;
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
extern volatile __C2FIFOINT5bits_t C2FIFOINT5bits __asm__ ("C2FIFOINT5");
extern volatile unsigned int C2FIFOINT5CLR;
extern volatile unsigned int C2FIFOINT5SET;
extern volatile unsigned int C2FIFOINT5INV;
extern volatile unsigned int C2FIFOUA5;
extern volatile unsigned int C2FIFOUA5CLR;
extern volatile unsigned int C2FIFOUA5SET;
extern volatile unsigned int C2FIFOUA5INV;
extern volatile unsigned int C2FIFOCI5;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI5bits_t;
extern volatile __C2FIFOCI5bits_t C2FIFOCI5bits __asm__ ("C2FIFOCI5");
extern volatile unsigned int C2FIFOCI5CLR;
extern volatile unsigned int C2FIFOCI5SET;
extern volatile unsigned int C2FIFOCI5INV;
extern volatile unsigned int C2FIFOCON6;
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
extern volatile __C2FIFOCON6bits_t C2FIFOCON6bits __asm__ ("C2FIFOCON6");
extern volatile unsigned int C2FIFOCON6CLR;
extern volatile unsigned int C2FIFOCON6SET;
extern volatile unsigned int C2FIFOCON6INV;
extern volatile unsigned int C2FIFOINT6;
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
extern volatile __C2FIFOINT6bits_t C2FIFOINT6bits __asm__ ("C2FIFOINT6");
extern volatile unsigned int C2FIFOINT6CLR;
extern volatile unsigned int C2FIFOINT6SET;
extern volatile unsigned int C2FIFOINT6INV;
extern volatile unsigned int C2FIFOUA6;
extern volatile unsigned int C2FIFOUA6CLR;
extern volatile unsigned int C2FIFOUA6SET;
extern volatile unsigned int C2FIFOUA6INV;
extern volatile unsigned int C2FIFOCI6;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI6bits_t;
extern volatile __C2FIFOCI6bits_t C2FIFOCI6bits __asm__ ("C2FIFOCI6");
extern volatile unsigned int C2FIFOCI6CLR;
extern volatile unsigned int C2FIFOCI6SET;
extern volatile unsigned int C2FIFOCI6INV;
extern volatile unsigned int C2FIFOCON7;
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
extern volatile __C2FIFOCON7bits_t C2FIFOCON7bits __asm__ ("C2FIFOCON7");
extern volatile unsigned int C2FIFOCON7CLR;
extern volatile unsigned int C2FIFOCON7SET;
extern volatile unsigned int C2FIFOCON7INV;
extern volatile unsigned int C2FIFOINT7;
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
extern volatile __C2FIFOINT7bits_t C2FIFOINT7bits __asm__ ("C2FIFOINT7");
extern volatile unsigned int C2FIFOINT7CLR;
extern volatile unsigned int C2FIFOINT7SET;
extern volatile unsigned int C2FIFOINT7INV;
extern volatile unsigned int C2FIFOUA7;
extern volatile unsigned int C2FIFOUA7CLR;
extern volatile unsigned int C2FIFOUA7SET;
extern volatile unsigned int C2FIFOUA7INV;
extern volatile unsigned int C2FIFOCI7;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI7bits_t;
extern volatile __C2FIFOCI7bits_t C2FIFOCI7bits __asm__ ("C2FIFOCI7");
extern volatile unsigned int C2FIFOCI7CLR;
extern volatile unsigned int C2FIFOCI7SET;
extern volatile unsigned int C2FIFOCI7INV;
extern volatile unsigned int C2FIFOCON8;
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
extern volatile __C2FIFOCON8bits_t C2FIFOCON8bits __asm__ ("C2FIFOCON8");
extern volatile unsigned int C2FIFOCON8CLR;
extern volatile unsigned int C2FIFOCON8SET;
extern volatile unsigned int C2FIFOCON8INV;
extern volatile unsigned int C2FIFOINT8;
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
extern volatile __C2FIFOINT8bits_t C2FIFOINT8bits __asm__ ("C2FIFOINT8");
extern volatile unsigned int C2FIFOINT8CLR;
extern volatile unsigned int C2FIFOINT8SET;
extern volatile unsigned int C2FIFOINT8INV;
extern volatile unsigned int C2FIFOUA8;
extern volatile unsigned int C2FIFOUA8CLR;
extern volatile unsigned int C2FIFOUA8SET;
extern volatile unsigned int C2FIFOUA8INV;
extern volatile unsigned int C2FIFOCI8;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI8bits_t;
extern volatile __C2FIFOCI8bits_t C2FIFOCI8bits __asm__ ("C2FIFOCI8");
extern volatile unsigned int C2FIFOCI8CLR;
extern volatile unsigned int C2FIFOCI8SET;
extern volatile unsigned int C2FIFOCI8INV;
extern volatile unsigned int C2FIFOCON9;
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
extern volatile __C2FIFOCON9bits_t C2FIFOCON9bits __asm__ ("C2FIFOCON9");
extern volatile unsigned int C2FIFOCON9CLR;
extern volatile unsigned int C2FIFOCON9SET;
extern volatile unsigned int C2FIFOCON9INV;
extern volatile unsigned int C2FIFOINT9;
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
extern volatile __C2FIFOINT9bits_t C2FIFOINT9bits __asm__ ("C2FIFOINT9");
extern volatile unsigned int C2FIFOINT9CLR;
extern volatile unsigned int C2FIFOINT9SET;
extern volatile unsigned int C2FIFOINT9INV;
extern volatile unsigned int C2FIFOUA9;
extern volatile unsigned int C2FIFOUA9CLR;
extern volatile unsigned int C2FIFOUA9SET;
extern volatile unsigned int C2FIFOUA9INV;
extern volatile unsigned int C2FIFOCI9;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI9bits_t;
extern volatile __C2FIFOCI9bits_t C2FIFOCI9bits __asm__ ("C2FIFOCI9");
extern volatile unsigned int C2FIFOCI9CLR;
extern volatile unsigned int C2FIFOCI9SET;
extern volatile unsigned int C2FIFOCI9INV;
extern volatile unsigned int C2FIFOCON10;
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
extern volatile __C2FIFOCON10bits_t C2FIFOCON10bits __asm__ ("C2FIFOCON10");
extern volatile unsigned int C2FIFOCON10CLR;
extern volatile unsigned int C2FIFOCON10SET;
extern volatile unsigned int C2FIFOCON10INV;
extern volatile unsigned int C2FIFOINT10;
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
extern volatile __C2FIFOINT10bits_t C2FIFOINT10bits __asm__ ("C2FIFOINT10");
extern volatile unsigned int C2FIFOINT10CLR;
extern volatile unsigned int C2FIFOINT10SET;
extern volatile unsigned int C2FIFOINT10INV;
extern volatile unsigned int C2FIFOUA10;
extern volatile unsigned int C2FIFOUA10CLR;
extern volatile unsigned int C2FIFOUA10SET;
extern volatile unsigned int C2FIFOUA10INV;
extern volatile unsigned int C2FIFOCI10;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI10bits_t;
extern volatile __C2FIFOCI10bits_t C2FIFOCI10bits __asm__ ("C2FIFOCI10");
extern volatile unsigned int C2FIFOCI10CLR;
extern volatile unsigned int C2FIFOCI10SET;
extern volatile unsigned int C2FIFOCI10INV;
extern volatile unsigned int C2FIFOCON11;
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
extern volatile __C2FIFOCON11bits_t C2FIFOCON11bits __asm__ ("C2FIFOCON11");
extern volatile unsigned int C2FIFOCON11CLR;
extern volatile unsigned int C2FIFOCON11SET;
extern volatile unsigned int C2FIFOCON11INV;
extern volatile unsigned int C2FIFOINT11;
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
extern volatile __C2FIFOINT11bits_t C2FIFOINT11bits __asm__ ("C2FIFOINT11");
extern volatile unsigned int C2FIFOINT11CLR;
extern volatile unsigned int C2FIFOINT11SET;
extern volatile unsigned int C2FIFOINT11INV;
extern volatile unsigned int C2FIFOUA11;
extern volatile unsigned int C2FIFOUA11CLR;
extern volatile unsigned int C2FIFOUA11SET;
extern volatile unsigned int C2FIFOUA11INV;
extern volatile unsigned int C2FIFOCI11;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI11bits_t;
extern volatile __C2FIFOCI11bits_t C2FIFOCI11bits __asm__ ("C2FIFOCI11");
extern volatile unsigned int C2FIFOCI11CLR;
extern volatile unsigned int C2FIFOCI11SET;
extern volatile unsigned int C2FIFOCI11INV;
extern volatile unsigned int C2FIFOCON12;
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
extern volatile __C2FIFOCON12bits_t C2FIFOCON12bits __asm__ ("C2FIFOCON12");
extern volatile unsigned int C2FIFOCON12CLR;
extern volatile unsigned int C2FIFOCON12SET;
extern volatile unsigned int C2FIFOCON12INV;
extern volatile unsigned int C2FIFOINT12;
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
extern volatile __C2FIFOINT12bits_t C2FIFOINT12bits __asm__ ("C2FIFOINT12");
extern volatile unsigned int C2FIFOINT12CLR;
extern volatile unsigned int C2FIFOINT12SET;
extern volatile unsigned int C2FIFOINT12INV;
extern volatile unsigned int C2FIFOUA12;
extern volatile unsigned int C2FIFOUA12CLR;
extern volatile unsigned int C2FIFOUA12SET;
extern volatile unsigned int C2FIFOUA12INV;
extern volatile unsigned int C2FIFOCI12;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI12bits_t;
extern volatile __C2FIFOCI12bits_t C2FIFOCI12bits __asm__ ("C2FIFOCI12");
extern volatile unsigned int C2FIFOCI12CLR;
extern volatile unsigned int C2FIFOCI12SET;
extern volatile unsigned int C2FIFOCI12INV;
extern volatile unsigned int C2FIFOCON13;
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
extern volatile __C2FIFOCON13bits_t C2FIFOCON13bits __asm__ ("C2FIFOCON13");
extern volatile unsigned int C2FIFOCON13CLR;
extern volatile unsigned int C2FIFOCON13SET;
extern volatile unsigned int C2FIFOCON13INV;
extern volatile unsigned int C2FIFOINT13;
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
extern volatile __C2FIFOINT13bits_t C2FIFOINT13bits __asm__ ("C2FIFOINT13");
extern volatile unsigned int C2FIFOINT13CLR;
extern volatile unsigned int C2FIFOINT13SET;
extern volatile unsigned int C2FIFOINT13INV;
extern volatile unsigned int C2FIFOUA13;
extern volatile unsigned int C2FIFOUA13CLR;
extern volatile unsigned int C2FIFOUA13SET;
extern volatile unsigned int C2FIFOUA13INV;
extern volatile unsigned int C2FIFOCI13;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI13bits_t;
extern volatile __C2FIFOCI13bits_t C2FIFOCI13bits __asm__ ("C2FIFOCI13");
extern volatile unsigned int C2FIFOCI13CLR;
extern volatile unsigned int C2FIFOCI13SET;
extern volatile unsigned int C2FIFOCI13INV;
extern volatile unsigned int C2FIFOCON14;
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
extern volatile __C2FIFOCON14bits_t C2FIFOCON14bits __asm__ ("C2FIFOCON14");
extern volatile unsigned int C2FIFOCON14CLR;
extern volatile unsigned int C2FIFOCON14SET;
extern volatile unsigned int C2FIFOCON14INV;
extern volatile unsigned int C2FIFOINT14;
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
extern volatile __C2FIFOINT14bits_t C2FIFOINT14bits __asm__ ("C2FIFOINT14");
extern volatile unsigned int C2FIFOINT14CLR;
extern volatile unsigned int C2FIFOINT14SET;
extern volatile unsigned int C2FIFOINT14INV;
extern volatile unsigned int C2FIFOUA14;
extern volatile unsigned int C2FIFOUA14CLR;
extern volatile unsigned int C2FIFOUA14SET;
extern volatile unsigned int C2FIFOUA14INV;
extern volatile unsigned int C2FIFOCI14;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI14bits_t;
extern volatile __C2FIFOCI14bits_t C2FIFOCI14bits __asm__ ("C2FIFOCI14");
extern volatile unsigned int C2FIFOCI14CLR;
extern volatile unsigned int C2FIFOCI14SET;
extern volatile unsigned int C2FIFOCI14INV;
extern volatile unsigned int C2FIFOCON15;
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
extern volatile __C2FIFOCON15bits_t C2FIFOCON15bits __asm__ ("C2FIFOCON15");
extern volatile unsigned int C2FIFOCON15CLR;
extern volatile unsigned int C2FIFOCON15SET;
extern volatile unsigned int C2FIFOCON15INV;
extern volatile unsigned int C2FIFOINT15;
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
extern volatile __C2FIFOINT15bits_t C2FIFOINT15bits __asm__ ("C2FIFOINT15");
extern volatile unsigned int C2FIFOINT15CLR;
extern volatile unsigned int C2FIFOINT15SET;
extern volatile unsigned int C2FIFOINT15INV;
extern volatile unsigned int C2FIFOUA15;
extern volatile unsigned int C2FIFOUA15CLR;
extern volatile unsigned int C2FIFOUA15SET;
extern volatile unsigned int C2FIFOUA15INV;
extern volatile unsigned int C2FIFOCI15;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI15bits_t;
extern volatile __C2FIFOCI15bits_t C2FIFOCI15bits __asm__ ("C2FIFOCI15");
extern volatile unsigned int C2FIFOCI15CLR;
extern volatile unsigned int C2FIFOCI15SET;
extern volatile unsigned int C2FIFOCI15INV;
extern volatile unsigned int C2FIFOCON16;
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
extern volatile __C2FIFOCON16bits_t C2FIFOCON16bits __asm__ ("C2FIFOCON16");
extern volatile unsigned int C2FIFOCON16CLR;
extern volatile unsigned int C2FIFOCON16SET;
extern volatile unsigned int C2FIFOCON16INV;
extern volatile unsigned int C2FIFOINT16;
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
extern volatile __C2FIFOINT16bits_t C2FIFOINT16bits __asm__ ("C2FIFOINT16");
extern volatile unsigned int C2FIFOINT16CLR;
extern volatile unsigned int C2FIFOINT16SET;
extern volatile unsigned int C2FIFOINT16INV;
extern volatile unsigned int C2FIFOUA16;
extern volatile unsigned int C2FIFOUA16CLR;
extern volatile unsigned int C2FIFOUA16SET;
extern volatile unsigned int C2FIFOUA16INV;
extern volatile unsigned int C2FIFOCI16;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI16bits_t;
extern volatile __C2FIFOCI16bits_t C2FIFOCI16bits __asm__ ("C2FIFOCI16");
extern volatile unsigned int C2FIFOCI16CLR;
extern volatile unsigned int C2FIFOCI16SET;
extern volatile unsigned int C2FIFOCI16INV;
extern volatile unsigned int C2FIFOCON17;
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
extern volatile __C2FIFOCON17bits_t C2FIFOCON17bits __asm__ ("C2FIFOCON17");
extern volatile unsigned int C2FIFOCON17CLR;
extern volatile unsigned int C2FIFOCON17SET;
extern volatile unsigned int C2FIFOCON17INV;
extern volatile unsigned int C2FIFOINT17;
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
extern volatile __C2FIFOINT17bits_t C2FIFOINT17bits __asm__ ("C2FIFOINT17");
extern volatile unsigned int C2FIFOINT17CLR;
extern volatile unsigned int C2FIFOINT17SET;
extern volatile unsigned int C2FIFOINT17INV;
extern volatile unsigned int C2FIFOUA17;
extern volatile unsigned int C2FIFOUA17CLR;
extern volatile unsigned int C2FIFOUA17SET;
extern volatile unsigned int C2FIFOUA17INV;
extern volatile unsigned int C2FIFOCI17;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI17bits_t;
extern volatile __C2FIFOCI17bits_t C2FIFOCI17bits __asm__ ("C2FIFOCI17");
extern volatile unsigned int C2FIFOCI17CLR;
extern volatile unsigned int C2FIFOCI17SET;
extern volatile unsigned int C2FIFOCI17INV;
extern volatile unsigned int C2FIFOCON18;
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
extern volatile __C2FIFOCON18bits_t C2FIFOCON18bits __asm__ ("C2FIFOCON18");
extern volatile unsigned int C2FIFOCON18CLR;
extern volatile unsigned int C2FIFOCON18SET;
extern volatile unsigned int C2FIFOCON18INV;
extern volatile unsigned int C2FIFOINT18;
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
extern volatile __C2FIFOINT18bits_t C2FIFOINT18bits __asm__ ("C2FIFOINT18");
extern volatile unsigned int C2FIFOINT18CLR;
extern volatile unsigned int C2FIFOINT18SET;
extern volatile unsigned int C2FIFOINT18INV;
extern volatile unsigned int C2FIFOUA18;
extern volatile unsigned int C2FIFOUA18CLR;
extern volatile unsigned int C2FIFOUA18SET;
extern volatile unsigned int C2FIFOUA18INV;
extern volatile unsigned int C2FIFOCI18;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI18bits_t;
extern volatile __C2FIFOCI18bits_t C2FIFOCI18bits __asm__ ("C2FIFOCI18");
extern volatile unsigned int C2FIFOCI18CLR;
extern volatile unsigned int C2FIFOCI18SET;
extern volatile unsigned int C2FIFOCI18INV;
extern volatile unsigned int C2FIFOCON19;
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
extern volatile __C2FIFOCON19bits_t C2FIFOCON19bits __asm__ ("C2FIFOCON19");
extern volatile unsigned int C2FIFOCON19CLR;
extern volatile unsigned int C2FIFOCON19SET;
extern volatile unsigned int C2FIFOCON19INV;
extern volatile unsigned int C2FIFOINT19;
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
extern volatile __C2FIFOINT19bits_t C2FIFOINT19bits __asm__ ("C2FIFOINT19");
extern volatile unsigned int C2FIFOINT19CLR;
extern volatile unsigned int C2FIFOINT19SET;
extern volatile unsigned int C2FIFOINT19INV;
extern volatile unsigned int C2FIFOUA19;
extern volatile unsigned int C2FIFOUA19CLR;
extern volatile unsigned int C2FIFOUA19SET;
extern volatile unsigned int C2FIFOUA19INV;
extern volatile unsigned int C2FIFOCI19;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI19bits_t;
extern volatile __C2FIFOCI19bits_t C2FIFOCI19bits __asm__ ("C2FIFOCI19");
extern volatile unsigned int C2FIFOCI19CLR;
extern volatile unsigned int C2FIFOCI19SET;
extern volatile unsigned int C2FIFOCI19INV;
extern volatile unsigned int C2FIFOCON20;
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
extern volatile __C2FIFOCON20bits_t C2FIFOCON20bits __asm__ ("C2FIFOCON20");
extern volatile unsigned int C2FIFOCON20CLR;
extern volatile unsigned int C2FIFOCON20SET;
extern volatile unsigned int C2FIFOCON20INV;
extern volatile unsigned int C2FIFOINT20;
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
extern volatile __C2FIFOINT20bits_t C2FIFOINT20bits __asm__ ("C2FIFOINT20");
extern volatile unsigned int C2FIFOINT20CLR;
extern volatile unsigned int C2FIFOINT20SET;
extern volatile unsigned int C2FIFOINT20INV;
extern volatile unsigned int C2FIFOUA20;
extern volatile unsigned int C2FIFOUA20CLR;
extern volatile unsigned int C2FIFOUA20SET;
extern volatile unsigned int C2FIFOUA20INV;
extern volatile unsigned int C2FIFOCI20;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI20bits_t;
extern volatile __C2FIFOCI20bits_t C2FIFOCI20bits __asm__ ("C2FIFOCI20");
extern volatile unsigned int C2FIFOCI20CLR;
extern volatile unsigned int C2FIFOCI20SET;
extern volatile unsigned int C2FIFOCI20INV;
extern volatile unsigned int C2FIFOCON21;
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
extern volatile __C2FIFOCON21bits_t C2FIFOCON21bits __asm__ ("C2FIFOCON21");
extern volatile unsigned int C2FIFOCON21CLR;
extern volatile unsigned int C2FIFOCON21SET;
extern volatile unsigned int C2FIFOCON21INV;
extern volatile unsigned int C2FIFOINT21;
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
extern volatile __C2FIFOINT21bits_t C2FIFOINT21bits __asm__ ("C2FIFOINT21");
extern volatile unsigned int C2FIFOINT21CLR;
extern volatile unsigned int C2FIFOINT21SET;
extern volatile unsigned int C2FIFOINT21INV;
extern volatile unsigned int C2FIFOUA21;
extern volatile unsigned int C2FIFOUA21CLR;
extern volatile unsigned int C2FIFOUA21SET;
extern volatile unsigned int C2FIFOUA21INV;
extern volatile unsigned int C2FIFOCI21;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI21bits_t;
extern volatile __C2FIFOCI21bits_t C2FIFOCI21bits __asm__ ("C2FIFOCI21");
extern volatile unsigned int C2FIFOCI21CLR;
extern volatile unsigned int C2FIFOCI21SET;
extern volatile unsigned int C2FIFOCI21INV;
extern volatile unsigned int C2FIFOCON22;
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
extern volatile __C2FIFOCON22bits_t C2FIFOCON22bits __asm__ ("C2FIFOCON22");
extern volatile unsigned int C2FIFOCON22CLR;
extern volatile unsigned int C2FIFOCON22SET;
extern volatile unsigned int C2FIFOCON22INV;
extern volatile unsigned int C2FIFOINT22;
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
extern volatile __C2FIFOINT22bits_t C2FIFOINT22bits __asm__ ("C2FIFOINT22");
extern volatile unsigned int C2FIFOINT22CLR;
extern volatile unsigned int C2FIFOINT22SET;
extern volatile unsigned int C2FIFOINT22INV;
extern volatile unsigned int C2FIFOUA22;
extern volatile unsigned int C2FIFOUA22CLR;
extern volatile unsigned int C2FIFOUA22SET;
extern volatile unsigned int C2FIFOUA22INV;
extern volatile unsigned int C2FIFOCI22;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI22bits_t;
extern volatile __C2FIFOCI22bits_t C2FIFOCI22bits __asm__ ("C2FIFOCI22");
extern volatile unsigned int C2FIFOCI22CLR;
extern volatile unsigned int C2FIFOCI22SET;
extern volatile unsigned int C2FIFOCI22INV;
extern volatile unsigned int C2FIFOCON23;
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
extern volatile __C2FIFOCON23bits_t C2FIFOCON23bits __asm__ ("C2FIFOCON23");
extern volatile unsigned int C2FIFOCON23CLR;
extern volatile unsigned int C2FIFOCON23SET;
extern volatile unsigned int C2FIFOCON23INV;
extern volatile unsigned int C2FIFOINT23;
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
extern volatile __C2FIFOINT23bits_t C2FIFOINT23bits __asm__ ("C2FIFOINT23");
extern volatile unsigned int C2FIFOINT23CLR;
extern volatile unsigned int C2FIFOINT23SET;
extern volatile unsigned int C2FIFOINT23INV;
extern volatile unsigned int C2FIFOUA23;
extern volatile unsigned int C2FIFOUA23CLR;
extern volatile unsigned int C2FIFOUA23SET;
extern volatile unsigned int C2FIFOUA23INV;
extern volatile unsigned int C2FIFOCI23;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI23bits_t;
extern volatile __C2FIFOCI23bits_t C2FIFOCI23bits __asm__ ("C2FIFOCI23");
extern volatile unsigned int C2FIFOCI23CLR;
extern volatile unsigned int C2FIFOCI23SET;
extern volatile unsigned int C2FIFOCI23INV;
extern volatile unsigned int C2FIFOCON24;
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
extern volatile __C2FIFOCON24bits_t C2FIFOCON24bits __asm__ ("C2FIFOCON24");
extern volatile unsigned int C2FIFOCON24CLR;
extern volatile unsigned int C2FIFOCON24SET;
extern volatile unsigned int C2FIFOCON24INV;
extern volatile unsigned int C2FIFOINT24;
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
extern volatile __C2FIFOINT24bits_t C2FIFOINT24bits __asm__ ("C2FIFOINT24");
extern volatile unsigned int C2FIFOINT24CLR;
extern volatile unsigned int C2FIFOINT24SET;
extern volatile unsigned int C2FIFOINT24INV;
extern volatile unsigned int C2FIFOUA24;
extern volatile unsigned int C2FIFOUA24CLR;
extern volatile unsigned int C2FIFOUA24SET;
extern volatile unsigned int C2FIFOUA24INV;
extern volatile unsigned int C2FIFOCI24;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI24bits_t;
extern volatile __C2FIFOCI24bits_t C2FIFOCI24bits __asm__ ("C2FIFOCI24");
extern volatile unsigned int C2FIFOCI24CLR;
extern volatile unsigned int C2FIFOCI24SET;
extern volatile unsigned int C2FIFOCI24INV;
extern volatile unsigned int C2FIFOCON25;
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
extern volatile __C2FIFOCON25bits_t C2FIFOCON25bits __asm__ ("C2FIFOCON25");
extern volatile unsigned int C2FIFOCON25CLR;
extern volatile unsigned int C2FIFOCON25SET;
extern volatile unsigned int C2FIFOCON25INV;
extern volatile unsigned int C2FIFOINT25;
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
extern volatile __C2FIFOINT25bits_t C2FIFOINT25bits __asm__ ("C2FIFOINT25");
extern volatile unsigned int C2FIFOINT25CLR;
extern volatile unsigned int C2FIFOINT25SET;
extern volatile unsigned int C2FIFOINT25INV;
extern volatile unsigned int C2FIFOUA25;
extern volatile unsigned int C2FIFOUA25CLR;
extern volatile unsigned int C2FIFOUA25SET;
extern volatile unsigned int C2FIFOUA25INV;
extern volatile unsigned int C2FIFOCI25;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI25bits_t;
extern volatile __C2FIFOCI25bits_t C2FIFOCI25bits __asm__ ("C2FIFOCI25");
extern volatile unsigned int C2FIFOCI25CLR;
extern volatile unsigned int C2FIFOCI25SET;
extern volatile unsigned int C2FIFOCI25INV;
extern volatile unsigned int C2FIFOCON26;
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
extern volatile __C2FIFOCON26bits_t C2FIFOCON26bits __asm__ ("C2FIFOCON26");
extern volatile unsigned int C2FIFOCON26CLR;
extern volatile unsigned int C2FIFOCON26SET;
extern volatile unsigned int C2FIFOCON26INV;
extern volatile unsigned int C2FIFOINT26;
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
extern volatile __C2FIFOINT26bits_t C2FIFOINT26bits __asm__ ("C2FIFOINT26");
extern volatile unsigned int C2FIFOINT26CLR;
extern volatile unsigned int C2FIFOINT26SET;
extern volatile unsigned int C2FIFOINT26INV;
extern volatile unsigned int C2FIFOUA26;
extern volatile unsigned int C2FIFOUA26CLR;
extern volatile unsigned int C2FIFOUA26SET;
extern volatile unsigned int C2FIFOUA26INV;
extern volatile unsigned int C2FIFOCI26;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI26bits_t;
extern volatile __C2FIFOCI26bits_t C2FIFOCI26bits __asm__ ("C2FIFOCI26");
extern volatile unsigned int C2FIFOCI26CLR;
extern volatile unsigned int C2FIFOCI26SET;
extern volatile unsigned int C2FIFOCI26INV;
extern volatile unsigned int C2FIFOCON27;
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
extern volatile __C2FIFOCON27bits_t C2FIFOCON27bits __asm__ ("C2FIFOCON27");
extern volatile unsigned int C2FIFOCON27CLR;
extern volatile unsigned int C2FIFOCON27SET;
extern volatile unsigned int C2FIFOCON27INV;
extern volatile unsigned int C2FIFOINT27;
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
extern volatile __C2FIFOINT27bits_t C2FIFOINT27bits __asm__ ("C2FIFOINT27");
extern volatile unsigned int C2FIFOINT27CLR;
extern volatile unsigned int C2FIFOINT27SET;
extern volatile unsigned int C2FIFOINT27INV;
extern volatile unsigned int C2FIFOUA27;
extern volatile unsigned int C2FIFOUA27CLR;
extern volatile unsigned int C2FIFOUA27SET;
extern volatile unsigned int C2FIFOUA27INV;
extern volatile unsigned int C2FIFOCI27;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI27bits_t;
extern volatile __C2FIFOCI27bits_t C2FIFOCI27bits __asm__ ("C2FIFOCI27");
extern volatile unsigned int C2FIFOCI27CLR;
extern volatile unsigned int C2FIFOCI27SET;
extern volatile unsigned int C2FIFOCI27INV;
extern volatile unsigned int C2FIFOCON28;
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
extern volatile __C2FIFOCON28bits_t C2FIFOCON28bits __asm__ ("C2FIFOCON28");
extern volatile unsigned int C2FIFOCON28CLR;
extern volatile unsigned int C2FIFOCON28SET;
extern volatile unsigned int C2FIFOCON28INV;
extern volatile unsigned int C2FIFOINT28;
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
extern volatile __C2FIFOINT28bits_t C2FIFOINT28bits __asm__ ("C2FIFOINT28");
extern volatile unsigned int C2FIFOINT28CLR;
extern volatile unsigned int C2FIFOINT28SET;
extern volatile unsigned int C2FIFOINT28INV;
extern volatile unsigned int C2FIFOUA28;
extern volatile unsigned int C2FIFOUA28CLR;
extern volatile unsigned int C2FIFOUA28SET;
extern volatile unsigned int C2FIFOUA28INV;
extern volatile unsigned int C2FIFOCI28;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI28bits_t;
extern volatile __C2FIFOCI28bits_t C2FIFOCI28bits __asm__ ("C2FIFOCI28");
extern volatile unsigned int C2FIFOCI28CLR;
extern volatile unsigned int C2FIFOCI28SET;
extern volatile unsigned int C2FIFOCI28INV;
extern volatile unsigned int C2FIFOCON29;
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
extern volatile __C2FIFOCON29bits_t C2FIFOCON29bits __asm__ ("C2FIFOCON29");
extern volatile unsigned int C2FIFOCON29CLR;
extern volatile unsigned int C2FIFOCON29SET;
extern volatile unsigned int C2FIFOCON29INV;
extern volatile unsigned int C2FIFOINT29;
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
extern volatile __C2FIFOINT29bits_t C2FIFOINT29bits __asm__ ("C2FIFOINT29");
extern volatile unsigned int C2FIFOINT29CLR;
extern volatile unsigned int C2FIFOINT29SET;
extern volatile unsigned int C2FIFOINT29INV;
extern volatile unsigned int C2FIFOUA29;
extern volatile unsigned int C2FIFOUA29CLR;
extern volatile unsigned int C2FIFOUA29SET;
extern volatile unsigned int C2FIFOUA29INV;
extern volatile unsigned int C2FIFOCI29;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI29bits_t;
extern volatile __C2FIFOCI29bits_t C2FIFOCI29bits __asm__ ("C2FIFOCI29");
extern volatile unsigned int C2FIFOCI29CLR;
extern volatile unsigned int C2FIFOCI29SET;
extern volatile unsigned int C2FIFOCI29INV;
extern volatile unsigned int C2FIFOCON30;
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
extern volatile __C2FIFOCON30bits_t C2FIFOCON30bits __asm__ ("C2FIFOCON30");
extern volatile unsigned int C2FIFOCON30CLR;
extern volatile unsigned int C2FIFOCON30SET;
extern volatile unsigned int C2FIFOCON30INV;
extern volatile unsigned int C2FIFOINT30;
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
extern volatile __C2FIFOINT30bits_t C2FIFOINT30bits __asm__ ("C2FIFOINT30");
extern volatile unsigned int C2FIFOINT30CLR;
extern volatile unsigned int C2FIFOINT30SET;
extern volatile unsigned int C2FIFOINT30INV;
extern volatile unsigned int C2FIFOUA30;
extern volatile unsigned int C2FIFOUA30CLR;
extern volatile unsigned int C2FIFOUA30SET;
extern volatile unsigned int C2FIFOUA30INV;
extern volatile unsigned int C2FIFOCI30;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI30bits_t;
extern volatile __C2FIFOCI30bits_t C2FIFOCI30bits __asm__ ("C2FIFOCI30");
extern volatile unsigned int C2FIFOCI30CLR;
extern volatile unsigned int C2FIFOCI30SET;
extern volatile unsigned int C2FIFOCI30INV;
extern volatile unsigned int C2FIFOCON31;
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
extern volatile __C2FIFOCON31bits_t C2FIFOCON31bits __asm__ ("C2FIFOCON31");
extern volatile unsigned int C2FIFOCON31CLR;
extern volatile unsigned int C2FIFOCON31SET;
extern volatile unsigned int C2FIFOCON31INV;
extern volatile unsigned int C2FIFOINT31;
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
extern volatile __C2FIFOINT31bits_t C2FIFOINT31bits __asm__ ("C2FIFOINT31");
extern volatile unsigned int C2FIFOINT31CLR;
extern volatile unsigned int C2FIFOINT31SET;
extern volatile unsigned int C2FIFOINT31INV;
extern volatile unsigned int C2FIFOUA31;
extern volatile unsigned int C2FIFOUA31CLR;
extern volatile unsigned int C2FIFOUA31SET;
extern volatile unsigned int C2FIFOUA31INV;
extern volatile unsigned int C2FIFOCI31;
typedef union {
  struct {
    unsigned CFIFOCI:5;
  };
  struct {
    unsigned w:32;
  };
} __C2FIFOCI31bits_t;
extern volatile __C2FIFOCI31bits_t C2FIFOCI31bits __asm__ ("C2FIFOCI31");
extern volatile unsigned int C2FIFOCI31CLR;
extern volatile unsigned int C2FIFOCI31SET;
extern volatile unsigned int C2FIFOCI31INV;
extern volatile unsigned int DEVCFG3;
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
extern volatile __DEVCFG3bits_t DEVCFG3bits __asm__ ("DEVCFG3");
extern volatile unsigned int DEVCFG2;
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
extern volatile __DEVCFG2bits_t DEVCFG2bits __asm__ ("DEVCFG2");
extern volatile unsigned int DEVCFG1;
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
extern volatile __DEVCFG1bits_t DEVCFG1bits __asm__ ("DEVCFG1");
extern volatile unsigned int DEVCFG0;
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
extern volatile __DEVCFG0bits_t DEVCFG0bits __asm__ ("DEVCFG0");
extern int __XC_UART;
typedef unsigned long _reg_t;
extern unsigned int _xchsrspss (unsigned int);
       
       
