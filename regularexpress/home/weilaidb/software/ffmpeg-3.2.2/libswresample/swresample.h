#define SWRESAMPLE_SWRESAMPLE_H
#if LIBSWRESAMPLE_VERSION_MAJOR < 1
#define SWR_CH_MAX 32
#define SWR_FLAG_RESAMPLE 1
enum SwrDitherType ;
enum SwrEngine ;
enum SwrFilterType ;
typedef struct SwrContext SwrContext;
*swr_get_class;
*swr_alloc;
swr_init;
swr_is_initialized;
*swr_alloc_set_opts;
swr_free;
swr_close;
swr_convert;
swr_next_pts;
swr_set_compensation;
swr_set_channel_mapping;
swr_build_matrix;
swr_set_matrix;
swr_drop_output;
swr_inject_silence;
swr_get_delay;
swr_get_out_samples;
swresample_version;
*swresample_configuration;
*swresample_license;
swr_convert_frame;
swr_config_frame;
