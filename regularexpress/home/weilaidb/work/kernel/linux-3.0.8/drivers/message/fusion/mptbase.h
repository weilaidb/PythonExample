#define MPTBASE_H_INCLUDED
#define MODULEAUTHOR	"LSI Corporation"
#define COPYRIGHT	"Copyright (c) 1999-2008 " MODULEAUTHOR
#define MPT_LINUX_VERSION_COMMON	"3.04.19"
#define MPT_LINUX_PACKAGE_NAME		"@(#)mptlinux-3.04.19"
#define WHAT_MAGIC_STRING		"@" "(" "#" ")"
#define show_mptmod_ver(s,ver)  \
printk(KERN_INFO "%s %s\n", s, ver);
#define MPT_MAX_ADAPTERS		18
#define MPT_MAX_PROTOCOL_DRIVERS	16
#define MPT_MAX_BUS			1
#define MPT_MAX_FC_DEVICES		255
#define MPT_MAX_SCSI_DEVICES		16
#define MPT_LAST_LUN			255
#define MPT_SENSE_BUFFER_ALLOC		64
#if MPT_SENSE_BUFFER_ALLOC >= 256
#	undef MPT_SENSE_BUFFER_ALLOC
#	define MPT_SENSE_BUFFER_ALLOC	256
#	define MPT_SENSE_BUFFER_SIZE	255
#	define MPT_SENSE_BUFFER_SIZE	MPT_SENSE_BUFFER_ALLOC
#define MPT_NAME_LENGTH			32
#define MPT_KOBJ_NAME_LEN		20
#define MPT_PROCFS_MPTBASEDIR		"mpt"
#define MPT_PROCFS_SUMMARY_ALL_NODE		MPT_PROCFS_MPTBASEDIR "/summary"
#define MPT_PROCFS_SUMMARY_ALL_PATHNAME		"/proc/" MPT_PROCFS_SUMMARY_ALL_NODE
#define MPT_FW_REV_MAGIC_ID_STRING		"FwRev="
#define  MPT_MAX_REQ_DEPTH		1023
#define  MPT_DEFAULT_REQ_DEPTH		256
#define  MPT_MIN_REQ_DEPTH		128
#define  MPT_MAX_REPLY_DEPTH		MPT_MAX_REQ_DEPTH
#define  MPT_DEFAULT_REPLY_DEPTH	128
#define  MPT_MIN_REPLY_DEPTH		8
#define  MPT_MAX_REPLIES_PER_ISR	32
#define  MPT_MAX_FRAME_SIZE		128
#define  MPT_DEFAULT_FRAME_SIZE		128
#define  MPT_REPLY_FRAME_SIZE		0x50
#define  MPT_SG_REQ_128_SCALE		1
#define  MPT_SG_REQ_96_SCALE		2
#define  MPT_SG_REQ_64_SCALE		4
#define	 CAN_SLEEP			1
#define  NO_SLEEP			0
#define MPT_COALESCING_TIMEOUT		0x10
#define MPT_ULTRA320			0x08
#define MPT_ULTRA160			0x09
#define MPT_ULTRA2			0x0A
#define MPT_ULTRA			0x0C
#define MPT_FAST			0x19
#define MPT_SCSI			0x32
#define MPT_ASYNC			0xFF
#define MPT_NARROW			0
#define MPT_WIDE			1
#define C0_1030				0x08
#define XL_929				0x01
#define MPT_FC_CAN_QUEUE	1024
#define MPT_SCSI_CAN_QUEUE	127
#define MPT_SAS_CAN_QUEUE	127
#if CONFIG_FUSION_MAX_SGE  < 16
#define MPT_SCSI_SG_DEPTH	16
#elif CONFIG_FUSION_MAX_SGE  > 128
#define MPT_SCSI_SG_DEPTH	128
#define MPT_SCSI_SG_DEPTH	CONFIG_FUSION_MAX_SGE
#define MPT_SCSI_SG_DEPTH	40
#if CONFIG_FUSION_MAX_FC_SGE  < 16
#define MPT_SCSI_FC_SG_DEPTH	16
#elif CONFIG_FUSION_MAX_FC_SGE  > 256
#define MPT_SCSI_FC_SG_DEPTH	256
#define MPT_SCSI_FC_SG_DEPTH	CONFIG_FUSION_MAX_FC_SGE
#define MPT_SCSI_FC_SG_DEPTH	40
# define EVENT_DESCR_STR_SZ             100
#define MPT_POLLING_INTERVAL		1000
#define MYIOC_s_FMT			MYNAM ": %s: "
#define MYIOC_s_DEBUG_FMT		KERN_DEBUG MYNAM ": %s: "
#define MYIOC_s_INFO_FMT		KERN_INFO MYNAM ": %s: "
#define MYIOC_s_NOTE_FMT		KERN_NOTICE MYNAM ": %s: "
#define MYIOC_s_WARN_FMT		KERN_WARNING MYNAM ": %s: WARNING - "
#define MYIOC_s_ERR_FMT			KERN_ERR MYNAM ": %s: ERROR - "
#define ATTOFLAG_DISC     0x0001
#define ATTOFLAG_TAGGED   0x0002
#define ATTOFLAG_WIDE_ENB 0x0008
#define ATTOFLAG_ID_ENB   0x0010
#define ATTOFLAG_LUN_ENB  0x0060
typedef struct _ATTO_DEVICE_INFO
ATTO_DEVICE_INFO, MPI_POINTER PTR_ATTO_DEVICE_INFO,
ATTODeviceInfo_t, MPI_POINTER pATTODeviceInfo_t;
typedef struct _ATTO_CONFIG_PAGE_SCSI_PORT_2
fATTO_CONFIG_PAGE_SCSI_PORT_2, MPI_POINTER PTR_ATTO_CONFIG_PAGE_SCSI_PORT_2,
ATTO_SCSIPortPage2_t, MPI_POINTER pATTO_SCSIPortPage2_t;
typedef enum  MPT_DRIVER_CLASS;
struct mpt_pci_driver;
typedef union _MPT_FRAME_TRACKER  MPT_FRAME_TRACKER;
typedef struct _MPT_FRAME_HDR  MPT_FRAME_HDR;
#define MPT_REQ_MSGFLAGS_DROPME		0x80
typedef struct _MPT_SGL_HDR  MPT_SGL_HDR;
typedef struct _MPT_SGL64_HDR  MPT_SGL64_HDR;
typedef struct _SYSIF_REGS
SYSIF_REGS;
#define MPT_TARGET_NO_NEGO_WIDE		0x01
#define MPT_TARGET_NO_NEGO_SYNC		0x02
#define MPT_TARGET_NO_NEGO_QAS		0x04
#define MPT_TAPE_NEGO_IDP     		0x08
typedef struct _VirtTarget  VirtTarget;
typedef struct _VirtDevice  VirtDevice;
#define MPT_TARGET_DEFAULT_DV_STATUS	0x00
#define MPT_TARGET_FLAGS_VALID_NEGO	0x01
#define MPT_TARGET_FLAGS_VALID_INQUIRY	0x02
#define MPT_TARGET_FLAGS_Q_YES		0x08
#define MPT_TARGET_FLAGS_VALID_56	0x10
#define MPT_TARGET_FLAGS_SAF_TE_ISSUED	0x20
#define MPT_TARGET_FLAGS_RAID_COMPONENT	0x40
#define MPT_TARGET_FLAGS_LED_ON		0x80
#define MPTCTL_RESET_OK			0x01
#define MPT_MGMT_STATUS_RF_VALID	0x01
#define MPT_MGMT_STATUS_COMMAND_GOOD	0x02
#define MPT_MGMT_STATUS_PENDING		0x04
#define MPT_MGMT_STATUS_DID_IOCRESET	0x08
#define MPT_MGMT_STATUS_SENSE_VALID	0x10
#define MPT_MGMT_STATUS_TIMER_ACTIVE	0x20
#define MPT_MGMT_STATUS_FREE_MF		0x40
#define INITIALIZE_MGMT_STATUS(status) \
status = MPT_MGMT_STATUS_PENDING;
#define CLEAR_MGMT_STATUS(status) \
status = 0;
#define CLEAR_MGMT_PENDING_STATUS(status) \
status &= ~MPT_MGMT_STATUS_PENDING;
#define SET_MGMT_MSG_CONTEXT(msg_context, value) \
msg_context = value;
typedef struct _MPT_MGMT  MPT_MGMT;
#define MPTCTL_EVENT_LOG_SIZE		(0x000000032)
typedef struct _mpt_ioctl_events  MPT_IOCTL_EVENTS;
#define MPT_CONFIG_GOOD		MPI_IOCSTATUS_SUCCESS
#define MPT_CONFIG_ERROR	0x002F
#define MPT_SCSICFG_USE_NVRAM		0x01
#define MPT_SCSICFG_ALL_IDS		0x02
typedef	struct _SpiCfgData SpiCfgData;
typedef	struct _SasCfgData SasCfgData;
struct inactive_raid_component_info ;
typedef	struct _RaidCfgData RaidCfgData;
typedef struct _FcCfgData  FcCfgData;
#define MPT_RPORT_INFO_FLAGS_REGISTERED	0x01
#define MPT_RPORT_INFO_FLAGS_MISSING	0x02
struct mptfc_rport_info
;
typedef void (*MPT_ADD_SGE)(void *pAddr, u32 flagslength, dma_addr_t dma_addr);
typedef void (*MPT_ADD_CHAIN)(void *pAddr, u8 next, u16 length,
dma_addr_t dma_addr);
typedef void (*MPT_SCHEDULE_TARGET_RESET)(void *ioc);
typedef struct _MPT_ADAPTER
MPT_ADAPTER;
typedef int (*MPT_CALLBACK)(MPT_ADAPTER *ioc, MPT_FRAME_HDR *req, MPT_FRAME_HDR *reply);
typedef int (*MPT_EVHANDLER)(MPT_ADAPTER *ioc, EventNotificationReply_t *evReply);
typedef int (*MPT_RESETHANDLER)(MPT_ADAPTER *ioc, int reset_phase);
#define MPT_IOC_PRE_RESET		0
#define MPT_IOC_POST_RESET		1
#define MPT_IOC_SETUP_RESET		2
typedef struct _MPT_HOST_EVENT  MPT_HOST_EVENT;
#define MPT_HOSTEVENT_IOC_BRINGUP	0x91
#define MPT_HOSTEVENT_IOC_RECOVER	0x92
typedef struct _mpt_sge  MptSge_t;
#define mpt_msg_flags(ioc) \
(ioc->sg_addr_size == sizeof(u64)) ?		\
MPI_SCSIIO_MSGFLGS_SENSE_WIDTH_64 : 		\
MPI_SCSIIO_MSGFLGS_SENSE_WIDTH_32
#define MPT_SGE_FLAGS_64_BIT_ADDRESSING \
(MPI_SGE_FLAGS_64_BIT_ADDRESSING << MPI_SGE_FLAGS_SHIFT)
#define MPT_INDEX_2_MFPTR(ioc,idx) \
(MPT_FRAME_HDR*)( (u8*)(ioc)->req_frames + (ioc)->req_sz * (idx) )
#define MFPTR_2_MPT_INDEX(ioc,mf) \
(int)( ((u8*)mf - (u8*)(ioc)->req_frames) / (ioc)->req_sz )
#define MPT_INDEX_2_RFPTR(ioc,idx) \
(MPT_FRAME_HDR*)( (u8*)(ioc)->reply_frames + (ioc)->req_sz * (idx) )
#define SCSI_STD_SENSE_BYTES    18
#define SCSI_STD_INQUIRY_BYTES  36
#define SCSI_MAX_INQUIRY_BYTES  96
typedef struct _MPT_LOCAL_REPLY  MPT_LOCAL_REPLY;
#define MPT_HOST_BUS_UNKNOWN		(0xFF)
#define MPT_HOST_TOO_MANY_TM		(0x05)
#define MPT_HOST_NVRAM_INVALID		(0xFFFFFFFF)
#define MPT_HOST_NO_CHAIN		(0xFFFFFFFF)
#define MPT_NVRAM_MASK_TIMEOUT		(0x000000FF)
#define MPT_NVRAM_SYNC_MASK		(0x0000FF00)
#define MPT_NVRAM_SYNC_SHIFT		(8)
#define MPT_NVRAM_DISCONNECT_ENABLE	(0x00010000)
#define MPT_NVRAM_ID_SCAN_ENABLE	(0x00020000)
#define MPT_NVRAM_LUN_SCAN_ENABLE	(0x00040000)
#define MPT_NVRAM_TAG_QUEUE_ENABLE	(0x00080000)
#define MPT_NVRAM_WIDE_DISABLE		(0x00100000)
#define MPT_NVRAM_BOOT_CHOICE		(0x00200000)
#define TM_STATE_NONE          (0)
#define	TM_STATE_IN_PROGRESS   (1)
#define	TM_STATE_ERROR	       (2)
typedef enum  BUS_TYPE;
typedef struct _MPT_SCSI_HOST  MPT_SCSI_HOST;
struct scsi_cmnd;
typedef struct _x_config_parms  CONFIGPARMS;
extern int	 mpt_attach(struct pci_dev *pdev, const struct pci_device_id *id);
extern void	 mpt_detach(struct pci_dev *pdev);
extern int	 mpt_suspend(struct pci_dev *pdev, pm_message_t state);
extern int	 mpt_resume(struct pci_dev *pdev);
extern u8	 mpt_register(MPT_CALLBACK cbfunc, MPT_DRIVER_CLASS dclass,
char *func_name);
extern void	 mpt_deregister(u8 cb_idx);
extern int	 mpt_event_register(u8 cb_idx, MPT_EVHANDLER ev_cbfunc);
extern void	 mpt_event_deregister(u8 cb_idx);
extern int	 mpt_reset_register(u8 cb_idx, MPT_RESETHANDLER reset_func);
extern void	 mpt_reset_deregister(u8 cb_idx);
extern int	 mpt_device_driver_register(struct mpt_pci_driver * dd_cbfunc, u8 cb_idx);
extern void	 mpt_device_driver_deregister(u8 cb_idx);
extern MPT_FRAME_HDR	*mpt_get_msg_frame(u8 cb_idx, MPT_ADAPTER *ioc);
extern void	 mpt_free_msg_frame(MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf);
extern void	 mpt_put_msg_frame(u8 cb_idx, MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf);
extern void	 mpt_put_msg_frame_hi_pri(u8 cb_idx, MPT_ADAPTER *ioc, MPT_FRAME_HDR *mf);
extern int	 mpt_send_handshake_request(u8 cb_idx, MPT_ADAPTER *ioc, int reqBytes, u32 *req, int sleepFlag);
extern int	 mpt_verify_adapter(int iocid, MPT_ADAPTER **iocpp);
extern u32	 mpt_GetIocState(MPT_ADAPTER *ioc, int cooked);
extern void	 mpt_print_ioc_summary(MPT_ADAPTER *ioc, char *buf, int *size, int len, int showlan);
extern int	 mpt_HardResetHandler(MPT_ADAPTER *ioc, int sleepFlag);
extern int	 mpt_Soft_Hard_ResetHandler(MPT_ADAPTER *ioc, int sleepFlag);
extern int	 mpt_config(MPT_ADAPTER *ioc, CONFIGPARMS *cfg);
extern int	 mpt_alloc_fw_memory(MPT_ADAPTER *ioc, int size);
extern void	 mpt_free_fw_memory(MPT_ADAPTER *ioc);
extern int	 mpt_findImVolumes(MPT_ADAPTER *ioc);
extern int	 mptbase_sas_persist_operation(MPT_ADAPTER *ioc, u8 persist_opcode);
extern int	 mpt_raid_phys_disk_pg0(MPT_ADAPTER *ioc, u8 phys_disk_num, pRaidPhysDiskPage0_t phys_disk);
extern int	mpt_raid_phys_disk_pg1(MPT_ADAPTER *ioc, u8 phys_disk_num,
pRaidPhysDiskPage1_t phys_disk);
extern int	mpt_raid_phys_disk_get_num_paths(MPT_ADAPTER *ioc,
u8 phys_disk_num);
extern int	 mpt_set_taskmgmt_in_progress_flag(MPT_ADAPTER *ioc);
extern void	 mpt_clear_taskmgmt_in_progress_flag(MPT_ADAPTER *ioc);
extern void     mpt_halt_firmware(MPT_ADAPTER *ioc);
extern struct list_head	  ioc_list;
extern int mpt_fwfault_debug;
#define CAST_U32_TO_PTR(x)	((void *)(u64)x)
#define CAST_PTR_TO_U32(x)	((u32)(u64)x)
#define CAST_U32_TO_PTR(x)	((void *)x)
#define CAST_PTR_TO_U32(x)	((u32)x)
#define MPT_PROTOCOL_FLAGS_c_c_c_c(pflags) \
((pflags) & MPI_PORTFACTS_PROTOCOL_INITIATOR)	? 'I' : 'i',	\
((pflags) & MPI_PORTFACTS_PROTOCOL_TARGET)	? 'T' : 't',	\
((pflags) & MPI_PORTFACTS_PROTOCOL_LAN)		? 'L' : 'l',	\
((pflags) & MPI_PORTFACTS_PROTOCOL_LOGBUSADDR)	? 'B' : 'b'
#define MPT_TRANSFER_IOC_TO_HOST		(0x00000000)
#define MPT_TRANSFER_HOST_TO_IOC		(0x04000000)
#define MPT_SGE_FLAGS_LAST_ELEMENT		(0x80000000)
#define MPT_SGE_FLAGS_END_OF_BUFFER		(0x40000000)
#define MPT_SGE_FLAGS_LOCAL_ADDRESS		(0x08000000)
#define MPT_SGE_FLAGS_DIRECTION			(0x04000000)
#define MPT_SGE_FLAGS_END_OF_LIST		(0x01000000)
#define MPT_SGE_FLAGS_TRANSACTION_ELEMENT	(0x00000000)
#define MPT_SGE_FLAGS_SIMPLE_ELEMENT		(0x10000000)
#define MPT_SGE_FLAGS_CHAIN_ELEMENT		(0x30000000)
#define MPT_SGE_FLAGS_ELEMENT_MASK		(0x30000000)
#define MPT_SGE_FLAGS_SSIMPLE_READ \
(MPT_SGE_FLAGS_LAST_ELEMENT |	\
MPT_SGE_FLAGS_END_OF_BUFFER |	\
MPT_SGE_FLAGS_END_OF_LIST |	\
MPT_SGE_FLAGS_SIMPLE_ELEMENT |	\
MPT_TRANSFER_IOC_TO_HOST)
#define MPT_SGE_FLAGS_SSIMPLE_WRITE \
(MPT_SGE_FLAGS_LAST_ELEMENT |	\
MPT_SGE_FLAGS_END_OF_BUFFER |	\
MPT_SGE_FLAGS_END_OF_LIST |	\
MPT_SGE_FLAGS_SIMPLE_ELEMENT |	\
MPT_TRANSFER_HOST_TO_IOC)
