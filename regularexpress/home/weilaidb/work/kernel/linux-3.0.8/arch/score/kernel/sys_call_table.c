#undef __SYSCALL
#define __SYSCALL(nr, call) [nr] = (call),
void *sys_call_table[__NR_syscalls] = ;
