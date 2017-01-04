void __init s3c6410_map_io(void)
void __init s3c6410_init_clocks(int xtal)
void __init s3c6410_init_irq(void)
struct sysdev_class s3c6410_sysclass = ;
static struct sys_device s3c6410_sysdev = ;
static int __init s3c6410_core_init(void)
core_initcall(s3c6410_core_init);
int __init s3c6410_init(void)
