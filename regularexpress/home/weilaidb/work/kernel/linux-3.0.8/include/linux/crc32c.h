#define _LINUX_CRC32C_H
extern u32 crc32c(u32 crc, const void *address, unsigned int length);
#define crc32c_le crc32c
