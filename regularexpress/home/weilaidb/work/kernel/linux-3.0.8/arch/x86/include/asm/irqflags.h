#define _X86_IRQFLAGS_H_
static inline unsigned long native_save_fl(void)
static inline void native_restore_fl(unsigned long flags)
static inline void native_irq_disable(void)
static inline void native_irq_enable(void)
static inline void native_safe_halt(void)
static inline void native_halt(void)
static inline unsigned long arch_local_save_flags(void)
static inline void arch_local_irq_restore(unsigned long flags)
static inline void arch_local_irq_disable(void)
static inline void arch_local_irq_enable(void)
static inline void arch_safe_halt(void)
static inline void halt(void)
static inline unsigned long arch_local_irq_save(void)
#define ENABLE_INTERRUPTS(x)	sti
#define DISABLE_INTERRUPTS(x)	cli
#define SWAPGS	swapgs
#define SWAPGS_UNSAFE_STACK	swapgs
#define PARAVIRT_ADJUST_EXCEPTION_FRAME
#define INTERRUPT_RETURN	iretq
#define USERGS_SYSRET64				\
swapgs;					\
sysretq;
#define USERGS_SYSRET32				\
swapgs;					\
sysretl
#define ENABLE_INTERRUPTS_SYSEXIT32		\
swapgs;					\
sti;					\
sysexit
#define INTERRUPT_RETURN		iret
#define ENABLE_INTERRUPTS_SYSEXIT	sti; sysexit
#define GET_CR0_INTO_EAX		movl %cr0, %eax
static inline int arch_irqs_disabled_flags(unsigned long flags)
static inline int arch_irqs_disabled(void)
#define ARCH_LOCKDEP_SYS_EXIT		call lockdep_sys_exit_thunk
#define ARCH_LOCKDEP_SYS_EXIT_IRQ	\
TRACE_IRQS_ON; \
sti; \
SAVE_REST; \
LOCKDEP_SYS_EXIT; \
RESTORE_REST; \
cli; \
TRACE_IRQS_OFF;
#define ARCH_LOCKDEP_SYS_EXIT			\
pushl %eax;				\
pushl %ecx;				\
pushl %edx;				\
call lockdep_sys_exit;			\
popl %edx;				\
popl %ecx;				\
popl %eax;
#define ARCH_LOCKDEP_SYS_EXIT_IRQ
#  define TRACE_IRQS_ON		call trace_hardirqs_on_thunk;
#  define TRACE_IRQS_OFF	call trace_hardirqs_off_thunk;
#  define TRACE_IRQS_ON
#  define TRACE_IRQS_OFF
#  define LOCKDEP_SYS_EXIT	ARCH_LOCKDEP_SYS_EXIT
#  define LOCKDEP_SYS_EXIT_IRQ	ARCH_LOCKDEP_SYS_EXIT_IRQ
# else
#  define LOCKDEP_SYS_EXIT
#  define LOCKDEP_SYS_EXIT_IRQ
# endif
