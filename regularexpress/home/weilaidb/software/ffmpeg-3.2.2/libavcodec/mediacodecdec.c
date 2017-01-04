typedef struct MediaCodecH264DecContext  MediaCodecH264DecContext;
static av_cold int mediacodec_decode_close(AVCodecContext *avctx)
#if CONFIG_H264_MEDIACODEC_DECODER || CONFIG_HEVC_MEDIACODEC_DECODER
static int h2645_ps_to_nalu(const uint8_t *src, int src_size, uint8_t **out, int *out_size)
#if CONFIG_H264_MEDIACODEC_DECODER
static int h264_set_extradata(AVCodecContext *avctx, FFAMediaFormat *format)
#if CONFIG_HEVC_MEDIACODEC_DECODER
static int hevc_set_extradata(AVCodecContext *avctx, FFAMediaFormat *format)
#if CONFIG_MPEG4_MEDIACODEC_DECODER
static int mpeg4_set_extradata(AVCodecContext *avctx, FFAMediaFormat *format)
#if CONFIG_VP8_MEDIACODEC_DECODER || CONFIG_VP9_MEDIACODEC_DECODER
static int vpx_set_extradata(AVCodecContext *avctx, FFAMediaFormat *format)
static av_cold int mediacodec_decode_init(AVCodecContext *avctx)
static int mediacodec_process_data(AVCodecContext *avctx, AVFrame *frame,
int *got_frame, AVPacket *pkt)
static int mediacodec_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static void mediacodec_decode_flush(AVCodecContext *avctx)
#if CONFIG_H264_MEDIACODEC_DECODER
AVCodec ff_h264_mediacodec_decoder = ;
#if CONFIG_HEVC_MEDIACODEC_DECODER
AVCodec ff_hevc_mediacodec_decoder = ;
#if CONFIG_MPEG4_MEDIACODEC_DECODER
AVCodec ff_mpeg4_mediacodec_decoder = ;
#if CONFIG_VP8_MEDIACODEC_DECODER
AVCodec ff_vp8_mediacodec_decoder = ;
#if CONFIG_VP9_MEDIACODEC_DECODER
AVCodec ff_vp9_mediacodec_decoder = ;
