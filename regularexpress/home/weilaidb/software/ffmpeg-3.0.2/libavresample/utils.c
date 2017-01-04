int avresample_open(AVAudioResampleContext *avr)
int avresample_is_open(AVAudioResampleContext *avr)
void avresample_close(AVAudioResampleContext *avr)
void avresample_free(AVAudioResampleContext **avr)
static int handle_buffered_output(AVAudioResampleContext *avr,
AudioData *output, AudioData *converted)
int attribute_align_arg avresample_convert(AVAudioResampleContext *avr,
uint8_t **output, int out_plane_size,
int out_samples,
uint8_t * const *input,
int in_plane_size, int in_samples)
int avresample_config(AVAudioResampleContext *avr, AVFrame *out, AVFrame *in)
static int config_changed(AVAudioResampleContext *avr,
AVFrame *out, AVFrame *in)
static inline int convert_frame(AVAudioResampleContext *avr,
AVFrame *out, AVFrame *in)
static inline int available_samples(AVFrame *out)
int avresample_convert_frame(AVAudioResampleContext *avr,
AVFrame *out, AVFrame *in)
int avresample_get_matrix(AVAudioResampleContext *avr, double *matrix,
int stride)
int avresample_set_matrix(AVAudioResampleContext *avr, const double *matrix,
int stride)
int avresample_set_channel_mapping(AVAudioResampleContext *avr,
const int *channel_map)
int avresample_available(AVAudioResampleContext *avr)
int avresample_get_out_samples(AVAudioResampleContext *avr, int in_nb_samples)
int avresample_read(AVAudioResampleContext *avr, uint8_t **output, int nb_samples)
unsigned avresample_version(void)
const char *avresample_license(void)
const char *avresample_configuration(void)
