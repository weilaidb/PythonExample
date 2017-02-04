static AVOnce aac_table_init = AV_ONCE_INIT;
put_audio_specific_config
ff_quantize_band_cost_cache_init
WINDOW_FUNC \
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
apply_window_and_mdct
put_ics_info
encode_ms_info
adjust_frame_information
apply_intensity_stereo
apply_mid_side_stereo
encode_band_info
encode_scale_factors
encode_pulses
encode_spectral_coeffs
avoid_clipping
encode_individual_channel
put_bitstream_info
copy_input_samples
aac_encode_frame
aac_encode_end
dsp_init
alloc_buffers
aac_encode_init_tables
aac_encode_init
#define AACENC_FLAGS AV_OPT_FLAG_ENCODING_PARAM | AV_OPT_FLAG_AUDIO_PARAM
static const AVOption aacenc_options[] = ;
static const AVClass aacenc_class = ;
static const AVCodecDefault aac_encode_defaults[] = ;
AVCodec ff_aac_encoder = ;
