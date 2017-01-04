static av_cold int audio_write_header(AVFormatContext *s1)
static int audio_write_packet(AVFormatContext *s1, AVPacket *pkt)
static int audio_write_frame(AVFormatContext *s1, int stream_index,
AVFrame **frame, unsigned flags)
static void
audio_get_output_timestamp(AVFormatContext *s1, int stream,
int64_t *dts, int64_t *wall)
static int audio_get_device_list(AVFormatContext *h, AVDeviceInfoList *device_list)
static const AVClass alsa_muxer_class = ;
AVOutputFormat ff_alsa_muxer = ;
