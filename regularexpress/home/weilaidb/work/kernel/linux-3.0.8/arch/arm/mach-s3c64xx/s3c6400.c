void __init s3c6400_map_io(void)
void __init s3c6400_init_clocks(int xtal)
void __init s3c6400_init_irq(void)
struct sysdev_class s3c6400_sysclass = ;
static struct sys_device s3c6400_sysdev = ;
static int __init s3c6400_core_init(void)
core_initcall(s3c6400_core_init);
int __init s3c6400_init(void)
