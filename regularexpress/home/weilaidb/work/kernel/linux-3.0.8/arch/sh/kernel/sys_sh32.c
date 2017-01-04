asmlinkage int sys_sh_pipe(unsigned long r4, unsigned long r5,
unsigned long r6, unsigned long r7,
struct pt_regs __regs)
asmlinkage ssize_t sys_pread_wrapper(unsigned int fd, char __user *buf,
size_t count, long dummy, loff_t pos)
asmlinkage ssize_t sys_pwrite_wrapper(unsigned int fd, const char __user *buf,
size_t count, long dummy, loff_t pos)
asmlinkage int sys_fadvise64_64_wrapper(int fd, u32 offset0, u32 offset1,
u32 len0, u32 len1, int advice)
#if defined(CONFIG_CPU_SH2) || defined(CONFIG_CPU_SH2A)
#define SYSCALL_ARG3	"trapa #0x23"
#define SYSCALL_ARG3	"trapa #0x13"
int kernel_execve(const char *filename,
const char *const argv[],
const char *const envp[])
