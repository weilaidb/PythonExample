#if FF_API_AVPICTURE
FF_DISABLE_DEPRECATION_WARNINGS
int avpicture_fill(AVPicture *picture, const uint8_t *ptr,
enum AVPixelFormat pix_fmt, int width, int height)
int avpicture_layout(const AVPicture* src, enum AVPixelFormat pix_fmt, int width, int height,
unsigned char *dest, int dest_size)
int avpicture_get_size(enum AVPixelFormat pix_fmt, int width, int height)
int avpicture_alloc(AVPicture *picture,
enum AVPixelFormat pix_fmt, int width, int height)
void avpicture_free(AVPicture *picture)
void av_picture_copy(AVPicture *dst, const AVPicture *src,
enum AVPixelFormat pix_fmt, int width, int height)
FF_ENABLE_DEPRECATION_WARNINGS
