MODULE_AUTHOR("Simon Kelley");
MODULE_DESCRIPTION("Support for Atmel at76c50x 802.11 wireless ethernet cards.");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("Atmel at76c50x PCMCIA cards");
static int atmel_config(struct pcmcia_device *link);
static void atmel_release(struct pcmcia_device *link);
static void atmel_detach(struct pcmcia_device *p_dev);
typedef struct local_info_t  local_info_t;
static int atmel_probe(struct pcmcia_device *p_dev)
static void atmel_detach(struct pcmcia_device *link)
static int card_present(void *arg)
static int atmel_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int atmel_config(struct pcmcia_device *link)
static void atmel_release(struct pcmcia_device *link)
static int atmel_suspend(struct pcmcia_device *link)
static int atmel_resume(struct pcmcia_device *link)
#define PCMCIA_DEVICE_MANF_CARD_INFO(manf, card, info)
#define PCMCIA_DEVICE_PROD_ID12_INFO(v1, v2, vh1, vh2, info)
static const struct pcmcia_device_id atmel_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, atmel_ids);
static struct pcmcia_driver atmel_driver = ;
static int __init atmel_cs_init(void)
static void __exit atmel_cs_cleanup(void)
module_init(atmel_cs_init);
module_exit(atmel_cs_cleanup);
