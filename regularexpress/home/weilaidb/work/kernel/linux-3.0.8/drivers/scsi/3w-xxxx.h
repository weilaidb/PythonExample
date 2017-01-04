#define _3W_XXXX_H
static char *tw_aen_string[] = ;
static unsigned char tw_sense_table[][4] =
;
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
#define TW_CONTROL_CLEAR_SBUF_WRITE_ERROR      0x00000008
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
#define TW_STATUS_ALL_INTERRUPTS	       0x000F0000
#define TW_STATUS_CLEARABLE_BITS	       0x00D00000
#define TW_STATUS_EXPECTED_BITS		       0x00002000
#define TW_STATUS_UNEXPECTED_BITS	       0x00F00008
#define TW_STATUS_SBUF_WRITE_ERROR             0x00000008
#define TW_STATUS_VALID_INTERRUPT              0x00DF0008
#define TW_RESPONSE_ID_MASK		       0x00000FF0
#define TW_IO_ADDRESS_RANGE		       0x10
#define TW_DEVICE_NAME			       "3ware Storage Controller"
#define TW_VENDOR_ID (0x13C1)
#define TW_DEVICE_ID (0x1000)
#define TW_DEVICE_ID2 (0x1001)
#define TW_NUMDEVICES 2
#define TW_PCI_CLEAR_PARITY_ERRORS 0xc100
#define TW_PCI_CLEAR_PCI_ABORT     0x2000
#define TW_OP_NOP	      0x0
#define TW_OP_INIT_CONNECTION 0x1
#define TW_OP_READ	      0x2
#define TW_OP_WRITE	      0x3
#define TW_OP_VERIFY	      0x4
#define TW_OP_GET_PARAM	      0x12
#define TW_OP_SET_PARAM	      0x13
#define TW_OP_SECTOR_INFO     0x1a
#define TW_OP_AEN_LISTEN      0x1c
#define TW_OP_FLUSH_CACHE     0x0e
#define TW_CMD_PACKET         0x1d
#define TW_CMD_PACKET_WITH_DATA 0x1f
#define TW_AEN_QUEUE_EMPTY       0x0000
#define TW_AEN_SOFT_RESET        0x0001
#define TW_AEN_DEGRADED_MIRROR   0x0002
#define TW_AEN_CONTROLLER_ERROR  0x0003
#define TW_AEN_REBUILD_FAIL      0x0004
#define TW_AEN_REBUILD_DONE      0x0005
#define TW_AEN_QUEUE_FULL        0x00ff
#define TW_AEN_TABLE_UNDEFINED   0x15
#define TW_AEN_APORT_TIMEOUT     0x0009
#define TW_AEN_DRIVE_ERROR       0x000A
#define TW_AEN_SMART_FAIL        0x000F
#define TW_AEN_SBUF_FAIL         0x0024
#define TW_PHASE_INITIAL 0
#define TW_PHASE_SINGLE 1
#define TW_PHASE_SGLIST 2
#define TW_ALIGNMENT_6000		      64
#define TW_ALIGNMENT_7000                     4
#define TW_MAX_UNITS			      16
#define TW_COMMAND_ALIGNMENT_MASK	      0x1ff
#define TW_INIT_MESSAGE_CREDITS		      0x100
#define TW_INIT_COMMAND_PACKET_SIZE	      0x3
#define TW_POLL_MAX_RETRIES        	      20000
#define TW_MAX_SGL_LENGTH		      62
#define TW_ATA_PASS_SGL_MAX                   60
#define TW_Q_LENGTH			      256
#define TW_Q_START			      0
#define TW_MAX_SLOT			      32
#define TW_MAX_PCI_BUSES		      255
#define TW_MAX_RESET_TRIES		      3
#define TW_UNIT_INFORMATION_TABLE_BASE	      0x300
#define TW_MAX_CMDS_PER_LUN		      254
#define TW_BLOCK_SIZE			      0x200
#define TW_IOCTL                              0x80
#define TW_UNIT_ONLINE                        1
#define TW_IN_INTR                            1
#define TW_IN_RESET                           2
#define TW_IN_CHRDEV_IOCTL                    3
#define TW_MAX_SECTORS                        256
#define TW_MAX_IOCTL_SECTORS		      512
#define TW_AEN_WAIT_TIME                      1000
#define TW_IOCTL_WAIT_TIME                    (1 * HZ)
#define TW_ISR_DONT_COMPLETE                  2
#define TW_ISR_DONT_RESULT                    3
#define TW_IOCTL_TIMEOUT                      25
#define TW_IOCTL_CHRDEV_TIMEOUT               60
#define TW_IOCTL_CHRDEV_FREE                  -1
#define TW_DMA_MASK			      DMA_BIT_MASK(32)
#define TW_MAX_CDB_LEN			      16
#define TW_OPSGL_IN(x,y) ((x << 5) | (y & 0x1f))
#define TW_SGL_OUT(x) ((x >> 5) & 0x7)
#define TW_RESID_OUT(x) ((x >> 4) & 0xff)
#define TW_UNITHOST_IN(x,y) ((x << 4) | ( y & 0xf))
#define TW_UNIT_OUT(x) (x & 0xf)
#define TW_CONTROL_REG_ADDR(x) (x->base_addr)
#define TW_STATUS_REG_ADDR(x) (x->base_addr + 0x4)
#define TW_COMMAND_QUEUE_REG_ADDR(x) (x->base_addr + 0x8)
#define TW_RESPONSE_QUEUE_REG_ADDR(x) (x->base_addr + 0xC)
#define TW_CLEAR_ALL_INTERRUPTS(x) (outl(TW_STATUS_VALID_INTERRUPT, TW_CONTROL_REG_ADDR(x)))
#define TW_CLEAR_ATTENTION_INTERRUPT(x) (outl(TW_CONTROL_CLEAR_ATTENTION_INTERRUPT, TW_CONTROL_REG_ADDR(x)))
#define TW_CLEAR_HOST_INTERRUPT(x) (outl(TW_CONTROL_CLEAR_HOST_INTERRUPT, TW_CONTROL_REG_ADDR(x)))
#define TW_DISABLE_INTERRUPTS(x) (outl(TW_CONTROL_DISABLE_INTERRUPTS, TW_CONTROL_REG_ADDR(x)))
#define TW_ENABLE_AND_CLEAR_INTERRUPTS(x) (outl(TW_CONTROL_CLEAR_ATTENTION_INTERRUPT | TW_CONTROL_UNMASK_RESPONSE_INTERRUPT | TW_CONTROL_ENABLE_INTERRUPTS, TW_CONTROL_REG_ADDR(x)))
#define TW_MASK_COMMAND_INTERRUPT(x) (outl(TW_CONTROL_MASK_COMMAND_INTERRUPT, TW_CONTROL_REG_ADDR(x)))
#define TW_UNMASK_COMMAND_INTERRUPT(x) (outl(TW_CONTROL_UNMASK_COMMAND_INTERRUPT, TW_CONTROL_REG_ADDR(x)))
#define TW_SOFT_RESET(x) (outl(TW_CONTROL_ISSUE_SOFT_RESET | \
TW_CONTROL_CLEAR_HOST_INTERRUPT | \
TW_CONTROL_CLEAR_ATTENTION_INTERRUPT | \
TW_CONTROL_MASK_COMMAND_INTERRUPT | \
TW_CONTROL_MASK_RESPONSE_INTERRUPT | \
TW_CONTROL_CLEAR_ERROR_STATUS | \
TW_CONTROL_DISABLE_INTERRUPTS, TW_CONTROL_REG_ADDR(x)))
#define TW_STATUS_ERRORS(x) \
(((x & TW_STATUS_PCI_ABORT) || \
(x & TW_STATUS_PCI_PARITY_ERROR) || \
(x & TW_STATUS_QUEUE_ERROR) || \
(x & TW_STATUS_MICROCONTROLLER_ERROR)) && \
(x & TW_STATUS_MICROCONTROLLER_READY))
#define dprintk(msg...) printk(msg)
#define dprintk(msg...) do  while(0)
typedef struct TAG_TW_SG_Entry  TW_SG_Entry;
typedef unsigned char TW_Sector[512];
typedef struct TW_Command  TW_Command;
typedef struct TAG_TW_Ioctl  TW_Ioctl;
typedef struct TAG_TW_New_Ioctl  TW_New_Ioctl;
typedef struct  TW_Param, *PTW_Param;
typedef union TAG_TW_Response_Queue  TW_Response_Queue;
typedef int TW_Cmd_State;
#define TW_S_INITIAL   0x1
#define TW_S_STARTED   0x2
#define TW_S_POSTED    0x4
#define TW_S_PENDING   0x8
#define TW_S_COMPLETED 0x10
#define TW_S_FINISHED  0x20
#define TW_START_MASK (TW_S_STARTED | TW_S_POSTED | TW_S_PENDING | TW_S_COMPLETED)
typedef struct TAG_TW_Passthru
TW_Passthru;
typedef struct TAG_TW_Device_Extension  TW_Device_Extension;
