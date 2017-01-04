#define PVSCSI_LINUX_DRIVER_DESC "VMware PVSCSI driver"
MODULE_DESCRIPTION(PVSCSI_LINUX_DRIVER_DESC);
MODULE_AUTHOR("VMware, Inc.");
MODULE_LICENSE("GPL");
MODULE_VERSION(PVSCSI_DRIVER_VERSION_STRING);
#define PVSCSI_DEFAULT_NUM_PAGES_PER_RING	8
#define PVSCSI_DEFAULT_NUM_PAGES_MSG_RING	1
#define PVSCSI_DEFAULT_QUEUE_DEPTH		64
#define SGL_SIZE				PAGE_SIZE
struct pvscsi_sg_list ;
struct pvscsi_ctx ;
struct pvscsi_adapter ;
static int pvscsi_ring_pages     = PVSCSI_DEFAULT_NUM_PAGES_PER_RING;
static int pvscsi_msg_ring_pages = PVSCSI_DEFAULT_NUM_PAGES_MSG_RING;
static int pvscsi_cmd_per_lun    = PVSCSI_DEFAULT_QUEUE_DEPTH;
static bool pvscsi_disable_msi;
static bool pvscsi_disable_msix;
static bool pvscsi_use_msg       = true;
#define PVSCSI_RW (S_IRUSR | S_IWUSR)
module_param_named(ring_pages, pvscsi_ring_pages, int, PVSCSI_RW);
MODULE_PARM_DESC(ring_pages, "Number of pages per req/cmp ring - (default="
__stringify(PVSCSI_DEFAULT_NUM_PAGES_PER_RING) ")");
module_param_named(msg_ring_pages, pvscsi_msg_ring_pages, int, PVSCSI_RW);
MODULE_PARM_DESC(msg_ring_pages, "Number of pages for the msg ring - (default="
__stringify(PVSCSI_DEFAULT_NUM_PAGES_MSG_RING) ")");
module_param_named(cmd_per_lun, pvscsi_cmd_per_lun, int, PVSCSI_RW);
MODULE_PARM_DESC(cmd_per_lun, "Maximum commands per lun - (default="
__stringify(PVSCSI_MAX_REQ_QUEUE_DEPTH) ")");
module_param_named(disable_msi, pvscsi_disable_msi, bool, PVSCSI_RW);
MODULE_PARM_DESC(disable_msi, "Disable MSI use in driver - (default=0)");
module_param_named(disable_msix, pvscsi_disable_msix, bool, PVSCSI_RW);
MODULE_PARM_DESC(disable_msix, "Disable MSI-X use in driver - (default=0)");
module_param_named(use_msg, pvscsi_use_msg, bool, PVSCSI_RW);
MODULE_PARM_DESC(use_msg, "Use msg ring when available - (default=1)");
static const struct pci_device_id pvscsi_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, pvscsi_pci_tbl);
static struct device *
pvscsi_dev(const struct pvscsi_adapter *adapter)
static struct pvscsi_ctx *
pvscsi_find_context(const struct pvscsi_adapter *adapter, struct scsi_cmnd *cmd)
static struct pvscsi_ctx *
pvscsi_acquire_context(struct pvscsi_adapter *adapter, struct scsi_cmnd *cmd)
static void pvscsi_release_context(struct pvscsi_adapter *adapter,
struct pvscsi_ctx *ctx)
static u64 pvscsi_map_context(const struct pvscsi_adapter *adapter,
const struct pvscsi_ctx *ctx)
static struct pvscsi_ctx *
pvscsi_get_context(const struct pvscsi_adapter *adapter, u64 context)
static void pvscsi_reg_write(const struct pvscsi_adapter *adapter,
u32 offset, u32 val)
static u32 pvscsi_reg_read(const struct pvscsi_adapter *adapter, u32 offset)
static u32 pvscsi_read_intr_status(const struct pvscsi_adapter *adapter)
static void pvscsi_write_intr_status(const struct pvscsi_adapter *adapter,
u32 val)
static void pvscsi_unmask_intr(const struct pvscsi_adapter *adapter)
static void pvscsi_mask_intr(const struct pvscsi_adapter *adapter)
static void pvscsi_write_cmd_desc(const struct pvscsi_adapter *adapter,
u32 cmd, const void *desc, size_t len)
static void pvscsi_abort_cmd(const struct pvscsi_adapter *adapter,
const struct pvscsi_ctx *ctx)
static void pvscsi_kick_rw_io(const struct pvscsi_adapter *adapter)
static void pvscsi_process_request_ring(const struct pvscsi_adapter *adapter)
static int scsi_is_rw(unsigned char op)
static void pvscsi_kick_io(const struct pvscsi_adapter *adapter,
unsigned char op)
static void ll_adapter_reset(const struct pvscsi_adapter *adapter)
static void ll_bus_reset(const struct pvscsi_adapter *adapter)
static void ll_device_reset(const struct pvscsi_adapter *adapter, u32 target)
static void pvscsi_create_sg(struct pvscsi_ctx *ctx,
struct scatterlist *sg, unsigned count)
static void pvscsi_map_buffers(struct pvscsi_adapter *adapter,
struct pvscsi_ctx *ctx, struct scsi_cmnd *cmd,
struct PVSCSIRingReqDesc *e)
static void pvscsi_unmap_buffers(const struct pvscsi_adapter *adapter,
struct pvscsi_ctx *ctx)
static int __devinit pvscsi_allocate_rings(struct pvscsi_adapter *adapter)
static void pvscsi_setup_all_rings(const struct pvscsi_adapter *adapter)
static void pvscsi_complete_request(struct pvscsi_adapter *adapter,
const struct PVSCSIRingCmpDesc *e)
static void pvscsi_process_completion_ring(struct pvscsi_adapter *adapter)
static int pvscsi_queue_ring(struct pvscsi_adapter *adapter,
struct pvscsi_ctx *ctx, struct scsi_cmnd *cmd)
static int pvscsi_queue_lck(struct scsi_cmnd *cmd, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(pvscsi_queue)
static int pvscsi_abort(struct scsi_cmnd *cmd)
static void pvscsi_reset_all(struct pvscsi_adapter *adapter)
static int pvscsi_host_reset(struct scsi_cmnd *cmd)
static int pvscsi_bus_reset(struct scsi_cmnd *cmd)
static int pvscsi_device_reset(struct scsi_cmnd *cmd)
static struct scsi_host_template pvscsi_template;
static const char *pvscsi_info(struct Scsi_Host *host)
static struct scsi_host_template pvscsi_template = ;
static void pvscsi_process_msg(const struct pvscsi_adapter *adapter,
const struct PVSCSIRingMsgDesc *e)
static int pvscsi_msg_pending(const struct pvscsi_adapter *adapter)
static void pvscsi_process_msg_ring(const struct pvscsi_adapter *adapter)
static void pvscsi_msg_workqueue_handler(struct work_struct *data)
static int pvscsi_setup_msg_workqueue(struct pvscsi_adapter *adapter)
static irqreturn_t pvscsi_isr(int irq, void *devp)
static void pvscsi_free_sgls(const struct pvscsi_adapter *adapter)
static int pvscsi_setup_msix(const struct pvscsi_adapter *adapter,
unsigned int *irq)
static void pvscsi_shutdown_intr(struct pvscsi_adapter *adapter)
static void pvscsi_release_resources(struct pvscsi_adapter *adapter)
static int __devinit pvscsi_allocate_sg(struct pvscsi_adapter *adapter)
static int __devinit pvscsi_probe(struct pci_dev *pdev,
const struct pci_device_id *id)
static void __pvscsi_shutdown(struct pvscsi_adapter *adapter)
static void pvscsi_shutdown(struct pci_dev *dev)
static void pvscsi_remove(struct pci_dev *pdev)
static struct pci_driver pvscsi_pci_driver = ;
static int __init pvscsi_init(void)
static void __exit pvscsi_exit(void)
module_init(pvscsi_init);
module_exit(pvscsi_exit);
