static struct orc_scb *__orc_alloc_scb(struct orc_host * host);
static void inia100_scb_handler(struct orc_host *host, struct orc_scb *scb);
static struct orc_nvram nvram, *nvramp = &nvram;
static u8 default_nvram[64] =
;
static u8 wait_chip_ready(struct orc_host * host)
static u8 wait_firmware_ready(struct orc_host * host)
static u8 wait_scsi_reset_done(struct orc_host * host)
static u8 wait_HDO_off(struct orc_host * host)
static u8 wait_hdi_set(struct orc_host * host, u8 * data)
static unsigned short orc_read_fwrev(struct orc_host * host)
static u8 orc_nv_write(struct orc_host * host, unsigned char address, unsigned char value)
static u8 orc_nv_read(struct orc_host * host, u8 address, u8 *ptr)
static void orc_exec_scb(struct orc_host * host, struct orc_scb * scb)
static int se2_rd_all(struct orc_host * host)
static void se2_update_all(struct orc_host * host)
static void read_eeprom(struct orc_host * host)
static u8 orc_load_firmware(struct orc_host * host)
static void setup_SCBs(struct orc_host * host)
static void init_alloc_map(struct orc_host * host)
static int init_orchid(struct orc_host * host)
static int orc_reset_scsi_bus(struct orc_host * host)
static int orc_device_reset(struct orc_host * host, struct scsi_cmnd *cmd, unsigned int target)
static struct orc_scb *__orc_alloc_scb(struct orc_host * host)
static struct orc_scb *orc_alloc_scb(struct orc_host * host)
static void orc_release_scb(struct orc_host *host, struct orc_scb *scb)
static int orchid_abort_scb(struct orc_host * host, struct orc_scb * scb)
static int inia100_abort_cmd(struct orc_host * host, struct scsi_cmnd *cmd)
static irqreturn_t orc_interrupt(struct orc_host * host)
static int inia100_build_scb(struct orc_host * host, struct orc_scb * scb, struct scsi_cmnd * cmd)
static int inia100_queue_lck(struct scsi_cmnd * cmd, void (*done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(inia100_queue)
static int inia100_abort(struct scsi_cmnd * cmd)
static int inia100_bus_reset(struct scsi_cmnd * cmd)
static int inia100_device_reset(struct scsi_cmnd * cmd)
static void inia100_scb_handler(struct orc_host *host, struct orc_scb *scb)
static irqreturn_t inia100_intr(int irqno, void *devid)
static struct scsi_host_template inia100_template = ;
static int __devinit inia100_probe_one(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __devexit inia100_remove_one(struct pci_dev *pdev)
static struct pci_device_id inia100_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, inia100_pci_tbl);
static struct pci_driver inia100_pci_driver = ;
static int __init inia100_init(void)
static void __exit inia100_exit(void)
MODULE_DESCRIPTION("Initio A100U2W SCSI driver");
MODULE_AUTHOR("Initio Corporation");
MODULE_LICENSE("Dual BSD/GPL");
module_init(inia100_init);
module_exit(inia100_exit);
