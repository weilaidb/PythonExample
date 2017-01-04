int handle_page_fault(unsigned long address, unsigned long ip,
int is_write, int is_user, int *code_out)
static void show_segv_info(struct uml_pt_regs *regs)
static void bad_segv(struct faultinfo fi, unsigned long ip)
void fatal_sigsegv(void)
void segv_handler(int sig, struct uml_pt_regs *regs)
unsigned long segv(struct faultinfo fi, unsigned long ip, int is_user,
struct uml_pt_regs *regs)
void relay_signal(int sig, struct uml_pt_regs *regs)
void bus_handler(int sig, struct uml_pt_regs *regs)
void winch(int sig, struct uml_pt_regs *regs)
void trap_init(void)
