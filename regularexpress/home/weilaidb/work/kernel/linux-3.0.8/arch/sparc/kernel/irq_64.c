#define NUM_IVECS	(IMAP_INR + 1)
struct ino_bucket *ivector_table;
unsigned long ivector_table_pa;
static unsigned long bucket_get_chain_pa(unsigned long bucket_pa)
static void bucket_clear_chain_pa(unsigned long bucket_pa)
static unsigned int bucket_get_irq(unsigned long bucket_pa)
static void bucket_set_irq(unsigned long bucket_pa, unsigned int irq)
#define irq_work_pa(__cpu)	&(trap_block[(__cpu)].irq_worklist_pa)
static struct  irq_table[NR_IRQS];
static DEFINE_SPINLOCK(irq_alloc_lock);
unsigned char irq_alloc(unsigned int dev_handle, unsigned int dev_ino)
void irq_free(unsigned int irq)
int arch_show_interrupts(struct seq_file *p, int prec)
static unsigned int sun4u_compute_tid(unsigned long imap, unsigned long cpuid)
struct irq_handler_data ;
static int irq_choose_cpu(unsigned int irq, const struct cpumask *affinity)
#define irq_choose_cpu(irq, affinity)	\
real_hard_smp_processor_id()
static void sun4u_irq_enable(struct irq_data *data)
static int sun4u_set_affinity(struct irq_data *data,
const struct cpumask *mask, bool force)
static void sun4u_irq_disable(struct irq_data *data)
static void sun4u_irq_eoi(struct irq_data *data)
static void sun4v_irq_enable(struct irq_data *data)
static int sun4v_set_affinity(struct irq_data *data,
const struct cpumask *mask, bool force)
static void sun4v_irq_disable(struct irq_data *data)
static void sun4v_irq_eoi(struct irq_data *data)
static void sun4v_virq_enable(struct irq_data *data)
static int sun4v_virt_set_affinity(struct irq_data *data,
const struct cpumask *mask, bool force)
static void sun4v_virq_disable(struct irq_data *data)
static void sun4v_virq_eoi(struct irq_data *data)
static struct irq_chip sun4u_irq = ;
static struct irq_chip sun4v_irq = ;
static struct irq_chip sun4v_virq = ;
static void pre_flow_handler(struct irq_data *d)
void irq_install_pre_handler(int irq,
void (*func)(unsigned int, void *, void *),
void *arg1, void *arg2)
unsigned int build_irq(int inofixup, unsigned long iclr, unsigned long imap)
static unsigned int sun4v_build_common(unsigned long sysino,
struct irq_chip *chip)
unsigned int sun4v_build_irq(u32 devhandle, unsigned int devino)
unsigned int sun4v_build_virq(u32 devhandle, unsigned int devino)
void ack_bad_irq(unsigned int irq)
void *hardirq_stack[NR_CPUS];
void *softirq_stack[NR_CPUS];
void __irq_entry handler_irq(int pil, struct pt_regs *regs)
void do_softirq(void)
void fixup_irqs(void)
struct sun5_timer ;
static struct sun5_timer *prom_timers;
static u64 prom_limit0, prom_limit1;
static void map_prom_timers(void)
static void kill_prom_timer(void)
void notrace init_irqwork_curcpu(void)
static void __cpuinit notrace register_one_mondo(unsigned long paddr, unsigned long type, unsigned long qmask)
void __cpuinit notrace sun4v_register_mondo_queues(int this_cpu)
static void __init alloc_one_queue(unsigned long *pa_ptr, unsigned long qmask)
static void __init init_cpu_send_mondo_info(struct trap_per_cpu *tb)
static void __init sun4v_init_mondo_queues(void)
static void __init init_send_mondo_info(void)
static struct irqaction timer_irq_action = ;
void __init init_IRQ(void)
