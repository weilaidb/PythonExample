void pt_regs_to_gdb_regs(unsigned long *gdb_regs, struct pt_regs *regs)
void sleeping_thread_to_gdb_regs(unsigned long *gdb_regs, struct task_struct *p)
void gdb_regs_to_pt_regs(unsigned long *gdb_regs, struct pt_regs *regs)
static struct hw_breakpoint  breakinfo[HW_WATCHPOINT_NUM];
static int bfin_set_hw_break(unsigned long addr, int len, enum kgdb_bptype type)
static int bfin_remove_hw_break(unsigned long addr, int len, enum kgdb_bptype type)
static void bfin_remove_all_hw_break(void)
static void bfin_correct_hw_break(void)
static void bfin_disable_hw_debug(struct pt_regs *regs)
void kgdb_passive_cpu_callback(void *info)
void kgdb_roundup_cpus(unsigned long flags)
void kgdb_roundup_cpu(int cpu, unsigned long flags)
static unsigned long kgdb_arch_imask;
void kgdb_post_primary_code(struct pt_regs *regs, int e_vector, int err_code)
int kgdb_arch_handle_exception(int vector, int signo,
int err_code, char *remcom_in_buffer,
char *remcom_out_buffer,
struct pt_regs *regs)
struct kgdb_arch arch_kgdb_ops = ;
#define IN_MEM(addr, size, l1_addr, l1_size) \
()
#define ASYNC_BANK_SIZE \
(ASYNC_BANK0_SIZE + ASYNC_BANK1_SIZE + \
ASYNC_BANK2_SIZE + ASYNC_BANK3_SIZE)
int kgdb_validate_break_address(unsigned long addr)
void kgdb_arch_set_pc(struct pt_regs *regs, unsigned long ip)
int kgdb_arch_init(void)
void kgdb_arch_exit(void)
