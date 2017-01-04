static struct map_desc s5p64x0_iodesc[] __initdata = ;
static struct map_desc s5p6440_iodesc[] __initdata = ;
static struct map_desc s5p6450_iodesc[] __initdata = ;
static void s5p64x0_idle(void)
void __init s5p6440_map_io(void)
void __init s5p6450_map_io(void)
void __init s5p6440_init_clocks(int xtal)
void __init s5p6450_init_clocks(int xtal)
void __init s5p6440_init_irq(void)
void __init s5p6450_init_irq(void)
struct sysdev_class s5p64x0_sysclass = ;
static struct sys_device s5p64x0_sysdev = ;
static int __init s5p64x0_core_init(void)
core_initcall(s5p64x0_core_init);
int __init s5p64x0_init(void)
