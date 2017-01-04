#define  OPJ_STATIC
#if HAVE_OPENJPEG_2_1_OPENJPEG_H
#  include <openjpeg-2.1/openjpeg.h>
#elif HAVE_OPENJPEG_2_0_OPENJPEG_H
#  include <openjpeg-2.0/openjpeg.h>
#elif HAVE_OPENJPEG_1_5_OPENJPEG_H
#  include <openjpeg-1.5/openjpeg.h>
#  include <openjpeg.h>
#if HAVE_OPENJPEG_2_1_OPENJPEG_H || HAVE_OPENJPEG_2_0_OPENJPEG_H
#  define OPENJPEG_MAJOR_VERSION 2
#  define OPJ(x) OPJ_##x
#  define OPENJPEG_MAJOR_VERSION 1
#  define OPJ(x) x
#define JP2_SIG_TYPE    0x6A502020
#define JP2_SIG_VALUE   0x0D0A870A
#define RGB_PIXEL_FORMATS  AV_PIX_FMT_RGB24, AV_PIX_FMT_RGBA,                 \
AV_PIX_FMT_RGB48, AV_PIX_FMT_RGBA64
#define GRAY_PIXEL_FORMATS AV_PIX_FMT_GRAY8, AV_PIX_FMT_YA8,                  \
AV_PIX_FMT_GRAY16, AV_PIX_FMT_YA16
#define YUV_PIXEL_FORMATS  AV_PIX_FMT_YUV410P, AV_PIX_FMT_YUV411P, AV_PIX_FMT_YUVA420P, \
AV_PIX_FMT_YUV420P, AV_PIX_FMT_YUV422P, AV_PIX_FMT_YUVA422P, \
AV_PIX_FMT_YUV440P, AV_PIX_FMT_YUV444P, AV_PIX_FMT_YUVA444P, \
AV_PIX_FMT_YUV420P9, AV_PIX_FMT_YUV422P9, AV_PIX_FMT_YUV444P9, \
AV_PIX_FMT_YUVA420P9, AV_PIX_FMT_YUVA422P9, AV_PIX_FMT_YUVA444P9, \
AV_PIX_FMT_YUV420P10, AV_PIX_FMT_YUV422P10, AV_PIX_FMT_YUV444P10, \
AV_PIX_FMT_YUVA420P10, AV_PIX_FMT_YUVA422P10, AV_PIX_FMT_YUVA444P10, \
AV_PIX_FMT_YUV420P12, AV_PIX_FMT_YUV422P12, AV_PIX_FMT_YUV444P12, \
AV_PIX_FMT_YUV420P14, AV_PIX_FMT_YUV422P14, AV_PIX_FMT_YUV444P14, \
AV_PIX_FMT_YUV420P16, AV_PIX_FMT_YUV422P16, AV_PIX_FMT_YUV444P16, \
AV_PIX_FMT_YUVA420P16, AV_PIX_FMT_YUVA422P16, AV_PIX_FMT_YUVA444P16
#define XYZ_PIXEL_FORMATS  AV_PIX_FMT_XYZ12
static const enum AVPixelFormat libopenjpeg_rgb_pix_fmts[]  = ;
static const enum AVPixelFormat libopenjpeg_gray_pix_fmts[] = ;
static const enum AVPixelFormat libopenjpeg_yuv_pix_fmts[]  = ;
static const enum AVPixelFormat libopenjpeg_all_pix_fmts[]  = ;
typedef struct LibOpenJPEGContext  LibOpenJPEGContext;
static void error_callback(const char *msg, void *data)
static void warning_callback(const char *msg, void *data)
static void info_callback(const char *msg, void *data)
#if OPENJPEG_MAJOR_VERSION == 2
typedef struct BufferReader  BufferReader;
static OPJ_SIZE_T stream_read(void *out_buffer, OPJ_SIZE_T nb_bytes, void *user_data)
static OPJ_OFF_T stream_skip(OPJ_OFF_T nb_bytes, void *user_data)
static OPJ_BOOL stream_seek(OPJ_OFF_T nb_bytes, void *user_data)
static inline int libopenjpeg_matches_pix_fmt(const opj_image_t *image, enum AVPixelFormat pix_fmt)
static inline enum AVPixelFormat libopenjpeg_guess_pix_fmt(const opj_image_t *image)
static inline int libopenjpeg_ispacked(enum AVPixelFormat pix_fmt)
static inline void libopenjpeg_copy_to_packed8(AVFrame *picture, opj_image_t *image)
static inline void libopenjpeg_copy_to_packed16(AVFrame *picture, opj_image_t *image)
static inline void libopenjpeg_copyto8(AVFrame *picture, opj_image_t *image)
static inline void libopenjpeg_copyto16(AVFrame *picture, opj_image_t *image)
static av_cold int libopenjpeg_decode_init(AVCodecContext *avctx)
static int libopenjpeg_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold void libopenjpeg_static_init(AVCodec *codec)
#define OFFSET(x) offsetof(LibOpenJPEGContext, x)
#define VD AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass openjpeg_class = ;
AVCodec ff_libopenjpeg_decoder = ;
