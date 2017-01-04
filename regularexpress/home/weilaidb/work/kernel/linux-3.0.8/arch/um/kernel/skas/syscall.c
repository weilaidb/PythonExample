extern int syscall_table_size;
#define NR_SYSCALLS (syscall_table_size / sizeof(void *))
void handle_syscall(struct uml_pt_regs *r)
