static const struct pcmcia_device_id ipw_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, ipw_ids);
static void ipwireless_detach(struct pcmcia_device *link);
int ipwireless_debug;
int ipwireless_loopback;
int ipwireless_out_queue = 10;
module_param_named(debug, ipwireless_debug, int, 0);
module_param_named(loopback, ipwireless_loopback, int, 0);
module_param_named(out_queue, ipwireless_out_queue, int, 0);
MODULE_PARM_DESC(debug, "switch on debug messages [0]");
MODULE_PARM_DESC(loopback,
"debug: enable ras_raw channel [0]");
MODULE_PARM_DESC(out_queue, "debug: set size of outgoing PPP queue [10]");
static void signalled_reboot_work(struct work_struct *work_reboot)
static void signalled_reboot_callback(void *callback_data)
static int ipwireless_probe(struct pcmcia_device *p_dev, void *priv_data)
static int config_ipwireless(struct ipw_dev *ipw)
static void release_ipwireless(struct ipw_dev *ipw)
static int ipwireless_attach(struct pcmcia_device *link)
static void ipwireless_detach(struct pcmcia_device *link)
static struct pcmcia_driver me = ;
static int __init init_ipwireless(void)
static void __exit exit_ipwireless(void)
module_init(init_ipwireless);
module_exit(exit_ipwireless);
MODULE_AUTHOR(IPWIRELESS_PCMCIA_AUTHOR);
MODULE_DESCRIPTION(IPWIRELESS_PCCARD_NAME " " IPWIRELESS_PCMCIA_VERSION);
MODULE_LICENSE("GPL");
