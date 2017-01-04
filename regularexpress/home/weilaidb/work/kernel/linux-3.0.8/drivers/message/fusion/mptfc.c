#define my_NAME		"Fusion MPT FC Host driver"
#define my_VERSION	MPT_LINUX_VERSION_COMMON
#define MYNAM		"mptfc"
MODULE_AUTHOR(MODULEAUTHOR);
MODULE_DESCRIPTION(my_NAME);
MODULE_LICENSE("GPL");
MODULE_VERSION(my_VERSION);
#define MPTFC_DEV_LOSS_TMO (60)
static int mptfc_dev_loss_tmo = MPTFC_DEV_LOSS_TMO;
module_param(mptfc_dev_loss_tmo, int, 0);
MODULE_PARM_DESC(mptfc_dev_loss_tmo, " Initial time the driver programs the "
" transport to wait for an rport to "
" return following a device loss event."
"  Default=60.");
#define MPTFC_MAX_LUN (16895)
static int max_lun = MPTFC_MAX_LUN;
module_param(max_lun, int, 0);
MODULE_PARM_DESC(max_lun, " max lun, default=16895 ");
static u8	mptfcDoneCtx = MPT_MAX_PROTOCOL_DRIVERS;
static u8	mptfcTaskCtx = MPT_MAX_PROTOCOL_DRIVERS;
static u8	mptfcInternalCtx = MPT_MAX_PROTOCOL_DRIVERS;
static int mptfc_target_alloc(struct scsi_target *starget);
static int mptfc_slave_alloc(struct scsi_device *sdev);
static int mptfc_qcmd(struct Scsi_Host *shost, struct scsi_cmnd *SCpnt);
static void mptfc_target_destroy(struct scsi_target *starget);
static void mptfc_set_rport_loss_tmo(struct fc_rport *rport, uint32_t timeout);
static void __devexit mptfc_remove(struct pci_dev *pdev);
static int mptfc_abort(struct scsi_cmnd *SCpnt);
static int mptfc_dev_reset(struct scsi_cmnd *SCpnt);
static int mptfc_bus_reset(struct scsi_cmnd *SCpnt);
static int mptfc_host_reset(struct scsi_cmnd *SCpnt);
static struct scsi_host_template mptfc_driver_template = ;
static struct pci_device_id mptfc_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, mptfc_pci_table);
static struct scsi_transport_template *mptfc_transport_template = NULL;
static struct fc_function_template mptfc_transport_functions = ;
static int
mptfc_block_error_handler(struct scsi_cmnd *SCpnt,
int (*func)(struct scsi_cmnd *SCpnt),
const char *caller)
static int
mptfc_abort(struct scsi_cmnd *SCpnt)
static int
mptfc_dev_reset(struct scsi_cmnd *SCpnt)
static int
mptfc_bus_reset(struct scsi_cmnd *SCpnt)
static int
mptfc_host_reset(struct scsi_cmnd *SCpnt)
static void
mptfc_set_rport_loss_tmo(struct fc_rport *rport, uint32_t timeout)
static int
mptfc_FcDevPage0_cmp_func(const void *a, const void *b)
static int
mptfc_GetFcDevPage0(MPT_ADAPTER *ioc, int ioc_port,
void(*func)(MPT_ADAPTER *ioc,int channel, FCDevicePage0_t *arg))
static int
mptfc_generate_rport_ids(FCDevicePage0_t *pg0, struct fc_rport_identifiers *rid)
static void
mptfc_register_dev(MPT_ADAPTER *ioc, int channel, FCDevicePage0_t *pg0)
static void
mptfc_target_destroy(struct scsi_target *starget)
static int
mptfc_target_alloc(struct scsi_target *starget)
static void
mptfc_dump_lun_info(MPT_ADAPTER *ioc, struct fc_rport *rport, struct scsi_device *sdev,
VirtTarget *vtarget)
static int
mptfc_slave_alloc(struct scsi_device *sdev)
static int
mptfc_qcmd_lck(struct scsi_cmnd *SCpnt, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(mptfc_qcmd)
static void
mptfc_display_port_link_speed(MPT_ADAPTER *ioc, int portnum, FCPortPage0_t *pp0dest)
static int
mptfc_GetFcPortPage0(MPT_ADAPTER *ioc, int portnum)
static int
mptfc_WriteFcPortPage1(MPT_ADAPTER *ioc, int portnum)
static int
mptfc_GetFcPortPage1(MPT_ADAPTER *ioc, int portnum)
static void
mptfc_SetFcPortPage1_defaults(MPT_ADAPTER *ioc)
static void
mptfc_init_host_attr(MPT_ADAPTER *ioc,int portnum)
static void
mptfc_link_status_change(struct work_struct *work)
static void
mptfc_setup_reset(struct work_struct *work)
static void
mptfc_rescan_devices(struct work_struct *work)
static int
mptfc_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static struct pci_driver mptfc_driver = ;
static int
mptfc_event_process(MPT_ADAPTER *ioc, EventNotificationReply_t *pEvReply)
static int
mptfc_ioc_reset(MPT_ADAPTER *ioc, int reset_phase)
static int __init
mptfc_init(void)
static void __devexit
mptfc_remove(struct pci_dev *pdev)
static void __exit
mptfc_exit(void)
module_init(mptfc_init);
module_exit(mptfc_exit);
