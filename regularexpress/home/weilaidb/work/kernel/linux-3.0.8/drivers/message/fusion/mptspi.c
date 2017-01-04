#define my_NAME		"Fusion MPT SPI Host driver"
#define my_VERSION	MPT_LINUX_VERSION_COMMON
#define MYNAM		"mptspi"
MODULE_AUTHOR(MODULEAUTHOR);
MODULE_DESCRIPTION(my_NAME);
MODULE_LICENSE("GPL");
MODULE_VERSION(my_VERSION);
static int mpt_saf_te = MPTSCSIH_SAF_TE;
module_param(mpt_saf_te, int, 0);
MODULE_PARM_DESC(mpt_saf_te, " Force enabling SEP Processor: enable=1  (default=MPTSCSIH_SAF_TE=0)");
static void mptspi_write_offset(struct scsi_target *, int);
static void mptspi_write_width(struct scsi_target *, int);
static int mptspi_write_spi_device_pg1(struct scsi_target *,
struct _CONFIG_PAGE_SCSI_DEVICE_1 *);
static struct scsi_transport_template *mptspi_transport_template = NULL;
static u8	mptspiDoneCtx = MPT_MAX_PROTOCOL_DRIVERS;
static u8	mptspiTaskCtx = MPT_MAX_PROTOCOL_DRIVERS;
static u8	mptspiInternalCtx = MPT_MAX_PROTOCOL_DRIVERS;
static void
mptspi_setTargetNegoParms(MPT_SCSI_HOST *hd, VirtTarget *target,
struct scsi_device *sdev)
static int
mptspi_writeIOCPage4(MPT_SCSI_HOST *hd, u8 channel , u8 id)
static void
mptspi_initTarget(MPT_SCSI_HOST *hd, VirtTarget *vtarget,
struct scsi_device *sdev)
static int
mptspi_is_raid(struct _MPT_SCSI_HOST *hd, u32 id)
static int mptspi_target_alloc(struct scsi_target *starget)
static void
mptspi_target_destroy(struct scsi_target *starget)
static void
mptspi_print_write_nego(struct _MPT_SCSI_HOST *hd, struct scsi_target *starget, u32 ii)
static void
mptspi_print_read_nego(struct _MPT_SCSI_HOST *hd, struct scsi_target *starget, u32 ii)
static int mptspi_read_spi_device_pg0(struct scsi_target *starget,
struct _CONFIG_PAGE_SCSI_DEVICE_0 *pass_pg0)
static u32 mptspi_getRP(struct scsi_target *starget)
static void mptspi_read_parameters(struct scsi_target *starget)
int
mptscsih_quiesce_raid(MPT_SCSI_HOST *hd, int quiesce, u8 channel, u8 id)
static void mptspi_dv_device(struct _MPT_SCSI_HOST *hd,
struct scsi_device *sdev)
static int mptspi_slave_alloc(struct scsi_device *sdev)
static int mptspi_slave_configure(struct scsi_device *sdev)
static int
mptspi_qcmd_lck(struct scsi_cmnd *SCpnt, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(mptspi_qcmd)
static void mptspi_slave_destroy(struct scsi_device *sdev)
static struct scsi_host_template mptspi_driver_template = ;
static int mptspi_write_spi_device_pg1(struct scsi_target *starget,
struct _CONFIG_PAGE_SCSI_DEVICE_1 *pass_pg1)
static void mptspi_write_offset(struct scsi_target *starget, int offset)
static void mptspi_write_period(struct scsi_target *starget, int period)
static void mptspi_write_dt(struct scsi_target *starget, int dt)
static void mptspi_write_iu(struct scsi_target *starget, int iu)
#define MPTSPI_SIMPLE_TRANSPORT_PARM(parm) 				\
static void mptspi_write_##parm(struct scsi_target *starget, int parm)\
MPTSPI_SIMPLE_TRANSPORT_PARM(rd_strm)
MPTSPI_SIMPLE_TRANSPORT_PARM(wr_flow)
MPTSPI_SIMPLE_TRANSPORT_PARM(rti)
MPTSPI_SIMPLE_TRANSPORT_PARM(hold_mcs)
MPTSPI_SIMPLE_TRANSPORT_PARM(pcomp_en)
static void mptspi_write_qas(struct scsi_target *starget, int qas)
static void mptspi_write_width(struct scsi_target *starget, int width)
struct work_queue_wrapper ;
static void mpt_work_wrapper(struct work_struct *work)
static void mpt_dv_raid(struct _MPT_SCSI_HOST *hd, int disk)
static int
mptspi_event_process(MPT_ADAPTER *ioc, EventNotificationReply_t *pEvReply)
static int
mptspi_deny_binding(struct scsi_target *starget)
static struct spi_function_template mptspi_transport_functions = ;
static struct pci_device_id mptspi_pci_table[] = ;
MODULE_DEVICE_TABLE(pci, mptspi_pci_table);
static void
mptspi_dv_renegotiate_work(struct work_struct *work)
static void
mptspi_dv_renegotiate(struct _MPT_SCSI_HOST *hd)
static int
mptspi_ioc_reset(MPT_ADAPTER *ioc, int reset_phase)
static int
mptspi_resume(struct pci_dev *pdev)
static int
mptspi_probe(struct pci_dev *pdev, const struct pci_device_id *id)
static struct pci_driver mptspi_driver = ;
static int __init
mptspi_init(void)
static void __exit
mptspi_exit(void)
module_init(mptspi_init);
module_exit(mptspi_exit);
