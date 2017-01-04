pa_sample_format_t av_cold ff_codec_id_to_pulse_format(enum AVCodecID codec_id)
enum PulseAudioContextState ;
typedef struct PulseAudioDeviceList  PulseAudioDeviceList;
static void pa_state_cb(pa_context *c, void *userdata)
void ff_pulse_audio_disconnect_context(pa_mainloop **pa_ml, pa_context **pa_ctx)
int ff_pulse_audio_connect_context(pa_mainloop **pa_ml, pa_context **pa_ctx,
const char *server, const char *description)
static void pulse_add_detected_device(PulseAudioDeviceList *info,
const char *name, const char *description)
static void pulse_audio_source_device_cb(pa_context *c, const pa_source_info *dev,
int eol, void *userdata)
static void pulse_audio_sink_device_cb(pa_context *c, const pa_sink_info *dev,
int eol, void *userdata)
static void pulse_server_info_cb(pa_context *c, const pa_server_info *i, void *userdata)
int ff_pulse_audio_get_devices(AVDeviceInfoList *devices, const char *server, int output)
