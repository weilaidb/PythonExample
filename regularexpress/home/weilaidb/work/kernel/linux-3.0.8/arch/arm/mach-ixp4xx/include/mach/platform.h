#error "Do not include this directly, instead
#define	REG_OFFSET	0
#define	REG_OFFSET	3
#define IXP4XX_EXP_BUS_BASE_PHYS	(0x50000000)
extern unsigned long ixp4xx_exp_bus_size;
#define	IXP4XX_EXP_BUS_BASE(region)\
(IXP4XX_EXP_BUS_BASE_PHYS + ((region) * ixp4xx_exp_bus_size))
#define IXP4XX_EXP_BUS_END(region)\
(IXP4XX_EXP_BUS_BASE(region) + ixp4xx_exp_bus_size - 1)
#define IXP4XX_EXP_BUS_RECOVERY_T(x)	(((x) & 0x0f) << 16)
#define IXP4XX_EXP_BUS_HOLD_T(x)	(((x) & 0x03) << 20)
#define IXP4XX_EXP_BUS_STROBE_T(x)	(((x) & 0x0f) << 22)
#define IXP4XX_EXP_BUS_SETUP_T(x)	(((x) & 0x03) << 26)
#define IXP4XX_EXP_BUS_ADDR_T(x)	(((x) & 0x03) << 28)
#define IXP4XX_EXP_BUS_SIZE(x)		(((x) & 0x0f) << 10)
#define IXP4XX_EXP_BUS_CYCLES(x)	(((x) & 0x03) << 14)
#define IXP4XX_EXP_BUS_CS_EN		(1L << 31)
#define IXP4XX_EXP_BUS_BYTE_RD16	(1L << 6)
#define IXP4XX_EXP_BUS_HRDY_POL		(1L << 5)
#define IXP4XX_EXP_BUS_MUX_EN		(1L << 4)
#define IXP4XX_EXP_BUS_SPLT_EN		(1L << 3)
#define IXP4XX_EXP_BUS_WR_EN		(1L << 1)
#define IXP4XX_EXP_BUS_BYTE_EN		(1L << 0)
#define IXP4XX_EXP_BUS_CYCLES_INTEL	0x00
#define IXP4XX_EXP_BUS_CYCLES_MOTOROLA	0x01
#define IXP4XX_EXP_BUS_CYCLES_HPI	0x02
#define IXP4XX_FLASH_WRITABLE	(0x2)
#define IXP4XX_FLASH_DEFAULT	(0xbcd23c40)
#define IXP4XX_FLASH_WRITE	(0xbcd23c42)
#define IXP4XX_PERIPHERAL_BUS_CLOCK 	(66)
#define IXP4XX_UART_XTAL        	14745600
struct ixp4xx_pata_data ;
struct sys_timer;
#define IXP4XX_ETH_NPEA		0x00
#define IXP4XX_ETH_NPEB		0x10
#define IXP4XX_ETH_NPEC		0x20
struct eth_plat_info ;
struct hss_plat_info ;
extern unsigned long ixp4xx_timer_freq;
extern void ixp4xx_map_io(void);
extern void ixp4xx_init_irq(void);
extern void ixp4xx_sys_init(void);
extern void ixp4xx_timer_init(void);
extern struct sys_timer ixp4xx_timer;
extern void ixp4xx_pci_preinit(void);
struct pci_sys_data;
extern int ixp4xx_setup(int nr, struct pci_sys_data *sys);
extern struct pci_bus *ixp4xx_scan_bus(int nr, struct pci_sys_data *sys);
#define IXP4XX_GPIO_OUT 		0x1
#define IXP4XX_GPIO_IN  		0x2
#define IXP4XX_GPIO_LOW			0
#define IXP4XX_GPIO_HIGH		1
#define IXP4XX_GPIO_CLK_0		14
#define IXP4XX_GPIO_CLK_1		15
static inline void gpio_line_config(u8 line, u32 direction)
static inline void gpio_line_get(u8 line, int *value)
static inline void gpio_line_set(u8 line, int value)
