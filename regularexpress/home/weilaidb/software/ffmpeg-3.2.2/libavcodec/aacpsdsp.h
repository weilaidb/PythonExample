#define AVCODEC_AACPSDSP_H
#define PS_QMF_TIME_SLOTS 32
#define PS_AP_LINKS 3
#define PS_MAX_AP_DELAY 5
typedef struct PSDSPContext  PSDSPContext;
AAC_RENAME(PSDSPContext *s);
ff_psdsp_init_arm;
ff_psdsp_init_mips;
ff_psdsp_init_x86;
