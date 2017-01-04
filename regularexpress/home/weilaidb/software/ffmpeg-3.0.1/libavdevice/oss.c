#if HAVE_SOUNDCARD_H
#if HAVE_UNISTD_H
int ff_oss_audio_open(AVFormatContext *s1, int is_output,
const char *audio_device)
int ff_oss_audio_close(OSSAudioData *s)
