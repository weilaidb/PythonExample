#define AVCODEC_TTAENCDSP_H
typedef struct TTAEncDSPContext  TTAEncDSPContext;
void ff_ttaencdsp_init(TTAEncDSPContext *c);
void ff_ttaencdsp_init_x86(TTAEncDSPContext *c);
