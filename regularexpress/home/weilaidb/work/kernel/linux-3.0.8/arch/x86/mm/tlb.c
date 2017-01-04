DEFINE_PER_CPU_SHARED_ALIGNED(struct tlb_state, cpu_tlbstate)
= ;
union smp_flush_state  ____cacheline_internodealigned_in_smp;
static union smp_flush_state flush_state[NUM_INVALIDATE_TLB_VECTORS];
static DEFINE_PER_CPU_READ_MOSTLY(int, tlb_vector_offset);
void leave_mm(int cpu)
EXPORT_SYMBOL_GPL(leave_mm);
asmlinkage
void smp_invalidate_interrupt(struct pt_regs *regs)
static void flush_tlb_others_ipi(const struct cpumask *cpumask,
struct mm_struct *mm, unsigned long va)
void native_flush_tlb_others(const struct cpumask *cpumask,
struct mm_struct *mm, unsigned long va)
static void __cpuinit calculate_tlb_offset(void)
static int __cpuinit tlb_cpuhp_notify(struct notifier_block *n,
unsigned long action, void *hcpu)
static int __cpuinit init_smp_flush(void)
core_initcall(init_smp_flush);
void flush_tlb_current_task(void)
void flush_tlb_mm(struct mm_struct *mm)
void flush_tlb_page(struct vm_area_struct *vma, unsigned long va)
static void do_flush_tlb_all(void *info)
void flush_tlb_all(void)
