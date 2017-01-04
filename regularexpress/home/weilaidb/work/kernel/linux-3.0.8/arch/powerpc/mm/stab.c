struct stab_entry ;
#define NR_STAB_CACHE_ENTRIES 8
static DEFINE_PER_CPU(long, stab_cache_ptr);
static DEFINE_PER_CPU(long [NR_STAB_CACHE_ENTRIES], stab_cache);
static int make_ste(unsigned long stab, unsigned long esid, unsigned long vsid)
static int __ste_allocate(unsigned long ea, struct mm_struct *mm)
int ste_allocate(unsigned long ea)
void switch_stab(struct task_struct *tsk, struct mm_struct *mm)
void __init stabs_alloc(void)
void stab_initialize(unsigned long stab)
