#define DRIVER_VERSION "Rev. 1.55"
#define DRIVER_AUTHOR "Jerry Huang/Li Yang"
#define DRIVER_DESC "Freescale USB OTG Transceiver Driver"
#define DRIVER_INFO DRIVER_DESC " " DRIVER_VERSION
static const char driver_name[] = "fsl-usb2-otg";
const pm_message_t otg_suspend_state = ;
#define HA_DATA_PULSE
static struct usb_dr_mmap *usb_dr_regs;
static struct fsl_otg *fsl_otg_dev;
static int srp_wait_done;
struct fsl_otg_timer *a_wait_vrise_tmr, *a_wait_bcon_tmr, *a_aidl_bdis_tmr,
*b_ase0_brst_tmr, *b_se0_srp_tmr;
struct fsl_otg_timer *b_data_pulse_tmr, *b_vbus_pulse_tmr, *b_srp_fail_tmr,
*b_srp_wait_tmr, *a_wait_enum_tmr;
static struct list_head active_timers;
static struct fsl_otg_config fsl_otg_initdata = ;
static u32 _fsl_readl_be(const unsigned __iomem *p)
static u32 _fsl_readl_le(const unsigned __iomem *p)
static void _fsl_writel_be(u32 v, unsigned __iomem *p)
static void _fsl_writel_le(u32 v, unsigned __iomem *p)
static u32 (*_fsl_readl)(const unsigned __iomem *p);
static void (*_fsl_writel)(u32 v, unsigned __iomem *p);
#define fsl_readl(p)		(*_fsl_readl)((p))
#define fsl_writel(v, p)	(*_fsl_writel)((v), (p))
#define fsl_readl(addr)		readl(addr)
#define fsl_writel(val, addr)	writel(val, addr)
u8 view_ulpi(u8 addr)
int write_ulpi(u8 addr, u8 data)
void fsl_otg_chrg_vbus(int on)
void fsl_otg_dischrg_vbus(int on)
void fsl_otg_drv_vbus(int on)
void fsl_otg_loc_conn(int on)
void fsl_otg_loc_sof(int on)
void fsl_otg_start_pulse(void)
void b_data_pulse_end(unsigned long foo)
void fsl_otg_pulse_vbus(void)
void b_vbus_pulse_end(unsigned long foo)
void b_srp_end(unsigned long foo)
void a_wait_enum(unsigned long foo)
void set_tmout(unsigned long indicator)
int fsl_otg_init_timers(struct otg_fsm *fsm)
void fsl_otg_uninit_timers(void)
void fsl_otg_add_timer(void *gtimer)
void fsl_otg_del_timer(void *gtimer)
int fsl_otg_tick_timer(void)
void otg_reset_controller(void)
int fsl_otg_start_host(struct otg_fsm *fsm, int on)
int fsl_otg_start_gadget(struct otg_fsm *fsm, int on)
static int fsl_otg_set_host(struct otg_transceiver *otg_p, struct usb_bus *host)
static int fsl_otg_set_peripheral(struct otg_transceiver *otg_p,
struct usb_gadget *gadget)
static int fsl_otg_set_power(struct otg_transceiver *otg_p, unsigned mA)
static void fsl_otg_event(struct work_struct *work)
static int fsl_otg_start_srp(struct otg_transceiver *otg_p)
static int fsl_otg_start_hnp(struct otg_transceiver *otg_p)
irqreturn_t fsl_otg_isr(int irq, void *dev_id)
static struct otg_fsm_ops fsl_otg_ops = ;
static int fsl_otg_conf(struct platform_device *pdev)
int usb_otg_start(struct platform_device *pdev)
static int show_fsl_usb2_otg_state(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(fsl_usb2_otg_state, S_IRUGO, show_fsl_usb2_otg_state, NULL);
static long fsl_otg_ioctl(struct file *file, unsigned int cmd,
unsigned long arg)
static int fsl_otg_open(struct inode *inode, struct file *file)
static int fsl_otg_release(struct inode *inode, struct file *file)
static const struct file_operations otg_fops = ;
static int __devinit fsl_otg_probe(struct platform_device *pdev)
static int __devexit fsl_otg_remove(struct platform_device *pdev)
struct platform_driver fsl_otg_driver = ;
static int __init fsl_usb_otg_init(void)
module_init(fsl_usb_otg_init);
static void __exit fsl_usb_otg_exit(void)
module_exit(fsl_usb_otg_exit);
MODULE_DESCRIPTION(DRIVER_INFO);
MODULE_AUTHOR(DRIVER_AUTHOR);
MODULE_LICENSE("GPL");
