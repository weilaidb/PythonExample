#define SLOT_ETHA		0x0B
#define SLOT_ETHB		0x0C
#define SLOT_MPCI		0x0D
#define SLOT_NEC		0x0E
#define GPIO_SCL		0
#define GPIO_SDA		1
#define GPIO_STR		2
#define GPIO_IRQ_NEC		3
#define GPIO_IRQ_ETHA		4
#define GPIO_IRQ_ETHB		5
#define GPIO_HSS0_DCD_N		6
#define GPIO_HSS1_DCD_N		7
#define GPIO_UART0_DCD		8
#define GPIO_UART1_DCD		9
#define GPIO_HSS0_CTS_N		10
#define GPIO_HSS1_CTS_N		11
#define GPIO_IRQ_MPCI		12
#define GPIO_HSS1_RTS_N		13
#define GPIO_HSS0_RTS_N		14
#define CONTROL_HSS0_CLK_INT	0
#define CONTROL_HSS1_CLK_INT	1
#define CONTROL_HSS0_DTR_N	2
#define CONTROL_HSS1_DTR_N	3
#define CONTROL_EXT		4
#define CONTROL_AUTO_RESET	5
#define CONTROL_PCI_RESET_N	6
#define CONTROL_EEPROM_WC_N	7
#define CFG_ETH0_ADDRESS	0x40
#define CFG_ETH1_ADDRESS	0x46
#define CFG_REV			0x4C
#define CFG_SDRAM_SIZE		0x50
#define CFG_SDRAM_CONF		0x54
#define CFG_SDRAM_MODE		0x58
#define CFG_SDRAM_REFRESH	0x5C
#define CFG_HW_BITS		0x60
#define  CFG_HW_USB_PORTS	0x00000007
#define  CFG_HW_HAS_PCI_SLOT	0x00000008
#define  CFG_HW_HAS_ETH0	0x00000010
#define  CFG_HW_HAS_ETH1	0x00000020
#define  CFG_HW_HAS_HSS0	0x00000040
#define  CFG_HW_HAS_HSS1	0x00000080
#define  CFG_HW_HAS_UART0	0x00000100
#define  CFG_HW_HAS_UART1	0x00000200
#define  CFG_HW_HAS_EEPROM	0x00000400
#define FLASH_CMD_READ_ARRAY	0xFF
#define FLASH_CMD_READ_ID	0x90
#define FLASH_SER_OFF		0x102
static u32 hw_bits = 0xFFFFFFFD;;
static u8 control_value;
static void set_scl(u8 value)
static void set_sda(u8 value)
static void set_str(u8 value)
static inline void set_control(int line, int value)
static void output_control(void)
static void (*set_carrier_cb_tab[2])(void *pdev, int carrier);
static int hss_set_clock(int port, unsigned int clock_type)
static irqreturn_t hss_dcd_irq(int irq, void *pdev)
static int hss_open(int port, void *pdev,
void (*set_carrier_cb)(void *pdev, int carrier))
static void hss_close(int port, void *pdev)
static struct flash_platform_data flash_data = ;
static struct resource flash_resource = ;
static struct platform_device device_flash = ;
static struct i2c_gpio_platform_data i2c_data = ;
static struct platform_device device_i2c = ;
static struct resource uart_resources[] = ;
static struct plat_serial8250_port uart_data[] = ;
static struct platform_device device_uarts = ;
static struct eth_plat_info eth_plat[] = ;
static struct platform_device device_eth_tab[] = ;
static struct hss_plat_info hss_plat[] = ;
static struct platform_device device_hss_tab[] = ;
static struct platform_device *device_tab[6] __initdata = ;
static inline u8 __init flash_readb(u8 __iomem *flash, u32 addr)
static inline u16 __init flash_readw(u8 __iomem *flash, u32 addr)
static void __init gmlr_init(void)
static void __init gmlr_pci_preinit(void)
static void __init gmlr_pci_postinit(void)
static int __init gmlr_map_irq(struct pci_dev *dev, u8 slot, u8 pin)
static struct hw_pci gmlr_hw_pci __initdata = ;
static int __init gmlr_pci_init(void)
subsys_initcall(gmlr_pci_init);
MACHINE_START(GORAMO_MLR, "MultiLink")
.map_io		= ixp4xx_map_io,
.init_irq	= ixp4xx_init_irq,
.timer		= &ixp4xx_timer,
.boot_params	= 0x0100,
.init_machine	= gmlr_init,
MACHINE_END
