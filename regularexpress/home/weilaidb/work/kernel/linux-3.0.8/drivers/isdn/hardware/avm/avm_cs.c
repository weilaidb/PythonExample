MODULE_DESCRIPTION("CAPI4Linux: PCMCIA client driver for AVM B1/M1/M2");
MODULE_AUTHOR("Carsten Paeth");
MODULE_LICENSE("GPL");
static int avmcs_config(struct pcmcia_device *link);
static void avmcs_release(struct pcmcia_device *link);
static void avmcs_detach(struct pcmcia_device *p_dev);
static int avmcs_probe(struct pcmcia_device *p_dev)
static void avmcs_detach(struct pcmcia_device *link)
static int avmcs_configcheck(struct pcmcia_device *p_dev, void *priv_data)
static int avmcs_config(struct pcmcia_device *link)
static void avmcs_release(struct pcmcia_device *link)
static const struct pcmcia_device_id avmcs_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, avmcs_ids);
static struct pcmcia_driver avmcs_driver = ;
static int __init avmcs_init(void)
static void __exit avmcs_exit(void)
module_init(avmcs_init);
module_exit(avmcs_exit);
