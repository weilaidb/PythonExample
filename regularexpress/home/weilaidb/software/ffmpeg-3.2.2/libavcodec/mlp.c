const uint8_t ff_mlp_huffman_tables[3][18][2] = ;
const ChannelInformation ff_mlp_ch_info[21] = ;
const uint64_t ff_mlp_channel_layouts[12] = ;
static int crc_init = 0;
#if CONFIG_SMALL
#define CRC_TABLE_SIZE 257
#define CRC_TABLE_SIZE 1024
static AVCRC crc_63[CRC_TABLE_SIZE];
static AVCRC crc_1D[CRC_TABLE_SIZE];
static AVCRC crc_2D[CRC_TABLE_SIZE];
av_cold void ff_mlp_init_crc(void)
uint16_t ff_mlp_checksum16(const uint8_t *buf, unsigned int buf_size)
uint8_t ff_mlp_checksum8(const uint8_t *buf, unsigned int buf_size)
uint8_t ff_mlp_restart_checksum(const uint8_t *buf, unsigned int bit_size)
uint8_t ff_mlp_calculate_parity(const uint8_t *buf, unsigned int buf_size)
