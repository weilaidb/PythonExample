struct PayloadContext ;
static int qt_rtp_parse_packet(AVFormatContext *s, PayloadContext *qt,
AVStream *st, AVPacket *pkt,
uint32_t *timestamp, const uint8_t *buf,
int len, uint16_t seq, int flags)
static void qt_rtp_close(PayloadContext *qt)
#define RTP_QT_HANDLER(m, n, s, t) \
RTPDynamicProtocolHandler ff_ ## m ## _rtp_ ## n ## _handler =
RTP_QT_HANDLER(qt,        vid, "X-QT",        AVMEDIA_TYPE_VIDEO);
RTP_QT_HANDLER(qt,        aud, "X-QT",        AVMEDIA_TYPE_AUDIO);
RTP_QT_HANDLER(quicktime, vid, "X-QUICKTIME", AVMEDIA_TYPE_VIDEO);
RTP_QT_HANDLER(quicktime, aud, "X-QUICKTIME", AVMEDIA_TYPE_AUDIO);
