#define AVRESAMPLE_AVRESAMPLE_H
#define AVRESAMPLE_MAX_CHANNELS 32
typedef struct AVAudioResampleContext AVAudioResampleContext;
enum AVMixCoeffType ;
enum AVResampleFilterType ;
enum AVResampleDitherMethod ;
avresample_version;
*avresample_configuration;
*avresample_license;
*avresample_get_class;
*avresample_alloc_context;
avresample_open;
avresample_is_open;
avresample_close;
avresample_free;
avresample_build_matrix;
avresample_get_matrix;
avresample_set_matrix;
avresample_set_channel_mapping;
avresample_set_compensation;
avresample_get_out_samples;
avresample_convert;
avresample_get_delay;
avresample_available;
avresample_read;
avresample_convert_frame;
avresample_config;
