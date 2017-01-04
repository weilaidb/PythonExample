#define DRV_NAME "stex"
#define ST_DRIVER_VERSION "4.6.0000.4"
#define ST_VER_MAJOR		4
#define ST_VER_MINOR		6
#define ST_OEM			0
#define ST_BUILD_VER		4
enum ;
struct st_sgitem ;
struct st_ss_sgitem ;
struct st_sgtable ;
struct st_msg_header ;
struct handshake_frame ;
struct req_msg ;
struct status_msg ;
struct ver_info ;
struct st_frame ;
struct st_drvver ;
struct st_ccb ;
struct st_hba ;
struct st_card_info ;
static int msi;
module_param(msi, int, 0);
MODULE_PARM_DESC(msi, "Enable Message Signaled Interrupts(0=off, 1=on)");
static const char console_inq_page[] =
;
MODULE_AUTHOR("Ed Lin");
MODULE_DESCRIPTION("Promise Technology SuperTrak EX Controllers");
MODULE_LICENSE("GPL");
MODULE_VERSION(ST_DRIVER_VERSION);
static void stex_gettime(__le64 *time)
static struct status_msg *stex_get_status(struct st_hba *hba)
static void stex_invalid_field(struct scsi_cmnd *cmd,
void (*done)(struct scsi_cmnd *))
static struct req_msg *stex_alloc_req(struct st_hba *hba)
static struct req_msg *stex_ss_alloc_req(struct st_hba *hba)
static int stex_map_sg(struct st_hba *hba,
struct req_msg *req, struct st_ccb *ccb)
static int stex_ss_map_sg(struct st_hba *hba,
struct req_msg *req, struct st_ccb *ccb)
static void stex_controller_info(struct st_hba *hba, struct st_ccb *ccb)
static void
stex_send_cmd(struct st_hba *hba, struct req_msg *req, u16 tag)
static void
stex_ss_send_cmd(struct st_hba *hba, struct req_msg *req, u16 tag)
static int
stex_slave_alloc(struct scsi_device *sdev)
static int
stex_slave_config(struct scsi_device *sdev)
static void
stex_slave_destroy(struct scsi_device *sdev)
static int
stex_queuecommand_lck(struct scsi_cmnd *cmd, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(stex_queuecommand)
static void stex_scsi_done(struct st_ccb *ccb)
static void stex_copy_data(struct st_ccb *ccb,
struct status_msg *resp, unsigned int variable)
static void stex_check_cmd(struct st_hba *hba,
struct st_ccb *ccb, struct status_msg *resp)
static void stex_mu_intr(struct st_hba *hba, u32 doorbell)
static irqreturn_t stex_intr(int irq, void *__hba)
static void stex_ss_mu_intr(struct st_hba *hba)
static irqreturn_t stex_ss_intr(int irq, void *__hba)
static int stex_common_handshake(struct st_hba *hba)
static int stex_ss_handshake(struct st_hba *hba)
static int stex_handshake(struct st_hba *hba)
static int stex_abort(struct scsi_cmnd *cmd)
static void stex_hard_reset(struct st_hba *hba)
static int stex_yos_reset(struct st_hba *hba)
static void stex_ss_reset(struct st_hba *hba)
static int stex_do_reset(struct st_hba *hba)
static int stex_reset(struct scsi_cmnd *cmd)
static void stex_reset_work(struct work_struct *work)
static int stex_biosparam(struct scsi_device *sdev,
struct block_device *bdev, sector_t capacity, int geom[])
static struct scsi_host_template driver_template = ;
static struct pci_device_id stex_pci_tbl[] = ;
static struct st_card_info stex_card_info[] = ;
static int stex_set_dma_mask(struct pci_dev * pdev)
static int stex_request_irq(struct st_hba *hba)
static void stex_free_irq(struct st_hba *hba)
static int __devinit
stex_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static void stex_hba_stop(struct st_hba *hba)
static void stex_hba_free(struct st_hba *hba)
static void stex_remove(struct pci_dev *pdev)
static void stex_shutdown(struct pci_dev *pdev)
MODULE_DEVICE_TABLE(pci, stex_pci_tbl);
static struct pci_driver stex_pci_driver = ;
static int __init stex_init(void)
static void __exit stex_exit(void)
module_init(stex_init);
module_exit(stex_exit);
