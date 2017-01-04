#define AVRESAMPLE_AVRESAMPLE_H
#define AVRESAMPLE_MAX_CHANNELS 32
typedef struct AVAudioResampleContext AVAudioResampleContext;
enum AVMixCoeffType ;
enum AVResampleFilterType ;
enum AVResampleDitherMethod ;
unsigned avresample_version(void);
const char *avresample_configuration(void);
const char *avresample_license(void);
const AVClass *avresample_get_class(void);
AVAudioResampleContext *avresample_alloc_context(void);
int avresample_open(AVAudioResampleContext *avr);
int avresample_is_open(AVAudioResampleContext *avr);
void avresample_close(AVAudioResampleContext *avr);
void avresample_free(AVAudioResampleContext **avr);
int avresample_build_matrix(uint64_t in_layout, uint64_t out_layout,
double center_mix_level, double surround_mix_level,
double lfe_mix_level, int normalize, double *matrix,
int stride, enum AVMatrixEncoding matrix_encoding);
int avresample_get_matrix(AVAudioResampleContext *avr, double *matrix,
int stride);
int avresample_set_matrix(AVAudioResampleContext *avr, const double *matrix,
int stride);
int avresample_set_channel_mapping(AVAudioResampleContext *avr,
const int *channel_map);
int avresample_set_compensation(AVAudioResampleContext *avr, int sample_delta,
int compensation_distance);
int avresample_get_out_samples(AVAudioResampleContext *avr, int in_nb_samples);
int avresample_convert(AVAudioResampleContext *avr, uint8_t **output,
int out_plane_size, int out_samples,
uint8_t * const *input, int in_plane_size,
int in_samples);
int avresample_get_delay(AVAudioResampleContext *avr);
int avresample_available(AVAudioResampleContext *avr);
int avresample_read(AVAudioResampleContext *avr, uint8_t **output, int nb_samples);
int avresample_convert_frame(AVAudioResampleContext *avr,
AVFrame *output, AVFrame *input);
int avresample_config(AVAudioResampleContext *avr, AVFrame *out, AVFrame *in);
