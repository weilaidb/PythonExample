#define PEGASOS2_MARVELL_REGBASE 		(0xf1000000)
#define PEGASOS2_MARVELL_REGSIZE 		(0x00004000)
#define PEGASOS2_SRAM_BASE 			(0xf2000000)
#define PEGASOS2_SRAM_SIZE			(256*1024)
#define PEGASOS2_SRAM_BASE_ETH_PORT0			(PEGASOS2_SRAM_BASE)
#define PEGASOS2_SRAM_BASE_ETH_PORT1			(PEGASOS2_SRAM_BASE_ETH_PORT0 + (PEGASOS2_SRAM_SIZE / 2) )
#define PEGASOS2_SRAM_RXRING_SIZE		(PEGASOS2_SRAM_SIZE/4)
#define PEGASOS2_SRAM_TXRING_SIZE		(PEGASOS2_SRAM_SIZE/4)
#undef BE_VERBOSE
static struct resource mv643xx_eth_shared_resources[] = ;
static struct platform_device mv643xx_eth_shared_device = ;
static struct resource mv643xx_eth_port1_resources[] = ;
static struct mv643xx_eth_platform_data eth_port1_pd = ;
static struct platform_device eth_port1_device = ;
static struct platform_device *mv643xx_eth_pd_devs[] __initdata = ;
#define MV_READ(offset,val)
#define MV_WRITE(offset,data) writel(data, mv643xx_reg_base + offset)
static void __iomem *mv643xx_reg_base;
static int Enable_SRAM(void)
static int __init mv643xx_eth_add_pds(void)
device_initcall(mv643xx_eth_add_pds);
