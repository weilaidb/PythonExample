#define	NETTEL_SMC0_ADDR	0x30600300
#define	NETTEL_SMC0_IRQ		29
#define	NETTEL_SMC1_ADDR	0x30600000
#define	NETTEL_SMC1_IRQ		27
#define	SMC91xx_BANKSELECT	14
#define	SMC91xx_BASEADDR	2
#define	SMC91xx_BASEMAC		4
static struct resource nettel_smc91x_0_resources[] = ;
static struct resource nettel_smc91x_1_resources[] = ;
static struct platform_device nettel_smc91x[] = ;
static struct platform_device *nettel_devices[] __initdata = ;
static u8 nettel_macdefault[] __initdata = ;
static void __init nettel_smc91x_setmac(unsigned int ioaddr, unsigned int flashaddr)
static void __init nettel_smc91x_init(void)
static int __init init_nettel(void)
arch_initcall(init_nettel);
