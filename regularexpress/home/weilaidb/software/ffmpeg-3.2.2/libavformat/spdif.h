#define AVFORMAT_SPDIF_H
#define SYNCWORD1 0xF872
#define SYNCWORD2 0x4E1F
#define BURST_HEADER_SIZE 0x8
enum IEC61937DataType ;
static const uint16_t spdif_mpeg_pkt_offset[2][3] = ;
void ff_spdif_bswap_buf16(uint16_t *dst, const uint16_t *src, int w);
int ff_spdif_read_packet(AVFormatContext *s, AVPacket *pkt);
int ff_spdif_probe(const uint8_t *p_buf, int buf_size, enum AVCodecID *codec);
