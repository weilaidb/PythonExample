static int mpeg_parse_packet(AVFormatContext *ctx, PayloadContext *data,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
RTPDynamicProtocolHandler ff_mpeg_audio_dynamic_handler = ;
RTPDynamicProtocolHandler ff_mpeg_video_dynamic_handler = ;
