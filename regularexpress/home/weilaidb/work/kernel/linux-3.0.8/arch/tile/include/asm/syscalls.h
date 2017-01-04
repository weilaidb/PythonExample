#define _ASM_TILE_SYSCALLS_H
extern void *sys_call_table[];
extern void *compat_sys_call_table[];
ssize_t sys32_readahead(int fd, u32 offset_lo, u32 offset_hi, u32 count);
long sys32_fadvise64(int fd, u32 offset_lo, u32 offset_hi,
u32 len, int advice);
int sys32_fadvise64_64(int fd, u32 offset_lo, u32 offset_hi,
u32 len_lo, u32 len_hi, int advice);
long sys_flush_cache(void);
#define sys_mmap sys_mmap
long sys_cmpxchg_badaddr(unsigned long address, struct pt_regs *);
long _sys_cmpxchg_badaddr(unsigned long address);
long sys_fcntl64(unsigned int fd, unsigned int cmd, unsigned long arg);
long sys_fstat64(unsigned long fd, struct stat64 __user *statbuf);
long sys_truncate64(const char __user *path, loff_t length);
long sys_ftruncate64(unsigned int fd, loff_t length);
long _sys_sigaltstack(const stack_t __user *, stack_t __user *);
long _sys_rt_sigreturn(void);
long _sys_clone(unsigned long clone_flags, unsigned long newsp,
void __user *parent_tid, void __user *child_tid);
long _sys_execve(const char __user *filename,
const char __user *const __user *argv,
const char __user *const __user *envp);
