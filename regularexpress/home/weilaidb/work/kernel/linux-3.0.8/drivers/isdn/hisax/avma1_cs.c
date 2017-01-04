MODULE_DESCRIPTION("ISDN4Linux: PCMCIA client driver for AVM A1/Fritz!PCMCIA cards");
MODULE_AUTHOR("Carsten Paeth");
MODULE_LICENSE("GPL");
static int isdnprot = 2;
module_param(isdnprot, int, 0);
static int avma1cs_config(struct pcmcia_device *link) __devinit ;
static void avma1cs_release(struct pcmcia_device *link);
static void avma1cs_detach(struct pcmcia_device *p_dev) __devexit ;
static int __devinit avma1cs_probe(struct pcmcia_device *p_dev)
static void __devexit avma1cs_detach(struct pcmcia_device *link)
static int avma1cs_configcheck(struct pcmcia_device *p_dev, void *priv_data)
static int __devinit avma1cs_config(struct pcmcia_device *link)
static void avma1cs_release(struct pcmcia_device *link)
static const struct pcmcia_device_id avma1cs_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, avma1cs_ids);
static struct pcmcia_driver avma1cs_driver = ;
static int __init init_avma1_cs(void)
static void __exit exit_avma1_cs(void)
module_init(init_avma1_cs);
module_exit(exit_avma1_cs);
