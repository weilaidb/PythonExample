#define MSP_ETHERNET_GPIO0	14
#define MSP_ETHERNET_GPIO1	15
#define MSP_ETHERNET_GPIO2	16
#define MSP_TSMAC_SIZE	0x10020
#define MSP_TSMAC_ID	"pmc_tsmac"
static struct resource msp_tsmac0_resources[] = ;
static struct resource msp_tsmac1_resources[] = ;
static struct resource msp_tsmac2_resources[] = ;
static struct platform_device tsmac_device[] = ;
#define msp_eth_devs	tsmac_device
#define MSP_ETH_ID	"pmc_mspeth"
#define MSP_ETH_SIZE	0xE0
static struct resource msp_eth0_resources[] = ;
static struct resource msp_eth1_resources[] = ;
static struct platform_device mspeth_device[] = ;
#define msp_eth_devs	mspeth_device
int __init msp_eth_setup(void)
subsys_initcall(msp_eth_setup);
