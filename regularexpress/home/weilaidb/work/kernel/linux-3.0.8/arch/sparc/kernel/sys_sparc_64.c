asmlinkage unsigned long sys_getpagesize(void)
#define VA_EXCLUDE_START (0x0000080000000000UL - (1UL << 32UL))
#define VA_EXCLUDE_END   (0xfffff80000000000UL + (1UL << 32UL))
static inline int invalid_64bit_range(unsigned long addr, unsigned long len)
static inline int straddles_64bit_va_hole(unsigned long start, unsigned long end)
static inline unsigned long COLOUR_ALIGN(unsigned long addr,
unsigned long pgoff)
static inline unsigned long COLOUR_ALIGN_DOWN(unsigned long addr,
unsigned long pgoff)
unsigned long arch_get_unmapped_area(struct file *filp, unsigned long addr, unsigned long len, unsigned long pgoff, unsigned long flags)
unsigned long
arch_get_unmapped_area_topdown(struct file *filp, const unsigned long addr0,
const unsigned long len, const unsigned long pgoff,
const unsigned long flags)
unsigned long get_fb_unmapped_area(struct file *filp, unsigned long orig_addr, unsigned long len, unsigned long pgoff, unsigned long flags)
EXPORT_SYMBOL(get_fb_unmapped_area);
static unsigned long mmap_rnd(void)
void arch_pick_mmap_layout(struct mm_struct *mm)
SYSCALL_DEFINE1(sparc_pipe_real, struct pt_regs *, regs)
SYSCALL_DEFINE6(sparc_ipc, unsigned int, call, int, first, unsigned long, second,
unsigned long, third, void __user *, ptr, long, fifth)
SYSCALL_DEFINE1(sparc64_personality, unsigned long, personality)
int sparc_mmap_check(unsigned long addr, unsigned long len)
SYSCALL_DEFINE6(mmap, unsigned long, addr, unsigned long, len,
unsigned long, prot, unsigned long, flags, unsigned long, fd,
unsigned long, off)
SYSCALL_DEFINE2(64_munmap, unsigned long, addr, size_t, len)
extern unsigned long do_mremap(unsigned long addr,
unsigned long old_len, unsigned long new_len,
unsigned long flags, unsigned long new_addr);
SYSCALL_DEFINE5(64_mremap, unsigned long, addr,	unsigned long, old_len,
unsigned long, new_len, unsigned long, flags,
unsigned long, new_addr)
asmlinkage unsigned long c_sys_nis_syscall(struct pt_regs *regs)
asmlinkage void sparc_breakpoint(struct pt_regs *regs)
extern void check_pending(int signum);
SYSCALL_DEFINE2(getdomainname, char __user *, name, int, len)
SYSCALL_DEFINE5(utrap_install, utrap_entry_t, type,
utrap_handler_t, new_p, utrap_handler_t, new_d,
utrap_handler_t __user *, old_p,
utrap_handler_t __user *, old_d)
asmlinkage long sparc_memory_ordering(unsigned long model,
struct pt_regs *regs)
SYSCALL_DEFINE5(rt_sigaction, int, sig, const struct sigaction __user *, act,
struct sigaction __user *, oact, void __user *, restorer,
size_t, sigsetsize)
int kernel_execve(const char *filename,
const char *const argv[],
const char *const envp[])
