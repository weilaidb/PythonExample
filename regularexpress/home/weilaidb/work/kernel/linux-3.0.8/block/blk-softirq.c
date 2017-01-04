static DEFINE_PER_CPU(struct list_head, blk_cpu_done);
static void blk_done_softirq(struct softirq_action *h)
#if defined(CONFIG_SMP) && defined(CONFIG_USE_GENERIC_SMP_HELPERS)
static void trigger_softirq(void *data)
static int raise_blk_irq(int cpu, struct request *rq)
static int raise_blk_irq(int cpu, struct request *rq)
static int __cpuinit blk_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata blk_cpu_notifier = ;
void __blk_complete_request(struct request *req)
void blk_complete_request(struct request *req)
EXPORT_SYMBOL(blk_complete_request);
static __init int blk_softirq_init(void)
subsys_initcall(blk_softirq_init);
