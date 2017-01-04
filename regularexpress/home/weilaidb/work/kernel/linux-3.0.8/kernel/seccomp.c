#define NR_SECCOMP_MODES 1
static int mode1_syscalls[] = ;
static int mode1_syscalls_32[] = ;
void __secure_computing(int this_syscall)
long prctl_get_seccomp(void)
long prctl_set_seccomp(unsigned long seccomp_mode)
