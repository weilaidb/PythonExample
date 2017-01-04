void show_registers(struct pt_regs *regs)
void arch_enable_nmi(void)
extern void (*nmi_handler)(struct pt_regs *);
void handle_nmi(struct pt_regs *regs)
extern void die_if_kernel(const char *str, struct pt_regs *regs, long err);
struct pt_regs BUG_regs;
void do_BUG(char *file, unsigned int line)
EXPORT_SYMBOL(do_BUG);
void fixup_BUG(struct pt_regs *regs)
__asm__  ( ".text\n\t"
".global breakh_BUG\n\t"
"breakh_BUG:\n\t"
SAVE_ALL
KGDB_FIXUP
"move.d $sp, $r10\n\t"
"jsr fixup_BUG\n\t"
"nop\n\t"
"jump ret_from_intr\n\t"
"nop\n\t");
void
handle_BUG(struct pt_regs *regs)
