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
typedef struct LibOpenJPEGContext  LibOpenJPEGContext;
static void error_callback(const char *msg, void *data)
static void warning_callback(const char *msg, void *data)
static void info_callback(const char *msg, void *data)
#if OPENJPEG_MAJOR_VERSION == 2
typedef struct PacketWriter  PacketWriter;
static OPJ_SIZE_T stream_write(void *out_buffer, OPJ_SIZE_T nb_bytes, void *user_data)
static OPJ_OFF_T stream_skip(OPJ_OFF_T nb_bytes, void *user_data)
static OPJ_BOOL stream_seek(OPJ_OFF_T nb_bytes, void *user_data)
static void cinema_parameters(opj_cparameters_t *p)
static opj_image_t *mj2_create_image(AVCodecContext *avctx, opj_cparameters_t *parameters)
static av_cold int libopenjpeg_encode_init(AVCodecContext *avctx)
static int libopenjpeg_copy_packed8(AVCodecContext *avctx, const AVFrame *frame, opj_image_t *image)
static int libopenjpeg_copy_packed12(AVCodecContext *avctx, const AVFrame *frame, opj_image_t *image)
static int libopenjpeg_copy_packed16(AVCodecContext *avctx, const AVFrame *frame, opj_image_t *image)
static int libopenjpeg_copy_unpacked8(AVCodecContext *avctx, const AVFrame *frame, opj_image_t *image)
static int libopenjpeg_copy_unpacked16(AVCodecContext *avctx, const AVFrame *frame, opj_image_t *image)
static int libopenjpeg_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
static av_cold int libopenjpeg_encode_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(LibOpenJPEGContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass openjpeg_class = ;
AVCodec ff_libopenjpeg_encoder = ;
