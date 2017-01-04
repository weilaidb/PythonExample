MODULE_AUTHOR("HighPoint Technologies, Inc.");
MODULE_DESCRIPTION("HighPoint RocketRAID 3xxx/4xxx Controller Driver");
static char driver_name[] = "hptiop";
static const char driver_name_long[] = "RocketRAID 3xxx/4xxx Controller driver";
static const char driver_ver[] = "v1.6 (090910)";
static int iop_send_sync_msg(struct hptiop_hba *hba, u32 msg, u32 millisec);
static void hptiop_finish_scsi_req(struct hptiop_hba *hba, u32 tag,
struct hpt_iop_request_scsi_command *req);
static void hptiop_host_request_callback_itl(struct hptiop_hba *hba, u32 tag);
static void hptiop_iop_request_callback_itl(struct hptiop_hba *hba, u32 tag);
static void hptiop_message_callback(struct hptiop_hba *hba, u32 msg);
static int iop_wait_ready_itl(struct hptiop_hba *hba, u32 millisec)
static int iop_wait_ready_mv(struct hptiop_hba *hba, u32 millisec)
static void hptiop_request_callback_itl(struct hptiop_hba *hba, u32 tag)
static void hptiop_drain_outbound_queue_itl(struct hptiop_hba *hba)
static int iop_intr_itl(struct hptiop_hba *hba)
static u64 mv_outbound_read(struct hpt_iopmu_mv __iomem *mu)
static void mv_inbound_write(u64 p, struct hptiop_hba *hba)
static void hptiop_request_callback_mv(struct hptiop_hba *hba, u64 tag)
static int iop_intr_mv(struct hptiop_hba *hba)
static int iop_send_sync_request_itl(struct hptiop_hba *hba,
void __iomem *_req, u32 millisec)
static int iop_send_sync_request_mv(struct hptiop_hba *hba,
u32 size_bits, u32 millisec)
static void hptiop_post_msg_itl(struct hptiop_hba *hba, u32 msg)
static void hptiop_post_msg_mv(struct hptiop_hba *hba, u32 msg)
static int iop_send_sync_msg(struct hptiop_hba *hba, u32 msg, u32 millisec)
static int iop_get_config_itl(struct hptiop_hba *hba,
struct hpt_iop_request_get_config *config)
static int iop_get_config_mv(struct hptiop_hba *hba,
struct hpt_iop_request_get_config *config)
static int iop_set_config_itl(struct hptiop_hba *hba,
struct hpt_iop_request_set_config *config)
static int iop_set_config_mv(struct hptiop_hba *hba,
struct hpt_iop_request_set_config *config)
static void hptiop_enable_intr_itl(struct hptiop_hba *hba)
static void hptiop_enable_intr_mv(struct hptiop_hba *hba)
static int hptiop_initialize_iop(struct hptiop_hba *hba)
static void __iomem *hptiop_map_pci_bar(struct hptiop_hba *hba, int index)
static int hptiop_map_pci_bar_itl(struct hptiop_hba *hba)
static void hptiop_unmap_pci_bar_itl(struct hptiop_hba *hba)
static int hptiop_map_pci_bar_mv(struct hptiop_hba *hba)
static void hptiop_unmap_pci_bar_mv(struct hptiop_hba *hba)
static void hptiop_message_callback(struct hptiop_hba *hba, u32 msg)
static struct hptiop_request *get_req(struct hptiop_hba *hba)
static void free_req(struct hptiop_hba *hba, struct hptiop_request *req)
static void hptiop_finish_scsi_req(struct hptiop_hba *hba, u32 tag,
struct hpt_iop_request_scsi_command *req)
static void hptiop_host_request_callback_itl(struct hptiop_hba *hba, u32 _tag)
void hptiop_iop_request_callback_itl(struct hptiop_hba *hba, u32 tag)
static irqreturn_t hptiop_intr(int irq, void *dev_id)
static int hptiop_buildsgl(struct scsi_cmnd *scp, struct hpt_iopsg *psg)
static void hptiop_post_req_itl(struct hptiop_hba *hba,
struct hptiop_request *_req)
static void hptiop_post_req_mv(struct hptiop_hba *hba,
struct hptiop_request *_req)
static int hptiop_queuecommand_lck(struct scsi_cmnd *scp,
void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(hptiop_queuecommand)
static const char *hptiop_info(struct Scsi_Host *host)
static int hptiop_reset_hba(struct hptiop_hba *hba)
static int hptiop_reset(struct scsi_cmnd *scp)
static int hptiop_adjust_disk_queue_depth(struct scsi_device *sdev,
int queue_depth, int reason)
static ssize_t hptiop_show_version(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t hptiop_show_fw_version(struct device *dev,
struct device_attribute *attr, char *buf)
static struct device_attribute hptiop_attr_version = ;
static struct device_attribute hptiop_attr_fw_version = ;
static struct device_attribute *hptiop_attrs[] = ;
static struct scsi_host_template driver_template = ;
static int hptiop_internal_memalloc_mv(struct hptiop_hba *hba)
static int hptiop_internal_memfree_mv(struct hptiop_hba *hba)
static int __devinit hptiop_probe(struct pci_dev *pcidev,
const struct pci_device_id *id)
static void hptiop_shutdown(struct pci_dev *pcidev)
static void hptiop_disable_intr_itl(struct hptiop_hba *hba)
static void hptiop_disable_intr_mv(struct hptiop_hba *hba)
static void hptiop_remove(struct pci_dev *pcidev)
static struct hptiop_adapter_ops hptiop_itl_ops = ;
static struct hptiop_adapter_ops hptiop_mv_ops = ;
static struct pci_device_id hptiop_id_table[] = ;
MODULE_DEVICE_TABLE(pci, hptiop_id_table);
static struct pci_driver hptiop_pci_driver = ;
static int __init hptiop_module_init(void)
static void __exit hptiop_module_exit(void)
module_init(hptiop_module_init);
module_exit(hptiop_module_exit);
MODULE_LICENSE("GPL");
