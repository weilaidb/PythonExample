#define USB_CTRL	IO_ADDRESS(PNX4008_PWRMAN_BASE + 0x64)
#define USB_SLAVE_HCLK_EN	(1 << 24)
#define USB_HOST_NEED_CLK_EN	(1 << 21)
#define USB_OTG_CLK_CTRL	IO_ADDRESS(PNX4008_USB_CONFIG_BASE + 0xFF4)
#define USB_OTG_CLK_STAT	IO_ADDRESS(PNX4008_USB_CONFIG_BASE + 0xFF8)
#define AHB_M_CLOCK_ON		(1 << 4)
#define OTG_CLOCK_ON		(1 << 3)
#define I2C_CLOCK_ON		(1 << 2)
#define DEV_CLOCK_ON		(1 << 1)
#define HOST_CLOCK_ON		(1 << 0)
#define USB_OTG_STAT_CONTROL	IO_ADDRESS(PNX4008_USB_CONFIG_BASE + 0x110)
#define TRANSPARENT_I2C_EN	(1 << 7)
#define HOST_EN			(1 << 0)
#define	ISP1301_MODE_CONTROL_1		0x04
#define	MC1_SPEED_REG		(1 << 0)
#define	MC1_SUSPEND_REG		(1 << 1)
#define	MC1_DAT_SE0		(1 << 2)
#define	MC1_TRANSPARENT		(1 << 3)
#define	MC1_BDIS_ACON_EN	(1 << 4)
#define	MC1_OE_INT_EN		(1 << 5)
#define	MC1_UART_EN		(1 << 6)
#define	MC1_MASK		0x7f
#define	ISP1301_MODE_CONTROL_2		0x12
#define	MC2_GLOBAL_PWR_DN	(1 << 0)
#define	MC2_SPD_SUSP_CTRL	(1 << 1)
#define	MC2_BI_DI		(1 << 2)
#define	MC2_TRANSP_BDIR0	(1 << 3)
#define	MC2_TRANSP_BDIR1	(1 << 4)
#define	MC2_AUDIO_EN		(1 << 5)
#define	MC2_PSW_EN		(1 << 6)
#define	MC2_EN2V7		(1 << 7)
#define	ISP1301_OTG_CONTROL_1		0x06
#	define	OTG1_DP_PULLUP		(1 << 0)
#	define	OTG1_DM_PULLUP		(1 << 1)
#	define	OTG1_DP_PULLDOWN	(1 << 2)
#	define	OTG1_DM_PULLDOWN	(1 << 3)
#	define	OTG1_ID_PULLDOWN	(1 << 4)
#	define	OTG1_VBUS_DRV		(1 << 5)
#	define	OTG1_VBUS_DISCHRG	(1 << 6)
#	define	OTG1_VBUS_CHRG		(1 << 7)
#define	ISP1301_OTG_STATUS		0x10
#	define	OTG_B_SESS_END		(1 << 6)
#	define	OTG_B_SESS_VLD		(1 << 7)
#define ISP1301_I2C_ADDR 0x2C
#define ISP1301_I2C_MODE_CONTROL_1 0x4
#define ISP1301_I2C_MODE_CONTROL_2 0x12
#define ISP1301_I2C_OTG_CONTROL_1 0x6
#define ISP1301_I2C_OTG_CONTROL_2 0x10
#define ISP1301_I2C_INTERRUPT_SOURCE 0x8
#define ISP1301_I2C_INTERRUPT_LATCH 0xA
#define ISP1301_I2C_INTERRUPT_FALLING 0xC
#define ISP1301_I2C_INTERRUPT_RISING 0xE
#define ISP1301_I2C_REG_CLEAR_ADDR 1
static struct i2c_driver isp1301_driver;
static struct i2c_client *isp1301_i2c_client;
extern int usb_disabled(void);
extern int ocpi_enable(void);
static struct clk *usb_clk;
static const unsigned short normal_i2c[] =
;
static int isp1301_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int isp1301_remove(struct i2c_client *client)
static const struct i2c_device_id isp1301_id[] = ;
static struct i2c_driver isp1301_driver = ;
static void i2c_write(u8 buf, u8 subaddr)
static void isp1301_configure(void)
static inline void isp1301_vbus_on(void)
static inline void isp1301_vbus_off(void)
static void pnx4008_start_hc(void)
static void pnx4008_stop_hc(void)
static int __devinit ohci_pnx4008_start(struct usb_hcd *hcd)
static const struct hc_driver ohci_pnx4008_hc_driver = ;
#define USB_CLOCK_MASK (AHB_M_CLOCK_ON| OTG_CLOCK_ON | HOST_CLOCK_ON | I2C_CLOCK_ON)
static void pnx4008_set_usb_bits(void)
static void pnx4008_unset_usb_bits(void)
static int __devinit usb_hcd_pnx4008_probe(struct platform_device *pdev)
static int usb_hcd_pnx4008_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:usb-ohci");
static struct platform_driver usb_hcd_pnx4008_driver = ;
