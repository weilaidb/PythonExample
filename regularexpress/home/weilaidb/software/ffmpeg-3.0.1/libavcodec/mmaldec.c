typedef struct FFBufferEntry  FFBufferEntry;
typedef struct FFPoolRef  FFPoolRef;
typedef struct FFBufferRef  FFBufferRef;
typedef struct MMALDecodeContext  MMALDecodeContext;
#define MAX_DELAYED_FRAMES 16
static void ffmmal_poolref_unref(FFPoolRef *ref)
static void ffmmal_release_frame(void *opaque, uint8_t *data)
static int ffmmal_set_ref(AVFrame *frame, FFPoolRef *pool,
MMAL_BUFFER_HEADER_T *buffer)
static void ffmmal_stop_decoder(AVCodecContext *avctx)
static av_cold int ffmmal_close_decoder(AVCodecContext *avctx)
static void input_callback(MMAL_PORT_T *port, MMAL_BUFFER_HEADER_T *buffer)
static void output_callback(MMAL_PORT_T *port, MMAL_BUFFER_HEADER_T *buffer)
static void control_port_cb(MMAL_PORT_T *port, MMAL_BUFFER_HEADER_T *buffer)
static int ffmmal_fill_output_port(AVCodecContext *avctx)
static enum AVColorSpace ffmmal_csp_to_av_csp(MMAL_FOURCC_T fourcc)
static int ffmal_update_format(AVCodecContext *avctx)
static av_cold int ffmmal_init_decoder(AVCodecContext *avctx)
static void ffmmal_flush(AVCodecContext *avctx)
static int ffmmal_add_packet(AVCodecContext *avctx, AVPacket *avpkt,
int is_extradata)
static int ffmmal_fill_input_port(AVCodecContext *avctx)
static int ffmal_copy_frame(AVCodecContext *avctx,  AVFrame *frame,
MMAL_BUFFER_HEADER_T *buffer)
static int ffmmal_read_frame(AVCodecContext *avctx, AVFrame *frame, int *got_frame)
static int ffmmal_decode(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
AVHWAccel ff_h264_mmal_hwaccel = ;
AVHWAccel ff_mpeg2_mmal_hwaccel = ;
AVHWAccel ff_mpeg4_mmal_hwaccel = ;
AVHWAccel ff_vc1_mmal_hwaccel = ;
static const AVOption options[]=;
#define FFMMAL_DEC_CLASS(NAME) \
static const AVClass ffmmal_##NAME##_dec_class = ;
#define FFMMAL_DEC(NAME, ID) \
FFMMAL_DEC_CLASS(NAME) \
AVCodec ff_##NAME##_mmal_decoder = ;
FFMMAL_DEC(h264, AV_CODEC_ID_H264)
FFMMAL_DEC(mpeg2, AV_CODEC_ID_MPEG2VIDEO)
FFMMAL_DEC(mpeg4, AV_CODEC_ID_MPEG4)
FFMMAL_DEC(vc1, AV_CODEC_ID_VC1)
