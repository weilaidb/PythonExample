struct pmac_irq_hw ;
unsigned int of_irq_workarounds;
struct device_node *of_irq_dflt_pic;
static volatile struct pmac_irq_hw __iomem *pmac_irq_hw[4];
#define GC_LEVEL_MASK		0x3ff00000
#define OHARE_LEVEL_MASK	0x1ff00000
#define HEATHROW_LEVEL_MASK	0x1ff00000
static int max_irqs;
static int max_real_irqs;
static u32 level_mask[4];
static DEFINE_RAW_SPINLOCK(pmac_pic_lock);
#define NR_MASK_WORDS	((NR_IRQS + 31) / 32)
static unsigned long ppc_lost_interrupts[NR_MASK_WORDS];
static unsigned long ppc_cached_irq_mask[NR_MASK_WORDS];
static int pmac_irq_cascade = -1;
static struct irq_host *pmac_pic_host;
static void __pmac_retrigger(unsigned int irq_nr)
static void pmac_mask_and_ack_irq(struct irq_data *d)
static void pmac_ack_irq(struct irq_data *d)
static void __pmac_set_irq_mask(unsigned int irq_nr, int nokicklost)
static unsigned int pmac_startup_irq(struct irq_data *d)
static void pmac_mask_irq(struct irq_data *d)
static void pmac_unmask_irq(struct irq_data *d)
static int pmac_retrigger(struct irq_data *d)
static struct irq_chip pmac_pic = ;
static irqreturn_t gatwick_action(int cpl, void *dev_id)
static unsigned int pmac_pic_get_irq(void)
static struct irqaction xmon_action = ;
static struct irqaction gatwick_cascade_action = ;
static int pmac_pic_host_match(struct irq_host *h, struct device_node *node)
static int pmac_pic_host_map(struct irq_host *h, unsigned int virq,
irq_hw_number_t hw)
static int pmac_pic_host_xlate(struct irq_host *h, struct device_node *ct,
const u32 *intspec, unsigned int intsize,
irq_hw_number_t *out_hwirq,
unsigned int *out_flags)
static struct irq_host_ops pmac_pic_host_ops = ;
static void __init pmac_pic_probe_oldstyle(void)
int of_irq_map_oldworld(struct device_node *device, int index,
struct of_irq *out_irq)
static void pmac_u3_cascade(unsigned int irq, struct irq_desc *desc)
static void __init pmac_pic_setup_mpic_nmi(struct mpic *mpic)
static struct mpic * __init pmac_setup_one_mpic(struct device_node *np,
int master)
static int __init pmac_pic_probe_mpic(void)
void __init pmac_pic_init(void)
#if defined(CONFIG_PM) && defined(CONFIG_PPC32)
unsigned long sleep_save_mask[2];
static int pmacpic_find_viaint(void)
static int pmacpic_suspend(void)
static void pmacpic_resume(void)
static struct syscore_ops pmacpic_syscore_ops = ;
static int __init init_pmacpic_syscore(void)
machine_subsys_initcall(powermac, init_pmacpic_syscore);
