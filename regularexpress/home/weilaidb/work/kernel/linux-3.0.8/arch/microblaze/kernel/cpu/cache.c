static inline void __enable_icache_msr(void)
static inline void __disable_icache_msr(void)
static inline void __enable_dcache_msr(void)
static inline void __disable_dcache_msr(void)
static inline void __enable_icache_nomsr(void)
static inline void __disable_icache_nomsr(void)
static inline void __enable_dcache_nomsr(void)
static inline void __disable_dcache_nomsr(void)
#define CACHE_LOOP_LIMITS(start, end, cache_line_length, cache_size)	\
do  while (0);
#define CACHE_ALL_LOOP(cache_size, line_length, op)			\
do  while (0);
#define CACHE_RANGE_LOOP_2(start, end, line_length, op)			\
do  while (0);
#define CACHE_RANGE_LOOP_1(start, end, line_length, op)			\
do  while (0);
#define ASM_LOOP
static void __flush_icache_range_msr_irq(unsigned long start, unsigned long end)
static void __flush_icache_range_nomsr_irq(unsigned long start,
unsigned long end)
static void __flush_icache_range_noirq(unsigned long start,
unsigned long end)
static void __flush_icache_all_msr_irq(void)
static void __flush_icache_all_nomsr_irq(void)
static void __flush_icache_all_noirq(void)
static void __invalidate_dcache_all_msr_irq(void)
static void __invalidate_dcache_all_nomsr_irq(void)
static void __invalidate_dcache_all_noirq_wt(void)
static void __invalidate_dcache_all_wb(void)
static void __invalidate_dcache_range_wb(unsigned long start,
unsigned long end)
static void __invalidate_dcache_range_nomsr_wt(unsigned long start,
unsigned long end)
static void __invalidate_dcache_range_msr_irq_wt(unsigned long start,
unsigned long end)
static void __invalidate_dcache_range_nomsr_irq(unsigned long start,
unsigned long end)
static void __flush_dcache_all_wb(void)
static void __flush_dcache_range_wb(unsigned long start, unsigned long end)
struct scache *mbc;
static const struct scache wb_msr = ;
static const struct scache wb_nomsr = ;
static const struct scache wt_msr = ;
static const struct scache wt_nomsr = ;
static const struct scache wt_msr_noirq = ;
static const struct scache wt_nomsr_noirq = ;
#define CPUVER_7_20_A	0x0c
#define CPUVER_7_20_D	0x0f
#define INFO(s)	printk(KERN_INFO "cache: " s "\n");
void microblaze_cache_init(void)
