#define IS_LEGACY_VGA_IOPORT(p) \
(((p) >= 0x3b0 && (p) <= 0x3bb) || ((p) >= 0x3c0 && (p) <= 0x3df))
void *sn_io_addr(unsigned long port)
EXPORT_SYMBOL(sn_io_addr);
void __sn_mmiowb(void)
EXPORT_SYMBOL(__sn_mmiowb);
