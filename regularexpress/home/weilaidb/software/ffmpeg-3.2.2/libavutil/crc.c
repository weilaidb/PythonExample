#if CONFIG_HARDCODED_TABLES
static const AVCRC av_crc_table[AV_CRC_MAX][257] = ;
#if CONFIG_SMALL
#define CRC_TABLE_SIZE 257
#define CRC_TABLE_SIZE 1024
static struct  av_crc_table_params[AV_CRC_MAX] = ;
static AVCRC av_crc_table[AV_CRC_MAX][CRC_TABLE_SIZE];
av_crc_init
*av_crc_get_table
av_crc
