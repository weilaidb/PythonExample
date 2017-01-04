u16 const crc_ccitt_table[256] = ;
EXPORT_SYMBOL(crc_ccitt_table);
u16 crc_ccitt(u16 crc, u8 const *buffer, size_t len)
EXPORT_SYMBOL(crc_ccitt);
MODULE_DESCRIPTION("CRC-CCITT calculations");
MODULE_LICENSE("GPL");
