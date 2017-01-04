#define CRC_ITU_T_H
extern u16 const crc_itu_t_table[256];
extern u16 crc_itu_t(u16 crc, const u8 *buffer, size_t len);
static inline u16 crc_itu_t_byte(u16 crc, const u8 data)
