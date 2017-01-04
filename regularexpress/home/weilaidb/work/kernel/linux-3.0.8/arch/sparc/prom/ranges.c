static struct linux_prom_ranges promlib_obio_ranges[PROMREG_MAX];
static int num_obio_ranges;
static void
prom_adjust_regs(struct linux_prom_registers *regp, int nregs,
struct linux_prom_ranges *rangep, int nranges)
static void
prom_adjust_ranges(struct linux_prom_ranges *ranges1, int nranges1,
struct linux_prom_ranges *ranges2, int nranges2)
void
prom_apply_obio_ranges(struct linux_prom_registers *regs, int nregs)
EXPORT_SYMBOL(prom_apply_obio_ranges);
void __init prom_ranges_init(void)
void prom_apply_generic_ranges(phandle node, phandle parent,
struct linux_prom_registers *regs, int nregs)
