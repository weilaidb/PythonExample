#define pr_hard(args...)	printk(KERN_DEBUG args)
#define pr_hardcont(args...)	printk(KERN_CONT args)
#define pr_hard(args...)	do  while(0)
#define pr_hardcont(args...)	do  while(0)
static unsigned int first_context, last_context;
static unsigned int next_context, nr_free_contexts;
static unsigned long *context_map;
static unsigned long *stale_map[NR_CPUS];
static struct mm_struct **context_mm;
static DEFINE_RAW_SPINLOCK(context_lock);
#define CTX_MAP_SIZE	\
(sizeof(unsigned long) * (last_context / BITS_PER_LONG + 1))
static unsigned int steal_context_smp(unsigned int id)
static unsigned int steal_context_up(unsigned int id)
static void context_check_map(void)
static void context_check_map(void)
void switch_mmu_context(struct mm_struct *prev, struct mm_struct *next)
int init_new_context(struct task_struct *t, struct mm_struct *mm)
void destroy_context(struct mm_struct *mm)
static int __cpuinit mmu_context_cpu_notify(struct notifier_block *self,
unsigned long action, void *hcpu)
static struct notifier_block __cpuinitdata mmu_context_cpu_nb = ;
void __init mmu_context_init(void)
