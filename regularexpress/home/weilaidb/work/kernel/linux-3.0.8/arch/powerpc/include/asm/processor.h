#define _ASM_POWERPC_PROCESSOR_H
#define TS_FPRWIDTH 2
#define TS_FPRWIDTH 1
#define _PREP_Motorola	0x01
#define _PREP_Firm	0x02
#define _PREP_IBM	0x00
#define _PREP_Bull	0x03
#define _CHRP_Motorola	0x04
#define _CHRP_IBM	0x05
#define _CHRP_Pegasos	0x06
#define _CHRP_briq	0x07
#if defined(__KERNEL__) && defined(CONFIG_PPC32)
extern int _chrp_type;
extern int _prep_type;
#define current_text_addr() ()
#define HMT_very_low()   asm volatile("or 31,31,31   # very low priority")
#define HMT_low()	 asm volatile("or 1,1,1	     # low priority")
#define HMT_medium_low() asm volatile("or 6,6,6      # medium low priority")
#define HMT_medium()	 asm volatile("or 2,2,2	     # medium priority")
#define HMT_medium_high() asm volatile("or 5,5,5      # medium high priority")
#define HMT_high()	 asm volatile("or 3,3,3	     # high priority")
struct task_struct;
void start_thread(struct pt_regs *regs, unsigned long fdptr, unsigned long sp);
void release_thread(struct task_struct *);
extern void prepare_to_copy(struct task_struct *tsk);
extern long kernel_thread(int (*fn)(void *), void *arg, unsigned long flags);
extern struct task_struct *last_task_used_math;
extern struct task_struct *last_task_used_altivec;
extern struct task_struct *last_task_used_vsx;
extern struct task_struct *last_task_used_spe;
#if CONFIG_TASK_SIZE > CONFIG_KERNEL_START
#error User TASK_SIZE overlaps with KERNEL_START address
#define TASK_SIZE	(CONFIG_TASK_SIZE)
#define TASK_UNMAPPED_BASE	(TASK_SIZE / 8 * 3)
#define TASK_SIZE_USER64 (0x0000100000000000UL)
#define TASK_SIZE_USER32 (0x0000000100000000UL - (1*PAGE_SIZE))
#define TASK_SIZE_OF(tsk) (test_tsk_thread_flag(tsk, TIF_32BIT) ? \
TASK_SIZE_USER32 : TASK_SIZE_USER64)
#define TASK_SIZE	  TASK_SIZE_OF(current)
#define TASK_UNMAPPED_BASE_USER32 (PAGE_ALIGN(TASK_SIZE_USER32 / 4))
#define TASK_UNMAPPED_BASE_USER64 (PAGE_ALIGN(TASK_SIZE_USER64 / 4))
#define TASK_UNMAPPED_BASE ((is_32bit_task()) ? \
TASK_UNMAPPED_BASE_USER32 : TASK_UNMAPPED_BASE_USER64 )
#define STACK_TOP_USER64 TASK_SIZE_USER64
#define STACK_TOP_USER32 TASK_SIZE_USER32
#define STACK_TOP (is_32bit_task() ? \
STACK_TOP_USER32 : STACK_TOP_USER64)
#define STACK_TOP_MAX STACK_TOP_USER64
#define STACK_TOP TASK_SIZE
#define STACK_TOP_MAX	STACK_TOP
typedef struct  mm_segment_t;
#define TS_FPROFFSET 0
#define TS_VSRLOWOFFSET 1
#define TS_FPR(i) fpr[i][TS_FPROFFSET]
struct thread_struct ;
#define ARCH_MIN_TASKALIGN 16
#define INIT_SP		(sizeof(init_stack) + (unsigned long) &init_stack)
#define INIT_SP_LIMIT \
(_ALIGN_UP(sizeof(init_thread_info), 16) + (unsigned long) &init_stack)
#define SPEFSCR_INIT .spefscr = SPEFSCR_FINVE | SPEFSCR_FDBZE | SPEFSCR_FUNFE | SPEFSCR_FOVFE,
#define SPEFSCR_INIT
#define INIT_THREAD
#define INIT_THREAD
#define thread_saved_pc(tsk)    \
((tsk)->thread.regs? (tsk)->thread.regs->nip: 0)
#define task_pt_regs(tsk)	((struct pt_regs *)(tsk)->thread.regs)
unsigned long get_wchan(struct task_struct *p);
#define KSTK_EIP(tsk)  ((tsk)->thread.regs? (tsk)->thread.regs->nip: 0)
#define KSTK_ESP(tsk)  ((tsk)->thread.regs? (tsk)->thread.regs->gpr[1]: 0)
#define GET_FPEXC_CTL(tsk, adr) get_fpexc_mode((tsk), (adr))
#define SET_FPEXC_CTL(tsk, val) set_fpexc_mode((tsk), (val))
extern int get_fpexc_mode(struct task_struct *tsk, unsigned long adr);
extern int set_fpexc_mode(struct task_struct *tsk, unsigned int val);
#define GET_ENDIAN(tsk, adr) get_endian((tsk), (adr))
#define SET_ENDIAN(tsk, val) set_endian((tsk), (val))
extern int get_endian(struct task_struct *tsk, unsigned long adr);
extern int set_endian(struct task_struct *tsk, unsigned int val);
#define GET_UNALIGN_CTL(tsk, adr)	get_unalign_ctl((tsk), (adr))
#define SET_UNALIGN_CTL(tsk, val)	set_unalign_ctl((tsk), (val))
extern int get_unalign_ctl(struct task_struct *tsk, unsigned long adr);
extern int set_unalign_ctl(struct task_struct *tsk, unsigned int val);
static inline unsigned int __unpack_fe01(unsigned long msr_bits)
static inline unsigned long __pack_fe01(unsigned int fpmode)
#define cpu_relax()	do  while (0)
#define cpu_relax()	barrier()
int validate_sp(unsigned long sp, struct task_struct *p,
unsigned long nbytes);
#define ARCH_HAS_PREFETCH
#define ARCH_HAS_PREFETCHW
#define ARCH_HAS_SPINLOCK_PREFETCH
static inline void prefetch(const void *x)
static inline void prefetchw(const void *x)
#define spin_lock_prefetch(x)	prefetchw(x)
#define HAVE_ARCH_PICK_MMAP_LAYOUT
static inline unsigned long get_clean_sp(struct pt_regs *regs, int is_32)
static inline unsigned long get_clean_sp(struct pt_regs *regs, int is_32)
