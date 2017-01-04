#define _LINUX_CRC7_H
extern const u8 crc7_syndrome_table[256];
static inline u8 crc7_byte(u8 crc, u8 data)
extern u8 crc7(u8 crc, const u8 *buffer, size_t len);
