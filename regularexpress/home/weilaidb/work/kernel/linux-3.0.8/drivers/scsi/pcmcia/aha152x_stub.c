static int host_id = 7;
static int reconnect = 1;
static int parity = 1;
static int synchronous = 1;
static int reset_delay = 100;
static int ext_trans = 0;
module_param(host_id, int, 0);
module_param(reconnect, int, 0);
module_param(parity, int, 0);
module_param(synchronous, int, 0);
module_param(reset_delay, int, 0);
module_param(ext_trans, int, 0);
MODULE_LICENSE("Dual MPL/GPL");
typedef struct scsi_info_t  scsi_info_t;
static void aha152x_release_cs(struct pcmcia_device *link);
static void aha152x_detach(struct pcmcia_device *p_dev);
static int aha152x_config_cs(struct pcmcia_device *link);
static int aha152x_probe(struct pcmcia_device *link)
static void aha152x_detach(struct pcmcia_device *link)
static int aha152x_config_check(struct pcmcia_device *p_dev, void *priv_data)
static int aha152x_config_cs(struct pcmcia_device *link)
static void aha152x_release_cs(struct pcmcia_device *link)
static int aha152x_resume(struct pcmcia_device *link)
static const struct pcmcia_device_id aha152x_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, aha152x_ids);
static struct pcmcia_driver aha152x_cs_driver = ;
static int __init init_aha152x_cs(void)
static void __exit exit_aha152x_cs(void)
module_init(init_aha152x_cs);
module_exit(exit_aha152x_cs);
