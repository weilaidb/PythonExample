static const char name_s3c6400[] = "S3C6400";
static const char name_s3c6410[] = "S3C6410";
static struct cpu_table cpu_ids[] __initdata = ;
#define UART_OFFS (S3C_PA_UART & 0xfffff)
static struct map_desc s3c_iodesc[] __initdata = ;
struct sysdev_class s3c64xx_sysclass = ;
static struct sys_device s3c64xx_sysdev = ;
void __init s3c6400_common_init_uarts(struct s3c2410_uartcfg *cfg, int no)
void __init s3c64xx_init_io(struct map_desc *mach_desc, int size)
static __init int s3c64xx_sysdev_init(void)
core_initcall(s3c64xx_sysdev_init);
