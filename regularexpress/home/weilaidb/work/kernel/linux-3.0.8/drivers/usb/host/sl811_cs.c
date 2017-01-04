MODULE_AUTHOR("Botond Botyanszki");
MODULE_DESCRIPTION("REX-CFU1U PCMCIA driver for 2.6");
MODULE_LICENSE("GPL");
#define INFO(args...) printk(KERN_INFO "sl811_cs: " args)
typedef struct local_info_t  local_info_t;
static void sl811_cs_release(struct pcmcia_device * link);
static void release_platform_dev(struct device * dev)
static struct sl811_platform_data platform_data = ;
static struct resource resources[] = ;
extern struct platform_driver sl811h_driver;
static struct platform_device platform_dev = ;
static int sl811_hc_init(struct device *parent, resource_size_t base_addr,
int irq)
static void sl811_cs_detach(struct pcmcia_device *link)
static void sl811_cs_release(struct pcmcia_device * link)
static int sl811_cs_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int sl811_cs_config(struct pcmcia_device *link)
static int sl811_cs_probe(struct pcmcia_device *link)
static const struct pcmcia_device_id sl811_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, sl811_ids);
static struct pcmcia_driver sl811_cs_driver = ;
static int __init init_sl811_cs(void)
module_init(init_sl811_cs);
static void __exit exit_sl811_cs(void)
module_exit(exit_sl811_cs);
