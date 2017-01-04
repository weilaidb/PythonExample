#define AVCODEC_MPEGVIDEODSP_H
void ff_gmc_c(uint8_t *dst, uint8_t *src, int stride, int h, int ox, int oy,
int dxx, int dxy, int dyx, int dyy, int shift, int r,
int width, int height);
typedef struct MpegVideoDSPContext  MpegVideoDSPContext;
void ff_mpegvideodsp_init(MpegVideoDSPContext *c);
void ff_mpegvideodsp_init_ppc(MpegVideoDSPContext *c);
void ff_mpegvideodsp_init_x86(MpegVideoDSPContext *c);
