unsigned long irq_hwmask[NR_IRQS];
#define LOCK_MT_PRA() \
local_irq_save(flags); \
mtflags = dmt()
#define UNLOCK_MT_PRA() \
emt(mtflags); \
local_irq_restore(flags)
#define LOCK_CORE_PRA() \
local_irq_save(flags); \
mtflags = dvpe()
#define UNLOCK_CORE_PRA() \
evpe(mtflags); \
local_irq_restore(flags)
asiduse smtc_live_asid[MAX_SMTC_TLBS][MAX_SMTC_ASIDS];
#define IPIBUF_PER_CPU 4
struct smtc_ipi_q IPIQ[NR_CPUS];
static struct smtc_ipi_q freeIPIq;
void ipi_decode(struct smtc_ipi *);
static void post_direct_ipi(int cpu, struct smtc_ipi *pipi);
static void setup_cross_vpe_interrupts(unsigned int nvpe);
void init_smtc_stats(void);
unsigned int smtc_status;
static int vpe0limit;
static int ipibuffers;
static int nostlb;
static int asidmask;
unsigned long smtc_asid_mask = 0xff;
static int __init vpe0tcs(char *str)
static int __init ipibufs(char *str)
static int __init stlb_disable(char *s)
static int __init asidmask_set(char *str)
__setup("vpe0tcs=", vpe0tcs);
__setup("ipibufs=", ipibufs);
__setup("nostlb", stlb_disable);
__setup("asidmask=", asidmask_set);
static int hang_trig;
static int __init hangtrig_enable(char *s)
__setup("hangtrig", hangtrig_enable);
#define DEFAULT_BLOCKED_IPI_LIMIT 32
static int timerq_limit = DEFAULT_BLOCKED_IPI_LIMIT;
static int __init tintq(char *str)
__setup("tintq=", tintq);
static int imstuckcount[2][8];
static int vpemask[2][8] = ;
int tcnoprog[NR_CPUS];
static atomic_t idle_hook_initialized = ATOMIC_INIT(0);
static int clock_hang_reported[NR_CPUS];
static void smtc_configure_tlb(void)
int __init smtc_build_cpu_map(int start_cpu_slot)
static void smtc_tc_setup(int vpe, int tc, int cpu)
#define CP0_SKEW 8
void smtc_prepare_cpus(int cpus)
void __cpuinit smtc_boot_secondary(int cpu, struct task_struct *idle)
void smtc_init_secondary(void)
void smtc_smp_finish(void)
void smtc_cpus_done(void)
int setup_irq_smtc(unsigned int irq, struct irqaction * new,
unsigned long hwmask)
void smtc_set_irq_affinity(unsigned int irq, cpumask_t affinity)
void smtc_forward_irq(struct irq_data *d)
static void smtc_ipi_qdump(void)
static inline int atomic_postincrement(atomic_t *v)
void smtc_send_ipi(int cpu, int type, unsigned int action)
static void post_direct_ipi(int cpu, struct smtc_ipi *pipi)
static void ipi_resched_interrupt(void)
static void ipi_call_interrupt(void)
DECLARE_PER_CPU(struct clock_event_device, mips_clockevent_device);
static void __irq_entry smtc_clock_tick_interrupt(void)
void ipi_decode(struct smtc_ipi *pipi)
void deferred_smtc_ipi(void)
static int cpu_ipi_irq = MIPS_CPU_IRQ_BASE + MIPS_CPU_IPI_IRQ;
static irqreturn_t ipi_interrupt(int irq, void *dev_idm)
static void ipi_irq_dispatch(void)
static struct irqaction irq_ipi = ;
static void setup_cross_vpe_interrupts(unsigned int nvpe)
void smtc_ipi_replay(void)
EXPORT_SYMBOL(smtc_ipi_replay);
void smtc_idle_loop_hook(void)
void smtc_soft_dump(void)
void smtc_get_new_mmu_context(struct mm_struct *mm, unsigned long cpu)
void smtc_flush_tlb_asid(unsigned long asid)
static int halt_state_save[NR_CPUS];
void smtc_cflush_lockdown(void)
void smtc_cflush_release(void)
