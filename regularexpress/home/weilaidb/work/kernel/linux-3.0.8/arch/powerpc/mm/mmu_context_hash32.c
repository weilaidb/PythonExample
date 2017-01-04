#define NO_CONTEXT      	((unsigned long) -1)
#define LAST_CONTEXT    	32767
#define FIRST_CONTEXT    	1
static unsigned long next_mmu_context;
static unsigned long context_map[LAST_CONTEXT / BITS_PER_LONG + 1];
unsigned long __init_new_context(void)
EXPORT_SYMBOL_GPL(__init_new_context);
int init_new_context(struct task_struct *t, struct mm_struct *mm)
void __destroy_context(unsigned long ctx)
EXPORT_SYMBOL_GPL(__destroy_context);
void destroy_context(struct mm_struct *mm)
void __init mmu_context_init(void)
