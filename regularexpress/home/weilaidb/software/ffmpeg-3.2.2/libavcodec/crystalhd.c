#define _XOPEN_SOURCE 600
#if HAVE_UNISTD_H
#define OUTPUT_PROC_TIMEOUT 50
#define TIMESTAMP_UNIT 100000
#define BASE_WAIT 10000
#define WAIT_UNIT 1000
typedef enum  CopyRet;
typedef struct OpaqueList  OpaqueList;
typedef struct  CHDContext;
static const AVOption options[] = ;
static inline BC_MEDIA_SUBTYPE id2subtype(CHDContext *priv, enum AVCodecID id)
static inline void print_frame_info(CHDContext *priv, BC_DTS_PROC_OUT *output)
static uint64_t opaque_list_push(CHDContext *priv, uint64_t reordered_opaque,
uint8_t pic_type)
static OpaqueList *opaque_list_pop(CHDContext *priv, uint64_t fake_timestamp)
static void flush(AVCodecContext *avctx)
static av_cold int uninit(AVCodecContext *avctx)
static av_cold int init_bsf(AVCodecContext *avctx, const char *bsf_name)
static av_cold int init(AVCodecContext *avctx)
static inline CopyRet copy_frame(AVCodecContext *avctx,
BC_DTS_PROC_OUT *output,
void *data, int *got_frame)
static inline CopyRet receive_frame(AVCodecContext *avctx,
void *data, int *got_frame)
static int decode(AVCodecContext *avctx, void *data, int *got_frame, AVPacket *avpkt)
#if CONFIG_H264_CRYSTALHD_DECODER
static AVClass h264_class = ;
AVCodec ff_h264_crystalhd_decoder = ;
#if CONFIG_MPEG2_CRYSTALHD_DECODER
static AVClass mpeg2_class = ;
AVCodec ff_mpeg2_crystalhd_decoder = ;
#if CONFIG_MPEG4_CRYSTALHD_DECODER
static AVClass mpeg4_class = ;
AVCodec ff_mpeg4_crystalhd_decoder = ;
#if CONFIG_MSMPEG4_CRYSTALHD_DECODER
static AVClass msmpeg4_class = ;
AVCodec ff_msmpeg4_crystalhd_decoder = ;
#if CONFIG_VC1_CRYSTALHD_DECODER
static AVClass vc1_class = ;
AVCodec ff_vc1_crystalhd_decoder = ;
#if CONFIG_WMV3_CRYSTALHD_DECODER
static AVClass wmv3_class = ;
AVCodec ff_wmv3_crystalhd_decoder = ;
