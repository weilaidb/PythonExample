static struct scsi_host_template atp870u_template;
static void send_s870(struct atp_unit *dev,unsigned char c);
static void is885(struct atp_unit *dev, unsigned int wkport,unsigned char c);
static void tscam_885(void);
static irqreturn_t atp870u_intr_handle(int irq, void *dev_id)
static int atp870u_queuecommand_lck(struct scsi_cmnd *req_p,
void (*done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(atp870u_queuecommand)
static void send_s870(struct atp_unit *dev,unsigned char c)
static unsigned char fun_scam(struct atp_unit *dev, unsigned short int *val)
static void tscam(struct Scsi_Host *host)
static void is870(struct atp_unit *dev, unsigned int wkport)
static void is880(struct atp_unit *dev, unsigned int wkport)
static void atp870u_free_tables(struct Scsi_Host *host)
static int atp870u_init_tables(struct Scsi_Host *host)
static int atp870u_probe(struct pci_dev *pdev, const struct pci_device_id *ent)
static int atp870u_abort(struct scsi_cmnd * SCpnt)
static const char *atp870u_info(struct Scsi_Host *notused)
#define BLS buffer + len + size
static int atp870u_proc_info(struct Scsi_Host *HBAptr, char *buffer,
char **start, off_t offset, int length, int inout)
static int atp870u_biosparam(struct scsi_device *disk, struct block_device *dev,
sector_t capacity, int *ip)
static void atp870u_remove (struct pci_dev *pdev)
MODULE_LICENSE("GPL");
static struct scsi_host_template atp870u_template = ;
static struct pci_device_id atp870u_id_table[] = ;
MODULE_DEVICE_TABLE(pci, atp870u_id_table);
static struct pci_driver atp870u_driver = ;
static int __init atp870u_init(void)
static void __exit atp870u_exit(void)
static void tscam_885(void)
static void is885(struct atp_unit *dev, unsigned int wkport,unsigned char c)
module_init(atp870u_init);
module_exit(atp870u_exit);
