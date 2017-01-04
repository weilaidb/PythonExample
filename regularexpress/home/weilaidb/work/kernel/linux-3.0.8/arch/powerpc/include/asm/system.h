#define _ASM_POWERPC_SYSTEM_H
#define mb()   __asm__ __volatile__ ("sync" : : : "memory")
#define rmb()  __asm__ __volatile__ ("sync" : : : "memory")
#define wmb()  __asm__ __volatile__ ("sync" : : : "memory")
#define read_barrier_depends()  do  while(0)
#define set_mb(var, value)	do  while (0)
#define AT_VECTOR_SIZE_ARCH 6
#    define SMPWMB      LWSYNC
#    define SMPWMB      eieio
#define smp_mb()	mb()
#define smp_rmb()	__asm__ __volatile__ (stringify_in_c(LWSYNC) : : :"memory")
#define smp_wmb()	__asm__ __volatile__ (stringify_in_c(SMPWMB) : : :"memory")
#define smp_read_barrier_depends()	read_barrier_depends()
#define smp_mb()	barrier()
#define smp_rmb()	barrier()
#define smp_wmb()	barrier()
#define smp_read_barrier_depends()	do  while(0)
#define data_barrier(x)	\
asm volatile("twi 0,%0,0; isync" : : "r" (x) : "memory");
struct task_struct;
struct pt_regs;
#if defined(CONFIG_DEBUGGER) || defined(CONFIG_KEXEC)
extern int (*__debugger)(struct pt_regs *regs);
extern int (*__debugger_ipi)(struct pt_regs *regs);
extern int (*__debugger_bpt)(struct pt_regs *regs);
extern int (*__debugger_sstep)(struct pt_regs *regs);
extern int (*__debugger_iabr_match)(struct pt_regs *regs);
extern int (*__debugger_dabr_match)(struct pt_regs *regs);
extern int (*__debugger_fault_handler)(struct pt_regs *regs);
#define DEBUGGER_BOILERPLATE(__NAME) \
static inline int __NAME(struct pt_regs *regs) \
DEBUGGER_BOILERPLATE(debugger)
DEBUGGER_BOILERPLATE(debugger_ipi)
DEBUGGER_BOILERPLATE(debugger_bpt)
DEBUGGER_BOILERPLATE(debugger_sstep)
DEBUGGER_BOILERPLATE(debugger_iabr_match)
DEBUGGER_BOILERPLATE(debugger_dabr_match)
DEBUGGER_BOILERPLATE(debugger_fault_handler)
static inline int debugger(struct pt_regs *regs)
static inline int debugger_ipi(struct pt_regs *regs)
static inline int debugger_bpt(struct pt_regs *regs)
static inline int debugger_sstep(struct pt_regs *regs)
static inline int debugger_iabr_match(struct pt_regs *regs)
static inline int debugger_dabr_match(struct pt_regs *regs)
static inline int debugger_fault_handler(struct pt_regs *regs)
extern int set_dabr(unsigned long dabr);
extern void do_send_trap(struct pt_regs *regs, unsigned long address,
unsigned long error_code, int signal_code, int brkpt);
extern void do_dabr(struct pt_regs *regs, unsigned long address,
unsigned long error_code);
extern void print_backtrace(unsigned long *);
extern void show_regs(struct pt_regs * regs);
extern void flush_instruction_cache(void);
extern void hard_reset_now(void);
extern void poweroff_now(void);
extern long _get_L2CR(void);
extern long _get_L3CR(void);
extern void _set_L2CR(unsigned long);
extern void _set_L3CR(unsigned long);
#define _get_L2CR()	0L
#define _get_L3CR()	0L
#define _set_L2CR(val)	do  while(0)
#define _set_L3CR(val)	do  while(0)
extern void via_cuda_init(void);
extern void read_rtc_time(void);
extern void pmac_find_display(void);
extern void giveup_fpu(struct task_struct *);
extern void disable_kernel_fp(void);
extern void enable_kernel_fp(void);
extern void flush_fp_to_thread(struct task_struct *);
extern void enable_kernel_altivec(void);
extern void giveup_altivec(struct task_struct *);
extern void load_up_altivec(struct task_struct *);
extern int emulate_altivec(struct pt_regs *);
extern void __giveup_vsx(struct task_struct *);
extern void giveup_vsx(struct task_struct *);
extern void enable_kernel_spe(void);
extern void giveup_spe(struct task_struct *);
extern void load_up_spe(struct task_struct *);
extern int fix_alignment(struct pt_regs *);
extern void cvt_fd(float *from, double *to);
extern void cvt_df(double *from, float *to);
extern void discard_lazy_cpu_state(void);
static inline void discard_lazy_cpu_state(void)
extern void flush_altivec_to_thread(struct task_struct *);
static inline void flush_altivec_to_thread(struct task_struct *t)
extern void flush_vsx_to_thread(struct task_struct *);
static inline void flush_vsx_to_thread(struct task_struct *t)
extern void flush_spe_to_thread(struct task_struct *);
static inline void flush_spe_to_thread(struct task_struct *t)
extern int call_rtas(const char *, int, int, unsigned long *, ...);
extern void cacheable_memzero(void *p, unsigned int nb);
extern void *cacheable_memcpy(void *, const void *, unsigned int);
extern int do_page_fault(struct pt_regs *, unsigned long, unsigned long);
extern void bad_page_fault(struct pt_regs *, unsigned long, int);
extern int die(const char *, struct pt_regs *, long);
extern void _exception(int, struct pt_regs *, int, unsigned long);
extern void _nmask_and_or_msr(unsigned long nmask, unsigned long or_val);
extern u32 booke_wdt_enabled;
extern u32 booke_wdt_period;
struct device_node;
extern void note_scsi_host(struct device_node *, void *);
extern struct task_struct *__switch_to(struct task_struct *,
struct task_struct *);
#define switch_to(prev, next, last)	((last) = __switch_to((prev), (next)))
struct thread_struct;
extern struct task_struct *_switch(struct thread_struct *prev,
struct thread_struct *next);
extern unsigned int rtas_data;
extern int mem_init_done;
extern int init_bootmem_done;
extern phys_addr_t memory_limit;
extern unsigned long klimit;
extern void *zalloc_maybe_bootmem(size_t size, gfp_t mask);
extern int powersave_nap;
static __always_inline unsigned long
__xchg_u32(volatile void *p, unsigned long val)
static __always_inline unsigned long
__xchg_u32_local(volatile void *p, unsigned long val)
static __always_inline unsigned long
__xchg_u64(volatile void *p, unsigned long val)
static __always_inline unsigned long
__xchg_u64_local(volatile void *p, unsigned long val)
extern void __xchg_called_with_bad_pointer(void);
static __always_inline unsigned long
__xchg(volatile void *ptr, unsigned long x, unsigned int size)
static __always_inline unsigned long
__xchg_local(volatile void *ptr, unsigned long x, unsigned int size)
#define xchg(ptr,x)							     \
()
#define xchg_local(ptr,x)						     \
()
#define __HAVE_ARCH_CMPXCHG	1
static __always_inline unsigned long
__cmpxchg_u32(volatile unsigned int *p, unsigned long old, unsigned long new)
static __always_inline unsigned long
__cmpxchg_u32_local(volatile unsigned int *p, unsigned long old,
unsigned long new)
static __always_inline unsigned long
__cmpxchg_u64(volatile unsigned long *p, unsigned long old, unsigned long new)
static __always_inline unsigned long
__cmpxchg_u64_local(volatile unsigned long *p, unsigned long old,
unsigned long new)
extern void __cmpxchg_called_with_bad_pointer(void);
static __always_inline unsigned long
__cmpxchg(volatile void *ptr, unsigned long old, unsigned long new,
unsigned int size)
static __always_inline unsigned long
__cmpxchg_local(volatile void *ptr, unsigned long old, unsigned long new,
unsigned int size)
#define cmpxchg(ptr, o, n)						 \
()
#define cmpxchg_local(ptr, o, n)					 \
()
#define NET_IP_ALIGN	0
#define cmpxchg64(ptr, o, n)						\
()
#define cmpxchg64_local(ptr, o, n)					\
()
#define cmpxchg64_local(ptr, o, n) __cmpxchg64_local_generic((ptr), (o), (n))
extern unsigned long arch_align_stack(unsigned long sp);
extern unsigned long reloc_offset(void);
extern unsigned long add_reloc_offset(unsigned long);
extern void reloc_got2(unsigned long);
#define PTRRELOC(x)	((typeof(x)) add_reloc_offset((unsigned long)(x)))
extern struct dentry *powerpc_debugfs_root;
