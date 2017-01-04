struct whcrc ;
static int whcrc_cmd(struct uwb_rc *uwb_rc,
const struct uwb_rccb *cmd, size_t cmd_size)
static int whcrc_reset(struct uwb_rc *rc)
static
void whcrc_enable_events(struct whcrc *whcrc)
static void whcrc_event_work(struct work_struct *work)
static
irqreturn_t whcrc_irq_cb(int irq, void *_whcrc)
static
int whcrc_setup_rc_umc(struct whcrc *whcrc)
static
void whcrc_release_rc_umc(struct whcrc *whcrc)
static int whcrc_start_rc(struct uwb_rc *rc)
static
void whcrc_stop_rc(struct uwb_rc *rc)
static void whcrc_init(struct whcrc *whcrc)
static
int whcrc_probe(struct umc_dev *umc_dev)
static void whcrc_remove(struct umc_dev *umc_dev)
static int whcrc_pre_reset(struct umc_dev *umc)
static int whcrc_post_reset(struct umc_dev *umc)
static struct pci_device_id __used whcrc_id_table[] = ;
MODULE_DEVICE_TABLE(pci, whcrc_id_table);
static struct umc_driver whcrc_driver = ;
static int __init whcrc_driver_init(void)
module_init(whcrc_driver_init);
static void __exit whcrc_driver_exit(void)
module_exit(whcrc_driver_exit);
MODULE_AUTHOR("Inaky Perez-Gonzalez <inaky.perez-gonzalez@intel.com>");
MODULE_DESCRIPTION("Wireless Host Controller Radio Control Driver");
MODULE_LICENSE("GPL");
