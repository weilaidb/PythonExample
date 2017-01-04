#define AVFILTER_LSWSUTILS_H
int ff_scale_image(uint8_t *dst_data[4], int dst_linesize[4],
int dst_w, int dst_h, enum AVPixelFormat dst_pix_fmt,
uint8_t *const src_data[4], int src_linesize[4],
int src_w, int src_h, enum AVPixelFormat src_pix_fmt,
void *log_ctx);
