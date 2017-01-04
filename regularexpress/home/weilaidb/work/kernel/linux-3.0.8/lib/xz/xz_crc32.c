#	define STATIC_RW_DATA static
STATIC_RW_DATA uint32_t xz_crc32_table[256];
XZ_EXTERN void xz_crc32_init(void)
XZ_EXTERN uint32_t xz_crc32(const uint8_t *buf, size_t size, uint32_t crc)
