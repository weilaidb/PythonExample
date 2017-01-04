void blackfin_invalidate_entire_dcache(void)
void blackfin_invalidate_entire_icache(void)
#if defined(CONFIG_BFIN_ICACHE) || defined(CONFIG_BFIN_DCACHE)
static void
bfin_cache_init(struct cplb_entry *cplb_tbl, unsigned long cplb_addr,
unsigned long cplb_data, unsigned long mem_control,
unsigned long mem_mask)
void __cpuinit bfin_icache_init(struct cplb_entry *icplb_tbl)
void __cpuinit bfin_dcache_init(struct cplb_entry *dcplb_tbl)
