#define my_NAME		"Fusion MPT SCSI Host driver"
#define my_VERSION	MPT_LINUX_VERSION_COMMON
#define MYNAM		"mptscsih"
MODULE_AUTHOR(MODULEAUTHOR);
MODULE_DESCRIPTION(my_NAME);
MODULE_LICENSE("GPL");
MODULE_VERSION(my_VERSION);
struct scsi_cmnd	*mptscsih_get_scsi_lookup(MPT_ADAPTER *ioc, int i);
static struct scsi_cmnd * mptscsih_getclear_scsi_lookup(MPT_ADAPTER *ioc, int i);
static void	mptscsih_set_scsi_lookup(MPT_ADAPTER *ioc, int i, struct scsi_cmnd *scmd);
static int	SCPNT_TO_LOOKUP_IDX(MPT_ADAPTER *ioc, struct scsi_cmnd *scmd);
int		mptscsih_io_done(MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf, MPT_FRAME_HDR *r);
static void	mptscsih_report_queue_full(struct scsi_cmnd *sc, SCSIIOReply_t *pScsiReply, SCSIIORequest_t *pScsiReq);
int		mptscsih_taskmgmt_complete(MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf, MPT_FRAME_HDR *r);
static int	mptscsih_AddSGE(MPT_ADAPTER *ioc, struct scsi_cmnd *SCpnt,
SCSIIORequest_t *pReq, int req_idx);
static void	mptscsih_freeChainBuffers(MPT_ADAPTER *ioc, int req_idx);
static void	mptscsih_copy_sense_data(struct scsi_cmnd *sc, MPT_SCSI_HOST *hd, MPT_FRAME_HDR *mf, SCSIIOReply_t *pScsiReply);
int	mptscsih_IssueTaskMgmt(MPT_SCSI_HOST *hd, u8 type, u8 channel, u8 id,
int lun, int ctx2abort, ulong timeout);
int		mptscsih_ioc_reset(MPT_ADAPTER *ioc, int post_reset);
int		mptscsih_event_process(MPT_ADAPTER *ioc, EventNotificationReply_t *pEvReply);
void
mptscsih_taskmgmt_response_code(MPT_ADAPTER *ioc, u8 response_code);
static int	mptscsih_get_completion_code(MPT_ADAPTER *ioc,
MPT_FRAME_HDR *req, MPT_FRAME_HDR *reply);
int		mptscsih_scandv_complete(MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf, MPT_FRAME_HDR *r);
static int	mptscsih_do_cmd(MPT_SCSI_HOST *hd, INTERNAL_CMD *iocmd);
static void	mptscsih_synchronize_cache(MPT_SCSI_HOST *hd, VirtDevice *vdevice);
static int
mptscsih_taskmgmt_reply(MPT_ADAPTER *ioc, u8 type,
SCSITaskMgmtReply_t *pScsiTmReply);
void 		mptscsih_remove(struct pci_dev *);
void 		mptscsih_shutdown(struct pci_dev *);
int 		mptscsih_suspend(struct pci_dev *pdev, pm_message_t state);
int 		mptscsih_resume(struct pci_dev *pdev);
#define SNS_LEN(scp)	SCSI_SENSE_BUFFERSIZE
static inline int
mptscsih_getFreeChainBuffer(MPT_ADAPTER *ioc, int *retIndex)
static int
mptscsih_AddSGE(MPT_ADAPTER *ioc, struct scsi_cmnd *SCpnt,
SCSIIORequest_t *pReq, int req_idx)
static void
mptscsih_issue_sep_command(MPT_ADAPTER *ioc, VirtTarget *vtarget,
U32 SlotStatus)
static void
mptscsih_info_scsiio(MPT_ADAPTER *ioc, struct scsi_cmnd *sc, SCSIIOReply_t * pScsiReply)
int
mptscsih_io_done(MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf, MPT_FRAME_HDR *mr)
static void
mptscsih_flush_running_cmds(MPT_SCSI_HOST *hd)
static void
mptscsih_search_running_cmds(MPT_SCSI_HOST *hd, VirtDevice *vdevice)
static void
mptscsih_report_queue_full(struct scsi_cmnd *sc, SCSIIOReply_t *pScsiReply, SCSIIORequest_t *pScsiReq)
void
mptscsih_remove(struct pci_dev *pdev)
void
mptscsih_shutdown(struct pci_dev *pdev)
int
mptscsih_suspend(struct pci_dev *pdev, pm_message_t state)
int
mptscsih_resume(struct pci_dev *pdev)
const char *
mptscsih_info(struct Scsi_Host *SChost)
struct info_str ;
static void
mptscsih_copy_mem_info(struct info_str *info, char *data, int len)
static int
mptscsih_copy_info(struct info_str *info, char *fmt, ...)
static int
mptscsih_host_info(MPT_ADAPTER *ioc, char *pbuf, off_t offset, int len)
int
mptscsih_proc_info(struct Scsi_Host *host, char *buffer, char **start, off_t offset,
int length, int func)
#define ADD_INDEX_LOG(req_ent)	do  while(0)
int
mptscsih_qcmd(struct scsi_cmnd *SCpnt, void (*done)(struct scsi_cmnd *))
static void
mptscsih_freeChainBuffers(MPT_ADAPTER *ioc, int req_idx)
int
mptscsih_IssueTaskMgmt(MPT_SCSI_HOST *hd, u8 type, u8 channel, u8 id, int lun,
int ctx2abort, ulong timeout)
EXPORT_SYMBOL(mptscsih_IssueTaskMgmt);
static int
mptscsih_get_tm_timeout(MPT_ADAPTER *ioc)
int
mptscsih_abort(struct scsi_cmnd * SCpnt)
int
mptscsih_dev_reset(struct scsi_cmnd * SCpnt)
int
mptscsih_bus_reset(struct scsi_cmnd * SCpnt)
int
mptscsih_host_reset(struct scsi_cmnd *SCpnt)
static int
mptscsih_taskmgmt_reply(MPT_ADAPTER *ioc, u8 type,
SCSITaskMgmtReply_t *pScsiTmReply)
void
mptscsih_taskmgmt_response_code(MPT_ADAPTER *ioc, u8 response_code)
EXPORT_SYMBOL(mptscsih_taskmgmt_response_code);
int
mptscsih_taskmgmt_complete(MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf,
MPT_FRAME_HDR *mr)
int
mptscsih_bios_param(struct scsi_device * sdev, struct block_device *bdev,
sector_t capacity, int geom[])
int
mptscsih_is_phys_disk(MPT_ADAPTER *ioc, u8 channel, u8 id)
EXPORT_SYMBOL(mptscsih_is_phys_disk);
u8
mptscsih_raid_id_to_num(MPT_ADAPTER *ioc, u8 channel, u8 id)
EXPORT_SYMBOL(mptscsih_raid_id_to_num);
void
mptscsih_slave_destroy(struct scsi_device *sdev)
int
mptscsih_change_queue_depth(struct scsi_device *sdev, int qdepth, int reason)
int
mptscsih_slave_configure(struct scsi_device *sdev)
static void
mptscsih_copy_sense_data(struct scsi_cmnd *sc, MPT_SCSI_HOST *hd, MPT_FRAME_HDR *mf, SCSIIOReply_t *pScsiReply)
struct scsi_cmnd *
mptscsih_get_scsi_lookup(MPT_ADAPTER *ioc, int i)
EXPORT_SYMBOL(mptscsih_get_scsi_lookup);
static struct scsi_cmnd *
mptscsih_getclear_scsi_lookup(MPT_ADAPTER *ioc, int i)
static void
mptscsih_set_scsi_lookup(MPT_ADAPTER *ioc, int i, struct scsi_cmnd *scmd)
static int
SCPNT_TO_LOOKUP_IDX(MPT_ADAPTER *ioc, struct scsi_cmnd *sc)
int
mptscsih_ioc_reset(MPT_ADAPTER *ioc, int reset_phase)
int
mptscsih_event_process(MPT_ADAPTER *ioc, EventNotificationReply_t *pEvReply)
int
mptscsih_scandv_complete(MPT_ADAPTER *ioc, MPT_FRAME_HDR *req,
MPT_FRAME_HDR *reply)
static int
mptscsih_get_completion_code(MPT_ADAPTER *ioc, MPT_FRAME_HDR *req,
MPT_FRAME_HDR *reply)
static int
mptscsih_do_cmd(MPT_SCSI_HOST *hd, INTERNAL_CMD *io)
static void
mptscsih_synchronize_cache(MPT_SCSI_HOST *hd, VirtDevice *vdevice)
static ssize_t
mptscsih_version_fw_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(version_fw, S_IRUGO, mptscsih_version_fw_show, NULL);
static ssize_t
mptscsih_version_bios_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(version_bios, S_IRUGO, mptscsih_version_bios_show, NULL);
static ssize_t
mptscsih_version_mpi_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(version_mpi, S_IRUGO, mptscsih_version_mpi_show, NULL);
static ssize_t
mptscsih_version_product_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(version_product, S_IRUGO,
mptscsih_version_product_show, NULL);
static ssize_t
mptscsih_version_nvdata_persistent_show(struct device *dev,
struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(version_nvdata_persistent, S_IRUGO,
mptscsih_version_nvdata_persistent_show, NULL);
static ssize_t
mptscsih_version_nvdata_default_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(version_nvdata_default, S_IRUGO,
mptscsih_version_nvdata_default_show, NULL);
static ssize_t
mptscsih_board_name_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(board_name, S_IRUGO, mptscsih_board_name_show, NULL);
static ssize_t
mptscsih_board_assembly_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(board_assembly, S_IRUGO,
mptscsih_board_assembly_show, NULL);
static ssize_t
mptscsih_board_tracer_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(board_tracer, S_IRUGO,
mptscsih_board_tracer_show, NULL);
static ssize_t
mptscsih_io_delay_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(io_delay, S_IRUGO,
mptscsih_io_delay_show, NULL);
static ssize_t
mptscsih_device_delay_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(device_delay, S_IRUGO,
mptscsih_device_delay_show, NULL);
static ssize_t
mptscsih_debug_level_show(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t
mptscsih_debug_level_store(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(debug_level, S_IRUGO | S_IWUSR,
mptscsih_debug_level_show, mptscsih_debug_level_store);
struct device_attribute *mptscsih_host_attrs[] = ;
EXPORT_SYMBOL(mptscsih_host_attrs);
EXPORT_SYMBOL(mptscsih_remove);
EXPORT_SYMBOL(mptscsih_shutdown);
EXPORT_SYMBOL(mptscsih_suspend);
EXPORT_SYMBOL(mptscsih_resume);
EXPORT_SYMBOL(mptscsih_proc_info);
EXPORT_SYMBOL(mptscsih_info);
EXPORT_SYMBOL(mptscsih_qcmd);
EXPORT_SYMBOL(mptscsih_slave_destroy);
EXPORT_SYMBOL(mptscsih_slave_configure);
EXPORT_SYMBOL(mptscsih_abort);
EXPORT_SYMBOL(mptscsih_dev_reset);
EXPORT_SYMBOL(mptscsih_bus_reset);
EXPORT_SYMBOL(mptscsih_host_reset);
EXPORT_SYMBOL(mptscsih_bios_param);
EXPORT_SYMBOL(mptscsih_io_done);
EXPORT_SYMBOL(mptscsih_taskmgmt_complete);
EXPORT_SYMBOL(mptscsih_scandv_complete);
EXPORT_SYMBOL(mptscsih_event_process);
EXPORT_SYMBOL(mptscsih_ioc_reset);
EXPORT_SYMBOL(mptscsih_change_queue_depth);
