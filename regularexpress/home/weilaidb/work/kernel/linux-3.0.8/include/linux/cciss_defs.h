#define CCISS_DEFS_H
#define SENSEINFOBYTES          32
#define CMD_SUCCESS             0x0000
#define CMD_TARGET_STATUS       0x0001
#define CMD_DATA_UNDERRUN       0x0002
#define CMD_DATA_OVERRUN        0x0003
#define CMD_INVALID             0x0004
#define CMD_PROTOCOL_ERR        0x0005
#define CMD_HARDWARE_ERR        0x0006
#define CMD_CONNECTION_LOST     0x0007
#define CMD_ABORTED             0x0008
#define CMD_ABORT_FAILED        0x0009
#define CMD_UNSOLICITED_ABORT   0x000A
#define CMD_TIMEOUT             0x000B
#define CMD_UNABORTABLE		0x000C
#define XFER_NONE               0x00
#define XFER_WRITE              0x01
#define XFER_READ               0x02
#define XFER_RSVD               0x03
#define ATTR_UNTAGGED           0x00
#define ATTR_SIMPLE             0x04
#define ATTR_HEADOFQUEUE        0x05
#define ATTR_ORDERED            0x06
#define ATTR_ACA                0x07
#define TYPE_CMD				0x00
#define TYPE_MSG				0x01
#define BYTE __u8
#define WORD __u16
#define HWORD __u16
#define DWORD __u32
#define CISS_MAX_LUN	1024
#define LEVEL2LUN   1
#define LEVEL3LUN   0
typedef union _SCSI3Addr_struct  SCSI3Addr_struct;
typedef struct _PhysDevAddr_struct  PhysDevAddr_struct;
typedef struct _LogDevAddr_struct  LogDevAddr_struct;
typedef union _LUNAddr_struct  LUNAddr_struct;
typedef struct _RequestBlock_struct  RequestBlock_struct;
typedef union _MoreErrInfo_struct MoreErrInfo_struct;
typedef struct _ErrorInfo_struct  ErrorInfo_struct;
