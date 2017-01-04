SYSCALL_DEFINE0(flush_cache)
#if !defined(__tilegx__) || defined(CONFIG_COMPAT)
ssize_t sys32_readahead(int fd, u32 offset_lo, u32 offset_hi, u32 count)
int sys32_fadvise64_64(int fd, u32 offset_lo, u32 offset_hi,
u32 len_lo, u32 len_hi, int advice)
SYSCALL_DEFINE6(mmap2, unsigned long, addr, unsigned long, len,
unsigned long, prot, unsigned long, flags,
unsigned long, fd, unsigned long, off_4k)
SYSCALL_DEFINE6(mmap, unsigned long, addr, unsigned long, len,
unsigned long, prot, unsigned long, flags,
unsigned long, fd, off_t, offset)
#undef __SYSCALL
#define __SYSCALL(nr, call) [nr] = (call),
#define sys_fadvise64_64 sys32_fadvise64_64
#define sys_readahead sys32_readahead
#define sys_execve _sys_execve
#define sys_sigaltstack _sys_sigaltstack
#define sys_rt_sigreturn _sys_rt_sigreturn
#define sys_clone _sys_clone
#define sys_cmpxchg_badaddr _sys_cmpxchg_badaddr
void *sys_call_table[__NR_syscalls] = ;
