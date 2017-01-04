#define VERSION "arcnet: COM20020 PCMCIA support loaded.\n"
static void regdump(struct net_device *dev)
static int node;
static int timeout = 3;
static int backplane;
static int clockp;
static int clockm;
module_param(node, int, 0);
module_param(timeout, int, 0);
module_param(backplane, int, 0);
module_param(clockp, int, 0);
module_param(clockm, int, 0);
MODULE_LICENSE("GPL");
static int com20020_config(struct pcmcia_device *link);
static void com20020_release(struct pcmcia_device *link);
static void com20020_detach(struct pcmcia_device *p_dev);
typedef struct com20020_dev_t  com20020_dev_t;
static int com20020_probe(struct pcmcia_device *p_dev)
static void com20020_detach(struct pcmcia_device *link)
static int com20020_config(struct pcmcia_device *link)
static void com20020_release(struct pcmcia_device *link)
static int com20020_suspend(struct pcmcia_device *link)
static int com20020_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id com20020_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, com20020_ids);
static struct pcmcia_driver com20020_cs_driver = ;
static int __init init_com20020_cs(void)
static void __exit exit_com20020_cs(void)
module_init(init_com20020_cs);
module_exit(exit_com20020_cs);
