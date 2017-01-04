static struct map_desc s5pc100_iodesc[] __initdata = ;
static void s5pc100_idle(void)
void __init s5pc100_map_io(void)
void __init s5pc100_init_clocks(int xtal)
void __init s5pc100_init_irq(void)
static struct sysdev_class s5pc100_sysclass = ;
static struct sys_device s5pc100_sysdev = ;
static int __init s5pc100_core_init(void)
core_initcall(s5pc100_core_init);
int __init s5pc100_init(void)
