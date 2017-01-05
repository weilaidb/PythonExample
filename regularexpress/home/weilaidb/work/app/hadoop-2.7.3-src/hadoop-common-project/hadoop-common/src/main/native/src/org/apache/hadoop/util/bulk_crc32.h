#define BULK_CRC32_H_INCLUDED
#define CRC32C_POLYNOMIAL 1
#define CRC32_ZLIB_POLYNOMIAL 2
#define CHECKSUMS_VALID 0
#define INVALID_CHECKSUM_DETECTED -1
#define INVALID_CHECKSUM_TYPE -2
typedef struct crc32_error  crc32_error_t;
extern int bulk_crc(const uint8_t *data, size_t data_len,
uint32_t *sums, int checksum_type,
int bytes_per_checksum,
crc32_error_t *error_info);
