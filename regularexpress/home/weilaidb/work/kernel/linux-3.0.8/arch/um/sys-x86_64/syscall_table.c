#define __NO_STUBS
#define stub_iopl sys_ni_syscall
#define sys_ioperm sys_ni_syscall
#define sys_mmap old_mmap
#define stub_clone sys_clone
#define stub_fork sys_fork
#define stub_vfork sys_vfork
#define stub_execve sys_execve
#define stub_rt_sigsuspend sys_rt_sigsuspend
#define stub_sigaltstack sys_sigaltstack
#define stub_rt_sigreturn sys_rt_sigreturn
#define __SYSCALL(nr, sym) extern asmlinkage void sym(void) ;
#undef _ASM_X86_UNISTD_64_H
#undef __SYSCALL
#define __SYSCALL(nr, sym) [ nr ] = sym,
#undef _ASM_X86_UNISTD_64_H
typedef void (*sys_call_ptr_t)(void);
extern void sys_ni_syscall(void);
sys_call_ptr_t sys_call_table[] __cacheline_aligned = ;
int syscall_table_size = sizeof(sys_call_table);
