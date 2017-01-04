typedef struct PulseData  PulseData;
static void pulse_audio_sink_device_cb(pa_context *ctx, const pa_sink_info *dev,
int eol, void *userdata)
static int pulse_update_sink_info(AVFormatContext *h)
static void pulse_audio_sink_input_cb(pa_context *ctx, const pa_sink_input_info *i,
int eol, void *userdata)
static int pulse_update_sink_input_info(AVFormatContext *h)
static void pulse_event(pa_context *ctx, pa_subscription_event_type_t t,
uint32_t idx, void *userdata)
static void pulse_stream_writable(pa_stream *stream, size_t nbytes, void *userdata)
static void pulse_overflow(pa_stream *stream, void *userdata)
static void pulse_underflow(pa_stream *stream, void *userdata)
static void pulse_stream_state(pa_stream *stream, void *userdata)
static int pulse_stream_wait(PulseData *s)
static void pulse_context_state(pa_context *ctx, void *userdata)
static int pulse_context_wait(PulseData *s)
static void pulse_stream_result(pa_stream *stream, int success, void *userdata)
static int pulse_finish_stream_operation(PulseData *s, pa_operation *op, const char *name)
static int pulse_set_pause(PulseData *s, int pause)
static int pulse_flash_stream(PulseData *s)
static void pulse_context_result(pa_context *ctx, int success, void *userdata)
static int pulse_finish_context_operation(PulseData *s, pa_operation *op, const char *name)
static int pulse_set_mute(PulseData *s)
static int pulse_set_volume(PulseData *s, double volume)
static int pulse_subscribe_events(PulseData *s)
static void pulse_map_channels_to_pulse(int64_t channel_layout, pa_channel_map *channel_map)
static av_cold int pulse_write_trailer(AVFormatContext *h)
static av_cold int pulse_write_header(AVFormatContext *h)
static int pulse_write_packet(AVFormatContext *h, AVPacket *pkt)
static int pulse_write_frame(AVFormatContext *h, int stream_index,
AVFrame **frame, unsigned flags)
static void pulse_get_output_timestamp(AVFormatContext *h, int stream, int64_t *dts, int64_t *wall)
static int pulse_get_device_list(AVFormatContext *h, AVDeviceInfoList *device_list)
static int pulse_control_message(AVFormatContext *h, int type,
void *data, size_t data_size)
#define OFFSET(a) offsetof(PulseData, a)
#define E AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass pulse_muxer_class = ;
AVOutputFormat ff_pulse_muxer = ;
