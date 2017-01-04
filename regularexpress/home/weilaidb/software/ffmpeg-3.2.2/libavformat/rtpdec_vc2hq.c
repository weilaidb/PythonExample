#define RTP_VC2HQ_PL_HEADER_SIZE             4
#define DIRAC_DATA_UNIT_HEADER_SIZE          13
#define DIRAC_PIC_NR_SIZE                    4
#define DIRAC_RTP_PCODE_HQ_PIC_FRAGMENT      0xEC
struct PayloadContext ;
static const uint8_t start_sequence[] = ;
static void fill_parse_info_header(PayloadContext *pl_ctx, uint8_t *buf,
uint8_t parse_code, uint32_t data_unit_size)
static int vc2hq_handle_sequence_header(PayloadContext *pl_ctx, AVStream *st, AVPacket *pkt,
const uint8_t *buf, int len)
static int vc2hq_mark_end_of_sequence(PayloadContext *pl_ctx, AVStream *st, AVPacket *pkt)
static int vc2hq_handle_frame_fragment(AVFormatContext *ctx, PayloadContext *pl_ctx, AVStream *st,
AVPacket *pkt, uint32_t *timestamp, const uint8_t *buf, int len,
int flags)
static int vc2hq_handle_packet(AVFormatContext *ctx, PayloadContext *pl_ctx,
AVStream *st, AVPacket *pkt, uint32_t *timestamp,
const uint8_t *buf, int len, uint16_t seq,
int flags)
RTPDynamicProtocolHandler ff_vc2hq_dynamic_handler = ;
