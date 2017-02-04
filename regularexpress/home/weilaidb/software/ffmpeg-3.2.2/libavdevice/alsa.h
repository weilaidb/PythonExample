#define AVDEVICE_ALSA_H
AV_NE
typedef void (*ff_reorder_func)(const void *, void *, int);
#define ALSA_BUFFER_SIZE_MAX 65536
typedef struct AlsaData  AlsaData;
av_warn_unused_result
ff_alsa_open;
ff_alsa_close;
av_warn_unused_result
ff_alsa_xrun_recover;
av_warn_unused_result
ff_alsa_extend_reorder_buf;
av_warn_unused_result
ff_alsa_get_device_list;
