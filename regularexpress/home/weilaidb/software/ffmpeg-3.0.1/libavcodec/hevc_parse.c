int ff_hevc_extract_rbsp(HEVCContext *s, const uint8_t *src, int length,
HEVCNAL *nal)
static const char *nal_unit_name(int nal_type)
static int hls_nal_unit(HEVCNAL *nal, AVCodecContext *avctx)
int ff_hevc_split_packet(HEVCContext *s, HEVCPacket *pkt, const uint8_t *buf, int length,
AVCodecContext *avctx, int is_nalff, int nal_length_size)
