#define AVDEVICE_SNDIO_H
typedef struct SndioData  SndioData;
int ff_sndio_open(AVFormatContext *s1, int is_output, const char *audio_device);
int ff_sndio_close(SndioData *s);
