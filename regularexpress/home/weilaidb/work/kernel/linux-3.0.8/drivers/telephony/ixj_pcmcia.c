typedef struct ixj_info_t  ixj_info_t;
static void ixj_detach(struct pcmcia_device *p_dev);
static int ixj_config(struct pcmcia_device * link);
static void ixj_cs_release(struct pcmcia_device * link);
static int ixj_probe(struct pcmcia_device *p_dev)
static void ixj_detach(struct pcmcia_device *link)
static void ixj_get_serial(struct pcmcia_device * link, IXJ * j)
static int ixj_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int ixj_config(struct pcmcia_device * link)
static void ixj_cs_release(struct pcmcia_device *link)
static const struct pcmcia_device_id ixj_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, ixj_ids);
static struct pcmcia_driver ixj_driver = ;
static int __init ixj_pcmcia_init(void)
static void ixj_pcmcia_exit(void)
module_init(ixj_pcmcia_init);
module_exit(ixj_pcmcia_exit);
MODULE_LICENSE("GPL");
