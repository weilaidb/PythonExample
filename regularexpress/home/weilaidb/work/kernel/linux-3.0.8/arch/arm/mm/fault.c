#define FSR_LNX_PF		(1 << 31)
#define FSR_WRITE		(1 << 11)
#define FSR_FS4			(1 << 10)
#define FSR_FS3_0		(15)
static inline int fsr_fs(unsigned int fsr)
static inline int notify_page_fault(struct pt_regs *regs, unsigned int fsr)
static inline int notify_page_fault(struct pt_regs *regs, unsigned int fsr)
void show_pte(struct mm_struct *mm, unsigned long addr)
void show_pte(struct mm_struct *mm, unsigned long addr)
static void
__do_kernel_fault(struct mm_struct *mm, unsigned long addr, unsigned int fsr,
struct pt_regs *regs)
static void
__do_user_fault(struct task_struct *tsk, unsigned long addr,
unsigned int fsr, unsigned int sig, int code,
struct pt_regs *regs)
void do_bad_area(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
#define VM_FAULT_BADMAP		0x010000
#define VM_FAULT_BADACCESS	0x020000
static inline bool access_error(unsigned int fsr, struct vm_area_struct *vma)
static int __kprobes
__do_page_fault(struct mm_struct *mm, unsigned long addr, unsigned int fsr,
struct task_struct *tsk)
static int __kprobes
do_page_fault(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
static int
do_page_fault(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
static int __kprobes
do_translation_fault(unsigned long addr, unsigned int fsr,
struct pt_regs *regs)
static int
do_translation_fault(unsigned long addr, unsigned int fsr,
struct pt_regs *regs)
static int
do_sect_fault(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
static int
do_bad(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
static struct fsr_info  fsr_info[] = ;
void __init
hook_fault_code(int nr, int (*fn)(unsigned long, unsigned int, struct pt_regs *),
int sig, int code, const char *name)
asmlinkage void __exception
do_DataAbort(unsigned long addr, unsigned int fsr, struct pt_regs *regs)
static struct fsr_info ifsr_info[] = ;
void __init
hook_ifault_code(int nr, int (*fn)(unsigned long, unsigned int, struct pt_regs *),
int sig, int code, const char *name)
asmlinkage void __exception
do_PrefetchAbort(unsigned long addr, unsigned int ifsr, struct pt_regs *regs)
static int __init exceptions_init(void)
arch_initcall(exceptions_init);
