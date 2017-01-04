const struct fmt_map ff_fmt_conversion_table[] = ;
uint32_t ff_fmt_ff2v4l(enum AVPixelFormat pix_fmt, enum AVCodecID codec_id)
enum AVPixelFormat ff_fmt_v4l2ff(uint32_t v4l2_fmt, enum AVCodecID codec_id)
enum AVCodecID ff_fmt_v4l2codec(uint32_t v4l2_fmt)
