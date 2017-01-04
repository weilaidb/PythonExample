#define _PMCRAID_H
#define PMCRAID_DRIVER_NAME		"PMC MaxRAID"
#define PMCRAID_DEVFILE			"pmcsas"
#define PMCRAID_DRIVER_VERSION		"1.0.3"
#define PMCRAID_FW_VERSION_1		0x002
#define PMCRAID_MAX_ADAPTERS		1024
#define PMC_BIT8(n)          (1 << (7-n))
#define PMC_BIT16(n)         (1 << (15-n))
#define PMC_BIT32(n)         (1 << (31-n))
#define PCI_VENDOR_ID_PMC			0x11F8
#define PCI_DEVICE_ID_PMC_MAXRAID		0x5220
#define PMCRAID_MAX_CMD				1024
#define PMCRAID_MAX_IO_CMD			1020
#define PMCRAID_MAX_HCAM_CMD			2
#define PMCRAID_MAX_INTERNAL_CMD		2
#define PMCRAID_IOADLS_INTERNAL			 27
#define PMCRAID_IOADLS_EXTERNAL			 37
#define PMCRAID_MAX_IOADLS			 PMCRAID_IOADLS_INTERNAL
#define HRRQ_ENTRY_SIZE                          sizeof(__le32)
#define PMCRAID_IOARCB_ALIGNMENT                 32
#define PMCRAID_IOADL_ALIGNMENT                  16
#define PMCRAID_IOASA_ALIGNMENT                  4
#define PMCRAID_NUM_MSIX_VECTORS                 16
#define PMCRAID_VENDOR_ID_LEN			8
#define PMCRAID_PRODUCT_ID_LEN			16
#define PMCRAID_SERIAL_NUM_LEN			8
#define PMCRAID_LUN_LEN				8
#define PMCRAID_MAX_CDB_LEN			16
#define PMCRAID_DEVICE_ID_LEN			8
#define PMCRAID_SENSE_DATA_LEN			256
#define PMCRAID_ADD_CMD_PARAM_LEN		48
#define PMCRAID_MAX_BUS_TO_SCAN                  1
#define PMCRAID_MAX_NUM_TARGETS_PER_BUS          256
#define PMCRAID_MAX_NUM_LUNS_PER_TARGET          8
#define PMCRAID_IOA_BUS_ID                       0xfe
#define PMCRAID_IOA_TARGET_ID                    0xff
#define PMCRAID_IOA_LUN_ID                       0xff
#define PMCRAID_VSET_BUS_ID                      0x1
#define PMCRAID_VSET_LUN_ID                      0x0
#define PMCRAID_PHYS_BUS_ID                      0x0
#define PMCRAID_VIRTUAL_ENCL_BUS_ID              0x8
#define PMCRAID_MAX_VSET_TARGETS                 0x7F
#define PMCRAID_MAX_VSET_LUNS_PER_TARGET         8
#define PMCRAID_IOA_MAX_SECTORS                  32767
#define PMCRAID_VSET_MAX_SECTORS                 512
#define PMCRAID_MAX_CMD_PER_LUN                  254
#define PMCRAID_MAX_RESOURCES                    256
#define PMCRAID_QUERY_RESOURCE_STATE             0xC2
#define PMCRAID_RESET_DEVICE                     0xC3
#define ENABLE_RESET_MODIFIER                    0x80
#define RESET_DEVICE_LUN                         0x40
#define RESET_DEVICE_TARGET                      0x20
#define RESET_DEVICE_BUS                         0x10
#define PMCRAID_IDENTIFY_HRRQ                    0xC4
#define PMCRAID_QUERY_IOA_CONFIG                 0xC5
#define PMCRAID_QUERY_CMD_STATUS		 0xCB
#define PMCRAID_ABORT_CMD                        0xC7
#define PMCRAID_CANCEL_ALL_REQUESTS		 0xCE
#define PMCRAID_SYNC_COMPLETE_AFTER_CANCEL       PMC_BIT8(0)
#define PMCRAID_HOST_CONTROLLED_ASYNC            0xCF
#define PMCRAID_HCAM_CODE_CONFIG_CHANGE          0x01
#define PMCRAID_HCAM_CODE_LOG_DATA               0x02
#define PMCRAID_IOA_SHUTDOWN                     0xF7
#define PMCRAID_SHUTDOWN_NORMAL                  0x00
#define PMCRAID_SHUTDOWN_PREPARE_FOR_NORMAL      0x40
#define PMCRAID_SHUTDOWN_NONE                    0x100
#define PMCRAID_SHUTDOWN_ABBREV                  0x80
#define PMCRAID_SET_SUPPORTED_DEVICES            0xFB
#define ALL_DEVICES_SUPPORTED                    PMC_BIT8(0)
#define PMCRAID_WR_BUF_DOWNLOAD_AND_SAVE         0x05
#define PMCRAID_IOASC_SENSE_MASK                 0xFFFFFF00
#define PMCRAID_IOASC_SENSE_KEY(ioasc)           ((ioasc) >> 24)
#define PMCRAID_IOASC_SENSE_CODE(ioasc)          (((ioasc) & 0x00ff0000) >> 16)
#define PMCRAID_IOASC_SENSE_QUAL(ioasc)          (((ioasc) & 0x0000ff00) >> 8)
#define PMCRAID_IOASC_SENSE_STATUS(ioasc)        ((ioasc) & 0x000000ff)
#define PMCRAID_IOASC_GOOD_COMPLETION			0x00000000
#define PMCRAID_IOASC_GC_IOARCB_NOTFOUND		0x005A0000
#define PMCRAID_IOASC_NR_INIT_CMD_REQUIRED		0x02040200
#define PMCRAID_IOASC_NR_IOA_RESET_REQUIRED		0x02048000
#define PMCRAID_IOASC_NR_SYNC_REQUIRED			0x023F0000
#define PMCRAID_IOASC_ME_READ_ERROR_NO_REALLOC		0x03110C00
#define PMCRAID_IOASC_HW_CANNOT_COMMUNICATE		0x04050000
#define PMCRAID_IOASC_HW_DEVICE_TIMEOUT			0x04080100
#define PMCRAID_IOASC_HW_DEVICE_BUS_STATUS_ERROR	0x04448500
#define PMCRAID_IOASC_HW_IOA_RESET_REQUIRED		0x04448600
#define PMCRAID_IOASC_IR_INVALID_RESOURCE_HANDLE        0x05250000
#define PMCRAID_IOASC_AC_TERMINATED_BY_HOST		0x0B5A0000
#define PMCRAID_IOASC_UA_BUS_WAS_RESET			0x06290000
#define PMCRAID_IOASC_TIME_STAMP_OUT_OF_SYNC		0x06908B00
#define PMCRAID_IOASC_UA_BUS_WAS_RESET_BY_OTHER		0x06298000
#define PMCRAID_IOASC_IOA_WAS_RESET			0x10000001
#define PMCRAID_IOASC_PCI_ACCESS_ERROR			0x10000002
#define PMCRAID_PCI_DEASSERT_TIMEOUT		2000
#define PMCRAID_BIST_TIMEOUT			2000
#define PMCRAID_AENWAIT_TIMEOUT			5000
#define PMCRAID_TRANSOP_TIMEOUT			60000
#define PMCRAID_RESET_TIMEOUT			(2 * HZ)
#define PMCRAID_CHECK_FOR_RESET_TIMEOUT		((HZ / 10))
#define PMCRAID_VSET_IO_TIMEOUT			(60 * HZ)
#define PMCRAID_INTERNAL_TIMEOUT		(60 * HZ)
#define PMCRAID_SHUTDOWN_TIMEOUT		(150 * HZ)
#define PMCRAID_RESET_BUS_TIMEOUT		(60 * HZ)
#define PMCRAID_RESET_HOST_TIMEOUT		(150 * HZ)
#define PMCRAID_REQUEST_SENSE_TIMEOUT		(30 * HZ)
#define PMCRAID_SET_SUP_DEV_TIMEOUT		(2 * 60 * HZ)
struct pmcraid_ioadl_desc  __attribute__((packed, aligned(PMCRAID_IOADL_ALIGNMENT)));
#define IOADL_FLAGS_CHAINED      PMC_BIT8(0)
#define IOADL_FLAGS_LAST_DESC    PMC_BIT8(1)
#define IOADL_FLAGS_READ_LAST    PMC_BIT8(1)
#define IOADL_FLAGS_WRITE_LAST   PMC_BIT8(1)
struct pmcraid_ioarcb_add_data ;
struct pmcraid_ioarcb  __attribute__((packed, aligned(PMCRAID_IOARCB_ALIGNMENT)));
#define PMCRAID_IOA_RES_HANDLE        0xffffffff
#define PMCRAID_INVALID_RES_HANDLE    0
#define REQ_TYPE_SCSI                 0x00
#define REQ_TYPE_IOACMD               0x01
#define REQ_TYPE_HCAM                 0x02
#define TRANSFER_DIR_WRITE            PMC_BIT8(0)
#define INHIBIT_UL_CHECK              PMC_BIT8(2)
#define SYNC_OVERRIDE                 PMC_BIT8(3)
#define SYNC_COMPLETE                 PMC_BIT8(4)
#define NO_LINK_DESCS                 PMC_BIT8(5)
#define DELAY_AFTER_RESET             PMC_BIT8(0)
#define TASK_TAG_SIMPLE               0x10
#define TASK_TAG_ORDERED              0x20
#define TASK_TAG_QUEUE_HEAD           0x30
#define HRRQ_TOGGLE_BIT               0x01
#define HRRQ_RESPONSE_BIT             0x02
struct pmcraid_ioasa_vset  __attribute__((packed, aligned(4)));
struct pmcraid_ioasa  __attribute__((packed, aligned(4)));
#define PMCRAID_DRIVER_ILID           0xffffffff
struct pmcraid_config_table_entry  __attribute__((packed, aligned(4)));
struct pmcraid_config_table_entry_ext ;
#define RES_TYPE_AF_DASD     0x00
#define RES_TYPE_GSCSI       0x01
#define RES_TYPE_VSET        0x02
#define RES_TYPE_IOA_FP      0xFF
#define RES_IS_IOA(res)      ((res).resource_type == RES_TYPE_IOA_FP)
#define RES_IS_GSCSI(res)    ((res).resource_type == RES_TYPE_GSCSI)
#define RES_IS_VSET(res)     ((res).resource_type == RES_TYPE_VSET)
#define RES_IS_AFDASD(res)   ((res).resource_type == RES_TYPE_AF_DASD)
#define RES_TYPE_VENCLOSURE  0x8
#define MULTIPATH_RESOURCE   PMC_BIT32(0)
#define IMPORT_MODE_MANUAL   PMC_BIT8(0)
#define RES_HANDLE_IOA       0xFFFFFFFF
#define RES_HANDLE_NONE      0x00000000
#define RES_ADDRESS_IOAFP    0xFEFFFFFF
#define RES_ADDRESS_INVALID  0xFFFFFFFF
#define RES_BUS(res_addr)    (le32_to_cpu(res_addr) & 0xFF)
#define RES_TARGET(res_addr) ((le32_to_cpu(res_addr) >> 16) & 0xFF)
#define RES_LUN(res_addr)    0x0
struct pmcraid_config_table  __attribute__((packed, aligned(4)));
#define MICROCODE_UPDATE_REQUIRED		PMC_BIT32(0)
#define PMCRAID_HOSTRCB_LDNSIZE			4056
struct pmcraid_hostrcb_error  __attribute__ ((packed, aligned(4)));
struct pmcraid_hcam_hdr  __attribute__((packed, aligned(4)));
#define PMCRAID_AEN_GROUP	0x3
struct pmcraid_hcam_ccn  __attribute__((packed, aligned(4)));
#define PMCRAID_CCN_EXT_SIZE	3944
struct pmcraid_hcam_ccn_ext  __attribute__((packed, aligned(4)));
struct pmcraid_hcam_ldn  __attribute__((packed, aligned(4)));
#define HOSTRCB_TYPE_CCN			0xE1
#define HOSTRCB_TYPE_LDN			0xE2
#define NOTIFICATION_TYPE_ENTRY_CHANGED		0x0
#define NOTIFICATION_TYPE_ENTRY_NEW		0x1
#define NOTIFICATION_TYPE_ENTRY_DELETED		0x2
#define NOTIFICATION_TYPE_STATE_CHANGE		0x3
#define NOTIFICATION_TYPE_ENTRY_STATECHANGED	0x4
#define NOTIFICATION_TYPE_ERROR_LOG		0x10
#define NOTIFICATION_TYPE_INFORMATION_LOG	0x11
#define HOSTRCB_NOTIFICATIONS_LOST		PMC_BIT8(0)
#define HOSTRCB_INTERNAL_OP_ERROR		PMC_BIT8(0)
#define HOSTRCB_ERROR_RESPONSE_SENT		PMC_BIT8(1)
#define HOSTRCB_OVERLAY_ID_08			0x08
#define HOSTRCB_OVERLAY_ID_09			0x09
#define HOSTRCB_OVERLAY_ID_11			0x11
#define HOSTRCB_OVERLAY_ID_12			0x12
#define HOSTRCB_OVERLAY_ID_13			0x13
#define HOSTRCB_OVERLAY_ID_14			0x14
#define HOSTRCB_OVERLAY_ID_16			0x16
#define HOSTRCB_OVERLAY_ID_17			0x17
#define HOSTRCB_OVERLAY_ID_20			0x20
#define HOSTRCB_OVERLAY_ID_FF			0xFF
struct pmcraid_chip_details ;
#define INTRS_TRANSITION_TO_OPERATIONAL		PMC_BIT32(0)
#define INTRS_IOARCB_TRANSFER_FAILED		PMC_BIT32(3)
#define INTRS_IOA_UNIT_CHECK			PMC_BIT32(4)
#define INTRS_NO_HRRQ_FOR_CMD_RESPONSE		PMC_BIT32(5)
#define INTRS_CRITICAL_OP_IN_PROGRESS		PMC_BIT32(6)
#define INTRS_IO_DEBUG_ACK			PMC_BIT32(7)
#define INTRS_IOARRIN_LOST			PMC_BIT32(27)
#define INTRS_SYSTEM_BUS_MMIO_ERROR		PMC_BIT32(28)
#define INTRS_IOA_PROCESSOR_ERROR		PMC_BIT32(29)
#define INTRS_HRRQ_VALID			PMC_BIT32(30)
#define INTRS_OPERATIONAL_STATUS		PMC_BIT32(0)
#define INTRS_ALLOW_MSIX_VECTOR0		PMC_BIT32(31)
#define DOORBELL_RUNTIME_RESET			PMC_BIT32(1)
#define DOORBELL_IOA_RESET_ALERT		PMC_BIT32(7)
#define DOORBELL_IOA_DEBUG_ALERT		PMC_BIT32(9)
#define DOORBELL_ENABLE_DESTRUCTIVE_DIAGS	PMC_BIT32(8)
#define DOORBELL_IOA_START_BIST			PMC_BIT32(23)
#define DOORBELL_INTR_MODE_MSIX			PMC_BIT32(25)
#define DOORBELL_INTR_MSIX_CLR			PMC_BIT32(26)
#define DOORBELL_RESET_IOA			PMC_BIT32(31)
#define GLOBAL_INTERRUPT_MASK			0x5ULL
#define PMCRAID_ERROR_INTERRUPTS	(INTRS_IOARCB_TRANSFER_FAILED | \
INTRS_IOA_UNIT_CHECK | \
INTRS_NO_HRRQ_FOR_CMD_RESPONSE | \
INTRS_IOARRIN_LOST | \
INTRS_SYSTEM_BUS_MMIO_ERROR | \
INTRS_IOA_PROCESSOR_ERROR)
#define PMCRAID_PCI_INTERRUPTS		(PMCRAID_ERROR_INTERRUPTS | \
INTRS_HRRQ_VALID | \
INTRS_TRANSITION_TO_OPERATIONAL |\
INTRS_ALLOW_MSIX_VECTOR0)
struct pmcraid_control_block  __attribute__ ((packed, aligned(PMCRAID_IOARCB_ALIGNMENT)));
struct pmcraid_sglist ;
struct pmcraid_inquiry_data ;
#define PMCRAID_TIMESTAMP_LEN		12
#define PMCRAID_REQ_TM_STR_LEN		6
#define PMCRAID_SCSI_SET_TIMESTAMP	0xA4
#define PMCRAID_SCSI_SERVICE_ACTION	0x0F
struct pmcraid_timestamp_data ;
struct pmcraid_cmd ;
struct pmcraid_interrupts ;
struct pmcraid_isr_param ;
struct pmcraid_aen_msg ;
struct pmcraid_state_msg ;
#define PMC_DEVICE_EVENT_RESET_START		0x11000000
#define PMC_DEVICE_EVENT_RESET_SUCCESS		0x11000001
#define PMC_DEVICE_EVENT_RESET_FAILED		0x11000002
#define PMC_DEVICE_EVENT_SHUTDOWN_START		0x11000003
#define PMC_DEVICE_EVENT_SHUTDOWN_SUCCESS	0x11000004
#define PMC_DEVICE_EVENT_SHUTDOWN_FAILED	0x11000005
struct pmcraid_hostrcb ;
#define PMCRAID_AEN_HDR_SIZE	sizeof(struct pmcraid_aen_msg)
struct pmcraid_instance ;
struct pmcraid_resource_entry ;
struct pmcraid_ioasc_error ;
#define IOASC_LOG_LEVEL_NONE	    0x0
#define IOASC_LOG_LEVEL_MUST        0x1
#define IOASC_LOG_LEVEL_HARD        0x2
static struct pmcraid_ioasc_error pmcraid_ioasc_error_table[] = ;
#define pmcraid_err(...)  \
printk(KERN_ERR "MaxRAID: "__VA_ARGS__)
#define pmcraid_info(...) \
if (pmcraid_debug_log) \
printk(KERN_INFO "MaxRAID: "__VA_ARGS__)
#define SCSI_READ_CMD           0x1
#define SCSI_WRITE_CMD          0x2
#define SCSI_CMD_TYPE(opcode) \
()
#define IS_SCSI_READ_WRITE(opcode) \
()
struct pmcraid_ioctl_header ;
#define PMCRAID_IOCTL_SIGNATURE      "PMCRAID"
struct pmcraid_passthrough_ioctl_buffer  __attribute__ ((packed));
#define PMCRAID_DRIVER_IOCTL         'D'
#define PMCRAID_PASSTHROUGH_IOCTL    'F'
#define DRV_IOCTL(n, size) \
_IOC(_IOC_READ|_IOC_WRITE, PMCRAID_DRIVER_IOCTL, (n), (size))
#define FMW_IOCTL(n, size) \
_IOC(_IOC_READ|_IOC_WRITE, PMCRAID_PASSTHROUGH_IOCTL,  (n), (size))
#define _ARGSIZE(arg) (sizeof(struct pmcraid_ioctl_header) + sizeof(arg))
#define PMCRAID_IOCTL_RESET_ADAPTER          \
DRV_IOCTL(5, sizeof(struct pmcraid_ioctl_header))
#define PMCRAID_IOCTL_PASSTHROUGH_COMMAND         \
FMW_IOCTL(1, sizeof(struct pmcraid_passthrough_ioctl_buffer))
#define PMCRAID_IOCTL_DOWNLOAD_MICROCODE     \
FMW_IOCTL(2, sizeof(struct pmcraid_passthrough_ioctl_buffer))
