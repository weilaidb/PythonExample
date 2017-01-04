static struct uv_systab uv_systab;
s64 uv_bios_call(enum uv_bios_cmd which, u64 a1, u64 a2, u64 a3, u64 a4, u64 a5)
EXPORT_SYMBOL_GPL(uv_bios_call);
s64 uv_bios_call_irqsave(enum uv_bios_cmd which, u64 a1, u64 a2, u64 a3,
u64 a4, u64 a5)
s64 uv_bios_call_reentrant(enum uv_bios_cmd which, u64 a1, u64 a2, u64 a3,
u64 a4, u64 a5)
long sn_partition_id;
EXPORT_SYMBOL_GPL(sn_partition_id);
long sn_coherency_id;
EXPORT_SYMBOL_GPL(sn_coherency_id);
long sn_region_size;
EXPORT_SYMBOL_GPL(sn_region_size);
long system_serial_number;
EXPORT_SYMBOL_GPL(system_serial_number);
int uv_type;
EXPORT_SYMBOL_GPL(uv_type);
s64 uv_bios_get_sn_info(int fc, int *uvtype, long *partid, long *coher,
long *region, long *ssn)
EXPORT_SYMBOL_GPL(uv_bios_get_sn_info);
int
uv_bios_mq_watchlist_alloc(unsigned long addr, unsigned int mq_size,
unsigned long *intr_mmr_offset)
EXPORT_SYMBOL_GPL(uv_bios_mq_watchlist_alloc);
int
uv_bios_mq_watchlist_free(int blade, int watchlist_num)
EXPORT_SYMBOL_GPL(uv_bios_mq_watchlist_free);
s64
uv_bios_change_memprotect(u64 paddr, u64 len, enum uv_memprotect perms)
EXPORT_SYMBOL_GPL(uv_bios_change_memprotect);
s64
uv_bios_reserved_page_pa(u64 buf, u64 *cookie, u64 *addr, u64 *len)
EXPORT_SYMBOL_GPL(uv_bios_reserved_page_pa);
s64 uv_bios_freq_base(u64 clock_type, u64 *ticks_per_second)
EXPORT_SYMBOL_GPL(uv_bios_freq_base);
int uv_bios_set_legacy_vga_target(bool decode, int domain, int bus)
EXPORT_SYMBOL_GPL(uv_bios_set_legacy_vga_target);
void uv_bios_init(void)
void uv_bios_init(void)
