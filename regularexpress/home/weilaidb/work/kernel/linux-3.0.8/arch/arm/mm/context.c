static DEFINE_SPINLOCK(cpu_asid_lock);
unsigned int cpu_last_asid = ASID_FIRST_VERSION;
DEFINE_PER_CPU(struct mm_struct *, current_mm);
void __init_new_context(struct task_struct *tsk, struct mm_struct *mm)
static void flush_context(void)
static void set_mm_context(struct mm_struct *mm, unsigned int asid)
static void reset_context(void *info)
static inline void set_mm_context(struct mm_struct *mm, unsigned int asid)
void __new_context(struct mm_struct *mm)
