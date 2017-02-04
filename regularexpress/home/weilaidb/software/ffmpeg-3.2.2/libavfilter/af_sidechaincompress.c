typedef struct SidechainCompressContext  SidechainCompressContext;
OFFSET offsetof(SidechainCompressContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption options[] = ;
AVFILTER_DEFINE_CLASS;
#define FAKE_INFINITY (65536.0 * 65536.0)
IS_FAKE_INFINITY (fabs(value-FAKE_INFINITY) < 1.0)
output_gain
compressor_config_output
compressor
#if CONFIG_SIDECHAINCOMPRESS_FILTER
filter_frame
request_frame
query_formats
config_output
uninit
static const AVFilterPad sidechaincompress_inputs[] = ;
static const AVFilterPad sidechaincompress_outputs[] = ;
AVFilter ff_af_sidechaincompress = ;
#if CONFIG_ACOMPRESSOR_FILTER
acompressor_filter_frame
acompressor_query_formats
AVFILTER_DEFINE_CLASS;
static const AVFilterPad acompressor_inputs[] = ;
static const AVFilterPad acompressor_outputs[] = ;
AVFilter ff_af_acompressor = ;
