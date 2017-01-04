#define IPI_SCHEDULE 1
#define IPI_CALL 2
#define IPI_FLUSH_TLB 4
#define IPI_BOOT 8
#define FLUSH_ALL (void*)0xffffffff
spinlock_t cris_atomic_locks[] = ;
cpumask_t phys_cpu_present_map = CPU_MASK_NONE;
EXPORT_SYMBOL(phys_cpu_present_map);
volatile int cpu_now_booting = 0;
volatile struct thread_info *smp_init_current_idle_thread;
static DEFINE_SPINLOCK(call_lock);
static DEFINE_SPINLOCK(tlbstate_lock);
struct call_data_struct ;
static struct call_data_struct * call_data;
static struct mm_struct* flush_mm;
static struct vm_area_struct* flush_vma;
static unsigned long flush_addr;
static unsigned long irq_regs[NR_CPUS] = ;
static irqreturn_t crisv32_ipi_interrupt(int irq, void *dev_id);
static int send_ipi(int vector, int wait, cpumask_t cpu_mask);
static struct irqaction irq_ipi  = ;
extern void cris_mmu_init(void);
extern void cris_timer_init(void);
void __init smp_prepare_cpus(unsigned int max_cpus)
void __devinit smp_prepare_boot_cpu(void)
void __init smp_cpus_done(unsigned int max_cpus)
static int __init
smp_boot_one_cpu(int cpuid)
void __init smp_callin(void)
void stop_this_cpu(void* dummy)
void smp_send_stop(void)
int setup_profiling_timer(unsigned int multiplier)
unsigned long cache_decay_ticks = 1;
int __cpuinit __cpu_up(unsigned int cpu)
void smp_send_reschedule(int cpu)
void flush_tlb_common(struct mm_struct* mm, struct vm_area_struct* vma, unsigned long addr)
void flush_tlb_all(void)
void flush_tlb_mm(struct mm_struct *mm)
void flush_tlb_page(struct vm_area_struct *vma,
unsigned long addr)
int send_ipi(int vector, int wait, cpumask_t cpu_mask)
int smp_call_function(void (*func)(void *info), void *info, int wait)
irqreturn_t crisv32_ipi_interrupt(int irq, void *dev_id)
