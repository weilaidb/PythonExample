int __xipram cfi_qry_present(struct map_info *map, __u32 base,
struct cfi_private *cfi)
EXPORT_SYMBOL_GPL(cfi_qry_present);
int __xipram cfi_qry_mode_on(uint32_t base, struct map_info *map,
struct cfi_private *cfi)
EXPORT_SYMBOL_GPL(cfi_qry_mode_on);
void __xipram cfi_qry_mode_off(uint32_t base, struct map_info *map,
struct cfi_private *cfi)
EXPORT_SYMBOL_GPL(cfi_qry_mode_off);
struct cfi_extquery *
__xipram cfi_read_pri(struct map_info *map, __u16 adr, __u16 size, const char* name)
EXPORT_SYMBOL(cfi_read_pri);
void cfi_fixup(struct mtd_info *mtd, struct cfi_fixup *fixups)
EXPORT_SYMBOL(cfi_fixup);
int cfi_varsize_frob(struct mtd_info *mtd, varsize_frob_t frob,
loff_t ofs, size_t len, void *thunk)
EXPORT_SYMBOL(cfi_varsize_frob);
MODULE_LICENSE("GPL");
