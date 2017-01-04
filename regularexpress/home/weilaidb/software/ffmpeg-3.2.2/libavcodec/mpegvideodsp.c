static void gmc1_c(uint8_t *dst, uint8_t *src, int stride, int h,
int x16, int y16, int rounder)
void ff_gmc_c(uint8_t *dst, uint8_t *src, int stride, int h, int ox, int oy,
int dxx, int dxy, int dyx, int dyy, int shift, int r,
int width, int height)
av_cold void ff_mpegvideodsp_init(MpegVideoDSPContext *c)
