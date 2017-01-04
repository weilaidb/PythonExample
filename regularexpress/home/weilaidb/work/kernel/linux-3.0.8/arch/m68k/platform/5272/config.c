unsigned short ppdata;
unsigned char ledbank = 0xff;
static struct mcf_platform_uart m5272_uart_platform[] = ;
static struct platform_device m5272_uart = ;
static struct resource m5272_fec_resources[] = ;
static struct platform_device m5272_fec = ;
static struct platform_device *m5272_devices[] __initdata = ;
static void __init m5272_uart_init_line(int line, int irq)
static void __init m5272_uarts_init(void)
static void m5272_cpu_reset(void)
void __init config_BSP(char *commandp, int size)
static struct fixed_phy_status nettel_fixed_phy_status __initdata = ;
static int __init init_BSP(void)
arch_initcall(init_BSP);
