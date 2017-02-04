const char av_device_ffversion[] =  FFMPEG_VERSION;
#define E AV_OPT_FLAG_ENCODING_PARAM
#define D AV_OPT_FLAG_DECODING_PARAM
#define A AV_OPT_FLAG_AUDIO_PARAM
#define V AV_OPT_FLAG_VIDEO_PARAM
OFFSET offsetof(AVDeviceCapabilitiesQuery, x)
const AVOption av_device_capabilities[] = ;
#undef E
#undef D
#undef A
#undef V
#undef OFFSET
avdevice_version
avdevice_configuration
avdevice_license
*device_next
*av_input_audio_device_next
*av_input_video_device_next
*av_output_audio_device_next
*av_output_video_device_next
avdevice_app_to_dev_control_message
avdevice_dev_to_app_control_message
avdevice_capabilities_create
avdevice_capabilities_free
avdevice_list_devices
list_devices_for_context
avdevice_list_input_sources
avdevice_list_output_sinks
avdevice_free_list_devices
