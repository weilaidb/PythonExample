MODULE_AUTHOR("Nick Cheng <support@areca.com.tw>");
MODULE_DESCRIPTION("ARECA (ARC11xx/12xx/16xx/1880) SATA/SAS RAID Host Bus Adapter");
MODULE_LICENSE("Dual BSD/GPL");
MODULE_VERSION(ARCMSR_DRIVER_VERSION);
#define	ARCMSR_SLEEPTIME	10
#define	ARCMSR_RETRYCOUNT	12
wait_queue_head_t wait_q;
static int arcmsr_iop_message_xfer(struct AdapterControlBlock *acb,
struct scsi_cmnd *cmd);
static int arcmsr_iop_confirm(struct AdapterControlBlock *acb);
static int arcmsr_abort(struct scsi_cmnd *);
static int arcmsr_bus_reset(struct scsi_cmnd *);
static int arcmsr_bios_param(struct scsi_device *sdev,
struct block_device *bdev, sector_t capacity, int *info);
static int arcmsr_queue_command(struct Scsi_Host *h, struct scsi_cmnd *cmd);
static int arcmsr_probe(struct pci_dev *pdev,
const struct pci_device_id *id);
static void arcmsr_remove(struct pci_dev *pdev);
static void arcmsr_shutdown(struct pci_dev *pdev);
static void arcmsr_iop_init(struct AdapterControlBlock *acb);
static void arcmsr_free_ccb_pool(struct AdapterControlBlock *acb);
static u32 arcmsr_disable_outbound_ints(struct AdapterControlBlock *acb);
static void arcmsr_stop_adapter_bgrb(struct AdapterControlBlock *acb);
static void arcmsr_flush_hba_cache(struct AdapterControlBlock *acb);
static void arcmsr_flush_hbb_cache(struct AdapterControlBlock *acb);
static void arcmsr_request_device_map(unsigned long pacb);
static void arcmsr_request_hba_device_map(struct AdapterControlBlock *acb);
static void arcmsr_request_hbb_device_map(struct AdapterControlBlock *acb);
static void arcmsr_request_hbc_device_map(struct AdapterControlBlock *acb);
static void arcmsr_message_isr_bh_fn(struct work_struct *work);
static bool arcmsr_get_firmware_spec(struct AdapterControlBlock *acb);
static void arcmsr_start_adapter_bgrb(struct AdapterControlBlock *acb);
static void arcmsr_hbc_message_isr(struct AdapterControlBlock *pACB);
static void arcmsr_hardware_reset(struct AdapterControlBlock *acb);
static const char *arcmsr_info(struct Scsi_Host *);
static irqreturn_t arcmsr_interrupt(struct AdapterControlBlock *acb);
static int arcmsr_adjust_disk_queue_depth(struct scsi_device *sdev,
int queue_depth, int reason)
static struct scsi_host_template arcmsr_scsi_host_template = ;
static struct pci_device_id arcmsr_device_id_table[] = ;
MODULE_DEVICE_TABLE(pci, arcmsr_device_id_table);
static struct pci_driver arcmsr_pci_driver = ;
static void arcmsr_free_hbb_mu(struct AdapterControlBlock *acb)
static bool arcmsr_remap_pciregion(struct AdapterControlBlock *acb)
static void arcmsr_unmap_pciregion(struct AdapterControlBlock *acb)
static irqreturn_t arcmsr_do_interrupt(int irq, void *dev_id)
static int arcmsr_bios_param(struct scsi_device *sdev,
struct block_device *bdev, sector_t capacity, int *geom)
static void arcmsr_define_adapter_type(struct AdapterControlBlock *acb)
static uint8_t arcmsr_hba_wait_msgint_ready(struct AdapterControlBlock *acb)
static uint8_t arcmsr_hbb_wait_msgint_ready(struct AdapterControlBlock *acb)
static uint8_t arcmsr_hbc_wait_msgint_ready(struct AdapterControlBlock *pACB)
static void arcmsr_flush_hba_cache(struct AdapterControlBlock *acb)
static void arcmsr_flush_hbb_cache(struct AdapterControlBlock *acb)
static void arcmsr_flush_hbc_cache(struct AdapterControlBlock *pACB)
static void arcmsr_flush_adapter_cache(struct AdapterControlBlock *acb)
static int arcmsr_alloc_ccb_pool(struct AdapterControlBlock *acb)
static void arcmsr_message_isr_bh_fn(struct work_struct *work)
static int arcmsr_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static uint8_t arcmsr_abort_hba_allcmd(struct AdapterControlBlock *acb)
static uint8_t arcmsr_abort_hbb_allcmd(struct AdapterControlBlock *acb)
static uint8_t arcmsr_abort_hbc_allcmd(struct AdapterControlBlock *pACB)
static uint8_t arcmsr_abort_allcmd(struct AdapterControlBlock *acb)
static bool arcmsr_hbb_enable_driver_mode(struct AdapterControlBlock *pacb)
static void arcmsr_pci_unmap_dma(struct CommandControlBlock *ccb)
static void arcmsr_ccb_complete(struct CommandControlBlock *ccb)
static void arcmsr_report_sense_info(struct CommandControlBlock *ccb)
static u32 arcmsr_disable_outbound_ints(struct AdapterControlBlock *acb)
static void arcmsr_report_ccb_state(struct AdapterControlBlock *acb,
struct CommandControlBlock *ccb, bool error)
static void arcmsr_drain_donequeue(struct AdapterControlBlock *acb, struct CommandControlBlock *pCCB, bool error)
static void arcmsr_done4abort_postqueue(struct AdapterControlBlock *acb)
static void arcmsr_remove(struct pci_dev *pdev)
static void arcmsr_shutdown(struct pci_dev *pdev)
static int arcmsr_module_init(void)
static void arcmsr_module_exit(void)
module_init(arcmsr_module_init);
module_exit(arcmsr_module_exit);
static void arcmsr_enable_outbound_ints(struct AdapterControlBlock *acb,
u32 intmask_org)
static int arcmsr_build_ccb(struct AdapterControlBlock *acb,
struct CommandControlBlock *ccb, struct scsi_cmnd *pcmd)
static void arcmsr_post_ccb(struct AdapterControlBlock *acb, struct CommandControlBlock *ccb)
static void arcmsr_stop_hba_bgrb(struct AdapterControlBlock *acb)
static void arcmsr_stop_hbb_bgrb(struct AdapterControlBlock *acb)
static void arcmsr_stop_hbc_bgrb(struct AdapterControlBlock *pACB)
static void arcmsr_stop_adapter_bgrb(struct AdapterControlBlock *acb)
static void arcmsr_free_ccb_pool(struct AdapterControlBlock *acb)
void arcmsr_iop_message_read(struct AdapterControlBlock *acb)
static void arcmsr_iop_message_wrote(struct AdapterControlBlock *acb)
struct QBUFFER __iomem *arcmsr_get_iop_rqbuffer(struct AdapterControlBlock *acb)
static struct QBUFFER __iomem *arcmsr_get_iop_wqbuffer(struct AdapterControlBlock *acb)
static void arcmsr_iop2drv_data_wrote_handle(struct AdapterControlBlock *acb)
static void arcmsr_iop2drv_data_read_handle(struct AdapterControlBlock *acb)
static void arcmsr_hba_doorbell_isr(struct AdapterControlBlock *acb)
static void arcmsr_hbc_doorbell_isr(struct AdapterControlBlock *pACB)
static void arcmsr_hba_postqueue_isr(struct AdapterControlBlock *acb)
static void arcmsr_hbb_postqueue_isr(struct AdapterControlBlock *acb)
static void arcmsr_hbc_postqueue_isr(struct AdapterControlBlock *acb)
static void arcmsr_hba_message_isr(struct AdapterControlBlock *acb)
static void arcmsr_hbb_message_isr(struct AdapterControlBlock *acb)
static void arcmsr_hbc_message_isr(struct AdapterControlBlock *acb)
static int arcmsr_handle_hba_isr(struct AdapterControlBlock *acb)
static int arcmsr_handle_hbb_isr(struct AdapterControlBlock *acb)
static int arcmsr_handle_hbc_isr(struct AdapterControlBlock *pACB)
static irqreturn_t arcmsr_interrupt(struct AdapterControlBlock *acb)
static void arcmsr_iop_parking(struct AdapterControlBlock *acb)
void arcmsr_post_ioctldata2iop(struct AdapterControlBlock *acb)
static int arcmsr_iop_message_xfer(struct AdapterControlBlock *acb,
struct scsi_cmnd *cmd)
static struct CommandControlBlock *arcmsr_get_freeccb(struct AdapterControlBlock *acb)
static void arcmsr_handle_virtual_command(struct AdapterControlBlock *acb,
struct scsi_cmnd *cmd)
static int arcmsr_queue_command_lck(struct scsi_cmnd *cmd,
void (* done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(arcmsr_queue_command)
static bool arcmsr_get_hba_config(struct AdapterControlBlock *acb)
static bool arcmsr_get_hbb_config(struct AdapterControlBlock *acb)
static bool arcmsr_get_hbc_config(struct AdapterControlBlock *pACB)
static bool arcmsr_get_firmware_spec(struct AdapterControlBlock *acb)
static int arcmsr_polling_hba_ccbdone(struct AdapterControlBlock *acb,
struct CommandControlBlock *poll_ccb)
static int arcmsr_polling_hbb_ccbdone(struct AdapterControlBlock *acb,
struct CommandControlBlock *poll_ccb)
static int arcmsr_polling_hbc_ccbdone(struct AdapterControlBlock *acb, struct CommandControlBlock *poll_ccb)
static int arcmsr_polling_ccbdone(struct AdapterControlBlock *acb,
struct CommandControlBlock *poll_ccb)
static int arcmsr_iop_confirm(struct AdapterControlBlock *acb)
static void arcmsr_wait_firmware_ready(struct AdapterControlBlock *acb)
static void arcmsr_request_hba_device_map(struct AdapterControlBlock *acb)
static void arcmsr_request_hbb_device_map(struct AdapterControlBlock *acb)
static void arcmsr_request_hbc_device_map(struct AdapterControlBlock *acb)
static void arcmsr_request_device_map(unsigned long pacb)
static void arcmsr_start_hba_bgrb(struct AdapterControlBlock *acb)
static void arcmsr_start_hbb_bgrb(struct AdapterControlBlock *acb)
static void arcmsr_start_hbc_bgrb(struct AdapterControlBlock *pACB)
static void arcmsr_start_adapter_bgrb(struct AdapterControlBlock *acb)
static void arcmsr_clear_doorbell_queue_buffer(struct AdapterControlBlock *acb)
static void arcmsr_enable_eoi_mode(struct AdapterControlBlock *acb)
static void arcmsr_hardware_reset(struct AdapterControlBlock *acb)
static void arcmsr_iop_init(struct AdapterControlBlock *acb)
static uint8_t arcmsr_iop_reset(struct AdapterControlBlock *acb)
static int arcmsr_bus_reset(struct scsi_cmnd *cmd)
static int arcmsr_abort_one_cmd(struct AdapterControlBlock *acb,
struct CommandControlBlock *ccb)
static int arcmsr_abort(struct scsi_cmnd *cmd)
static const char *arcmsr_info(struct Scsi_Host *host)
