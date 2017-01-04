#define AVDEVICE_OSS_H
#define OSS_AUDIO_BLOCK_SIZE 4096
typedef struct OSSAudioData  OSSAudioData;
int ff_oss_audio_open(AVFormatContext *s1, int is_output,
const char *audio_device);
int ff_oss_audio_close(OSSAudioData *s);
