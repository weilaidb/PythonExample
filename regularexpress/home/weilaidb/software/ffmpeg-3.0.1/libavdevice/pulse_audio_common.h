#define AVDEVICE_PULSE_AUDIO_COMMON_H
pa_sample_format_t ff_codec_id_to_pulse_format(enum AVCodecID codec_id);
av_warn_unused_result
int ff_pulse_audio_get_devices(AVDeviceInfoList *devices, const char *server, int output);
av_warn_unused_result
int ff_pulse_audio_connect_context(pa_mainloop **pa_ml, pa_context **pa_ctx,
const char *server, const char *description);
void ff_pulse_audio_disconnect_context(pa_mainloop **pa_ml, pa_context **pa_ctx);
