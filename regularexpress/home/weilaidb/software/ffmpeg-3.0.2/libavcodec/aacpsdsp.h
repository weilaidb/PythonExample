#define AVCODEC_AACPSDSP_H
#define PS_QMF_TIME_SLOTS 32
#define PS_AP_LINKS 3
#define PS_MAX_AP_DELAY 5
typedef struct PSDSPContext  PSDSPContext;
void AAC_RENAME(ff_psdsp_init)(PSDSPContext *s);
void ff_psdsp_init_arm(PSDSPContext *s);
void ff_psdsp_init_mips(PSDSPContext *s);
void ff_psdsp_init_x86(PSDSPContext *s);
