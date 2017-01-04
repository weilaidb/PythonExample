#define DRV_NAME "ide-cs"
MODULE_AUTHOR("David Hinds <dahinds@users.sourceforge.net>");
MODULE_DESCRIPTION("PCMCIA ATA/IDE card driver");
MODULE_LICENSE("Dual MPL/GPL");
typedef struct ide_info_t  ide_info_t;
static void ide_release(struct pcmcia_device *);
static int ide_config(struct pcmcia_device *);
static void ide_detach(struct pcmcia_device *p_dev);
static int ide_probe(struct pcmcia_device *link)
static void ide_detach(struct pcmcia_device *link)
static const struct ide_port_ops idecs_port_ops = ;
static const struct ide_port_info idecs_port_info = ;
static struct ide_host *idecs_register(unsigned long io, unsigned long ctl,
unsigned long irq, struct pcmcia_device *handle)
static int pcmcia_check_one_config(struct pcmcia_device *pdev, void *priv_data)
static int ide_config(struct pcmcia_device *link)
static void ide_release(struct pcmcia_device *link)
static const struct pcmcia_device_id ide_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, ide_ids);
static struct pcmcia_driver ide_cs_driver = ;
static int __init init_ide_cs(void)
static void __exit exit_ide_cs(void)
late_initcall(init_ide_cs);
module_exit(exit_ide_cs);
