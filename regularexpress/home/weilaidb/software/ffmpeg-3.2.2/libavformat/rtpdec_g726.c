#define RTP_G726_HANDLER(bitrate) \
static av_cold int g726_ ## bitrate ##_init(AVFormatContext *s, int st_index, \
PayloadContext *data) \
\
\
RTPDynamicProtocolHandler ff_g726_ ## bitrate ## _dynamic_handler = ; \
RTPDynamicProtocolHandler ff_g726le_ ## bitrate ## _dynamic_handler =
RTP_G726_HANDLER(16);
RTP_G726_HANDLER(24);
RTP_G726_HANDLER(32);
RTP_G726_HANDLER(40);
