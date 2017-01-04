#undef DEBUG_SMP
static DEFINE_SPINLOCK(flushcache_lock);
static volatile unsigned long flushcache_cpumask = 0;
static volatile cpumask_t flush_cpumask;
static struct mm_struct *flush_mm;
static struct vm_area_struct *flush_vma;
static volatile unsigned long flush_va;
static DEFINE_SPINLOCK(tlbstate_lock);
#define FLUSH_ALL 0xffffffff
DECLARE_PER_CPU(int, prof_multiplier);
DECLARE_PER_CPU(int, prof_old_multiplier);
DECLARE_PER_CPU(int, prof_counter);
extern spinlock_t ipi_lock[];
void smp_reschedule_interrupt(void);
void smp_flush_cache_all_interrupt(void);
static void flush_tlb_all_ipi(void *);
static void flush_tlb_others(cpumask_t, struct mm_struct *,
struct vm_area_struct *, unsigned long);
void smp_invalidate_interrupt(void);
static void stop_this_cpu(void *);
void smp_ipi_timer_interrupt(struct pt_regs *);
void smp_local_timer_interrupt(void);
static void send_IPI_allbutself(int, int);
static void send_IPI_mask(const struct cpumask *, int, int);
void smp_send_reschedule(int cpu_id)
void smp_reschedule_interrupt(void)
void smp_flush_cache_all(void)
void smp_flush_cache_all_interrupt(void)
void smp_flush_tlb_all(void)
static void flush_tlb_all_ipi(void *info)
void smp_flush_tlb_mm(struct mm_struct *mm)
void smp_flush_tlb_range(struct vm_area_struct *vma, unsigned long start,
unsigned long end)
void smp_flush_tlb_page(struct vm_area_struct *vma, unsigned long va)
static void flush_tlb_others(cpumask_t cpumask, struct mm_struct *mm,
struct vm_area_struct *vma, unsigned long va)
void smp_invalidate_interrupt(void)
void smp_send_stop(void)
static void stop_this_cpu(void *dummy)
void arch_send_call_function_ipi_mask(const struct cpumask *mask)
void arch_send_call_function_single_ipi(int cpu)
void smp_call_function_interrupt(void)
void smp_call_function_single_interrupt(void)
void smp_send_timer(void)
void smp_ipi_timer_interrupt(struct pt_regs *regs)
void smp_local_timer_interrupt(void)
static void send_IPI_allbutself(int ipi_num, int try)
static void send_IPI_mask(const struct cpumask *cpumask, int ipi_num, int try)
unsigned long send_IPI_mask_phys(const cpumask_t *physid_mask, int ipi_num,
int try)
