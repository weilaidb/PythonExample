#define AB8500_MAIN_WD_CTRL_REG 0x01
#define AB8500_USB_LINE_STAT_REG 0x80
#define AB8500_USB_PHY_CTRL_REG 0x8A
#define AB8500_BIT_OTG_STAT_ID (1 << 0)
#define AB8500_BIT_PHY_CTRL_HOST_EN (1 << 0)
#define AB8500_BIT_PHY_CTRL_DEVICE_EN (1 << 1)
#define AB8500_BIT_WD_CTRL_ENABLE (1 << 0)
#define AB8500_BIT_WD_CTRL_KICK (1 << 1)
#define AB8500_V1x_LINK_STAT_WAIT (HZ/10)
#define AB8500_WD_KICK_DELAY_US 100
#define AB8500_WD_V11_DISABLE_DELAY_US 100
#define AB8500_WD_V10_DISABLE_DELAY_MS 100
enum ab8500_usb_link_status ;
struct ab8500_usb ;
static inline struct ab8500_usb *xceiv_to_ab(struct otg_transceiver *x)
static void ab8500_usb_wd_workaround(struct ab8500_usb *ab)
static void ab8500_usb_phy_ctrl(struct ab8500_usb *ab, bool sel_host,
bool enable)
#define ab8500_usb_host_phy_en(ab)	ab8500_usb_phy_ctrl(ab, true, true)
#define ab8500_usb_host_phy_dis(ab)	ab8500_usb_phy_ctrl(ab, true, false)
#define ab8500_usb_peri_phy_en(ab)	ab8500_usb_phy_ctrl(ab, false, true)
#define ab8500_usb_peri_phy_dis(ab)	ab8500_usb_phy_ctrl(ab, false, false)
static int ab8500_usb_link_status_update(struct ab8500_usb *ab)
static void ab8500_usb_delayed_work(struct work_struct *work)
static irqreturn_t ab8500_usb_v1x_common_irq(int irq, void *data)
static irqreturn_t ab8500_usb_v1x_vbus_fall_irq(int irq, void *data)
static irqreturn_t ab8500_usb_v20_irq(int irq, void *data)
static void ab8500_usb_phy_disable_work(struct work_struct *work)
static int ab8500_usb_set_power(struct otg_transceiver *otg, unsigned mA)
static int ab8500_usb_set_suspend(struct otg_transceiver *x, int suspend)
static int ab8500_usb_set_peripheral(struct otg_transceiver *otg,
struct usb_gadget *gadget)
static int ab8500_usb_set_host(struct otg_transceiver *otg,
struct usb_bus *host)
static void ab8500_usb_irq_free(struct ab8500_usb *ab)
static int ab8500_usb_v1x_res_setup(struct platform_device *pdev,
struct ab8500_usb *ab)
static int ab8500_usb_v2_res_setup(struct platform_device *pdev,
struct ab8500_usb *ab)
static int __devinit ab8500_usb_probe(struct platform_device *pdev)
static int __devexit ab8500_usb_remove(struct platform_device *pdev)
static struct platform_driver ab8500_usb_driver = ;
static int __init ab8500_usb_init(void)
subsys_initcall(ab8500_usb_init);
static void __exit ab8500_usb_exit(void)
module_exit(ab8500_usb_exit);
MODULE_ALIAS("platform:ab8500_usb");
MODULE_AUTHOR("ST-Ericsson AB");
MODULE_DESCRIPTION("AB8500 usb transceiver driver");
MODULE_LICENSE("GPL");
