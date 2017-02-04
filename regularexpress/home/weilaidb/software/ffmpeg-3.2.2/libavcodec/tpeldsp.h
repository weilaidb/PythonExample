#define AVCODEC_TPELDSP_H
typedef void (*tpel_mc_func)(uint8_t *block,
const uint8_t *pixels,
int line_size, int w, int h);
typedef struct TpelDSPContext  TpelDSPContext;
ff_tpeldsp_init;
