#define AVCODEC_TTADSP_H
typedef struct TTADSPContext  TTADSPContext;
void ff_ttadsp_init(TTADSPContext *c);
void ff_ttadsp_init_x86(TTADSPContext *c);
