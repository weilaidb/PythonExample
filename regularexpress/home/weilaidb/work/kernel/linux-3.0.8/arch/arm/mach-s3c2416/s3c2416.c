static struct map_desc s3c2416_iodesc[] __initdata = ;
struct sysdev_class s3c2416_sysclass = ;
static struct sys_device s3c2416_sysdev = ;
static void s3c2416_hard_reset(void)
int __init s3c2416_init(void)
void __init s3c2416_init_uarts(struct s3c2410_uartcfg *cfg, int no)
void __init s3c2416_map_io(void)
static int __init s3c2416_core_init(void)
core_initcall(s3c2416_core_init);
