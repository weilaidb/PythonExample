#define __SYSDEP_STUB_H
extern void stub_segv_handler(int sig);
extern void stub_clone_handler(void);
#define STUB_SYSCALL_RET PT_INDEX(RAX)
#define STUB_MMAP_NR __NR_mmap
#define MMAP_OFFSET(o) (o)
#define __syscall_clobber "r11","rcx","memory"
#define __syscall "syscall"
static inline long stub_syscall0(long syscall)
static inline long stub_syscall2(long syscall, long arg1, long arg2)
static inline long stub_syscall3(long syscall, long arg1, long arg2, long arg3)
static inline long stub_syscall4(long syscall, long arg1, long arg2, long arg3,
long arg4)
static inline long stub_syscall5(long syscall, long arg1, long arg2, long arg3,
long arg4, long arg5)
static inline void trap_myself(void)
static inline void remap_stack(long fd, unsigned long offset)
