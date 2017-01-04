#define AVDEVICE_V4L2_COMMON_H
#undef __STRICT_ANSI__
#if HAVE_SYS_VIDEOIO_H
#if HAVE_ASM_TYPES_H
struct fmt_map ;
extern const struct fmt_map ff_fmt_conversion_table[];
uint32_t ff_fmt_ff2v4l(enum AVPixelFormat pix_fmt, enum AVCodecID codec_id);
enum AVPixelFormat ff_fmt_v4l2ff(uint32_t v4l2_fmt, enum AVCodecID codec_id);
enum AVCodecID ff_fmt_v4l2codec(uint32_t v4l2_fmt);
