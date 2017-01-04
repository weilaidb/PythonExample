static void alchemy_8250_pm(struct uart_port *port, unsigned int state,
unsigned int old_state)
#define PORT(_base, _irq)					\
static struct plat_serial8250_port au1x00_uart_data[][4] __initdata = ;
static struct platform_device au1xx0_uart_device = ;
static void __init alchemy_setup_uarts(int ctype)
static struct resource au1xxx_usb_ohci_resources[] = ;
static u64 ohci_dmamask = DMA_BIT_MASK(32);
static struct platform_device au1xxx_usb_ohci_device = ;
static struct resource au1100_lcd_resources[] = ;
static u64 au1100_lcd_dmamask = DMA_BIT_MASK(32);
static struct platform_device au1100_lcd_device = ;
static struct resource au1xxx_usb_ehci_resources[] = ;
static u64 ehci_dmamask = DMA_BIT_MASK(32);
static struct platform_device au1xxx_usb_ehci_device = ;
static struct resource au1xxx_usb_gdt_resources[] = ;
static u64 udc_dmamask = DMA_BIT_MASK(32);
static struct platform_device au1xxx_usb_gdt_device = ;
static struct resource au1xxx_usb_otg_resources[] = ;
static u64 uoc_dmamask = DMA_BIT_MASK(32);
static struct platform_device au1xxx_usb_otg_device = ;
static struct resource au1200_lcd_resources[] = ;
static u64 au1200_lcd_dmamask = DMA_BIT_MASK(32);
static struct platform_device au1200_lcd_device = ;
static u64 au1xxx_mmc_dmamask =  DMA_BIT_MASK(32);
extern struct au1xmmc_platform_data au1xmmc_platdata[2];
static struct resource au1200_mmc0_resources[] = ;
static struct platform_device au1200_mmc0_device = ;
static struct resource au1200_mmc1_resources[] = ;
static struct platform_device au1200_mmc1_device = ;
static struct resource pbdb_smbus_resources[] = ;
static struct platform_device pbdb_smbus_device = ;
#define MAC_RES_COUNT	3
#define MAC_RES(_base, _enable, _irq)			\
,						\
,						\
static struct resource au1xxx_eth0_resources[][MAC_RES_COUNT] __initdata = ;
static struct au1000_eth_platform_data au1xxx_eth0_platform_data = ;
static struct platform_device au1xxx_eth0_device = ;
static struct resource au1xxx_eth1_resources[][MAC_RES_COUNT] __initdata = ;
static struct au1000_eth_platform_data au1xxx_eth1_platform_data = ;
static struct platform_device au1xxx_eth1_device = ;
void __init au1xxx_override_eth_cfg(unsigned int port,
struct au1000_eth_platform_data *eth_data)
static void __init alchemy_setup_macs(int ctype)
static struct platform_device *au1xxx_platform_devices[] __initdata = ;
static int __init au1xxx_platform_init(void)
arch_initcall(au1xxx_platform_init);
