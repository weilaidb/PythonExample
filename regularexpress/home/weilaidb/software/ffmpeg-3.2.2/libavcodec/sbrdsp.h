#define AVCODEC_SBRDSP_H
typedef struct SBRDSPContext  SBRDSPContext;
extern const INTFLOAT AAC_RENAME(ff_sbr_noise_table)[][2];
void AAC_RENAME(ff_sbrdsp_init)(SBRDSPContext *s);
void ff_sbrdsp_init_arm(SBRDSPContext *s);
void ff_sbrdsp_init_x86(SBRDSPContext *s);
void ff_sbrdsp_init_mips(SBRDSPContext *s);
