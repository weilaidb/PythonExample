#define AVDEVICE_AVDEVICE_H
unsigned avdevice_version(void);
const char *avdevice_configuration(void);
const char *avdevice_license(void);
void avdevice_register_all(void);
AVInputFormat *av_input_audio_device_next(AVInputFormat  *d);
AVInputFormat *av_input_video_device_next(AVInputFormat  *d);
AVOutputFormat *av_output_audio_device_next(AVOutputFormat *d);
AVOutputFormat *av_output_video_device_next(AVOutputFormat *d);
typedef struct AVDeviceRect  AVDeviceRect;
enum AVAppToDevMessageType ;
enum AVDevToAppMessageType ;
int avdevice_app_to_dev_control_message(struct AVFormatContext *s,
enum AVAppToDevMessageType type,
void *data, size_t data_size);
int avdevice_dev_to_app_control_message(struct AVFormatContext *s,
enum AVDevToAppMessageType type,
void *data, size_t data_size);
typedef struct AVDeviceCapabilitiesQuery  AVDeviceCapabilitiesQuery;
extern const AVOption av_device_capabilities[];
int avdevice_capabilities_create(AVDeviceCapabilitiesQuery **caps, AVFormatContext *s,
AVDictionary **device_options);
void avdevice_capabilities_free(AVDeviceCapabilitiesQuery **caps, AVFormatContext *s);
typedef struct AVDeviceInfo  AVDeviceInfo;
typedef struct AVDeviceInfoList  AVDeviceInfoList;
int avdevice_list_devices(struct AVFormatContext *s, AVDeviceInfoList **device_list);
void avdevice_free_list_devices(AVDeviceInfoList **device_list);
int avdevice_list_input_sources(struct AVInputFormat *device, const char *device_name,
AVDictionary *device_options, AVDeviceInfoList **device_list);
int avdevice_list_output_sinks(struct AVOutputFormat *device, const char *device_name,
AVDictionary *device_options, AVDeviceInfoList **device_list);
