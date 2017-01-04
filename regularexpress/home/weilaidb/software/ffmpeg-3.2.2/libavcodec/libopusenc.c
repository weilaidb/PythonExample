typedef struct LibopusEncOpts  LibopusEncOpts;
typedef struct LibopusEncContext  LibopusEncContext;
static const uint8_t opus_coupled_streams[8] = ;
static const uint8_t opus_vorbis_channel_map[8][8] = ;
static const uint8_t libavcodec_libopus_channel_map[8][8] = ;
static void libopus_write_header(AVCodecContext *avctx, int stream_count,
int coupled_stream_count,
int mapping_family,
const uint8_t *channel_mapping)
static int libopus_configure_encoder(AVCodecContext *avctx, OpusMSEncoder *enc,
LibopusEncOpts *opts)
static int libopus_check_max_channels(AVCodecContext *avctx,
int max_channels)
static int libopus_check_vorbis_layout(AVCodecContext *avctx, int mapping_family)
static int libopus_validate_layout_and_get_channel_map(
AVCodecContext *avctx,
int mapping_family,
const uint8_t ** channel_map_result)
static av_cold int libopus_encode_init(AVCodecContext *avctx)
static void libopus_copy_samples_with_channel_map(
uint8_t *dst, const uint8_t *src, const uint8_t *channel_map,
int nb_channels, int nb_samples, int bytes_per_sample)
static int libopus_encode(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
static av_cold int libopus_encode_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(LibopusEncContext, opts.x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption libopus_options[] = ;
static const AVClass libopus_class = ;
static const AVCodecDefault libopus_defaults[] = ;
static const int libopus_sample_rates[] = ;
AVCodec ff_libopus_encoder = ;
