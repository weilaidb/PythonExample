#if CONFIG_HARDCODED_TABLES
static const AVCRC av_crc_table[AV_CRC_MAX][257] = ;
#if CONFIG_SMALL
#define CRC_TABLE_SIZE 257
#define CRC_TABLE_SIZE 1024
static struct  av_crc_table_params[AV_CRC_MAX] = ;
static AVCRC av_crc_table[AV_CRC_MAX][CRC_TABLE_SIZE];
int av_crc_init(AVCRC *ctx, int le, int bits, uint32_t poly, int ctx_size)
const AVCRC *av_crc_get_table(AVCRCId crc_id)
uint32_t av_crc(const AVCRC *ctx, uint32_t crc,
const uint8_t *buffer, size_t length)
int main(void)
