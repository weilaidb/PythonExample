MODULE_DESCRIPTION("ISDN4Linux: PCMCIA client driver for Elsa PCM cards");
MODULE_AUTHOR("Klaus Lichtenwalder");
MODULE_LICENSE("Dual MPL/GPL");
static int protocol = 2;
module_param(protocol, int, 0);
static int elsa_cs_config(struct pcmcia_device *link) __devinit ;
static void elsa_cs_release(struct pcmcia_device *link);
static void elsa_cs_detach(struct pcmcia_device *p_dev) __devexit;
typedef struct local_info_t  local_info_t;
static int __devinit elsa_cs_probe(struct pcmcia_device *link)
static void __devexit elsa_cs_detach(struct pcmcia_device *link)
static int elsa_cs_configcheck(struct pcmcia_device *p_dev, void *priv_data)
static int __devinit elsa_cs_config(struct pcmcia_device *link)
static void elsa_cs_release(struct pcmcia_device *link)
static int elsa_suspend(struct pcmcia_device *link)
static int elsa_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id elsa_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, elsa_ids);
static struct pcmcia_driver elsa_cs_driver = ;
static int __init init_elsa_cs(void)
static void __exit exit_elsa_cs(void)
module_init(init_elsa_cs);
module_exit(exit_elsa_cs);
