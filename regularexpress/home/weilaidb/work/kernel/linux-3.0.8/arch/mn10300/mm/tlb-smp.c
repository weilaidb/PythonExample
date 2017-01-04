#define FLUSH_ALL	0xffffffff
static cpumask_t flush_cpumask;
static struct mm_struct *flush_mm;
static unsigned long flush_va;
static DEFINE_SPINLOCK(tlbstate_lock);
DEFINE_PER_CPU_SHARED_ALIGNED(struct tlb_state, cpu_tlbstate) = ;
static void flush_tlb_others(cpumask_t cpumask, struct mm_struct *mm,
unsigned long va);
static void do_flush_tlb_all(void *info);
void smp_flush_tlb(void *unused)
static void flush_tlb_others(cpumask_t cpumask, struct mm_struct *mm,
unsigned long va)
void flush_tlb_mm(struct mm_struct *mm)
void flush_tlb_current_task(void)
void flush_tlb_page(struct vm_area_struct *vma, unsigned long va)
static void do_flush_tlb_all(void *unused)
void flush_tlb_all(void)
