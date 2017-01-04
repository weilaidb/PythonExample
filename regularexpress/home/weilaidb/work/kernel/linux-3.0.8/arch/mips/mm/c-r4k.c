static inline void r4k_on_each_cpu(void (*func) (void *info), void *info)
#if defined(CONFIG_MIPS_CMP)
#define cpu_has_safe_index_cacheops 0
#define cpu_has_safe_index_cacheops 1
static unsigned long icache_size __read_mostly;
static unsigned long dcache_size __read_mostly;
static unsigned long scache_size __read_mostly;
static void cache_noop(void)
static struct bcache_ops no_sc_ops = ;
struct bcache_ops *bcops = &no_sc_ops;
#define cpu_is_r4600_v1_x()	((read_c0_prid() & 0xfffffff0) == 0x00002010)
#define cpu_is_r4600_v2_x()	((read_c0_prid() & 0xfffffff0) == 0x00002020)
#define R4600_HIT_CACHEOP_WAR_IMPL					\
do  while (0)
static void (*r4k_blast_dcache_page)(unsigned long addr);
static inline void r4k_blast_dcache_page_dc32(unsigned long addr)
static inline void r4k_blast_dcache_page_dc64(unsigned long addr)
static void __cpuinit r4k_blast_dcache_page_setup(void)
static void (* r4k_blast_dcache_page_indexed)(unsigned long addr);
static void __cpuinit r4k_blast_dcache_page_indexed_setup(void)
static void (* r4k_blast_dcache)(void);
static void __cpuinit r4k_blast_dcache_setup(void)
#define JUMP_TO_ALIGN(order) \
__asm__ __volatile__( \
"b\t1f\n\t" \
".align\t" #order "\n\t" \
"1:\n\t" \
)
#define CACHE32_UNROLL32_ALIGN	JUMP_TO_ALIGN(10)
#define CACHE32_UNROLL32_ALIGN2	JUMP_TO_ALIGN(11)
static inline void blast_r4600_v1_icache32(void)
static inline void tx49_blast_icache32(void)
static inline void blast_icache32_r4600_v1_page_indexed(unsigned long page)
static inline void tx49_blast_icache32_page_indexed(unsigned long page)
static void (* r4k_blast_icache_page)(unsigned long addr);
static void __cpuinit r4k_blast_icache_page_setup(void)
static void (* r4k_blast_icache_page_indexed)(unsigned long addr);
static void __cpuinit r4k_blast_icache_page_indexed_setup(void)
static void (* r4k_blast_icache)(void);
static void __cpuinit r4k_blast_icache_setup(void)
static void (* r4k_blast_scache_page)(unsigned long addr);
static void __cpuinit r4k_blast_scache_page_setup(void)
static void (* r4k_blast_scache_page_indexed)(unsigned long addr);
static void __cpuinit r4k_blast_scache_page_indexed_setup(void)
static void (* r4k_blast_scache)(void);
static void __cpuinit r4k_blast_scache_setup(void)
static inline void local_r4k___flush_cache_all(void * args)
static void r4k___flush_cache_all(void)
static inline int has_valid_asid(const struct mm_struct *mm)
static void r4k__flush_cache_vmap(void)
static void r4k__flush_cache_vunmap(void)
static inline void local_r4k_flush_cache_range(void * args)
static void r4k_flush_cache_range(struct vm_area_struct *vma,
unsigned long start, unsigned long end)
static inline void local_r4k_flush_cache_mm(void * args)
static void r4k_flush_cache_mm(struct mm_struct *mm)
struct flush_cache_page_args ;
static inline void local_r4k_flush_cache_page(void *args)
static void r4k_flush_cache_page(struct vm_area_struct *vma,
unsigned long addr, unsigned long pfn)
static inline void local_r4k_flush_data_cache_page(void * addr)
static void r4k_flush_data_cache_page(unsigned long addr)
struct flush_icache_range_args ;
static inline void local_r4k_flush_icache_range(unsigned long start, unsigned long end)
static inline void local_r4k_flush_icache_range_ipi(void *args)
static void r4k_flush_icache_range(unsigned long start, unsigned long end)
static void r4k_dma_cache_wback_inv(unsigned long addr, unsigned long size)
static void r4k_dma_cache_inv(unsigned long addr, unsigned long size)
static void local_r4k_flush_cache_sigtramp(void * arg)
static void r4k_flush_cache_sigtramp(unsigned long addr)
static void r4k_flush_icache_all(void)
static inline void rm7k_erratum31(void)
static char *way_string[] __cpuinitdata = ;
static void __cpuinit probe_pcache(void)
static int __cpuinit probe_scache(void)
#if defined(CONFIG_CPU_LOONGSON2)
static void __init loongson2_sc_init(void)
extern int r5k_sc_init(void);
extern int rm7k_sc_init(void);
extern int mips_sc_init(void);
static void __cpuinit setup_scache(void)
void au1x00_fixup_config_od(void)
#define NXP_BARRIER()							\
__asm__ __volatile__(						\
".set noreorder\n\t"						\
"nop; nop; nop; nop; nop; nop;\n\t"				\
".set reorder\n\t")
static void nxp_pr4450_fixup_config(void)
static int __cpuinitdata cca = -1;
static int __init cca_setup(char *str)
__setup("cca=", cca_setup);
static void __cpuinit coherency_setup(void)
#if defined(CONFIG_DMA_NONCOHERENT)
static int __cpuinitdata coherentio;
static int __init setcoherentio(char *str)
__setup("coherentio", setcoherentio);
void __cpuinit r4k_cache_init(void)
