#define __SYSDEP_STUB_H
extern void stub_segv_handler(int sig);
extern void stub_clone_handler(void);
#define STUB_SYSCALL_RET EAX
#define STUB_MMAP_NR __NR_mmap2
#define MMAP_OFFSET(o) ((o) >> UM_KERN_PAGE_SHIFT)
static inline long stub_syscall0(long syscall)
static inline long stub_syscall1(long syscall, long arg1)
static inline long stub_syscall2(long syscall, long arg1, long arg2)
static inline long stub_syscall3(long syscall, long arg1, long arg2, long arg3)
static inline long stub_syscall4(long syscall, long arg1, long arg2, long arg3,
long arg4)
static inline long stub_syscall5(long syscall, long arg1, long arg2, long arg3,
long arg4, long arg5)
static inline void trap_myself(void)
static inline void remap_stack(int fd, unsigned long offset)
