#define AVDEVICE_V4L2_COMMON_H
#undef __STRICT_ANSI__
#if HAVE_SYS_VIDEOIO_H
#if HAVE_ASM_TYPES_H
struct fmt_map ;
extern const struct fmt_map ff_fmt_conversion_table[];
ff_fmt_ff2v4l;
ff_fmt_v4l2ff;
ff_fmt_v4l2codec;
