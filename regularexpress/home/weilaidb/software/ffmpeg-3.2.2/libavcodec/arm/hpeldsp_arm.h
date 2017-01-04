#define AVCODEC_ARM_HPELDSP_ARM_H
void ff_hpeldsp_init_armv6(HpelDSPContext *c, int flags);
void ff_hpeldsp_init_neon(HpelDSPContext *c, int flags);
