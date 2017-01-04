static AVOnce aac_table_init = AV_ONCE_INIT;
static void put_audio_specific_config(AVCodecContext *avctx)
void ff_quantize_band_cost_cache_init(struct AACEncContext *s)
#define WINDOW_FUNC(type) \
static void apply_ ##type ##_window(AVFloatDSPContext *fdsp, \
SingleChannelElement *sce, \
const float *audio)
WINDOW_FUNC(only_long)
WINDOW_FUNC(long_start)
WINDOW_FUNC(long_stop)
WINDOW_FUNC(eight_short)
static void (*const apply_window[4])(AVFloatDSPContext *fdsp,
SingleChannelElement *sce,
const float *audio) = ;
static void apply_window_and_mdct(AACEncContext *s, SingleChannelElement *sce,
float *audio)
static void put_ics_info(AACEncContext *s, IndividualChannelStream *info)
static void encode_ms_info(PutBitContext *pb, ChannelElement *cpe)
static void adjust_frame_information(ChannelElement *cpe, int chans)
static void apply_intensity_stereo(ChannelElement *cpe)
static void apply_mid_side_stereo(ChannelElement *cpe)
static void encode_band_info(AACEncContext *s, SingleChannelElement *sce)
static void encode_scale_factors(AVCodecContext *avctx, AACEncContext *s,
SingleChannelElement *sce)
static void encode_pulses(AACEncContext *s, Pulse *pulse)
static void encode_spectral_coeffs(AACEncContext *s, SingleChannelElement *sce)
static void avoid_clipping(AACEncContext *s, SingleChannelElement *sce)
static int encode_individual_channel(AVCodecContext *avctx, AACEncContext *s,
SingleChannelElement *sce,
int common_window)
static void put_bitstream_info(AACEncContext *s, const char *name)
static void copy_input_samples(AACEncContext *s, const AVFrame *frame)
static int aac_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
static av_cold int aac_encode_end(AVCodecContext *avctx)
static av_cold int dsp_init(AVCodecContext *avctx, AACEncContext *s)
static av_cold int alloc_buffers(AVCodecContext *avctx, AACEncContext *s)
static av_cold void aac_encode_init_tables(void)
static av_cold int aac_encode_init(AVCodecContext *avctx)
#define AACENC_FLAGS AV_OPT_FLAG_ENCODING_PARAM | AV_OPT_FLAG_AUDIO_PARAM
static const AVOption aacenc_options[] = ;
static const AVClass aacenc_class = ;
static const AVCodecDefault aac_encode_defaults[] = ;
AVCodec ff_aac_encoder = ;
