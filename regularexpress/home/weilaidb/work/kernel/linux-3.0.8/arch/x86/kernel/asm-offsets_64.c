#define __NO_STUBS 1
#undef __SYSCALL
#undef _ASM_X86_UNISTD_64_H
#define __SYSCALL(nr, sym) [nr] = 1,
static char syscalls[] = ;
int main(void)
