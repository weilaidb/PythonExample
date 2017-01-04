#define RTP_VC2HQ_PL_HEADER_SIZE             4
#define DIRAC_DATA_UNIT_HEADER_SIZE          13
#define DIRAC_PIC_NR_SIZE                    4
#define DIRAC_RTP_PCODE_HQ_PIC_FRAGMENT      0xEC
static void send_packet(AVFormatContext *ctx, uint8_t parse_code, int info_hdr_size, const uint8_t *buf, int size, int i, int f, int rtp_m)
static void send_picture(AVFormatContext *ctx, const uint8_t *buf, int size, int interlaced)
void ff_rtp_send_vc2hq(AVFormatContext *ctx, const uint8_t *frame_buf, int frame_size, int interlaced)
