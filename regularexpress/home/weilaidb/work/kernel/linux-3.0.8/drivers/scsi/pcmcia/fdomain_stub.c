MODULE_AUTHOR("David Hinds <dahinds@users.sourceforge.net>");
MODULE_DESCRIPTION("Future Domain PCMCIA SCSI driver");
MODULE_LICENSE("Dual MPL/GPL");
typedef struct scsi_info_t  scsi_info_t;
static void fdomain_release(struct pcmcia_device *link);
static void fdomain_detach(struct pcmcia_device *p_dev);
static int fdomain_config(struct pcmcia_device *link);
static int fdomain_probe(struct pcmcia_device *link)
static void fdomain_detach(struct pcmcia_device *link)
static int fdomain_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int fdomain_config(struct pcmcia_device *link)
static void fdomain_release(struct pcmcia_device *link)
static int fdomain_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id fdomain_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, fdomain_ids);
static struct pcmcia_driver fdomain_cs_driver = ;
static int __init init_fdomain_cs(void)
static void __exit exit_fdomain_cs(void)
module_init(init_fdomain_cs);
module_exit(exit_fdomain_cs);
