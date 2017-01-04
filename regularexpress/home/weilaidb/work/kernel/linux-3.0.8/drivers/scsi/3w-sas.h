#define _3W_SAS_H
static char *twl_aen_severity_table[] =
;
#define TWL_STATUS                         0x0
#define TWL_HIBDB                          0x20
#define TWL_HISTAT                         0x30
#define TWL_HIMASK                         0x34
#define TWL_HOBDB			   0x9C
#define TWL_HOBDBC                         0xA0
#define TWL_SCRPD3                         0xBC
#define TWL_HIBQPL                         0xC0
#define TWL_HIBQPH                         0xC4
#define TWL_HOBQPL                         0xC8
#define TWL_HOBQPH                         0xCC
#define TWL_HISTATUS_VALID_INTERRUPT	   0xC
#define TWL_HISTATUS_ATTENTION_INTERRUPT   0x4
#define TWL_HISTATUS_RESPONSE_INTERRUPT	   0x8
#define TWL_STATUS_OVERRUN_SUBMIT	   0x2000
#define TWL_ISSUE_SOFT_RESET		   0x100
#define TWL_CONTROLLER_READY		   0x2000
#define TWL_DOORBELL_CONTROLLER_ERROR	   0x200000
#define TWL_DOORBELL_ATTENTION_INTERRUPT   0x40000
#define TWL_PULL_MODE			   0x1
#define TW_OP_INIT_CONNECTION 0x1
#define TW_OP_GET_PARAM	      0x12
#define TW_OP_SET_PARAM	      0x13
#define TW_OP_EXECUTE_SCSI    0x10
#define TW_AEN_QUEUE_EMPTY       0x0000
#define TW_AEN_SOFT_RESET        0x0001
#define TW_AEN_SYNC_TIME_WITH_HOST 0x031
#define TW_AEN_SEVERITY_ERROR    0x1
#define TW_AEN_SEVERITY_DEBUG    0x4
#define TW_AEN_NOT_RETRIEVED 0x1
#define TW_S_INITIAL   0x1
#define TW_S_STARTED   0x2
#define TW_S_POSTED    0x4
#define TW_S_COMPLETED 0x8
#define TW_S_FINISHED  0x10
#define TW_9750_ARCH_ID 10
#define TW_CURRENT_DRIVER_SRL 40
#define TW_CURRENT_DRIVER_BUILD 0
#define TW_CURRENT_DRIVER_BRANCH 0
#define TW_PHASE_INITIAL 0
#define TW_PHASE_SGLIST  2
#define TW_SECTOR_SIZE                        512
#define TW_MAX_UNITS			      32
#define TW_INIT_MESSAGE_CREDITS		      0x100
#define TW_INIT_COMMAND_PACKET_SIZE	      0x3
#define TW_INIT_COMMAND_PACKET_SIZE_EXTENDED  0x6
#define TW_EXTENDED_INIT_CONNECT	      0x2
#define TW_BASE_FW_SRL			      24
#define TW_BASE_FW_BRANCH		      0
#define TW_BASE_FW_BUILD		      1
#define TW_Q_LENGTH			      256
#define TW_Q_START			      0
#define TW_MAX_SLOT			      32
#define TW_MAX_RESET_TRIES		      2
#define TW_MAX_CMDS_PER_LUN		      254
#define TW_MAX_AEN_DRAIN		      255
#define TW_IN_RESET                           2
#define TW_USING_MSI			      3
#define TW_IN_ATTENTION_LOOP		      4
#define TW_MAX_SECTORS                        256
#define TW_MAX_CDB_LEN                        16
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
#define TW_PARAM_MODEL			      8
#define TW_PARAM_MODEL_LENGTH		      16
#define TW_PARAM_PHY_SUMMARY_TABLE	      1
#define TW_PARAM_PHYCOUNT		      2
#define TW_PARAM_PHYCOUNT_LENGTH	      1
#define TW_IOCTL_FIRMWARE_PASS_THROUGH        0x108
#define TW_ALLOCATION_LENGTH		      128
#define TW_SENSE_DATA_LENGTH		      18
#define TW_ERROR_LOGICAL_UNIT_NOT_SUPPORTED   0x10a
#define TW_ERROR_INVALID_FIELD_IN_CDB	      0x10d
#define TW_ERROR_UNIT_OFFLINE                 0x128
#define TW_MESSAGE_SOURCE_CONTROLLER_ERROR    3
#define TW_MESSAGE_SOURCE_CONTROLLER_EVENT    4
#define TW_DRIVER 			      6
#define PCI_DEVICE_ID_3WARE_9750 0x1010
#define TW_OPRES_IN(x,y) ((x << 5) | (y & 0x1f))
#define TW_OP_OUT(x) (x & 0x1f)
#define TW_OPSGL_IN(x,y) ((x << 5) | (y & 0x1f))
#define TW_SGL_OUT(x) ((x >> 5) & 0x7)
#define TW_SEV_OUT(x) (x & 0x7)
#define TW_RESID_OUT(x) ((x >> 16) & 0xffff)
#define TW_NOTMFA_OUT(x) (x & 0x1)
#define TW_REQ_LUN_IN(lun, request_id) (((lun << 12) & 0xf000) | (request_id & 0xfff))
#define TW_LUN_OUT(lun) ((lun >> 12) & 0xf)
#define TWL_STATUS_REG_ADDR(x) ((unsigned char __iomem *)x->base_addr + TWL_STATUS)
#define TWL_HOBQPL_REG_ADDR(x) ((unsigned char __iomem *)x->base_addr + TWL_HOBQPL)
#define TWL_HOBQPH_REG_ADDR(x) ((unsigned char __iomem *)x->base_addr + TWL_HOBQPH)
#define TWL_HOBDB_REG_ADDR(x) ((unsigned char __iomem *)x->base_addr + TWL_HOBDB)
#define TWL_HOBDBC_REG_ADDR(x) ((unsigned char __iomem *)x->base_addr + TWL_HOBDBC)
#define TWL_HIMASK_REG_ADDR(x) ((unsigned char __iomem *)x->base_addr + TWL_HIMASK)
#define TWL_HISTAT_REG_ADDR(x) ((unsigned char __iomem *)x->base_addr + TWL_HISTAT)
#define TWL_HIBQPH_REG_ADDR(x) ((unsigned char __iomem *)x->base_addr + TWL_HIBQPH)
#define TWL_HIBQPL_REG_ADDR(x) ((unsigned char __iomem *)x->base_addr + TWL_HIBQPL)
#define TWL_HIBDB_REG_ADDR(x) ((unsigned char __iomem *)x->base_addr + TWL_HIBDB)
#define TWL_SCRPD3_REG_ADDR(x) ((unsigned char __iomem *)x->base_addr + TWL_SCRPD3)
#define TWL_MASK_INTERRUPTS(x) (writel(~0, TWL_HIMASK_REG_ADDR(tw_dev)))
#define TWL_UNMASK_INTERRUPTS(x) (writel(~TWL_HISTATUS_VALID_INTERRUPT, TWL_HIMASK_REG_ADDR(tw_dev)))
#define TWL_CLEAR_DB_INTERRUPT(x) (writel(~0, TWL_HOBDBC_REG_ADDR(tw_dev)))
#define TWL_SOFT_RESET(x) (writel(TWL_ISSUE_SOFT_RESET, TWL_HIBDB_REG_ADDR(tw_dev)))
#define TW_PRINTK(h,a,b,c)
#define TW_MAX_LUNS 16
#define TW_COMMAND_SIZE (sizeof(dma_addr_t) > 4 ? 6 : 4)
#define TW_LIBERATOR_MAX_SGL_LENGTH (sizeof(dma_addr_t) > 4 ? 46 : 92)
#define TW_LIBERATOR_MAX_SGL_LENGTH_OLD (sizeof(dma_addr_t) > 4 ? 47 : 94)
#define TW_PADDING_LENGTH_LIBERATOR 136
#define TW_PADDING_LENGTH_LIBERATOR_OLD 132
#define TW_CPU_TO_SGL(x) (sizeof(dma_addr_t) > 4 ? cpu_to_le64(x) : cpu_to_le32(x))
typedef struct TAG_TW_SG_Entry_ISO  TW_SG_Entry_ISO;
typedef struct TW_Command  TW_Command;
typedef struct TAG_TW_Command_Apache  TW_Command_Apache;
typedef struct TAG_TW_Command_Apache_Header  TW_Command_Apache_Header;
typedef struct TAG_TW_Command_Full  TW_Command_Full;
typedef struct TAG_TW_Initconnect  TW_Initconnect;
typedef struct TAG_TW_Event
TW_Event;
typedef struct TAG_TW_Ioctl_Driver_Command  TW_Ioctl_Driver_Command;
typedef struct TAG_TW_Ioctl_Apache  TW_Ioctl_Buf_Apache;
typedef struct  TW_Param_Apache;
typedef struct TAG_TW_Compatibility_Info
TW_Compatibility_Info;
typedef struct TAG_TW_Device_Extension  TW_Device_Extension;
