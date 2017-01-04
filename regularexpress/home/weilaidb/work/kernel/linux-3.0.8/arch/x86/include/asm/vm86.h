#define _ASM_X86_VM86_H
#define BIOSSEG		0x0f000
#define CPU_086		0
#define CPU_186		1
#define CPU_286		2
#define CPU_386		3
#define CPU_486		4
#define CPU_586		5
#define VM86_TYPE(retval)	((retval) & 0xff)
#define VM86_ARG(retval)	((retval) >> 8)
#define VM86_SIGNAL	0
#define VM86_UNKNOWN	1
#define VM86_INTx	2
#define VM86_STI	3
#define VM86_PICRETURN	4
#define VM86_TRAP	6
#define VM86_PLUS_INSTALL_CHECK	0
#define VM86_ENTER		1
#define VM86_ENTER_NO_BYPASS	2
#define	VM86_REQUEST_IRQ	3
#define VM86_FREE_IRQ		4
#define VM86_GET_IRQ_BITS	5
#define VM86_GET_AND_RESET_IRQ	6
struct vm86_regs ;
struct revectored_struct ;
struct vm86_struct ;
#define VM86_SCREEN_BITMAP	0x0001
struct vm86plus_info_struct ;
struct vm86plus_struct ;
struct kernel_vm86_regs ;
struct kernel_vm86_struct ;
void handle_vm86_fault(struct kernel_vm86_regs *, long);
int handle_vm86_trap(struct kernel_vm86_regs *, long, int);
struct pt_regs *save_v86_state(struct kernel_vm86_regs *);
struct task_struct;
void release_vm86_irqs(struct task_struct *);
#define handle_vm86_fault(a, b)
#define release_vm86_irqs(a)
static inline int handle_vm86_trap(struct kernel_vm86_regs *a, long b, int c)
