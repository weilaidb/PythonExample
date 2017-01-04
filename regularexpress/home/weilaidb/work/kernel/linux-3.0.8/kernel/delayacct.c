int delayacct_on __read_mostly = 1;
struct kmem_cache *delayacct_cache;
static int __init delayacct_setup_disable(char *str)
__setup("nodelayacct", delayacct_setup_disable);
void delayacct_init(void)
void __delayacct_tsk_init(struct task_struct *tsk)
static inline void delayacct_start(struct timespec *start)
static void delayacct_end(struct timespec *start, struct timespec *end,
u64 *total, u32 *count)
void __delayacct_blkio_start(void)
void __delayacct_blkio_end(void)
int __delayacct_add_tsk(struct taskstats *d, struct task_struct *tsk)
__u64 __delayacct_blkio_ticks(struct task_struct *tsk)
void __delayacct_freepages_start(void)
void __delayacct_freepages_end(void)
