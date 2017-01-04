#define AVCODEC_H2645_PARSE_H
#define MAX_MBPAIR_SIZE (256*1024)
typedef struct H2645NAL  H2645NAL;
typedef struct H2645Packet  H2645Packet;
int ff_h2645_extract_rbsp(const uint8_t *src, int length,
H2645NAL *nal, int small_padding);
int ff_h2645_packet_split(H2645Packet *pkt, const uint8_t *buf, int length,
void *logctx, int is_nalff, int nal_length_size,
enum AVCodecID codec_id, int small_padding);
void ff_h2645_packet_uninit(H2645Packet *pkt);
static inline int get_nalsize(int nal_length_size, const uint8_t *buf,
int buf_size, int *buf_index, void *logctx)
