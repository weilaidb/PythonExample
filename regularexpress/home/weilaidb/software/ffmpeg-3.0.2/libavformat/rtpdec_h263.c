int ff_h263_handle_packet(AVFormatContext *ctx, PayloadContext *data,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq, int flags)
RTPDynamicProtocolHandler ff_h263_1998_dynamic_handler = ;
RTPDynamicProtocolHandler ff_h263_2000_dynamic_handler = ;
