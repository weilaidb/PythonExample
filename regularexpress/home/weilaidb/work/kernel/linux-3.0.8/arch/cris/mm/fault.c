extern int find_fixup_code(struct pt_regs *);
extern void die_if_kernel(const char *, struct pt_regs *, long);
extern void show_registers(struct pt_regs *regs);
#undef DEBUG
#define D(x) x
#define D(x)
#define DPG(x)
DEFINE_PER_CPU(pgd_t *, current_pgd);
unsigned long cris_signal_return_page;
asmlinkage void
do_page_fault(unsigned long address, struct pt_regs *regs,
int protection, int writeaccess)
int
find_fixup_code(struct pt_regs *regs)
