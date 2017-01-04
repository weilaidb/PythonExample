#define DRV_NAME "pata_qdi"
#define DRV_VERSION "0.3.1"
#define NR_HOST 4
struct qdi_data ;
static struct ata_host *qdi_host[NR_HOST];
static struct qdi_data qdi_data[NR_HOST];
static int nr_qdi_host;
static int probe_qdi = 1;
static int probe_qdi;
static void qdi6500_set_piomode(struct ata_port *ap, struct ata_device *adev)
static void qdi6580_set_piomode(struct ata_port *ap, struct ata_device *adev)
static unsigned int qdi_qc_issue(struct ata_queued_cmd *qc)
static unsigned int qdi_data_xfer(struct ata_device *dev, unsigned char *buf,
unsigned int buflen, int rw)
static struct scsi_host_template qdi_sht = ;
static struct ata_port_operations qdi6500_port_ops = ;
static struct ata_port_operations qdi6580_port_ops = ;
static __init int qdi_init_one(unsigned long port, int type, unsigned long io, int irq, int fast)
static __init int qdi_init(void)
static __exit void qdi_exit(void)
MODULE_AUTHOR("Alan Cox");
MODULE_DESCRIPTION("low-level driver for qdi ATA");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
module_init(qdi_init);
module_exit(qdi_exit);
module_param(probe_qdi, int, 0);
