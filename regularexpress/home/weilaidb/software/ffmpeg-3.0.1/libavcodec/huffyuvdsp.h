#define AVCODEC_HUFFYUVDSP_H
#if HAVE_BIGENDIAN
#define B 3
#define G 2
#define R 1
#define A 0
#define B 0
#define G 1
#define R 2
#define A 3
typedef struct HuffYUVDSPContext  HuffYUVDSPContext;
void ff_huffyuvdsp_init(HuffYUVDSPContext *c);
void ff_huffyuvdsp_init_ppc(HuffYUVDSPContext *c);
void ff_huffyuvdsp_init_x86(HuffYUVDSPContext *c);
