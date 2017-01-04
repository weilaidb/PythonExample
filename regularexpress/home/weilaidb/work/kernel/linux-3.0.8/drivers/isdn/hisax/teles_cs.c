MODULE_DESCRIPTION("ISDN4Linux: PCMCIA client driver for Teles PCMCIA cards");
MODULE_AUTHOR("Christof Petig, christof.petig@wtal.de, Karsten Keil, kkeil@suse.de");
MODULE_LICENSE("GPL");
static int protocol = 2;
module_param(protocol, int, 0);
static int teles_cs_config(struct pcmcia_device *link) __devinit ;
static void teles_cs_release(struct pcmcia_device *link);
static void teles_detach(struct pcmcia_device *p_dev) __devexit ;
typedef struct local_info_t  local_info_t;
static int __devinit teles_probe(struct pcmcia_device *link)
static void __devexit teles_detach(struct pcmcia_device *link)
static int teles_cs_configcheck(struct pcmcia_device *p_dev, void *priv_data)
static int __devinit teles_cs_config(struct pcmcia_device *link)
static void teles_cs_release(struct pcmcia_device *link)
static int teles_suspend(struct pcmcia_device *link)
static int teles_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id teles_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, teles_ids);
static struct pcmcia_driver teles_cs_driver = ;
static int __init init_teles_cs(void)
static void __exit exit_teles_cs(void)
module_init(init_teles_cs);
module_exit(exit_teles_cs);
