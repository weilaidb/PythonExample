static struct cpu_table *cpu;
static struct cpu_table * __init s3c_lookup_cpu(unsigned long idcode,
struct cpu_table *tab,
unsigned int count)
void __init s3c_init_cpu(unsigned long idcode,
struct cpu_table *cputab, unsigned int cputab_size)
void __init s3c24xx_init_clocks(int xtal)
static int nr_uarts __initdata = 0;
static struct s3c2410_uartcfg uart_cfgs[CONFIG_SERIAL_SAMSUNG_UARTS];
void __init s3c24xx_init_uartdevs(char *name,
struct s3c24xx_uart_resources *res,
struct s3c2410_uartcfg *cfg, int no)
void __init s3c24xx_init_uarts(struct s3c2410_uartcfg *cfg, int no)
static int __init s3c_arch_init(void)
arch_initcall(s3c_arch_init);
