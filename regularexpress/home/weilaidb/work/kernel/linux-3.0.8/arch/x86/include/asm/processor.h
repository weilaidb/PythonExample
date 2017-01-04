#define _ASM_X86_PROCESSOR_H
struct task_struct;
struct mm_struct;
#define HBP_NUM 4
static inline void *current_text_addr(void)
# define ARCH_MIN_TASKALIGN		(1 << INTERNODE_CACHE_SHIFT)
# define ARCH_MIN_MMSTRUCT_ALIGN	(1 << INTERNODE_CACHE_SHIFT)
# define ARCH_MIN_TASKALIGN		16
# define ARCH_MIN_MMSTRUCT_ALIGN	0
struct cpuinfo_x86  __attribute__((__aligned__(SMP_CACHE_BYTES)));
#define X86_VENDOR_INTEL	0
#define X86_VENDOR_CYRIX	1
#define X86_VENDOR_AMD		2
#define X86_VENDOR_UMC		3
#define X86_VENDOR_CENTAUR	5
#define X86_VENDOR_TRANSMETA	7
#define X86_VENDOR_NSC		8
#define X86_VENDOR_NUM		9
#define X86_VENDOR_UNKNOWN	0xff
extern struct cpuinfo_x86	boot_cpu_data;
extern struct cpuinfo_x86	new_cpu_data;
extern struct tss_struct	doublefault_tss;
extern __u32			cpu_caps_cleared[NCAPINTS];
extern __u32			cpu_caps_set[NCAPINTS];
DECLARE_PER_CPU_SHARED_ALIGNED(struct cpuinfo_x86, cpu_info);
#define cpu_data(cpu)		per_cpu(cpu_info, cpu)
#define cpu_info		boot_cpu_data
#define cpu_data(cpu)		boot_cpu_data
extern const struct seq_operations cpuinfo_op;
static inline int hlt_works(int cpu)
#define cache_line_size()	(boot_cpu_data.x86_cache_alignment)
extern void cpu_detect(struct cpuinfo_x86 *c);
extern struct pt_regs *idle_regs(struct pt_regs *);
extern void early_cpu_init(void);
extern void identify_boot_cpu(void);
extern void identify_secondary_cpu(struct cpuinfo_x86 *);
extern void print_cpu_info(struct cpuinfo_x86 *);
extern void init_scattered_cpuid_features(struct cpuinfo_x86 *c);
extern unsigned int init_intel_cacheinfo(struct cpuinfo_x86 *c);
extern unsigned short num_cache_leaves;
extern void detect_extended_topology(struct cpuinfo_x86 *c);
extern void detect_ht(struct cpuinfo_x86 *c);
static inline void native_cpuid(unsigned int *eax, unsigned int *ebx,
unsigned int *ecx, unsigned int *edx)
static inline void load_cr3(pgd_t *pgdir)
struct x86_hw_tss  __attribute__((packed));
struct x86_hw_tss  __attribute__((packed)) ____cacheline_aligned;
#define IO_BITMAP_BITS			65536
#define IO_BITMAP_BYTES			(IO_BITMAP_BITS/8)
#define IO_BITMAP_LONGS			(IO_BITMAP_BYTES/sizeof(long))
#define IO_BITMAP_OFFSET		offsetof(struct tss_struct, io_bitmap)
#define INVALID_IO_BITMAP_OFFSET	0x8000
struct tss_struct  ____cacheline_aligned;
DECLARE_PER_CPU_SHARED_ALIGNED(struct tss_struct, init_tss);
struct orig_ist ;
#define	MXCSR_DEFAULT		0x1f80
struct i387_fsave_struct ;
struct i387_fxsave_struct  __attribute__((aligned(16)));
struct i387_soft_struct ;
struct ymmh_struct ;
struct xsave_hdr_struct  __attribute__((packed));
struct xsave_struct  __attribute__ ((packed, aligned (64)));
union thread_xstate ;
struct fpu ;
DECLARE_PER_CPU(struct orig_ist, orig_ist);
union irq_stack_union ;
DECLARE_PER_CPU_FIRST(union irq_stack_union, irq_stack_union);
DECLARE_INIT_PER_CPU(irq_stack_union);
DECLARE_PER_CPU(char *, irq_stack_ptr);
DECLARE_PER_CPU(unsigned int, irq_count);
extern unsigned long kernel_eflags;
extern asmlinkage void ignore_sysret(void);
struct stack_canary ;
DECLARE_PER_CPU_ALIGNED(struct stack_canary, stack_canary);
extern unsigned int xstate_size;
extern void free_thread_xstate(struct task_struct *);
extern struct kmem_cache *task_xstate_cachep;
struct perf_event;
struct thread_struct ;
static inline unsigned long native_get_debugreg(int regno)
static inline void native_set_debugreg(int regno, unsigned long value)
static inline void native_set_iopl_mask(unsigned mask)
static inline void
native_load_sp0(struct tss_struct *tss, struct thread_struct *thread)
static inline void native_swapgs(void)
#define __cpuid			native_cpuid
#define paravirt_enabled()	0
#define get_debugreg(var, register)				\
(var) = native_get_debugreg(register)
#define set_debugreg(value, register)				\
native_set_debugreg(register, value)
static inline void load_sp0(struct tss_struct *tss,
struct thread_struct *thread)
#define set_iopl_mask native_set_iopl_mask
extern unsigned long		mmu_cr4_features;
static inline void set_in_cr4(unsigned long mask)
static inline void clear_in_cr4(unsigned long mask)
typedef struct  mm_segment_t;
extern int kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);
extern void release_thread(struct task_struct *);
extern void prepare_to_copy(struct task_struct *tsk);
unsigned long get_wchan(struct task_struct *p);
static inline void cpuid(unsigned int op,
unsigned int *eax, unsigned int *ebx,
unsigned int *ecx, unsigned int *edx)
static inline void cpuid_count(unsigned int op, int count,
unsigned int *eax, unsigned int *ebx,
unsigned int *ecx, unsigned int *edx)
static inline unsigned int cpuid_eax(unsigned int op)
static inline unsigned int cpuid_ebx(unsigned int op)
static inline unsigned int cpuid_ecx(unsigned int op)
static inline unsigned int cpuid_edx(unsigned int op)
static inline void rep_nop(void)
static inline void cpu_relax(void)
static inline void sync_core(void)
static inline void __monitor(const void *eax, unsigned long ecx,
unsigned long edx)
static inline void __mwait(unsigned long eax, unsigned long ecx)
static inline void __sti_mwait(unsigned long eax, unsigned long ecx)
extern void mwait_idle_with_hints(unsigned long eax, unsigned long ecx);
extern void select_idle_routine(const struct cpuinfo_x86 *c);
extern void init_amd_e400_c1e_mask(void);
extern unsigned long		boot_option_idle_override;
extern bool			amd_e400_c1e_detected;
enum idle_boot_override ;
extern void enable_sep_cpu(void);
extern int sysenter_setup(void);
extern void early_trap_init(void);
extern struct desc_ptr		early_gdt_descr;
extern void cpu_set_gdt(int);
extern void switch_to_new_gdt(int);
extern void load_percpu_segment(int);
extern void cpu_init(void);
static inline unsigned long get_debugctlmsr(void)
static inline void update_debugctlmsr(unsigned long debugctlmsr)
extern unsigned int		machine_id;
extern unsigned int		machine_submodel_id;
extern unsigned int		BIOS_revision;
extern int			bootloader_type;
extern int			bootloader_version;
extern char			ignore_fpu_irq;
#define HAVE_ARCH_PICK_MMAP_LAYOUT 1
#define ARCH_HAS_PREFETCHW
#define ARCH_HAS_SPINLOCK_PREFETCH
# define BASE_PREFETCH		ASM_NOP4
# define ARCH_HAS_PREFETCH
# define BASE_PREFETCH		"prefetcht0 (%1)"
static inline void prefetch(const void *x)
static inline void prefetchw(const void *x)
static inline void spin_lock_prefetch(const void *x)
#define TASK_SIZE		PAGE_OFFSET
#define TASK_SIZE_MAX		TASK_SIZE
#define STACK_TOP		TASK_SIZE
#define STACK_TOP_MAX		STACK_TOP
#define INIT_THREAD
#define INIT_TSS
extern unsigned long thread_saved_pc(struct task_struct *tsk);
#define THREAD_SIZE_LONGS      (THREAD_SIZE/sizeof(unsigned long))
#define KSTK_TOP(info)                                                 \
()
#define task_pt_regs(task)                                             \
()
#define KSTK_ESP(task)		(task_pt_regs(task)->sp)
#define TASK_SIZE_MAX	((1UL << 47) - PAGE_SIZE)
#define IA32_PAGE_OFFSET	((current->personality & ADDR_LIMIT_3GB) ? \
0xc0000000 : 0xFFFFe000)
#define TASK_SIZE		(test_thread_flag(TIF_IA32) ? \
IA32_PAGE_OFFSET : TASK_SIZE_MAX)
#define TASK_SIZE_OF(child)	((test_tsk_thread_flag(child, TIF_IA32)) ? \
IA32_PAGE_OFFSET : TASK_SIZE_MAX)
#define STACK_TOP		TASK_SIZE
#define STACK_TOP_MAX		TASK_SIZE_MAX
#define INIT_THREAD
#define INIT_TSS
#define thread_saved_pc(t)	(*(unsigned long *)((t)->thread.sp - 8))
#define task_pt_regs(tsk)	((struct pt_regs *)(tsk)->thread.sp0 - 1)
extern unsigned long KSTK_ESP(struct task_struct *task);
extern void start_thread(struct pt_regs *regs, unsigned long new_ip,
unsigned long new_sp);
#define TASK_UNMAPPED_BASE	(PAGE_ALIGN(TASK_SIZE / 3))
#define KSTK_EIP(task)		(task_pt_regs(task)->ip)
#define GET_TSC_CTL(adr)	get_tsc_mode((adr))
#define SET_TSC_CTL(val)	set_tsc_mode((val))
extern int get_tsc_mode(unsigned long adr);
extern int set_tsc_mode(unsigned int val);
extern int amd_get_nb_id(int cpu);
struct aperfmperf ;
static inline void get_aperfmperf(struct aperfmperf *am)
#define APERFMPERF_SHIFT 10
static inline
unsigned long calc_aperfmperf_ratio(struct aperfmperf *old,
struct aperfmperf *new)
extern const int amd_erratum_383[];
extern const int amd_erratum_400[];
extern bool cpu_has_amd_erratum(const int *);
#define AMD_LEGACY_ERRATUM(...)
#define AMD_OSVW_ERRATUM(osvw_id, ...)
#define AMD_MODEL_RANGE(f, m_start, s_start, m_end, s_end) \
((f << 24) | (m_start << 16) | (s_start << 12) | (m_end << 4) | (s_end))
#define AMD_MODEL_RANGE_FAMILY(range)	(((range) >> 24) & 0xff)
#define AMD_MODEL_RANGE_START(range)	(((range) >> 12) & 0xfff)
#define AMD_MODEL_RANGE_END(range)	((range) & 0xfff)
#define cpu_has_amd_erratum(x)	(false)
