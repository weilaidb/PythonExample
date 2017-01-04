#define KVM86	((struct kernel_vm86_struct *)regs)
#define VMPI	KVM86->vm86plus
#define AL(regs)	(((unsigned char *)&((regs)->pt.ax))[0])
#define AH(regs)	(((unsigned char *)&((regs)->pt.ax))[1])
#define IP(regs)	(*(unsigned short *)&((regs)->pt.ip))
#define SP(regs)	(*(unsigned short *)&((regs)->pt.sp))
#define VFLAGS	(*(unsigned short *)&(current->thread.v86flags))
#define VEFLAGS	(current->thread.v86flags)
#define set_flags(X, new, mask) \
((X) = ((X) & ~(mask)) | ((new) & (mask)))
#define SAFE_MASK	(0xDD5)
#define RETURN_MASK	(0xDFF)
static int copy_vm86_regs_to_user(struct vm86_regs __user *user,
const struct kernel_vm86_regs *regs)
static int copy_vm86_regs_from_user(struct kernel_vm86_regs *regs,
const struct vm86_regs __user *user,
unsigned extra)
struct pt_regs *save_v86_state(struct kernel_vm86_regs *regs)
static void mark_screen_rdonly(struct mm_struct *mm)
static int do_vm86_irq_handling(int subfunction, int irqnumber);
static void do_sys_vm86(struct kernel_vm86_struct *info, struct task_struct *tsk);
int sys_vm86old(struct vm86_struct __user *v86, struct pt_regs *regs)
int sys_vm86(unsigned long cmd, unsigned long arg, struct pt_regs *regs)
static void do_sys_vm86(struct kernel_vm86_struct *info, struct task_struct *tsk)
static inline void return_to_32bit(struct kernel_vm86_regs *regs16, int retval)
static inline void set_IF(struct kernel_vm86_regs *regs)
static inline void clear_IF(struct kernel_vm86_regs *regs)
static inline void clear_TF(struct kernel_vm86_regs *regs)
static inline void clear_AC(struct kernel_vm86_regs *regs)
static inline void set_vflags_long(unsigned long flags, struct kernel_vm86_regs *regs)
static inline void set_vflags_short(unsigned short flags, struct kernel_vm86_regs *regs)
static inline unsigned long get_vflags(struct kernel_vm86_regs *regs)
static inline int is_revectored(int nr, struct revectored_struct *bitmap)
#define val_byte(val, n) (((__u8 *)&val)[n])
#define pushb(base, ptr, val, err_label) \
do  while (0)
#define pushw(base, ptr, val, err_label) \
do  while (0)
#define pushl(base, ptr, val, err_label) \
do  while (0)
#define popb(base, ptr, err_label) \
()
#define popw(base, ptr, err_label) \
()
#define popl(base, ptr, err_label) \
()
static void do_int(struct kernel_vm86_regs *regs, int i,
unsigned char __user *ssp, unsigned short sp)
int handle_vm86_trap(struct kernel_vm86_regs *regs, long error_code, int trapno)
void handle_vm86_fault(struct kernel_vm86_regs *regs, long error_code)
#define VM86_IRQNAME		"vm86irq"
static struct vm86_irqs  vm86_irqs[16];
static DEFINE_SPINLOCK(irqbits_lock);
static int irqbits;
#define ALLOWED_SIGS (1 \
| (1 << SIGUSR1) | (1 << SIGUSR2) | (1 << SIGIO)  | (1 << SIGURG) \
| (1 << SIGUNUSED))
static irqreturn_t irq_handler(int intno, void *dev_id)
static inline void free_vm86_irq(int irqnumber)
void release_vm86_irqs(struct task_struct *task)
static inline int get_and_reset_irq(int irqnumber)
static int do_vm86_irq_handling(int subfunction, int irqnumber)
