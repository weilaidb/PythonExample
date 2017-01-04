extern unsigned long batch_syscall_stub, __syscall_stub_start;
extern void wait_stub_done(int pid);
static inline unsigned long *check_init_stack(struct mm_id * mm_idp,
unsigned long *stack)
static unsigned long syscall_regs[MAX_REG_NR];
static int __init init_syscall_regs(void)
__initcall(init_syscall_regs);
extern int proc_mm;
int single_count = 0;
int multi_count = 0;
int multi_op_count = 0;
static inline long do_syscall_stub(struct mm_id * mm_idp, void **addr)
long run_syscall_stub(struct mm_id * mm_idp, int syscall,
unsigned long *args, long expected, void **addr,
int done)
long syscall_stub_data(struct mm_id * mm_idp,
unsigned long *data, int data_count,
void **addr, void **stub_addr)
int map(struct mm_id * mm_idp, unsigned long virt, unsigned long len, int prot,
int phys_fd, unsigned long long offset, int done, void **data)
int unmap(struct mm_id * mm_idp, unsigned long addr, unsigned long len,
int done, void **data)
int protect(struct mm_id * mm_idp, unsigned long addr, unsigned long len,
unsigned int prot, int done, void **data)
