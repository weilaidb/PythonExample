static void __iomem *reset_reg;
#define MAX_MCE_REGS	32
struct mce_regs ;
static struct mce_regs mce_regs[MAX_MCE_REGS];
static int num_mce_regs;
static int nmi_virq = NO_IRQ;
static void pas_restart(char *cmd)
static arch_spinlock_t timebase_lock;
static unsigned long timebase;
static void __devinit pas_give_timebase(void)
static void __devinit pas_take_timebase(void)
struct smp_ops_t pas_smp_ops = ;
void __init pas_setup_arch(void)
static int __init pas_setup_mce_regs(void)
machine_device_initcall(pasemi, pas_setup_mce_regs);
static __init void pas_init_IRQ(void)
static void __init pas_progress(char *s, unsigned short hex)
static int pas_machine_check_handler(struct pt_regs *regs)
static void __init pas_init_early(void)
static int pcmcia_notify(struct notifier_block *nb, unsigned long action,
void *data)
static struct notifier_block pcmcia_notifier = ;
static inline void pasemi_pcmcia_init(void)
static inline void pasemi_pcmcia_init(void)
static struct of_device_id pasemi_bus_ids[] = ;
static int __init pasemi_publish_devices(void)
machine_device_initcall(pasemi, pasemi_publish_devices);
static int __init pas_probe(void)
define_machine(pasemi) ;
