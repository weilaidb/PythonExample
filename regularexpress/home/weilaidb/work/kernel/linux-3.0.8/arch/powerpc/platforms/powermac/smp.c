#undef DEBUG
#define DBG(fmt...) udbg_printf(fmt)
#define DBG(fmt...)
extern void __secondary_start_pmac_0(void);
extern int pmac_pfunc_base_install(void);
static void (*pmac_tb_freeze)(int freeze);
static u64 timebase;
static int tb_req;
#define HAMMERHEAD_BASE		0xf8000000
#define HHEAD_CONFIG		0x90
#define HHEAD_SEC_INTR		0xc0
#define PSURGE_PRI_INTR		0xf3019000
#define PSURGE_START		0xf2800000
#define PSURGE_QUAD_REG_ADDR	0xf8800000
#define PSURGE_QUAD_IRQ_SET	0
#define PSURGE_QUAD_IRQ_CLR	1
#define PSURGE_QUAD_IRQ_PRIMARY	2
#define PSURGE_QUAD_CKSTOP_CTL	3
#define PSURGE_QUAD_PRIMARY_ARB	4
#define PSURGE_QUAD_BOARD_ID	6
#define PSURGE_QUAD_WHICH_CPU	7
#define PSURGE_QUAD_CKSTOP_RDBK	8
#define PSURGE_QUAD_RESET_CTL	11
#define PSURGE_QUAD_OUT(r, v)	(out_8(quad_base + ((r) << 4) + 4, (v)))
#define PSURGE_QUAD_IN(r)	(in_8(quad_base + ((r) << 4) + 4) & 0x0f)
#define PSURGE_QUAD_BIS(r, v)	(PSURGE_QUAD_OUT((r), PSURGE_QUAD_IN(r) | (v)))
#define PSURGE_QUAD_BIC(r, v)	(PSURGE_QUAD_OUT((r), PSURGE_QUAD_IN(r) & ~(v)))
static volatile u8 __iomem *hhead_base;
static volatile u8 __iomem *quad_base;
static volatile u32 __iomem *psurge_pri_intr;
static volatile u8 __iomem *psurge_sec_intr;
static volatile u32 __iomem *psurge_start;
#define PSURGE_NONE		-1
#define PSURGE_DUAL		0
#define PSURGE_QUAD_OKEE	1
#define PSURGE_QUAD_COTTON	2
#define PSURGE_QUAD_ICEGRASS	3
static int psurge_type = PSURGE_NONE;
static struct irq_host *psurge_host;
int psurge_secondary_virq;
static inline void psurge_set_ipi(int cpu)
static inline void psurge_clr_ipi(int cpu)
static irqreturn_t psurge_ipi_intr(int irq, void *d)
static void smp_psurge_cause_ipi(int cpu, unsigned long data)
static int psurge_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
struct irq_host_ops psurge_host_ops = ;
static int psurge_secondary_ipi_init(void)
static int __init psurge_quad_probe(void)
static void __init psurge_quad_init(void)
static int __init smp_psurge_probe(void)
static int __init smp_psurge_kick_cpu(int nr)
static struct irqaction psurge_irqaction = ;
static void __init smp_psurge_setup_cpu(int cpu_nr)
void __init smp_psurge_take_timebase(void)
void __init smp_psurge_give_timebase(void)
struct smp_ops_t psurge_smp_ops = ;
static void smp_core99_give_timebase(void)
static void __devinit smp_core99_take_timebase(void)
static struct pmac_i2c_bus *pmac_tb_clock_chip_host;
static u8 pmac_tb_pulsar_addr;
static void smp_core99_cypress_tb_freeze(int freeze)
static void smp_core99_pulsar_tb_freeze(int freeze)
static void __init smp_core99_setup_i2c_hwsync(int ncpus)
static void smp_core99_pfunc_tb_freeze(int freeze)
static unsigned int core99_tb_gpio;
static void smp_core99_gpio_tb_freeze(int freeze)
volatile static long int core99_l2_cache;
volatile static long int core99_l3_cache;
static void __devinit core99_init_caches(int cpu)
static void __init smp_core99_setup(int ncpus)
static int __init smp_core99_probe(void)
static int __devinit smp_core99_kick_cpu(int nr)
static void __devinit smp_core99_setup_cpu(int cpu_nr)
static int smp_core99_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata smp_core99_cpu_nb = ;
static void __init smp_core99_bringup_done(void)
static int smp_core99_cpu_disable(void)
static void pmac_cpu_die(void)
static void pmac_cpu_die(void)
struct smp_ops_t core99_smp_ops = ;
void __init pmac_setup_smp(void)
