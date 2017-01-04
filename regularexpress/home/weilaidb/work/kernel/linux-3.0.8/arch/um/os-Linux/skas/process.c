int is_skas_winch(int pid, int fd, void *data)
static int ptrace_dump_regs(int pid)
#define STUB_SIG_MASK ((1 << SIGVTALRM) | (1 << SIGWINCH))
#define STUB_DONE_MASK (1 << SIGTRAP)
void wait_stub_done(int pid)
extern unsigned long current_stub_stack(void);
static void get_skas_faultinfo(int pid, struct faultinfo *fi)
static void handle_segv(int pid, struct uml_pt_regs * regs)
static void handle_trap(int pid, struct uml_pt_regs *regs,
int local_using_sysemu)
extern int __syscall_stub_start;
static int userspace_tramp(void *stack)
#undef NR_CPUS
#define NR_CPUS 1
int userspace_pid[NR_CPUS];
int start_userspace(unsigned long stub_stack)
void userspace(struct uml_pt_regs *regs)
static unsigned long thread_regs[MAX_REG_NR];
static int __init init_thread_regs(void)
__initcall(init_thread_regs);
int copy_context_skas0(unsigned long new_stack, int pid)
int map_stub_pages(int fd, unsigned long code, unsigned long data,
unsigned long stack)
void new_thread(void *stack, jmp_buf *buf, void (*handler)(void))
#define INIT_JMP_NEW_THREAD 0
#define INIT_JMP_CALLBACK 1
#define INIT_JMP_HALT 2
#define INIT_JMP_REBOOT 3
void switch_threads(jmp_buf *me, jmp_buf *you)
static jmp_buf initial_jmpbuf;
static void (*cb_proc)(void *arg);
static void *cb_arg;
static jmp_buf *cb_back;
int start_idle_thread(void *stack, jmp_buf *switch_buf)
void initial_thread_cb_skas(void (*proc)(void *), void *arg)
void halt_skas(void)
void reboot_skas(void)
void __switch_mm(struct mm_id *mm_idp)
