int ff_h2645_extract_rbsp(const uint8_t *src, int length,
H2645NAL *nal, int small_padding)
static const char *nal_unit_name(int nal_type)
static int get_bit_length(H2645NAL *nal, int skip_trailing_zeros)
static int hevc_parse_nal_header(H2645NAL *nal, void *logctx)
static int h264_parse_nal_header(H2645NAL *nal, void *logctx)
int ff_h2645_packet_split(H2645Packet *pkt, const uint8_t *buf, int length,
void *logctx, int is_nalff, int nal_length_size,
enum AVCodecID codec_id, int small_padding)
void ff_h2645_packet_uninit(H2645Packet *pkt)
