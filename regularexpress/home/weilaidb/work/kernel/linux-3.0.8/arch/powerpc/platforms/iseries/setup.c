#undef DEBUG
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
static unsigned long build_iSeries_Memory_Map(void);
static void iseries_shared_idle(void);
static void iseries_dedicated_idle(void);
struct MemoryBlock ;
static unsigned long iSeries_process_Condor_mainstore_vpd(
struct MemoryBlock *mb_array, unsigned long max_entries)
#define MaxSegmentAreas			32
#define MaxSegmentAdrRangeBlocks	128
#define MaxAreaRangeBlocks		4
static unsigned long iSeries_process_Regatta_mainstore_vpd(
struct MemoryBlock *mb_array, unsigned long max_entries)
static unsigned long iSeries_process_mainstore_vpd(struct MemoryBlock *mb_array,
unsigned long max_entries)
static void __init iSeries_get_cmdline(void)
static void __init iSeries_init_early(void)
struct mschunks_map mschunks_map = ;
EXPORT_SYMBOL(mschunks_map);
static void mschunks_alloc(unsigned long num_chunks)
static unsigned long __init build_iSeries_Memory_Map(void)
static void __init iSeries_setup_arch(void)
static void iSeries_show_cpuinfo(struct seq_file *m)
static void __init iSeries_progress(char * st, unsigned short code)
static void __init iSeries_fixup_klimit(void)
static int __init iSeries_src_init(void)
late_initcall(iSeries_src_init);
static inline void process_iSeries_events(void)
static void yield_shared_processor(void)
static void iseries_shared_idle(void)
static void iseries_dedicated_idle(void)
static void __iomem *iseries_ioremap(phys_addr_t address, unsigned long size,
unsigned long flags, void *caller)
static void iseries_iounmap(volatile void __iomem *token)
static int __init iseries_probe(void)
static int iseries_kexec_prepare(struct kimage *image)
define_machine(iseries) ;
void * __init iSeries_early_setup(void)
static void hvputc(char c)
void __init udbg_init_iseries(void)
