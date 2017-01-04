#define FLAT_BFIN_RELOC_TYPE_16_BIT 0
#define FLAT_BFIN_RELOC_TYPE_16H_BIT 1
#define FLAT_BFIN_RELOC_TYPE_32_BIT 2
unsigned long bfin_get_addr_from_rp(unsigned long *ptr,
unsigned long relval,
unsigned long flags,
unsigned long *persistent)
EXPORT_SYMBOL(bfin_get_addr_from_rp);
void bfin_put_addr_at_rp(unsigned long *ptr, unsigned long addr,
unsigned long relval)
EXPORT_SYMBOL(bfin_put_addr_at_rp);
