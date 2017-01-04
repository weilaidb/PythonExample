#define DRV_NAME "pata_pcmcia"
#define DRV_VERSION "0.3.5"
static int pcmcia_set_mode(struct ata_link *link, struct ata_device **r_failed_dev)
static int pcmcia_set_mode_8bit(struct ata_link *link,
struct ata_device **r_failed_dev)
static unsigned int ata_data_xfer_8bit(struct ata_device *dev,
unsigned char *buf, unsigned int buflen, int rw)
static void pcmcia_8bit_drain_fifo(struct ata_queued_cmd *qc)
static struct scsi_host_template pcmcia_sht = ;
static struct ata_port_operations pcmcia_port_ops = ;
static struct ata_port_operations pcmcia_8bit_port_ops = ;
static int pcmcia_check_one_config(struct pcmcia_device *pdev, void *priv_data)
static int pcmcia_init_one(struct pcmcia_device *pdev)
static void pcmcia_remove_one(struct pcmcia_device *pdev)
static const struct pcmcia_device_id pcmcia_devices[] = ;
MODULE_DEVICE_TABLE(pcmcia, pcmcia_devices);
static struct pcmcia_driver pcmcia_driver = ;
static int __init pcmcia_init(void)
static void __exit pcmcia_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for PCMCIA ATA");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(pcmcia_init);
module_exit(pcmcia_exit);
