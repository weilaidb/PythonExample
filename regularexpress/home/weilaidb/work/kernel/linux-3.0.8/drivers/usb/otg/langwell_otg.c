#define	DRIVER_DESC		"Intel Langwell USB OTG transceiver driver"
#define	DRIVER_VERSION		"July 10, 2010"
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_AUTHOR("Henry Yuan <hang.yuan@intel.com>, Hao Wu <hao.wu@intel.com>");
MODULE_VERSION(DRIVER_VERSION);
MODULE_LICENSE("GPL");
static const char driver_name[] = "langwell_otg";
static int langwell_otg_probe(struct pci_dev *pdev,
const struct pci_device_id *id);
static void langwell_otg_remove(struct pci_dev *pdev);
static int langwell_otg_suspend(struct pci_dev *pdev, pm_message_t message);
static int langwell_otg_resume(struct pci_dev *pdev);
static int langwell_otg_set_host(struct otg_transceiver *otg,
struct usb_bus *host);
static int langwell_otg_set_peripheral(struct otg_transceiver *otg,
struct usb_gadget *gadget);
static int langwell_otg_start_srp(struct otg_transceiver *otg);
static const struct pci_device_id pci_ids[] = ;
static struct pci_driver otg_pci_driver = ;
static inline struct langwell_otg_timer *otg_timer_initializer
(void (*function)(unsigned long), unsigned long expires, unsigned long data)
static struct langwell_otg_timer *a_wait_vrise_tmr, *a_aidl_bdis_tmr,
*b_se0_srp_tmr, *b_srp_init_tmr;
static struct list_head active_timers;
static struct langwell_otg *the_transceiver;
void langwell_update_transceiver(void)
EXPORT_SYMBOL(langwell_update_transceiver);
static int langwell_otg_set_host(struct otg_transceiver *otg,
struct usb_bus *host)
static int langwell_otg_set_peripheral(struct otg_transceiver *otg,
struct usb_gadget *gadget)
static int langwell_otg_set_power(struct otg_transceiver *otg,
unsigned mA)
static int langwell_otg_set_vbus(struct otg_transceiver *otg, bool enabled)
static void langwell_otg_chrg_vbus(int on)
static int langwell_otg_start_srp(struct otg_transceiver *otg)
static void langwell_otg_loc_sof(int on)
static int langwell_otg_check_otgsc(void)
static void langwell_otg_phy_low_power(int on)
static void langwell_otg_phy_low_power_wait(int on)
static void langwell_otg_intr(int on)
static void langwell_otg_HAAR(int on)
static void langwell_otg_HABA(int on)
static int langwell_otg_check_se0_srp(int on)
static void set_tmout(unsigned long indicator)
void langwell_otg_nsf_msg(unsigned long indicator)
static int langwell_otg_init_timers(struct otg_hsm *hsm)
static void langwell_otg_free_timers(void)
static void langwell_otg_timer_fn(unsigned long indicator)
static void langwell_otg_add_ktimer(enum langwell_otg_timer_type timers)
static void langwell_otg_add_timer(void *gtimer)
static void langwell_otg_del_timer(void *gtimer)
static int langwell_otg_tick_timer(u32 *int_sts)
static void reset_otg(void)
static void set_host_mode(void)
static void set_client_mode(void)
static void init_hsm(void)
static void update_hsm(void)
static irqreturn_t otg_dummy_irq(int irq, void *_dev)
static irqreturn_t otg_irq(int irq, void *_dev)
static int langwell_otg_iotg_notify(struct notifier_block *nb,
unsigned long action, void *data)
static void langwell_otg_work(struct work_struct *work)
static ssize_t
show_registers(struct device *_dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(registers, S_IRUGO, show_registers, NULL);
static ssize_t
show_hsm(struct device *_dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(hsm, S_IRUGO, show_hsm, NULL);
static ssize_t
get_a_bus_req(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
set_a_bus_req(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(a_bus_req, S_IRUGO | S_IWUSR, get_a_bus_req, set_a_bus_req);
static ssize_t
get_a_bus_drop(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
set_a_bus_drop(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(a_bus_drop, S_IRUGO | S_IWUSR, get_a_bus_drop, set_a_bus_drop);
static ssize_t
get_b_bus_req(struct device *dev, struct device_attribute *attr, char *buf)
static ssize_t
set_b_bus_req(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(b_bus_req, S_IRUGO | S_IWUSR, get_b_bus_req, set_b_bus_req);
static ssize_t
set_a_clr_err(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(a_clr_err, S_IWUSR, NULL, set_a_clr_err);
static struct attribute *inputs_attrs[] = ;
static struct attribute_group debug_dev_attr_group = ;
static int langwell_otg_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void langwell_otg_remove(struct pci_dev *pdev)
static void transceiver_suspend(struct pci_dev *pdev)
static int langwell_otg_suspend(struct pci_dev *pdev, pm_message_t message)
static void transceiver_resume(struct pci_dev *pdev)
static int langwell_otg_resume(struct pci_dev *pdev)
static int __init langwell_otg_init(void)
module_init(langwell_otg_init);
static void __exit langwell_otg_cleanup(void)
module_exit(langwell_otg_cleanup);
