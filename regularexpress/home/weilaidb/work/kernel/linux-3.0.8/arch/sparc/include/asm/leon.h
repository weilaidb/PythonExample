#define LEON_H_INCLUDE
#define ASI_LEON_NOCACHE	0x01
#define ASI_LEON_DCACHE_MISS	0x1
#define ASI_LEON_CACHEREGS	0x02
#define ASI_LEON_IFLUSH		0x10
#define ASI_LEON_DFLUSH		0x11
#define ASI_LEON_MMUFLUSH	0x18
#define ASI_LEON_MMUREGS	0x19
#define ASI_LEON_BYPASS		0x1c
#define ASI_LEON_FLUSH_PAGE	0x10
#define LEON_CNR_CTRL		0x000
#define LEON_CNR_CTXP		0x100
#define LEON_CNR_CTX		0x200
#define LEON_CNR_F		0x300
#define LEON_CNR_FADDR		0x400
#define LEON_CNR_CTX_NCTX	256
#define LEON_CNR_CTRL_TLBDIS	0x80000000
#define LEON_MMUTLB_ENT_MAX	64
#define LEON_DIAGF_LVL		0x3
#define LEON_DIAGF_WR		0x8
#define LEON_DIAGF_WR_SHIFT	3
#define LEON_DIAGF_HIT		0x10
#define LEON_DIAGF_HIT_SHIFT	4
#define LEON_DIAGF_CTX		0x1fe0
#define LEON_DIAGF_CTX_SHIFT	5
#define LEON_DIAGF_VALID	0x2000
#define LEON_DIAGF_VALID_SHIFT	13
#define LEON_HARD_INT(x)	(1 << (x))
#define LEON_IRQMASK_R		0x0000fffe
#define LEON_IRQPRIO_R		0xfffe0000
#define LEON_OFF_UDATA	0x0
#define LEON_OFF_USTAT	0x4
#define LEON_OFF_UCTRL	0x8
#define LEON_OFF_USCAL	0xc
#define LEON_UCTRL_RE	0x01
#define LEON_UCTRL_TE	0x02
#define LEON_UCTRL_RI	0x04
#define LEON_UCTRL_TI	0x08
#define LEON_UCTRL_PS	0x10
#define LEON_UCTRL_PE	0x20
#define LEON_UCTRL_FL	0x40
#define LEON_UCTRL_LB	0x80
#define LEON_USTAT_DR	0x01
#define LEON_USTAT_TS	0x02
#define LEON_USTAT_TH	0x04
#define LEON_USTAT_BR	0x08
#define LEON_USTAT_OV	0x10
#define LEON_USTAT_PE	0x20
#define LEON_USTAT_FE	0x40
#define LEON_MCFG2_SRAMDIS		0x00002000
#define LEON_MCFG2_SDRAMEN		0x00004000
#define LEON_MCFG2_SRAMBANKSZ		0x00001e00
#define LEON_MCFG2_SRAMBANKSZ_SHIFT	9
#define LEON_MCFG2_SDRAMBANKSZ		0x03800000
#define LEON_MCFG2_SDRAMBANKSZ_SHIFT	23
#define LEON_TCNT0_MASK	0x7fffff
#define LEON_USTAT_ERROR (LEON_USTAT_OV | LEON_USTAT_PE | LEON_USTAT_FE)
#define ASI_LEON3_SYSCTRL		0x02
#define ASI_LEON3_SYSCTRL_ICFG		0x08
#define ASI_LEON3_SYSCTRL_DCFG		0x0c
#define ASI_LEON3_SYSCTRL_CFG_SNOOPING (1 << 27)
#define ASI_LEON3_SYSCTRL_CFG_SSIZE(c) (1 << ((c >> 20) & 0xf))
static inline unsigned long leon_readnobuffer_reg(unsigned long paddr)
static inline void leon_store_reg(unsigned long paddr, unsigned long value)
static inline unsigned long leon_load_reg(unsigned long paddr)
static inline void leon_srmmu_disabletlb(void)
static inline void leon_srmmu_enabletlb(void)
#define LEON3_BYPASS_LOAD_PA(x)	    (leon_load_reg((unsigned long)(x)))
#define LEON3_BYPASS_STORE_PA(x, v) (leon_store_reg((unsigned long)(x), (unsigned long)(v)))
#define LEON3_BYPASS_ANDIN_PA(x, v) LEON3_BYPASS_STORE_PA(x, LEON3_BYPASS_LOAD_PA(x) & v)
#define LEON3_BYPASS_ORIN_PA(x, v)  LEON3_BYPASS_STORE_PA(x, LEON3_BYPASS_LOAD_PA(x) | v)
#define LEON_BYPASS_LOAD_PA(x)      leon_load_reg((unsigned long)(x))
#define LEON_BYPASS_STORE_PA(x, v)  leon_store_reg((unsigned long)(x), (unsigned long)(v))
#define LEON_REGLOAD_PA(x)          leon_load_reg((unsigned long)(x)+LEON_PREGS)
#define LEON_REGSTORE_PA(x, v)      leon_store_reg((unsigned long)(x)+LEON_PREGS, (unsigned long)(v))
#define LEON_REGSTORE_OR_PA(x, v)   LEON_REGSTORE_PA(x, LEON_REGLOAD_PA(x) | (unsigned long)(v))
#define LEON_REGSTORE_AND_PA(x, v)  LEON_REGSTORE_PA(x, LEON_REGLOAD_PA(x) & (unsigned long)(v))
#define LEON_BYPASSCACHE_LOAD_VA(x) leon_readnobuffer_reg((unsigned long)(x))
extern void leon_init(void);
extern void leon_switch_mm(void);
extern void leon_init_IRQ(void);
extern unsigned long last_valid_pfn;
static inline unsigned long sparc_leon3_get_dcachecfg(void)
static inline void sparc_leon3_enable_snooping(void)
;
static inline int sparc_leon3_snooping_enabled(void)
;
static inline void sparc_leon3_disable_cache(void)
;
static inline unsigned long sparc_leon3_asr17(void)
;
static inline int sparc_leon3_cpuid(void)
# define LEON3_IRQ_IPI_DEFAULT		13
# define LEON3_IRQ_TICKER		(leon3_ticker_irq)
# define LEON3_IRQ_CROSS_CALL		15
#if defined(PAGE_SIZE_LEON_8K)
#define LEON_PAGE_SIZE_LEON 1
#elif defined(PAGE_SIZE_LEON_16K)
#define LEON_PAGE_SIZE_LEON 2)
#define LEON_PAGE_SIZE_LEON 0
#if LEON_PAGE_SIZE_LEON == 0
#define LEON_PGD_SH    24
#define LEON_PGD_M     0xff
#define LEON_PMD_SH    18
#define LEON_PMD_SH_V  (LEON_PGD_SH-2)
#define LEON_PMD_M     0x3f
#define LEON_PTE_SH    12
#define LEON_PTE_M     0x3f
#elif LEON_PAGE_SIZE_LEON == 1
#define LEON_PGD_SH    25
#define LEON_PGD_M     0x7f
#define LEON_PMD_SH    19
#define LEON_PMD_SH_V  (LEON_PGD_SH-1)
#define LEON_PMD_M     0x3f
#define LEON_PTE_SH    13
#define LEON_PTE_M     0x3f
#elif LEON_PAGE_SIZE_LEON == 2
#define LEON_PGD_SH    26
#define LEON_PGD_M     0x3f
#define LEON_PMD_SH    20
#define LEON_PMD_SH_V  (LEON_PGD_SH-0)
#define LEON_PMD_M     0x3f
#define LEON_PTE_SH    14
#define LEON_PTE_M     0x3f
#elif LEON_PAGE_SIZE_LEON == 3
#define LEON_PGD_SH    28
#define LEON_PGD_M     0x0f
#define LEON_PMD_SH    21
#define LEON_PMD_SH_V  (LEON_PGD_SH-0)
#define LEON_PMD_M     0x7f
#define LEON_PTE_SH    15
#define LEON_PTE_M     0x3f
#error cannot determine LEON_PAGE_SIZE_LEON
#define PAGE_MIN_SHIFT   (12)
#define PAGE_MIN_SIZE    (1UL << PAGE_MIN_SHIFT)
#define LEON3_XCCR_SETS_MASK  0x07000000UL
#define LEON3_XCCR_SSIZE_MASK 0x00f00000UL
#define LEON2_CCR_DSETS_MASK 0x03000000UL
#define LEON2_CFG_SSIZE_MASK 0x00007000UL
extern unsigned long srmmu_swprobe(unsigned long vaddr, unsigned long *paddr);
extern void leon_flush_icache_all(void);
extern void leon_flush_dcache_all(void);
extern void leon_flush_cache_all(void);
extern void leon_flush_tlb_all(void);
extern int leon_flush_during_switch;
extern int leon_flush_needed(void);
struct vm_area_struct;
extern void leon_flush_icache_all(void);
extern void leon_flush_dcache_all(void);
extern void leon_flush_pcache_all(struct vm_area_struct *vma, unsigned long page);
extern void leon_flush_cache_all(void);
extern void leon_flush_tlb_all(void);
extern int leon_flush_during_switch;
extern int leon_flush_needed(void);
extern void leon_flush_pcache_all(struct vm_area_struct *vma, unsigned long page);
struct leon3_cacheregs ;
struct leon2_cacheregs ;
struct device_node;
extern unsigned int leon_build_device_irq(unsigned int real_irq,
irq_flow_handler_t flow_handler,
const char *name, int do_ack);
extern void leon_update_virq_handling(unsigned int virq,
irq_flow_handler_t flow_handler,
const char *name, int do_ack);
extern void leon_clear_clock_irq(void);
extern void leon_load_profile_irq(int cpu, unsigned int limit);
extern void leon_init_timers(irq_handler_t counter_fn);
extern void leon_clear_clock_irq(void);
extern void leon_load_profile_irq(int cpu, unsigned int limit);
extern void leon_trans_init(struct device_node *dp);
extern void leon_node_init(struct device_node *dp, struct device_node ***nextp);
extern void leon_init_IRQ(void);
extern void leon_init(void);
extern unsigned long srmmu_swprobe(unsigned long vaddr, unsigned long *paddr);
extern void init_leon(void);
extern void poke_leonsparc(void);
extern void leon3_getCacheRegs(struct leon3_cacheregs *regs);
extern int leon_flush_needed(void);
extern void leon_switch_mm(void);
extern int srmmu_swprobe_trace;
extern int leon3_ticker_irq;
extern int leon_smp_nrcpus(void);
extern void leon_clear_profile_irq(int cpu);
extern void leon_smp_done(void);
extern void leon_boot_cpus(void);
extern int leon_boot_one_cpu(int i);
void leon_init_smp(void);
extern void cpu_idle(void);
extern void init_IRQ(void);
extern void cpu_panic(void);
extern int __leon_processor_id(void);
void leon_enable_irq_cpu(unsigned int irq_nr, unsigned int cpu);
extern irqreturn_t leon_percpu_timer_interrupt(int irq, void *unused);
extern unsigned int real_irq_entry[];
extern unsigned int smpleon_ipi[];
extern unsigned int patchme_maybe_smp_msg[];
extern unsigned int t_nmi[], linux_trap_ipi15_leon[];
extern unsigned int linux_trap_ipi15_sun4m[];
extern int leon_ipi_irq;
#define PFN(x)           ((x) >> PAGE_SHIFT)
#define _pfn_valid(pfn)	 ((pfn < last_valid_pfn) && (pfn >= PFN(phys_base)))
#define _SRMMU_PTE_PMASK_LEON 0xffffffff
#define leon_init() do  while (0)
#define leon_switch_mm() do  while (0)
#define leon_init_IRQ() do  while (0)
#define init_leon() do  while (0)
#define leon_smp_done() do  while (0)
#define leon_boot_cpus() do  while (0)
#define leon_boot_one_cpu(i) 1
#define leon_init_smp() do  while (0)
