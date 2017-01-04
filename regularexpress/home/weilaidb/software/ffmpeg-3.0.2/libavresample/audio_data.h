#define AVRESAMPLE_AUDIO_DATA_H
int ff_sample_fmt_is_planar(enum AVSampleFormat sample_fmt, int channels);
struct AudioData ;
int ff_audio_data_set_channels(AudioData *a, int channels);
int ff_audio_data_init(AudioData *a, uint8_t * const *src, int plane_size,
int channels, int nb_samples,
enum AVSampleFormat sample_fmt, int read_only,
const char *name);
AudioData *ff_audio_data_alloc(int channels, int nb_samples,
enum AVSampleFormat sample_fmt,
const char *name);
int ff_audio_data_realloc(AudioData *a, int nb_samples);
void ff_audio_data_free(AudioData **a);
int ff_audio_data_copy(AudioData *out, AudioData *in, ChannelMapInfo *map);
int ff_audio_data_combine(AudioData *dst, int dst_offset, AudioData *src,
int src_offset, int nb_samples);
void ff_audio_data_drain(AudioData *a, int nb_samples);
int ff_audio_data_add_to_fifo(AVAudioFifo *af, AudioData *a, int offset,
int nb_samples);
int ff_audio_data_read_from_fifo(AVAudioFifo *af, AudioData *a, int nb_samples);
