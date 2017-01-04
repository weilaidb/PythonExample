#define _3W_9XXX_H
typedef struct TAG_twa_message_type  twa_message_type;
static twa_message_type twa_aen_table[] = ;
static char *twa_aen_severity_table[] =
;
static twa_message_type twa_error_table[] = ;
#define TW_CONTROL_CLEAR_HOST_INTERRUPT	       0x00080000
#define TW_CONTROL_CLEAR_ATTENTION_INTERRUPT   0x00040000
#define TW_CONTROL_MASK_COMMAND_INTERRUPT      0x00020000
#define TW_CONTROL_MASK_RESPONSE_INTERRUPT     0x00010000
#define TW_CONTROL_UNMASK_COMMAND_INTERRUPT    0x00008000
#define TW_CONTROL_UNMASK_RESPONSE_INTERRUPT   0x00004000
#define TW_CONTROL_CLEAR_ERROR_STATUS	       0x00000200
#define TW_CONTROL_ISSUE_SOFT_RESET	       0x00000100
#define TW_CONTROL_ENABLE_INTERRUPTS	       0x00000080
#define TW_CONTROL_DISABLE_INTERRUPTS	       0x00000040
#define TW_CONTROL_ISSUE_HOST_INTERRUPT	       0x00000020
#define TW_CONTROL_CLEAR_PARITY_ERROR          0x00800000
#define TW_CONTROL_CLEAR_QUEUE_ERROR           0x00400000
#define TW_CONTROL_CLEAR_PCI_ABORT             0x00100000
#define TW_STATUS_MAJOR_VERSION_MASK	       0xF0000000
#define TW_STATUS_MINOR_VERSION_MASK	       0x0F000000
#define TW_STATUS_PCI_PARITY_ERROR	       0x00800000
#define TW_STATUS_QUEUE_ERROR		       0x00400000
#define TW_STATUS_MICROCONTROLLER_ERROR	       0x00200000
#define TW_STATUS_PCI_ABORT		       0x00100000
#define TW_STATUS_HOST_INTERRUPT	       0x00080000
#define TW_STATUS_ATTENTION_INTERRUPT	       0x00040000
#define TW_STATUS_COMMAND_INTERRUPT	       0x00020000
#define TW_STATUS_RESPONSE_INTERRUPT	       0x00010000
#define TW_STATUS_COMMAND_QUEUE_FULL	       0x00008000
#define TW_STATUS_RESPONSE_QUEUE_EMPTY	       0x00004000
#define TW_STATUS_MICROCONTROLLER_READY	       0x00002000
#define TW_STATUS_COMMAND_QUEUE_EMPTY	       0x00001000
#define TW_STATUS_EXPECTED_BITS		       0x00002000
#define TW_STATUS_UNEXPECTED_BITS	       0x00F00000
#define TW_STATUS_VALID_INTERRUPT              0x00DF0000
#define TW_PCI_CLEAR_PARITY_ERRORS 0xc100
#define TW_PCI_CLEAR_PCI_ABORT     0x2000
#define TW_OP_INIT_CONNECTION 0x1
#define TW_OP_GET_PARAM	      0x12
#define TW_OP_SET_PARAM	      0x13
#define TW_OP_EXECUTE_SCSI    0x10
#define TW_OP_DOWNLOAD_FIRMWARE 0x16
#define TW_OP_RESET             0x1C
#define TW_AEN_QUEUE_EMPTY       0x0000
#define TW_AEN_SOFT_RESET        0x0001
#define TW_AEN_SYNC_TIME_WITH_HOST 0x031
#define TW_AEN_SEVERITY_ERROR    0x1
#define TW_AEN_SEVERITY_DEBUG    0x4
#define TW_AEN_NOT_RETRIEVED 0x1
#define TW_AEN_RETRIEVED 0x2
#define TW_S_INITIAL   0x1
#define TW_S_STARTED   0x2
#define TW_S_POSTED    0x4
#define TW_S_PENDING   0x8
#define TW_S_COMPLETED 0x10
#define TW_S_FINISHED  0x20
#define TW_9000_ARCH_ID 0x5
#define TW_CURRENT_DRIVER_SRL 35
#define TW_CURRENT_DRIVER_BUILD 0
#define TW_CURRENT_DRIVER_BRANCH 0
#define TW_PHASE_INITIAL 0
#define TW_PHASE_SINGLE  1
#define TW_PHASE_SGLIST  2
#define TW_9550SX_DRAIN_COMPLETED	      0xFFFF
#define TW_SECTOR_SIZE                        512
#define TW_ALIGNMENT_9000                     4
#define TW_ALIGNMENT_9000_SGL                 0x3
#define TW_MAX_UNITS			      16
#define TW_MAX_UNITS_9650SE		      32
#define TW_INIT_MESSAGE_CREDITS		      0x100
#define TW_INIT_COMMAND_PACKET_SIZE	      0x3
#define TW_INIT_COMMAND_PACKET_SIZE_EXTENDED  0x6
#define TW_EXTENDED_INIT_CONNECT	      0x2
#define TW_BUNDLED_FW_SAFE_TO_FLASH	      0x4
#define TW_CTLR_FW_RECOMMENDS_FLASH	      0x8
#define TW_CTLR_FW_COMPATIBLE		      0x2
#define TW_BASE_FW_SRL			      24
#define TW_BASE_FW_BRANCH		      0
#define TW_BASE_FW_BUILD		      1
#define TW_FW_SRL_LUNS_SUPPORTED              28
#define TW_Q_LENGTH			      256
#define TW_Q_START			      0
#define TW_MAX_SLOT			      32
#define TW_MAX_RESET_TRIES		      2
#define TW_MAX_CMDS_PER_LUN		      254
#define TW_MAX_RESPONSE_DRAIN		      256
#define TW_MAX_AEN_DRAIN		      255
#define TW_IN_RESET                           2
#define TW_USING_MSI			      3
#define TW_IN_ATTENTION_LOOP		      4
#define TW_MAX_SECTORS                        256
#define TW_AEN_WAIT_TIME                      1000
#define TW_IOCTL_WAIT_TIME                    (1 * HZ)
#define TW_MAX_CDB_LEN                        16
#define TW_ISR_DONT_COMPLETE                  2
#define TW_ISR_DONT_RESULT                    3
#define TW_IOCTL_CHRDEV_TIMEOUT               60
#define TW_IOCTL_CHRDEV_FREE                  -1
#define TW_COMMAND_OFFSET                     128
#define TW_VERSION_TABLE                      0x0402
#define TW_TIMEKEEP_TABLE		      0x040A
#define TW_INFORMATION_TABLE		      0x0403
#define TW_PARAM_FWVER			      3
#define TW_PARAM_FWVER_LENGTH		      16
#define TW_PARAM_BIOSVER		      4
#define TW_PARAM_BIOSVER_LENGTH		      16
#define TW_PARAM_PORTCOUNT		      3
#define TW_PARAM_PORTCOUNT_LENGTH	      1
#define TW_MIN_SGL_LENGTH                     0x200
#define TW_MAX_SENSE_LENGTH                   256
#define TW_EVENT_SOURCE_AEN                   0x1000
#define TW_EVENT_SOURCE_COMMAND               0x1001
#define TW_EVENT_SOURCE_PCHIP                 0x1002
#define TW_EVENT_SOURCE_DRIVER                0x1003
#define TW_IOCTL_GET_COMPATIBILITY_INFO	      0x101
#define TW_IOCTL_GET_LAST_EVENT               0x102
#define TW_IOCTL_GET_FIRST_EVENT              0x103
#define TW_IOCTL_GET_NEXT_EVENT               0x104
#define TW_IOCTL_GET_PREVIOUS_EVENT           0x105
#define TW_IOCTL_GET_LOCK                     0x106
#define TW_IOCTL_RELEASE_LOCK                 0x107
#define TW_IOCTL_FIRMWARE_PASS_THROUGH        0x108
#define TW_IOCTL_ERROR_STATUS_NOT_LOCKED      0x1001
#define TW_IOCTL_ERROR_STATUS_LOCKED          0x1002
#define TW_IOCTL_ERROR_STATUS_NO_MORE_EVENTS  0x1003
#define TW_IOCTL_ERROR_STATUS_AEN_CLOBBER     0x1004
#define TW_IOCTL_ERROR_OS_EFAULT	      -EFAULT
#define TW_IOCTL_ERROR_OS_EINTR		      -EINTR
#define TW_IOCTL_ERROR_OS_EINVAL	      -EINVAL
#define TW_IOCTL_ERROR_OS_ENOMEM	      -ENOMEM
#define TW_IOCTL_ERROR_OS_ERESTARTSYS	      -ERESTARTSYS
#define TW_IOCTL_ERROR_OS_EIO		      -EIO
#define TW_IOCTL_ERROR_OS_ENOTTY	      -ENOTTY
#define TW_IOCTL_ERROR_OS_ENODEV	      -ENODEV
#define TW_ALLOCATION_LENGTH		      128
#define TW_SENSE_DATA_LENGTH		      18
#define TW_STATUS_CHECK_CONDITION	      2
#define TW_ERROR_LOGICAL_UNIT_NOT_SUPPORTED   0x10a
#define TW_ERROR_UNIT_OFFLINE                 0x128
#define TW_MESSAGE_SOURCE_CONTROLLER_ERROR    3
#define TW_MESSAGE_SOURCE_CONTROLLER_EVENT    4
#define TW_MESSAGE_SOURCE_LINUX_DRIVER        6
#define TW_DRIVER TW_MESSAGE_SOURCE_LINUX_DRIVER
#define TW_MESSAGE_SOURCE_LINUX_OS            9
#define TW_OS TW_MESSAGE_SOURCE_LINUX_OS
#define PCI_DEVICE_ID_3WARE_9000 0x1002
#define PCI_DEVICE_ID_3WARE_9550SX 0x1003
#define PCI_DEVICE_ID_3WARE_9650SE 0x1004
#define PCI_DEVICE_ID_3WARE_9690SA 0x1005
#define TW_OPRES_IN(x,y) ((x << 5) | (y & 0x1f))
#define TW_OP_OUT(x) (x & 0x1f)
#define TW_OPSGL_IN(x,y) ((x << 5) | (y & 0x1f))
#define TW_SGL_OUT(x) ((x >> 5) & 0x7)
#define TW_SEV_OUT(x) (x & 0x7)
#define TW_RESID_OUT(x) ((x >> 4) & 0xff)
#define TW_REQ_LUN_IN(lun, request_id) (((lun << 12) & 0xf000) | (request_id & 0xfff))
#define TW_LUN_OUT(lun) ((lun >> 12) & 0xf)
#define TW_CONTROL_REG_ADDR(x) (x->base_addr)
#define TW_STATUS_REG_ADDR(x) ((unsigned char __iomem *)x->base_addr + 0x4)
#define TW_COMMAND_QUEUE_REG_ADDR(x) (sizeof(dma_addr_t) > 4 ? ((unsigned char __iomem *)x->base_addr + 0x20) : ((unsigned char __iomem *)x->base_addr + 0x8))
#define TW_COMMAND_QUEUE_REG_ADDR_LARGE(x) ((unsigned char __iomem *)x->base_addr + 0x20)
#define TW_RESPONSE_QUEUE_REG_ADDR(x) ((unsigned char __iomem *)x->base_addr + 0xC)
#define TW_RESPONSE_QUEUE_REG_ADDR_LARGE(x) ((unsigned char __iomem *)x->base_addr + 0x30)
#define TW_CLEAR_ALL_INTERRUPTS(x) (writel(TW_STATUS_VALID_INTERRUPT, TW_CONTROL_REG_ADDR(x)))
#define TW_CLEAR_ATTENTION_INTERRUPT(x) (writel(TW_CONTROL_CLEAR_ATTENTION_INTERRUPT, TW_CONTROL_REG_ADDR(x)))
#define TW_CLEAR_HOST_INTERRUPT(x) (writel(TW_CONTROL_CLEAR_HOST_INTERRUPT, TW_CONTROL_REG_ADDR(x)))
#define TW_DISABLE_INTERRUPTS(x) (writel(TW_CONTROL_DISABLE_INTERRUPTS, TW_CONTROL_REG_ADDR(x)))
#define TW_ENABLE_AND_CLEAR_INTERRUPTS(x) (writel(TW_CONTROL_CLEAR_ATTENTION_INTERRUPT | TW_CONTROL_UNMASK_RESPONSE_INTERRUPT | TW_CONTROL_ENABLE_INTERRUPTS, TW_CONTROL_REG_ADDR(x)))
#define TW_MASK_COMMAND_INTERRUPT(x) (writel(TW_CONTROL_MASK_COMMAND_INTERRUPT, TW_CONTROL_REG_ADDR(x)))
#define TW_UNMASK_COMMAND_INTERRUPT(x) (writel(TW_CONTROL_UNMASK_COMMAND_INTERRUPT, TW_CONTROL_REG_ADDR(x)))
#define TW_SOFT_RESET(x) (writel(TW_CONTROL_ISSUE_SOFT_RESET | \
TW_CONTROL_CLEAR_HOST_INTERRUPT | \
TW_CONTROL_CLEAR_ATTENTION_INTERRUPT | \
TW_CONTROL_MASK_COMMAND_INTERRUPT | \
TW_CONTROL_MASK_RESPONSE_INTERRUPT | \
TW_CONTROL_CLEAR_ERROR_STATUS | \
TW_CONTROL_DISABLE_INTERRUPTS, TW_CONTROL_REG_ADDR(x)))
#define TW_PRINTK(h,a,b,c)
#define TW_MAX_LUNS(srl) (srl < TW_FW_SRL_LUNS_SUPPORTED ? 1 : 16)
#define TW_COMMAND_SIZE (sizeof(dma_addr_t) > 4 ? 5 : 4)
#define TW_APACHE_MAX_SGL_LENGTH (sizeof(dma_addr_t) > 4 ? 72 : 109)
#define TW_ESCALADE_MAX_SGL_LENGTH (sizeof(dma_addr_t) > 4 ? 41 : 62)
#define TW_PADDING_LENGTH (sizeof(dma_addr_t) > 4 ? 8 : 0)
#define TW_CPU_TO_SGL(x) (sizeof(dma_addr_t) > 4 ? cpu_to_le64(x) : cpu_to_le32(x))
typedef struct TAG_TW_SG_Entry  TW_SG_Entry;
typedef struct TW_Command  TW_Command;
typedef struct TAG_TW_Command_Apache  TW_Command_Apache;
typedef struct TAG_TW_Command_Apache_Header  TW_Command_Apache_Header;
typedef struct TAG_TW_Command_Full  TW_Command_Full;
typedef struct TAG_TW_Initconnect  TW_Initconnect;
typedef struct TAG_TW_Event
TW_Event;
typedef struct TAG_TW_Ioctl_Driver_Command  TW_Ioctl_Driver_Command;
typedef struct TAG_TW_Ioctl_Apache  TW_Ioctl_Buf_Apache;
typedef struct TAG_TW_Lock  TW_Lock;
typedef struct  TW_Param_Apache, *PTW_Param_Apache;
typedef union TAG_TW_Response_Queue  TW_Response_Queue;
typedef struct TAG_TW_Compatibility_Info
TW_Compatibility_Info;
typedef struct TAG_TW_Device_Extension  TW_Device_Extension;
