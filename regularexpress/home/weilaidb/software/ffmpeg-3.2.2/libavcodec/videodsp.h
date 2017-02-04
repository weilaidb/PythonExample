#define AVCODEC_VIDEODSP_H
EMULATED_EDGE \
void ff_emulated_edge_mc_ ## depth(uint8_t *dst, const uint8_t *src, \
ptrdiff_t dst_stride, ptrdiff_t src_stride, \
int block_w, int block_h,\
int src_x, int src_y, int w, int h);
EMULATED_EDGE(8)
EMULATED_EDGE(16)
typedef struct VideoDSPContext  VideoDSPContext;
ff_videodsp_init;
ff_videodsp_init_aarch64;
ff_videodsp_init_arm;
ff_videodsp_init_ppc;
ff_videodsp_init_x86;
