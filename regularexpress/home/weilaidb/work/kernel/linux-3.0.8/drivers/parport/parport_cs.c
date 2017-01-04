MODULE_AUTHOR("David Hinds <dahinds@users.sourceforge.net>");
MODULE_DESCRIPTION("PCMCIA parallel port card driver");
MODULE_LICENSE("Dual MPL/GPL");
#define INT_MODULE_PARM(n, v) static int n = v; module_param(n, int, 0)
INT_MODULE_PARM(epp_mode, 1);
#define FORCE_EPP_MODE	0x08
typedef struct parport_info_t  parport_info_t;
static void parport_detach(struct pcmcia_device *p_dev);
static int parport_config(struct pcmcia_device *link);
static void parport_cs_release(struct pcmcia_device *);
static int parport_probe(struct pcmcia_device *link)
static void parport_detach(struct pcmcia_device *link)
static int parport_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int parport_config(struct pcmcia_device *link)
static void parport_cs_release(struct pcmcia_device *link)
static const struct pcmcia_device_id parport_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, parport_ids);
static struct pcmcia_driver parport_cs_driver = ;
static int __init init_parport_cs(void)
static void __exit exit_parport_cs(void)
module_init(init_parport_cs);
module_exit(exit_parport_cs);
