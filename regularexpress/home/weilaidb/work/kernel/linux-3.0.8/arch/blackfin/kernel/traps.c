# include <linux/kgdb.h>
# define CHK_DEBUGGER_TRAP() \
do  while (0)
# define CHK_DEBUGGER_TRAP_MAYBE() \
do  while (0)
# define CHK_DEBUGGER_TRAP() do  while (0)
# define CHK_DEBUGGER_TRAP_MAYBE() do  while (0)
#define verbose_printk(fmt, arg...) \
printk(fmt, ##arg)
#define verbose_printk(fmt, arg...) \
()
#if defined(CONFIG_DEBUG_MMRS) || defined(CONFIG_DEBUG_MMRS_MODULE)
u32 last_seqstat;
EXPORT_SYMBOL(last_seqstat);
void __init trap_init(void)
static int kernel_mode_regs(struct pt_regs *regs)
asmlinkage notrace void trap_c(struct pt_regs *fp)
asmlinkage void double_fault_c(struct pt_regs *fp)
void panic_cplb_error(int cplb_panic, struct pt_regs *fp)
int is_valid_bugaddr(unsigned long addr)
void show_regs(struct pt_regs *fp)
