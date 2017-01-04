#define MSM_USB_BASE	(motg->regs)
#define DRIVER_NAME	"msm_otg"
#define ULPI_IO_TIMEOUT_USEC	(10 * 1000)
#define USB_PHY_3P3_VOL_MIN	3050000
#define USB_PHY_3P3_VOL_MAX	3300000
#define USB_PHY_3P3_HPM_LOAD	50000
#define USB_PHY_3P3_LPM_LOAD	4000
#define USB_PHY_1P8_VOL_MIN	1800000
#define USB_PHY_1P8_VOL_MAX	1800000
#define USB_PHY_1P8_HPM_LOAD	50000
#define USB_PHY_1P8_LPM_LOAD	4000
#define USB_PHY_VDD_DIG_VOL_MIN	1000000
#define USB_PHY_VDD_DIG_VOL_MAX	1320000
static struct regulator *hsusb_3p3;
static struct regulator *hsusb_1p8;
static struct regulator *hsusb_vddcx;
static int msm_hsusb_init_vddcx(struct msm_otg *motg, int init)
static int msm_hsusb_ldo_init(struct msm_otg *motg, int init)
#define USB_PHY_SUSP_DIG_VOL  500000
static int msm_hsusb_config_vddcx(int high)
static int msm_hsusb_ldo_set_mode(int on)
static int ulpi_read(struct otg_transceiver *otg, u32 reg)
static int ulpi_write(struct otg_transceiver *otg, u32 val, u32 reg)
static struct otg_io_access_ops msm_otg_io_ops = ;
static void ulpi_init(struct msm_otg *motg)
static int msm_otg_link_clk_reset(struct msm_otg *motg, bool assert)
static int msm_otg_phy_clk_reset(struct msm_otg *motg)
static int msm_otg_phy_reset(struct msm_otg *motg)
#define LINK_RESET_TIMEOUT_USEC		(250 * 1000)
static int msm_otg_reset(struct otg_transceiver *otg)
#define PHY_SUSPEND_TIMEOUT_USEC	(500 * 1000)
#define PHY_RESUME_TIMEOUT_USEC	(100 * 1000)
static int msm_otg_suspend(struct msm_otg *motg)
static int msm_otg_resume(struct msm_otg *motg)
static void msm_otg_notify_charger(struct msm_otg *motg, unsigned mA)
static int msm_otg_set_power(struct otg_transceiver *otg, unsigned mA)
static void msm_otg_start_host(struct otg_transceiver *otg, int on)
static int msm_otg_set_host(struct otg_transceiver *otg, struct usb_bus *host)
static void msm_otg_start_peripheral(struct otg_transceiver *otg, int on)
static int msm_otg_set_peripheral(struct otg_transceiver *otg,
struct usb_gadget *gadget)
static bool msm_chg_check_secondary_det(struct msm_otg *motg)
static void msm_chg_enable_secondary_det(struct msm_otg *motg)
static bool msm_chg_check_primary_det(struct msm_otg *motg)
static void msm_chg_enable_primary_det(struct msm_otg *motg)
static bool msm_chg_check_dcd(struct msm_otg *motg)
static void msm_chg_disable_dcd(struct msm_otg *motg)
static void msm_chg_enable_dcd(struct msm_otg *motg)
static void msm_chg_block_on(struct msm_otg *motg)
static void msm_chg_block_off(struct msm_otg *motg)
#define MSM_CHG_DCD_POLL_TIME		(100 * HZ/1000)
#define MSM_CHG_DCD_MAX_RETRIES		6
#define MSM_CHG_PRIMARY_DET_TIME	(40 * HZ/1000)
#define MSM_CHG_SECONDARY_DET_TIME	(40 * HZ/1000)
static void msm_chg_detect_work(struct work_struct *w)
static void msm_otg_init_sm(struct msm_otg *motg)
static void msm_otg_sm_work(struct work_struct *w)
static irqreturn_t msm_otg_irq(int irq, void *data)
static int msm_otg_mode_show(struct seq_file *s, void *unused)
static int msm_otg_mode_open(struct inode *inode, struct file *file)
static ssize_t msm_otg_mode_write(struct file *file, const char __user *ubuf,
size_t count, loff_t *ppos)
const struct file_operations msm_otg_mode_fops = ;
static struct dentry *msm_otg_dbg_root;
static struct dentry *msm_otg_dbg_mode;
static int msm_otg_debugfs_init(struct msm_otg *motg)
static void msm_otg_debugfs_cleanup(void)
static int __init msm_otg_probe(struct platform_device *pdev)
static int __devexit msm_otg_remove(struct platform_device *pdev)
static int msm_otg_runtime_idle(struct device *dev)
static int msm_otg_runtime_suspend(struct device *dev)
static int msm_otg_runtime_resume(struct device *dev)
static int msm_otg_pm_suspend(struct device *dev)
static int msm_otg_pm_resume(struct device *dev)
static const struct dev_pm_ops msm_otg_dev_pm_ops = ;
static struct platform_driver msm_otg_driver = ;
static int __init msm_otg_init(void)
static void __exit msm_otg_exit(void)
module_init(msm_otg_init);
module_exit(msm_otg_exit);
MODULE_LICENSE("GPL v2");
MODULE_DESCRIPTION("MSM USB transceiver driver");
