static struct gen_pool *tcm_pool;
extern char __itcm_start, __sitcm_text, __eitcm_text;
extern char __dtcm_start, __sdtcm_data, __edtcm_data;
u32 dtcm_end = DTCM_OFFSET;
u32 itcm_end = ITCM_OFFSET;
static struct resource dtcm_res = ;
static struct resource itcm_res = ;
static struct map_desc dtcm_iomap[] __initdata = ;
static struct map_desc itcm_iomap[] __initdata = ;
void *tcm_alloc(size_t len)
EXPORT_SYMBOL(tcm_alloc);
void tcm_free(void *addr, size_t len)
EXPORT_SYMBOL(tcm_free);
static int __init setup_tcm_bank(u8 type, u8 bank, u8 banks,
u32 *offset)
void __init tcm_init(void)
static int __init setup_tcm_pool(void)
core_initcall(setup_tcm_pool);
