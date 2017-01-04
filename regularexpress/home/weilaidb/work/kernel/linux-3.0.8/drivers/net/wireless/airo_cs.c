MODULE_AUTHOR("Benjamin Reed");
MODULE_DESCRIPTION("Support for Cisco/Aironet 802.11 wireless ethernet "
"cards.  This is the module that links the PCMCIA card "
"with the airo module.");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_SUPPORTED_DEVICE("Aironet 4500, 4800 and Cisco 340 PCMCIA cards");
static int airo_config(struct pcmcia_device *link);
static void airo_release(struct pcmcia_device *link);
static void airo_detach(struct pcmcia_device *p_dev);
typedef struct local_info_t  local_info_t;
static int airo_probe(struct pcmcia_device *p_dev)
static void airo_detach(struct pcmcia_device *link)
static int airo_cs_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int airo_config(struct pcmcia_device *link)
static void airo_release(struct pcmcia_device *link)
static int airo_suspend(struct pcmcia_device *link)
static int airo_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id airo_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, airo_ids);
static struct pcmcia_driver airo_driver = ;
static int __init airo_cs_init(void)
static void __exit airo_cs_cleanup(void)
module_init(airo_cs_init);
module_exit(airo_cs_cleanup);
