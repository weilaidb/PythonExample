static inline unsigned long do_mmap2(unsigned long addr, size_t len,
unsigned long prot, unsigned long flags,
unsigned long fd, unsigned long off, int shift)
unsigned long sys_mmap2(unsigned long addr, size_t len,
unsigned long prot, unsigned long flags,
unsigned long fd, unsigned long pgoff)
unsigned long sys_mmap(unsigned long addr, size_t len,
unsigned long prot, unsigned long flags,
unsigned long fd, off_t offset)
int
ppc_select(int n, fd_set __user *inp, fd_set __user *outp, fd_set __user *exp, struct timeval __user *tvp)
long ppc64_personality(unsigned long personality)
long ppc_fadvise64_64(int fd, int advice, u32 offset_high, u32 offset_low,
u32 len_high, u32 len_low)
void do_show_syscall(unsigned long r3, unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7, unsigned long r8,
struct pt_regs *regs)
void do_show_syscall_exit(unsigned long r3)
