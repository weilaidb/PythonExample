struct PayloadContext ;
static int qdm2_parse_config(PayloadContext *qdm, AVStream *st,
const uint8_t *buf, const uint8_t *end)
static int qdm2_parse_subpacket(PayloadContext *qdm, AVStream *st,
const uint8_t *buf, const uint8_t *end)
static int qdm2_restore_block(PayloadContext *qdm, AVStream *st, AVPacket *pkt)
static int qdm2_parse_packet(AVFormatContext *s, PayloadContext *qdm,
AVStream *st, AVPacket *pkt,
uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
RTPDynamicProtocolHandler ff_qdm2_dynamic_handler = ;
