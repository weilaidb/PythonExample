static struct map_desc s5pv210_iodesc[] __initdata = ;
static void s5pv210_idle(void)
static void s5pv210_sw_reset(void)
void __init s5pv210_map_io(void)
void __init s5pv210_init_clocks(int xtal)
void __init s5pv210_init_irq(void)
struct sysdev_class s5pv210_sysclass = ;
static struct sys_device s5pv210_sysdev = ;
static int __init s5pv210_core_init(void)
core_initcall(s5pv210_core_init);
int __init s5pv210_init(void)
