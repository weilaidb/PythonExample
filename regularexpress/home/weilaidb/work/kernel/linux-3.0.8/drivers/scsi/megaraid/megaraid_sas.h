#define LSI_MEGARAID_SAS_H
#define MEGASAS_VERSION				"00.00.05.38-rc1"
#define MEGASAS_RELDATE				"May. 11, 2011"
#define MEGASAS_EXT_VERSION			"Wed. May. 11 17:00:00 PDT 2011"
#define	PCI_DEVICE_ID_LSI_SAS1078R		0x0060
#define	PCI_DEVICE_ID_LSI_SAS1078DE		0x007C
#define	PCI_DEVICE_ID_LSI_VERDE_ZCR		0x0413
#define	PCI_DEVICE_ID_LSI_SAS1078GEN2		0x0078
#define	PCI_DEVICE_ID_LSI_SAS0079GEN2		0x0079
#define	PCI_DEVICE_ID_LSI_SAS0073SKINNY		0x0073
#define	PCI_DEVICE_ID_LSI_SAS0071SKINNY		0x0071
#define	PCI_DEVICE_ID_LSI_FUSION		0x005b
#define MFI_STATE_MASK				0xF0000000
#define MFI_STATE_UNDEFINED			0x00000000
#define MFI_STATE_BB_INIT			0x10000000
#define MFI_STATE_FW_INIT			0x40000000
#define MFI_STATE_WAIT_HANDSHAKE		0x60000000
#define MFI_STATE_FW_INIT_2			0x70000000
#define MFI_STATE_DEVICE_SCAN			0x80000000
#define MFI_STATE_BOOT_MESSAGE_PENDING		0x90000000
#define MFI_STATE_FLUSH_CACHE			0xA0000000
#define MFI_STATE_READY				0xB0000000
#define MFI_STATE_OPERATIONAL			0xC0000000
#define MFI_STATE_FAULT				0xF0000000
#define MFI_RESET_REQUIRED			0x00000001
#define MFI_RESET_ADAPTER			0x00000002
#define MEGAMFI_FRAME_SIZE			64
#define WRITE_SEQUENCE_OFFSET		(0x0000000FC)
#define HOST_DIAGNOSTIC_OFFSET		(0x000000F8)
#define DIAG_WRITE_ENABLE			(0x00000080)
#define DIAG_RESET_ADAPTER			(0x00000004)
#define MFI_ADP_RESET				0x00000040
#define MFI_INIT_ABORT				0x00000001
#define MFI_INIT_READY				0x00000002
#define MFI_INIT_MFIMODE			0x00000004
#define MFI_INIT_CLEAR_HANDSHAKE		0x00000008
#define MFI_INIT_HOTPLUG			0x00000010
#define MFI_STOP_ADP				0x00000020
#define MFI_RESET_FLAGS				MFI_INIT_READY| \
MFI_INIT_MFIMODE| \
MFI_INIT_ABORT
#define MFI_FRAME_POST_IN_REPLY_QUEUE		0x0000
#define MFI_FRAME_DONT_POST_IN_REPLY_QUEUE	0x0001
#define MFI_FRAME_SGL32				0x0000
#define MFI_FRAME_SGL64				0x0002
#define MFI_FRAME_SENSE32			0x0000
#define MFI_FRAME_SENSE64			0x0004
#define MFI_FRAME_DIR_NONE			0x0000
#define MFI_FRAME_DIR_WRITE			0x0008
#define MFI_FRAME_DIR_READ			0x0010
#define MFI_FRAME_DIR_BOTH			0x0018
#define MFI_FRAME_IEEE                          0x0020
#define MFI_CMD_STATUS_POLL_MODE		0xFF
#define MFI_CMD_INIT				0x00
#define MFI_CMD_LD_READ				0x01
#define MFI_CMD_LD_WRITE			0x02
#define MFI_CMD_LD_SCSI_IO			0x03
#define MFI_CMD_PD_SCSI_IO			0x04
#define MFI_CMD_DCMD				0x05
#define MFI_CMD_ABORT				0x06
#define MFI_CMD_SMP				0x07
#define MFI_CMD_STP				0x08
#define MR_DCMD_CTRL_GET_INFO			0x01010000
#define MR_DCMD_LD_GET_LIST			0x03010000
#define MR_DCMD_CTRL_CACHE_FLUSH		0x01101000
#define MR_FLUSH_CTRL_CACHE			0x01
#define MR_FLUSH_DISK_CACHE			0x02
#define MR_DCMD_CTRL_SHUTDOWN			0x01050000
#define MR_DCMD_HIBERNATE_SHUTDOWN		0x01060000
#define MR_ENABLE_DRIVE_SPINDOWN		0x01
#define MR_DCMD_CTRL_EVENT_GET_INFO		0x01040100
#define MR_DCMD_CTRL_EVENT_GET			0x01040300
#define MR_DCMD_CTRL_EVENT_WAIT			0x01040500
#define MR_DCMD_LD_GET_PROPERTIES		0x03030000
#define MR_DCMD_CLUSTER				0x08000000
#define MR_DCMD_CLUSTER_RESET_ALL		0x08010100
#define MR_DCMD_CLUSTER_RESET_LD		0x08010200
#define MR_DCMD_PD_LIST_QUERY                   0x02010100
enum MFI_STAT ;
#define MFI_MBOX_SIZE				12
enum MR_EVT_CLASS ;
enum MR_EVT_LOCALE ;
enum MR_EVT_ARGS ;
enum MR_PD_QUERY_TYPE ;
#define MR_EVT_CFG_CLEARED                              0x0004
#define MR_EVT_LD_STATE_CHANGE                          0x0051
#define MR_EVT_PD_INSERTED                              0x005b
#define MR_EVT_PD_REMOVED                               0x0070
#define MR_EVT_LD_CREATED                               0x008a
#define MR_EVT_LD_DELETED                               0x008b
#define MR_EVT_FOREIGN_CFG_IMPORTED                     0x00db
#define MR_EVT_LD_OFFLINE                               0x00fc
#define MR_EVT_CTRL_HOST_BUS_SCAN_REQUESTED             0x0152
#define MAX_LOGICAL_DRIVES				64
enum MR_PD_STATE ;
struct MR_PD_ADDRESS  __packed;
struct MR_PD_LIST  __packed;
struct megasas_pd_list  __packed;
union  MR_LD_REF  __packed;
struct MR_LD_LIST  __packed;
struct megasas_ctrl_prop  __packed;
struct megasas_ctrl_info  __packed;
#define MEGASAS_MAX_PD_CHANNELS			2
#define MEGASAS_MAX_LD_CHANNELS			2
#define MEGASAS_MAX_CHANNELS			(MEGASAS_MAX_PD_CHANNELS + \
MEGASAS_MAX_LD_CHANNELS)
#define MEGASAS_MAX_DEV_PER_CHANNEL		128
#define MEGASAS_DEFAULT_INIT_ID			-1
#define MEGASAS_MAX_LUN				8
#define MEGASAS_MAX_LD				64
#define MEGASAS_DEFAULT_CMD_PER_LUN		128
#define MEGASAS_MAX_PD                          (MEGASAS_MAX_PD_CHANNELS * \
MEGASAS_MAX_DEV_PER_CHANNEL)
#define MEGASAS_MAX_LD_IDS			(MEGASAS_MAX_LD_CHANNELS * \
MEGASAS_MAX_DEV_PER_CHANNEL)
#define MEGASAS_MAX_SECTORS                    (2*1024)
#define MEGASAS_MAX_SECTORS_IEEE		(2*128)
#define MEGASAS_DBG_LVL				1
#define MEGASAS_FW_BUSY				1
#define IO_FRAME				0
#define PTHRU_FRAME				1
#define MEGASAS_RESET_WAIT_TIME			180
#define MEGASAS_INTERNAL_CMD_WAIT_TIME		180
#define	MEGASAS_RESET_NOTICE_INTERVAL		5
#define MEGASAS_IOCTL_CMD			0
#define MEGASAS_DEFAULT_CMD_TIMEOUT		90
#define MEGASAS_INT_CMDS			32
#define MEGASAS_SKINNY_INT_CMDS			5
#define IS_DMA64				(sizeof(dma_addr_t) == 8)
#define MFI_XSCALE_OMR0_CHANGE_INTERRUPT		0x00000001
#define MFI_INTR_FLAG_REPLY_MESSAGE			0x00000001
#define MFI_INTR_FLAG_FIRMWARE_STATE_CHANGE		0x00000002
#define MFI_G2_OUTBOUND_DOORBELL_CHANGE_INTERRUPT	0x00000004
#define MFI_OB_INTR_STATUS_MASK			0x00000002
#define MFI_POLL_TIMEOUT_SECS			60
#define MEGASAS_COMPLETION_TIMER_INTERVAL      (HZ/10)
#define MFI_REPLY_1078_MESSAGE_INTERRUPT	0x80000000
#define MFI_REPLY_GEN2_MESSAGE_INTERRUPT	0x00000001
#define MFI_GEN2_ENABLE_INTERRUPT_MASK		(0x00000001 | 0x00000004)
#define MFI_REPLY_SKINNY_MESSAGE_INTERRUPT	0x40000000
#define MFI_SKINNY_ENABLE_INTERRUPT_MASK	(0x00000001)
#define MFI_1068_PCSR_OFFSET			0x84
#define MFI_1068_FW_HANDSHAKE_OFFSET		0x64
#define MFI_1068_FW_READY			0xDDDD0000
struct megasas_register_set  __attribute__ ((packed));
struct megasas_sge32  __attribute__ ((packed));
struct megasas_sge64  __attribute__ ((packed));
struct megasas_sge_skinny  __packed;
union megasas_sgl  __attribute__ ((packed));
struct megasas_header  __attribute__ ((packed));
union megasas_sgl_frame  __attribute__ ((packed));
struct megasas_init_frame  __attribute__ ((packed));
struct megasas_init_queue_info  __attribute__ ((packed));
struct megasas_io_frame  __attribute__ ((packed));
struct megasas_pthru_frame  __attribute__ ((packed));
struct megasas_dcmd_frame  __attribute__ ((packed));
struct megasas_abort_frame  __attribute__ ((packed));
struct megasas_smp_frame  __attribute__ ((packed));
struct megasas_stp_frame  __attribute__ ((packed));
union megasas_frame ;
struct megasas_cmd;
union megasas_evt_class_locale  __attribute__ ((packed));
struct megasas_evt_log_info  __attribute__ ((packed));
struct megasas_progress  __attribute__ ((packed));
struct megasas_evtarg_ld  __attribute__ ((packed));
struct megasas_evtarg_pd  __attribute__ ((packed));
struct megasas_evt_detail  __attribute__ ((packed));
struct megasas_aen_event ;
struct megasas_instance ;
enum ;
struct megasas_instance_template ;
#define MEGASAS_IS_LOGICAL(scp)						\
(scp->device->channel < MEGASAS_MAX_PD_CHANNELS) ? 0 : 1
#define MEGASAS_DEV_INDEX(inst, scp)					\
((scp->device->channel % 2) * MEGASAS_MAX_DEV_PER_CHANNEL) + 	\
scp->device->id
struct megasas_cmd ;
#define MAX_MGMT_ADAPTERS		1024
#define MAX_IOCTL_SGE			16
struct megasas_iocpacket  __attribute__ ((packed));
struct megasas_aen  __attribute__ ((packed));
struct compat_megasas_iocpacket  __attribute__ ((packed));
#define MEGASAS_IOC_FIRMWARE32	_IOWR('M', 1, struct compat_megasas_iocpacket)
#define MEGASAS_IOC_FIRMWARE	_IOWR('M', 1, struct megasas_iocpacket)
#define MEGASAS_IOC_GET_AEN	_IOW('M', 3, struct megasas_aen)
struct megasas_mgmt_info ;
#define msi_control_reg(base) (base + PCI_MSI_FLAGS)
#define PCI_MSIX_FLAGS_ENABLE (1 << 15)
