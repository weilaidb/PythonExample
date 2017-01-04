#define _LINUX_BITREV_H
extern u8 const byte_rev_table[256];
static inline u8 bitrev8(u8 byte)
extern u16 bitrev16(u16 in);
extern u32 bitrev32(u32 in);
