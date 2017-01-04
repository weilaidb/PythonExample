#define SCSIHOST_H_INCLUDED
#define MPT_SCANDV_GOOD			(0x00000000)
#define MPT_SCANDV_DID_RESET		(0x00000001)
#define MPT_SCANDV_SENSE		(0x00000002)
#define MPT_SCANDV_SOME_ERROR		(0x00000004)
#define MPT_SCANDV_SELECTION_TIMEOUT	(0x00000008)
#define MPT_SCANDV_ISSUE_SENSE		(0x00000010)
#define MPT_SCANDV_FALLBACK		(0x00000020)
#define MPT_SCANDV_BUSY			(0x00000040)
#define MPT_SCANDV_MAX_RETRIES		(10)
#define MPT_ICFLAG_BUF_CAP	0x01
#define MPT_ICFLAG_ECHO		0x02
#define MPT_ICFLAG_EBOS		0x04
#define MPT_ICFLAG_PHYS_DISK	0x08
#define MPT_ICFLAG_TAGGED_CMD	0x10
#define MPT_ICFLAG_DID_RESET	0x20
#define MPT_ICFLAG_RESERVED	0x40
#define MPT_SCSI_CMD_PER_DEV_HIGH	64
#define MPT_SCSI_CMD_PER_DEV_LOW	32
#define MPT_SCSI_CMD_PER_LUN		7
#define MPT_SCSI_MAX_SECTORS    8192
#define MPTSCSIH_DOMAIN_VALIDATION      1
#define MPTSCSIH_MAX_WIDTH              1
#define MPTSCSIH_MIN_SYNC               0x08
#define MPTSCSIH_SAF_TE                 0
#define MPTSCSIH_PT_CLEAR               0
typedef struct _internal_cmd  INTERNAL_CMD;
extern void mptscsih_remove(struct pci_dev *);
extern void mptscsih_shutdown(struct pci_dev *);
extern int mptscsih_suspend(struct pci_dev *pdev, pm_message_t state);
extern int mptscsih_resume(struct pci_dev *pdev);
extern int mptscsih_proc_info(struct Scsi_Host *host, char *buffer, char **start, off_t offset, int length, int func);
extern const char * mptscsih_info(struct Scsi_Host *SChost);
extern int mptscsih_qcmd(struct scsi_cmnd *SCpnt, void (*done)(struct scsi_cmnd *));
extern int mptscsih_IssueTaskMgmt(MPT_SCSI_HOST *hd, u8 type, u8 channel,
u8 id, int lun, int ctx2abort, ulong timeout);
extern void mptscsih_slave_destroy(struct scsi_device *device);
extern int mptscsih_slave_configure(struct scsi_device *device);
extern int mptscsih_abort(struct scsi_cmnd * SCpnt);
extern int mptscsih_dev_reset(struct scsi_cmnd * SCpnt);
extern int mptscsih_bus_reset(struct scsi_cmnd * SCpnt);
extern int mptscsih_host_reset(struct scsi_cmnd *SCpnt);
extern int mptscsih_bios_param(struct scsi_device * sdev, struct block_device *bdev, sector_t capacity, int geom[]);
extern int mptscsih_io_done(MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf, MPT_FRAME_HDR *r);
extern int mptscsih_taskmgmt_complete(MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf, MPT_FRAME_HDR *r);
extern int mptscsih_scandv_complete(MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf, MPT_FRAME_HDR *r);
extern int mptscsih_event_process(MPT_ADAPTER *ioc, EventNotificationReply_t *pEvReply);
extern int mptscsih_ioc_reset(MPT_ADAPTER *ioc, int post_reset);
extern int mptscsih_change_queue_depth(struct scsi_device *sdev, int qdepth,
int reason);
extern u8 mptscsih_raid_id_to_num(MPT_ADAPTER *ioc, u8 channel, u8 id);
extern int mptscsih_is_phys_disk(MPT_ADAPTER *ioc, u8 channel, u8 id);
extern struct device_attribute *mptscsih_host_attrs[];
extern struct scsi_cmnd	*mptscsih_get_scsi_lookup(MPT_ADAPTER *ioc, int i);
extern void mptscsih_taskmgmt_response_code(MPT_ADAPTER *ioc, u8 response_code);
