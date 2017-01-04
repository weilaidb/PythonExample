#define AVUTIL_CRC_H
typedef uint32_t AVCRC;
typedef enum AVCRCId;
int av_crc_init(AVCRC *ctx, int le, int bits, uint32_t poly, int ctx_size);
const AVCRC *av_crc_get_table(AVCRCId crc_id);
uint32_t av_crc(const AVCRC *ctx, uint32_t crc,
const uint8_t *buffer, size_t length) av_pure;
