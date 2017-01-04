struct PayloadContext ;
static const uint8_t default_quantizers[128] = ;
static void jpeg_close_context(PayloadContext *jpeg)
static int jpeg_create_huffman_table(PutByteContext *p, int table_class,
int table_id, const uint8_t *bits_table,
const uint8_t *value_table)
static void jpeg_put_marker(PutByteContext *pbc, int code)
static int jpeg_create_header(uint8_t *buf, int size, uint32_t type, uint32_t w,
uint32_t h, const uint8_t *qtable, int nb_qtable,
int dri)
static void create_default_qtables(uint8_t *qtables, uint8_t q)
static int jpeg_parse_packet(AVFormatContext *ctx, PayloadContext *jpeg,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
RTPDynamicProtocolHandler ff_jpeg_dynamic_handler = ;
