const char av_device_ffversion[] = "FFmpeg version " FFMPEG_VERSION;
#define E AV_OPT_FLAG_ENCODING_PARAM
#define D AV_OPT_FLAG_DECODING_PARAM
#define A AV_OPT_FLAG_AUDIO_PARAM
#define V AV_OPT_FLAG_VIDEO_PARAM
#define OFFSET(x) offsetof(AVDeviceCapabilitiesQuery, x)
const AVOption av_device_capabilities[] = ;
#undef E
#undef D
#undef A
#undef V
#undef OFFSET
unsigned avdevice_version(void)
const char * avdevice_configuration(void)
const char * avdevice_license(void)
static void *device_next(void *prev, int output,
AVClassCategory c1, AVClassCategory c2)
AVInputFormat *av_input_audio_device_next(AVInputFormat  *d)
AVInputFormat *av_input_video_device_next(AVInputFormat  *d)
AVOutputFormat *av_output_audio_device_next(AVOutputFormat *d)
AVOutputFormat *av_output_video_device_next(AVOutputFormat *d)
int avdevice_app_to_dev_control_message(struct AVFormatContext *s, enum AVAppToDevMessageType type,
void *data, size_t data_size)
int avdevice_dev_to_app_control_message(struct AVFormatContext *s, enum AVDevToAppMessageType type,
void *data, size_t data_size)
int avdevice_capabilities_create(AVDeviceCapabilitiesQuery **caps, AVFormatContext *s,
AVDictionary **device_options)
void avdevice_capabilities_free(AVDeviceCapabilitiesQuery **caps, AVFormatContext *s)
int avdevice_list_devices(AVFormatContext *s, AVDeviceInfoList **device_list)
static int list_devices_for_context(AVFormatContext *s, AVDictionary *options,
AVDeviceInfoList **device_list)
int avdevice_list_input_sources(AVInputFormat *device, const char *device_name,
AVDictionary *device_options, AVDeviceInfoList **device_list)
int avdevice_list_output_sinks(AVOutputFormat *device, const char *device_name,
AVDictionary *device_options, AVDeviceInfoList **device_list)
void avdevice_free_list_devices(AVDeviceInfoList **device_list)
