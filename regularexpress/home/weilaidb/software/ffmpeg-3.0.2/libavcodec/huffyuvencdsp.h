#define AVCODEC_HUFFYUVENCDSP_H
typedef struct HuffYUVEncDSPContext  HuffYUVEncDSPContext;
void ff_huffyuvencdsp_init(HuffYUVEncDSPContext *c);
void ff_huffyuvencdsp_init_x86(HuffYUVEncDSPContext *c);
