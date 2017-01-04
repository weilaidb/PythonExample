#define __NO_STUBS
#define __SYSCALL(nr, sym) extern asmlinkage void sym(void) ;
#undef _ASM_X86_UNISTD_64_H
#undef __SYSCALL
#define __SYSCALL(nr, sym) [nr] = sym,
#undef _ASM_X86_UNISTD_64_H
typedef void (*sys_call_ptr_t)(void);
extern void sys_ni_syscall(void);
const sys_call_ptr_t sys_call_table[__NR_syscall_max+1] = ;
