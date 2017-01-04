#define TA_WAIT_BCON(m) max_t(int, (m)->a_wait_bcon, OTG_TIME_A_WAIT_BCON)
#define DRIVER_AUTHOR "Mentor Graphics, Texas Instruments, Nokia"
#define DRIVER_DESC "Inventra Dual-Role USB Controller Driver"
#define MUSB_VERSION "6.0"
#define DRIVER_INFO DRIVER_DESC ", v" MUSB_VERSION
#define MUSB_DRIVER_NAME "musb-hdrc"
const char musb_driver_name[] = MUSB_DRIVER_NAME;
MODULE_DESCRIPTION(DRIVER_INFO);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" MUSB_DRIVER_NAME);
static inline struct musb *dev_to_musb(struct device *dev)
static int musb_ulpi_read(struct otg_transceiver *otg, u32 offset)
static int musb_ulpi_write(struct otg_transceiver *otg,
u32 offset, u32 data)
#define musb_ulpi_read		NULL
#define musb_ulpi_write		NULL
static struct otg_io_access_ops musb_ulpi_access = ;
#if !defined(CONFIG_USB_MUSB_TUSB6010) && !defined(CONFIG_USB_MUSB_BLACKFIN)
void musb_write_fifo(struct musb_hw_ep *hw_ep, u16 len, const u8 *src)
#if !defined(CONFIG_USB_MUSB_AM35X)
void musb_read_fifo(struct musb_hw_ep *hw_ep, u16 len, u8 *dst)
static const u8 musb_test_packet[53] = ;
void musb_load_testpacket(struct musb *musb)
void musb_otg_timer_func(unsigned long data)
void musb_hnp_stop(struct musb *musb)
static irqreturn_t musb_stage0_irq(struct musb *musb, u8 int_usb,
u8 devctl, u8 power)
void musb_start(struct musb *musb)
static void musb_generic_disable(struct musb *musb)
void musb_stop(struct musb *musb)
static void musb_shutdown(struct platform_device *pdev)
#if defined(CONFIG_USB_MUSB_TUSB6010) || defined(CONFIG_USB_MUSB_OMAP2PLUS) \
|| defined(CONFIG_USB_MUSB_AM35X)
static ushort __initdata fifo_mode = 4;
#elif defined(CONFIG_USB_MUSB_UX500)
static ushort __initdata fifo_mode = 5;
static ushort __initdata fifo_mode = 2;
module_param(fifo_mode, ushort, 0);
MODULE_PARM_DESC(fifo_mode, "initial endpoint configuration");
static struct musb_fifo_cfg __initdata mode_0_cfg[] = ;
static struct musb_fifo_cfg __initdata mode_1_cfg[] = ;
static struct musb_fifo_cfg __initdata mode_2_cfg[] = ;
static struct musb_fifo_cfg __initdata mode_3_cfg[] = ;
static struct musb_fifo_cfg __initdata mode_4_cfg[] = ;
static struct musb_fifo_cfg __initdata mode_5_cfg[] = ;
static int __init
fifo_setup(struct musb *musb, struct musb_hw_ep  *hw_ep,
const struct musb_fifo_cfg *cfg, u16 offset)
static struct musb_fifo_cfg __initdata ep0_cfg = ;
static int __init ep_config_from_table(struct musb *musb)
static int __init ep_config_from_hw(struct musb *musb)
enum ;
static int __init musb_core_init(u16 musb_type, struct musb *musb)
#if defined(CONFIG_SOC_OMAP2430) || defined(CONFIG_SOC_OMAP3430) || \
defined(CONFIG_ARCH_OMAP4) || defined(CONFIG_ARCH_U8500) || \
defined(CONFIG_ARCH_U5500)
static irqreturn_t generic_interrupt(int irq, void *__hci)
#define generic_interrupt	NULL
irqreturn_t musb_interrupt(struct musb *musb)
EXPORT_SYMBOL_GPL(musb_interrupt);
static int __initdata use_dma = 1;
module_param(use_dma, bool, 0);
MODULE_PARM_DESC(use_dma, "enable/disable use of DMA");
void musb_dma_completion(struct musb *musb, u8 epnum, u8 transmit)
#define use_dma			0
static ssize_t
musb_mode_show(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
musb_mode_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t n)
static DEVICE_ATTR(mode, 0644, musb_mode_show, musb_mode_store);
static ssize_t
musb_vbus_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t n)
static ssize_t
musb_vbus_show(struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(vbus, 0644, musb_vbus_show, musb_vbus_store);
static ssize_t
musb_srp_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t n)
static DEVICE_ATTR(srp, 0644, NULL, musb_srp_store);
static struct attribute *musb_attributes[] = ;
static const struct attribute_group musb_attr_group = ;
static void musb_irq_work(struct work_struct *data)
static struct musb *__init
allocate_instance(struct device *dev,
struct musb_hdrc_config *config, void __iomem *mbase)
static void musb_free(struct musb *musb)
static int __init
musb_init_controller(struct device *dev, int nIrq, void __iomem *ctrl)
static u64	*orig_dma_mask;
static int __init musb_probe(struct platform_device *pdev)
static int __exit musb_remove(struct platform_device *pdev)
static void musb_save_context(struct musb *musb)
static void musb_restore_context(struct musb *musb)
static int musb_suspend(struct device *dev)
static int musb_resume_noirq(struct device *dev)
static int musb_runtime_suspend(struct device *dev)
static int musb_runtime_resume(struct device *dev)
static const struct dev_pm_ops musb_dev_pm_ops = ;
#define MUSB_DEV_PM_OPS (&musb_dev_pm_ops)
#define	MUSB_DEV_PM_OPS	NULL
static struct platform_driver musb_driver = ;
static int __init musb_init(void)
fs_initcall(musb_init);
static void __exit musb_cleanup(void)
module_exit(musb_cleanup);
