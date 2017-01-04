#define AVDEVICE_ALSA_H
#define DEFAULT_CODEC_ID AV_NE(AV_CODEC_ID_PCM_S16BE, AV_CODEC_ID_PCM_S16LE)
typedef void (*ff_reorder_func)(const void *, void *, int);
#define ALSA_BUFFER_SIZE_MAX 65536
typedef struct AlsaData  AlsaData;
av_warn_unused_result
int ff_alsa_open(AVFormatContext *s, snd_pcm_stream_t mode,
unsigned int *sample_rate,
int channels, enum AVCodecID *codec_id);
int ff_alsa_close(AVFormatContext *s1);
av_warn_unused_result
int ff_alsa_xrun_recover(AVFormatContext *s1, int err);
av_warn_unused_result
int ff_alsa_extend_reorder_buf(AlsaData *s, int size);
av_warn_unused_result
int ff_alsa_get_device_list(AVDeviceInfoList *device_list, snd_pcm_stream_t stream_type);
