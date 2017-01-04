MODULE_DESCRIPTION("ISDN4Linux: PCMCIA client driver for Sedlbauer cards");
MODULE_AUTHOR("Marcus Niemann");
MODULE_LICENSE("Dual MPL/GPL");
static int protocol = 2;
module_param(protocol, int, 0);
static int sedlbauer_config(struct pcmcia_device *link) __devinit ;
static void sedlbauer_release(struct pcmcia_device *link);
static void sedlbauer_detach(struct pcmcia_device *p_dev) __devexit;
typedef struct local_info_t  local_info_t;
static int __devinit sedlbauer_probe(struct pcmcia_device *link)
static void __devexit sedlbauer_detach(struct pcmcia_device *link)
static int sedlbauer_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int __devinit sedlbauer_config(struct pcmcia_device *link)
static void sedlbauer_release(struct pcmcia_device *link)
static int sedlbauer_suspend(struct pcmcia_device *link)
static int sedlbauer_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id sedlbauer_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, sedlbauer_ids);
static struct pcmcia_driver sedlbauer_driver = ;
static int __init init_sedlbauer_cs(void)
static void __exit exit_sedlbauer_cs(void)
module_init(init_sedlbauer_cs);
module_exit(exit_sedlbauer_cs);
