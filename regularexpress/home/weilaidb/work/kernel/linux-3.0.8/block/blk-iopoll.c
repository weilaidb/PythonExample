int blk_iopoll_enabled = 1;
EXPORT_SYMBOL(blk_iopoll_enabled);
static unsigned int blk_iopoll_budget __read_mostly = 256;
static DEFINE_PER_CPU(struct list_head, blk_cpu_iopoll);
void blk_iopoll_sched(struct blk_iopoll *iop)
EXPORT_SYMBOL(blk_iopoll_sched);
void __blk_iopoll_complete(struct blk_iopoll *iop)
EXPORT_SYMBOL(__blk_iopoll_complete);
void blk_iopoll_complete(struct blk_iopoll *iopoll)
EXPORT_SYMBOL(blk_iopoll_complete);
static void blk_iopoll_softirq(struct softirq_action *h)
void blk_iopoll_disable(struct blk_iopoll *iop)
EXPORT_SYMBOL(blk_iopoll_disable);
void blk_iopoll_enable(struct blk_iopoll *iop)
EXPORT_SYMBOL(blk_iopoll_enable);
void blk_iopoll_init(struct blk_iopoll *iop, int weight, blk_iopoll_fn *poll_fn)
EXPORT_SYMBOL(blk_iopoll_init);
static int __cpuinit blk_iopoll_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata blk_iopoll_cpu_notifier = ;
static __init int blk_iopoll_setup(void)
subsys_initcall(blk_iopoll_setup);
