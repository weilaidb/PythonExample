#if HAVE_UNISTD_H
#if HAVE_IO_H
#define BUFFER_SIZE         1024
BUFFER_REMAINING (BUFFER_SIZE - strlen(x))
BUFFER_CAT       (&((x)[strlen(x)]))
struct xvid_context ;
struct xvid_ff_pass1 ;
xvid_encode_close;
xvid_encode_frame;
xvid_ff_2pass_create
xvid_ff_2pass_destroy
xvid_ff_2pass_before
xvid_ff_2pass_after
xvid_ff_2pass
xvid_strip_vol_header
xvid_correct_framerate
xvid_encode_init
xvid_encode_frame
xvid_encode_close
OFFSET offsetof(struct xvid_context, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass xvid_class = ;
AVCodec ff_libxvid_encoder = ;
