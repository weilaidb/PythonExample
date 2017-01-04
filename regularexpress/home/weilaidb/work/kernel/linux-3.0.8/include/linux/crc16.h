#define __CRC16_H
extern u16 const crc16_table[256];
extern u16 crc16(u16 crc, const u8 *buffer, size_t len);
static inline u16 crc16_byte(u16 crc, const u8 data)
