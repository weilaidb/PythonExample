#define CONTROL_DEV_CONF		0x300
#define PHY_PD				0x1
#define USBOTGHS_CONTROL		0x33c
#define	AVALID				BIT(0)
#define	BVALID				BIT(1)
#define	VBUSVALID			BIT(2)
#define	SESSEND				BIT(3)
#define	IDDIG				BIT(4)
static struct clk *phyclk, *clk48m, *clk32k;
static void __iomem *ctrl_base;
static int usbotghs_control;
int omap4430_phy_init(struct device *dev)
int omap4430_phy_set_clk(struct device *dev, int on)
int omap4430_phy_power(struct device *dev, int ID, int on)
int omap4430_phy_suspend(struct device *dev, int suspend)
int omap4430_phy_exit(struct device *dev)
void am35x_musb_reset(void)
void am35x_musb_phy_power(u8 on)
void am35x_musb_clear_irq(void)
void am35x_set_mode(u8 musb_mode)
