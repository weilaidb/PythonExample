#define FSR_LNX_PF		(1 << 31)
static inline int fsr_fs(unsigned int fsr)
void show_pte(struct mm_struct *mm, unsigned long addr)
static void __do_kernel_fault(struct mm_struct *mm, unsigned long addr,
unsigned int fsr, struct pt_regs *regs)
static void __do_user_fault(struct task_struct *tsk, unsigned long addr,
unsigned int fsr, unsigned int sig, int code,
struct pt_regs *regs)
void do_bad_area(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
#define VM_FAULT_BADMAP		0x010000
#define VM_FAULT_BADACCESS	0x020000
static inline bool access_error(unsigned int fsr, struct vm_area_struct *vma)
static int __do_pf(struct mm_struct *mm, unsigned long addr, unsigned int fsr,
struct task_struct *tsk)
static int do_pf(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
static int do_ifault(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
static int do_bad(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
static int do_good(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
static struct fsr_info  fsr_info[] = ;
void __init hook_fault_code(int nr,
int (*fn) (unsigned long, unsigned int, struct pt_regs *),
int sig, int code, const char *name)
asmlinkage void do_DataAbort(unsigned long addr, unsigned int fsr,
struct pt_regs *regs)
asmlinkage void do_PrefetchAbort(unsigned long addr,
unsigned int ifsr, struct pt_regs *regs)
