static struct map_desc s3c2443_iodesc[] __initdata = ;
struct sysdev_class s3c2443_sysclass = ;
static struct sys_device s3c2443_sysdev = ;
static void s3c2443_hard_reset(void)
int __init s3c2443_init(void)
void __init s3c2443_init_uarts(struct s3c2410_uartcfg *cfg, int no)
void __init s3c2443_map_io(void)
static int __init s3c2443_core_init(void)
core_initcall(s3c2443_core_init);
