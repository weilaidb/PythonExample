#define COP_PID_NONE 0
#define COP_PID_MIN (COP_PID_NONE + 1)
#define COP_PID_MAX (0xFFFF)
static DEFINE_SPINLOCK(mmu_context_acop_lock);
static DEFINE_IDA(cop_ida);
void switch_cop(struct mm_struct *next)
static int new_cop_pid(struct ida *ida, int min_id, int max_id,
spinlock_t *lock)
static void sync_cop(void *arg)
int use_cop(unsigned long acop, struct mm_struct *mm)
EXPORT_SYMBOL_GPL(use_cop);
void drop_cop(unsigned long acop, struct mm_struct *mm)
EXPORT_SYMBOL_GPL(drop_cop);
static DEFINE_SPINLOCK(mmu_context_lock);
static DEFINE_IDA(mmu_context_ida);
#define MAX_CONTEXT	((1UL << 19) - 1)
int __init_new_context(void)
EXPORT_SYMBOL_GPL(__init_new_context);
int init_new_context(struct task_struct *tsk, struct mm_struct *mm)
void __destroy_context(int context_id)
EXPORT_SYMBOL_GPL(__destroy_context);
void destroy_context(struct mm_struct *mm)
