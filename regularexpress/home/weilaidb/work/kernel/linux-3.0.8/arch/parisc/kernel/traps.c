#define PRINT_USER_FAULTS
#if defined(CONFIG_SMP) || defined(CONFIG_DEBUG_SPINLOCK)
DEFINE_SPINLOCK(pa_dbit_lock);
static void parisc_show_stack(struct task_struct *task, unsigned long *sp,
struct pt_regs *regs);
static int printbinary(char *buf, unsigned long x, int nbits)
#define RFMT "%016lx"
#define RFMT "%08lx"
#define FFMT "%016llx"
#define PRINTREGS(lvl,r,f,fmt,x)	\
printk("%s%s%02d-%02d  " fmt " " fmt " " fmt " " fmt "\n",	\
lvl, f, (x), (x+3), (r)[(x)+0], (r)[(x)+1],		\
(r)[(x)+2], (r)[(x)+3])
static void print_gr(char *level, struct pt_regs *regs)
static void print_fr(char *level, struct pt_regs *regs)
void show_regs(struct pt_regs *regs)
void dump_stack(void)
EXPORT_SYMBOL(dump_stack);
static void do_show_stack(struct unwind_frame_info *info)
static void parisc_show_stack(struct task_struct *task, unsigned long *sp,
struct pt_regs *regs)
void show_stack(struct task_struct *t, unsigned long *sp)
int is_valid_bugaddr(unsigned long iaoq)
void die_if_kernel(char *str, struct pt_regs *regs, long err)
int syscall_ipi(int (*syscall) (struct pt_regs *), struct pt_regs *regs)
#define GDB_BREAK_INSN 0x10004
static void handle_gdb_break(struct pt_regs *regs, int wot)
static void handle_break(struct pt_regs *regs)
static void default_trap(int code, struct pt_regs *regs)
void (*cpu_lpmc) (int code, struct pt_regs *regs) __read_mostly = default_trap;
void transfer_pim_to_trap_frame(struct pt_regs *regs)
void parisc_terminate(char *msg, struct pt_regs *regs, int code, unsigned long offset)
void notrace handle_interruption(int code, struct pt_regs *regs)
int __init check_ivt(void *iva)
extern const void fault_vector_11;
extern const void fault_vector_20;
void __init trap_init(void)
