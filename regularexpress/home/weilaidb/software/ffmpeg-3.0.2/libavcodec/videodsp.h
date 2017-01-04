#define AVCODEC_VIDEODSP_H
#define EMULATED_EDGE(depth) \
void ff_emulated_edge_mc_ ## depth(uint8_t *dst, const uint8_t *src, \
ptrdiff_t dst_stride, ptrdiff_t src_stride, \
int block_w, int block_h,\
int src_x, int src_y, int w, int h);
EMULATED_EDGE(8)
EMULATED_EDGE(16)
typedef struct VideoDSPContext  VideoDSPContext;
void ff_videodsp_init(VideoDSPContext *ctx, int bpc);
void ff_videodsp_init_aarch64(VideoDSPContext *ctx, int bpc);
void ff_videodsp_init_arm(VideoDSPContext *ctx, int bpc);
void ff_videodsp_init_ppc(VideoDSPContext *ctx, int bpc);
void ff_videodsp_init_x86(VideoDSPContext *ctx, int bpc);
