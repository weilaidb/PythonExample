#if FF_API_GETCHROMA
void avcodec_get_chroma_sub_sample(enum AVPixelFormat pix_fmt, int *h_shift, int *v_shift)
int avcodec_get_pix_fmt_loss(enum AVPixelFormat dst_pix_fmt,
enum AVPixelFormat src_pix_fmt,
int has_alpha)
enum AVPixelFormat avcodec_find_best_pix_fmt_of_2(enum AVPixelFormat dst_pix_fmt1, enum AVPixelFormat dst_pix_fmt2,
enum AVPixelFormat src_pix_fmt, int has_alpha, int *loss_ptr)
#if AV_HAVE_INCOMPATIBLE_LIBAV_ABI
enum AVPixelFormat avcodec_find_best_pix_fmt2(const enum AVPixelFormat *pix_fmt_list,
enum AVPixelFormat src_pix_fmt,
int has_alpha, int *loss_ptr)
enum AVPixelFormat avcodec_find_best_pix_fmt2(enum AVPixelFormat dst_pix_fmt1, enum AVPixelFormat dst_pix_fmt2,
enum AVPixelFormat src_pix_fmt, int has_alpha, int *loss_ptr)
enum AVPixelFormat avcodec_find_best_pix_fmt_of_list(const enum AVPixelFormat *pix_fmt_list,
enum AVPixelFormat src_pix_fmt,
int has_alpha, int *loss_ptr)
#if FF_API_AVPICTURE
FF_DISABLE_DEPRECATION_WARNINGS
static inline int is_yuv_planar(const AVPixFmtDescriptor *desc)
int av_picture_crop(AVPicture *dst, const AVPicture *src,
enum AVPixelFormat pix_fmt, int top_band, int left_band)
int av_picture_pad(AVPicture *dst, const AVPicture *src, int height, int width,
enum AVPixelFormat pix_fmt, int padtop, int padbottom, int padleft, int padright,
int *color)
int main(void)
FF_ENABLE_DEPRECATION_WARNINGS
