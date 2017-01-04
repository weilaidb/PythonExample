#define AVCODEC_ALACDSP_H
typedef struct ALACDSPContext  ALACDSPContext;
void ff_alacdsp_init(ALACDSPContext *c);
void ff_alacdsp_init_x86(ALACDSPContext *c);
