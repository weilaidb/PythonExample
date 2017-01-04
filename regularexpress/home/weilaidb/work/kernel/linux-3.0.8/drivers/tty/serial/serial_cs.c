static int do_sound = 1;
static int buggy_uart;
module_param(do_sound, int, 0444);
module_param(buggy_uart, int, 0444);
struct serial_quirk ;
struct serial_info ;
struct serial_cfg_mem ;
static void quirk_setup_brainboxes_0104(struct pcmcia_device *link, struct uart_port *port)
static int quirk_post_ibm(struct pcmcia_device *link)
static void quirk_config_nokia(struct pcmcia_device *link)
static void quirk_wakeup_oxsemi(struct pcmcia_device *link)
static void quirk_wakeup_possio_gcc(struct pcmcia_device *link)
static void quirk_config_socket(struct pcmcia_device *link)
static const struct serial_quirk quirks[] = ;
static int serial_config(struct pcmcia_device * link);
static void serial_remove(struct pcmcia_device *link)
static int serial_suspend(struct pcmcia_device *link)
static int serial_resume(struct pcmcia_device *link)
static int serial_probe(struct pcmcia_device *link)
static void serial_detach(struct pcmcia_device *link)
static int setup_serial(struct pcmcia_device *handle, struct serial_info * info,
unsigned int iobase, int irq)
static int pfc_config(struct pcmcia_device *p_dev)
static int simple_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int simple_config_check_notpicky(struct pcmcia_device *p_dev,
void *priv_data)
static int simple_config(struct pcmcia_device *link)
static int multi_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int multi_config_check_notpicky(struct pcmcia_device *p_dev,
void *priv_data)
static int multi_config(struct pcmcia_device *link)
static int serial_check_for_multi(struct pcmcia_device *p_dev,  void *priv_data)
static int serial_config(struct pcmcia_device * link)
static const struct pcmcia_device_id serial_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, serial_ids);
MODULE_FIRMWARE("cis/PCMLM28.cis");
MODULE_FIRMWARE("cis/DP83903.cis");
MODULE_FIRMWARE("cis/3CCFEM556.cis");
MODULE_FIRMWARE("cis/3CXEM556.cis");
MODULE_FIRMWARE("cis/SW_8xx_SER.cis");
MODULE_FIRMWARE("cis/SW_7xx_SER.cis");
MODULE_FIRMWARE("cis/SW_555_SER.cis");
MODULE_FIRMWARE("cis/MT5634ZLX.cis");
MODULE_FIRMWARE("cis/COMpad2.cis");
MODULE_FIRMWARE("cis/COMpad4.cis");
MODULE_FIRMWARE("cis/RS-COM-2P.cis");
static struct pcmcia_driver serial_cs_driver = ;
static int __init init_serial_cs(void)
static void __exit exit_serial_cs(void)
module_init(init_serial_cs);
module_exit(exit_serial_cs);
MODULE_LICENSE("GPL");
