#define CCISS_CMD_H
#define CISS_VERSION "1.00"
#define MAXSGENTRIES            32
#define CCISS_SG_CHAIN          0x80000000
#define MAXREPLYQS              256
#define POWER_OR_RESET			0x29
#define STATE_CHANGED			0x2a
#define UNIT_ATTENTION_CLEARED		0x2f
#define LUN_FAILED			0x3e
#define REPORT_LUNS_CHANGED		0x3f
#define POWER_ON_RESET			0x00
#define POWER_ON_REBOOT			0x01
#define SCSI_BUS_RESET			0x02
#define MSA_TARGET_RESET		0x03
#define CONTROLLER_FAILOVER		0x04
#define TRANSCEIVER_SE			0x05
#define TRANSCEIVER_LVD			0x06
#define RESERVATION_PREEMPTED		0x03
#define ASYM_ACCESS_CHANGED		0x06
#define LUN_CAPACITY_CHANGED		0x09
#define CFG_VENDORID            0x00
#define CFG_DEVICEID            0x02
#define CFG_I2OBAR              0x10
#define CFG_MEM1BAR             0x14
#define I2O_IBDB_SET            0x20
#define I2O_IBDB_CLEAR          0x70
#define I2O_INT_STATUS          0x30
#define I2O_INT_MASK            0x34
#define I2O_IBPOST_Q            0x40
#define I2O_OBPOST_Q            0x44
#define I2O_DMA1_CFG		0x214
#define CFGTBL_ChangeReq        0x00000001l
#define CFGTBL_AccCmds          0x00000001l
#define DOORBELL_CTLR_RESET     0x00000004l
#define DOORBELL_CTLR_RESET2    0x00000020l
#define CFGTBL_Trans_Simple     0x00000002l
#define CFGTBL_Trans_Performant 0x00000004l
#define CFGTBL_Trans_use_short_tags 0x20000000l
#define CFGTBL_BusType_Ultra2   0x00000001l
#define CFGTBL_BusType_Ultra3   0x00000002l
#define CFGTBL_BusType_Fibre1G  0x00000100l
#define CFGTBL_BusType_Fibre2G  0x00000200l
typedef struct _vals32
vals32;
typedef union _u64bit
u64bit;
#define QWORD vals32
#define CISS_MAX_PHYS_LUN	1024
#define CISS_INQUIRY 0x12
typedef struct _InquiryData_struct
InquiryData_struct;
#define CISS_REPORT_LOG 0xc2
#define CISS_REPORT_PHYS 0xc3
typedef struct _ReportLUNdata_struct
ReportLunData_struct;
#define CCISS_READ_CAPACITY 0x25
typedef struct _ReadCapdata_struct
ReadCapdata_struct;
#define CCISS_READ_CAPACITY_16 0x9e
#define CCISS_READ_CAPACITY_16_SERVICE_ACT 0x10
typedef struct _ReadCapdata_struct_16
ReadCapdata_struct_16;
#define CCISS_READ_10   0x28
#define CCISS_WRITE_10  0x2a
#define CCISS_READ_16   0x88
#define CCISS_WRITE_16  0x8a
#define CDB_LEN10	10
#define CDB_LEN16	16
#define BMIC_READ 0x26
#define BMIC_WRITE 0x27
#define BMIC_CACHE_FLUSH 0xc2
#define CCISS_CACHE_FLUSH 0x01
#define CCISS_ABORT_MSG 0x00
#define CCISS_RESET_MSG 0x01
#define CCISS_RESET_TYPE_CONTROLLER 0x00
#define CCISS_RESET_TYPE_BUS 0x01
#define CCISS_RESET_TYPE_TARGET 0x03
#define CCISS_RESET_TYPE_LUN 0x04
#define CCISS_NOOP_MSG 0x03
#define CTLR_LUNID "\0\0\0\0\0\0\0\0"
typedef struct _CommandListHeader_struct  CommandListHeader_struct;
typedef struct _ErrDescriptor_struct  ErrDescriptor_struct;
typedef struct _SGDescriptor_struct  SGDescriptor_struct;
#define CMD_RWREQ       0x00
#define CMD_IOCTL_PEND  0x01
#define CMD_SCSI	0x03
#define CMD_MSG_DONE	0x04
#define CMD_MSG_TIMEOUT 0x05
#define CMD_MSG_STALE	0xff
#define COMMANDLIST_ALIGNMENT (32)
#define IS_64_BIT ((sizeof(long) - 4)/4)
#define IS_32_BIT (!IS_64_BIT)
#define PAD_32 (0)
#define PAD_64 (4)
#define PADSIZE (IS_32_BIT * PAD_32 + IS_64_BIT * PAD_64)
#define DIRECT_LOOKUP_BIT 0x10
#define DIRECT_LOOKUP_SHIFT 5
typedef struct _CommandList_struct  CommandList_struct;
typedef struct _HostWrite_struct  HostWrite_struct;
typedef struct _CfgTable_struct  CfgTable_struct;
struct TransTable_struct ;
