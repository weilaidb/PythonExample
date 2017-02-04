typedef struct LibopusEncOpts  LibopusEncOpts;
typedef struct LibopusEncContext  LibopusEncContext;
static const uint8_t opus_coupled_streams[8] = ;
static const uint8_t opus_vorbis_channel_map[8][8] = ;
static const uint8_t libavcodec_libopus_channel_map[8][8] = ;
libopus_write_header
libopus_configure_encoder
libopus_check_max_channels
libopus_check_vorbis_layout
libopus_validate_layout_and_get_channel_map
libopus_encode_init
libopus_copy_samples_with_channel_map
libopus_encode
libopus_encode_close
OFFSET offsetof(LibopusEncContext, opts.x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption libopus_options[] = ;
static const AVClass libopus_class = ;
static const AVCodecDefault libopus_defaults[] = ;
static const int libopus_sample_rates[] = ;
AVCodec ff_libopus_encoder = ;
