#define _ASM_IA64_PROCESSOR_H
#define IA64_NUM_PHYS_STACK_REG	96
#define IA64_NUM_DBG_REGS	8
#define DEFAULT_MAP_BASE	__IA64_UL_CONST(0x2000000000000000)
#define DEFAULT_TASK_SIZE	__IA64_UL_CONST(0xa000000000000000)
#define TASK_SIZE_OF(tsk)	((tsk)->thread.task_size)
#define TASK_SIZE       	TASK_SIZE_OF(current)
#define TASK_UNMAPPED_BASE	(current->thread.map_base)
#define IA64_THREAD_FPH_VALID	(__IA64_UL(1) << 0)
#define IA64_THREAD_DBG_VALID	(__IA64_UL(1) << 1)
#define IA64_THREAD_PM_VALID	(__IA64_UL(1) << 2)
#define IA64_THREAD_UAC_NOPRINT	(__IA64_UL(1) << 3)
#define IA64_THREAD_UAC_SIGBUS	(__IA64_UL(1) << 4)
#define IA64_THREAD_MIGRATION	(__IA64_UL(1) << 5)
#define IA64_THREAD_FPEMU_NOPRINT (__IA64_UL(1) << 6)
#define IA64_THREAD_FPEMU_SIGFPE  (__IA64_UL(1) << 7)
#define IA64_THREAD_UAC_SHIFT	3
#define IA64_THREAD_UAC_MASK	(IA64_THREAD_UAC_NOPRINT | IA64_THREAD_UAC_SIGBUS)
#define IA64_THREAD_FPEMU_SHIFT	6
#define IA64_THREAD_FPEMU_MASK	(IA64_THREAD_FPEMU_NOPRINT | IA64_THREAD_FPEMU_SIGFPE)
#define IA64_NSEC_PER_CYC_SHIFT	30
struct ia64_psr ;
union ia64_isr ;
union ia64_lid ;
union ia64_tpr ;
union ia64_itir ;
union  ia64_rr ;
struct cpuinfo_ia64 ;
DECLARE_PER_CPU(struct cpuinfo_ia64, ia64_cpu_info);
#define local_cpu_data		(&__ia64_per_cpu_var(ia64_cpu_info))
#define cpu_data(cpu)		(&per_cpu(ia64_cpu_info, cpu))
extern void print_cpu_info (struct cpuinfo_ia64 *);
typedef struct  mm_segment_t;
#define SET_UNALIGN_CTL(task,value)								\
()
#define GET_UNALIGN_CTL(task,addr)								\
()
#define SET_FPEMU_CTL(task,value)								\
()
#define GET_FPEMU_CTL(task,addr)								\
()
struct thread_struct ;
#define INIT_THREAD
#define start_thread(regs,new_ip,new_sp) do  while (0)
struct mm_struct;
struct task_struct;
#define release_thread(dead_task)
#define prepare_to_copy(tsk)	do  while (0)
extern pid_t kernel_thread (int (*fn)(void *), void *arg, unsigned long flags);
extern unsigned long get_wchan (struct task_struct *p);
#define KSTK_EIP(tsk)					\
()
#define KSTK_ESP(tsk)  ((tsk)->thread.ksp)
extern void ia64_getreg_unknown_kr (void);
extern void ia64_setreg_unknown_kr (void);
#define ia64_get_kr(regnum)					\
()
#define ia64_set_kr(regnum, r) 					\
()
#define ia64_is_local_fpu_owner(t)								\
()
#define ia64_set_local_fpu_owner(t) do  while (0)
#define ia64_drop_fpu(t)	((t)->thread.last_fph_cpu = -1)
extern void __ia64_init_fpu (void);
extern void __ia64_save_fpu (struct ia64_fpreg *fph);
extern void __ia64_load_fpu (struct ia64_fpreg *fph);
extern void ia64_save_debug_regs (unsigned long *save_area);
extern void ia64_load_debug_regs (unsigned long *save_area);
#define ia64_fph_enable()	do  while (0)
#define ia64_fph_disable()	do  while (0)
static inline void
ia64_init_fpu (void)
static inline void
ia64_save_fpu (struct ia64_fpreg *fph)
static inline void
ia64_load_fpu (struct ia64_fpreg *fph)
static inline __u64
ia64_clear_ic (void)
static inline void
ia64_set_psr (__u64 psr)
static inline void
ia64_itr (__u64 target_mask, __u64 tr_num,
__u64 vmaddr, __u64 pte,
__u64 log_page_size)
static inline void
ia64_itc (__u64 target_mask, __u64 vmaddr, __u64 pte,
__u64 log_page_size)
static inline void
ia64_ptr (__u64 target_mask, __u64 vmaddr, __u64 log_size)
static inline void
ia64_set_iva (void *ivt_addr)
static inline void
ia64_set_pta (__u64 pta)
static inline void
ia64_eoi (void)
#define cpu_relax()	ia64_hint(ia64_hint_pause)
static inline int
ia64_get_irr(unsigned int vector)
static inline void
ia64_set_lrr0 (unsigned long val)
static inline void
ia64_set_lrr1 (unsigned long val)
static inline __u64
ia64_unat_pos (void *spill_addr)
static inline void
ia64_set_unat (__u64 *unat, void *spill_addr, unsigned long nat)
static inline unsigned long
thread_saved_pc (struct task_struct *t)
#define current_text_addr() \
()
static inline __u64
ia64_get_ivr (void)
static inline void
ia64_set_dbr (__u64 regnum, __u64 value)
static inline __u64
ia64_get_dbr (__u64 regnum)
static inline __u64
ia64_rotr (__u64 w, __u64 n)
#define ia64_rotl(w,n)	ia64_rotr((w), (64) - (n))
static inline void *
ia64_imva (void *addr)
#define ARCH_HAS_PREFETCH
#define ARCH_HAS_PREFETCHW
#define ARCH_HAS_SPINLOCK_PREFETCH
#define PREFETCH_STRIDE			L1_CACHE_BYTES
static inline void
prefetch (const void *x)
static inline void
prefetchw (const void *x)
#define spin_lock_prefetch(x)	prefetchw(x)
extern unsigned long boot_option_idle_override;
enum idle_boot_override ;
