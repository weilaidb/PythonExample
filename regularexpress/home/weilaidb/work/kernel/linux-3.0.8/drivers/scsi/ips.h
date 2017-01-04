#define _IPS_H_
#define IPS_HA(x)                   ((ips_ha_t *) x->hostdata)
#define IPS_COMMAND_ID(ha, scb)     (int) (scb - ha->scbs)
#define IPS_IS_TROMBONE(ha)         (((ha->pcidev->device == IPS_DEVICEID_COPPERHEAD) && \
(ha->pcidev->revision >= IPS_REVID_TROMBONE32) && \
(ha->pcidev->revision <= IPS_REVID_TROMBONE64)) ? 1 : 0)
#define IPS_IS_CLARINET(ha)         (((ha->pcidev->device == IPS_DEVICEID_COPPERHEAD) && \
(ha->pcidev->revision >= IPS_REVID_CLARINETP1) && \
(ha->pcidev->revision <= IPS_REVID_CLARINETP3)) ? 1 : 0)
#define IPS_IS_MORPHEUS(ha)         (ha->pcidev->device == IPS_DEVICEID_MORPHEUS)
#define IPS_IS_MARCO(ha)            (ha->pcidev->device == IPS_DEVICEID_MARCO)
#define IPS_USE_I2O_DELIVER(ha)     ((IPS_IS_MORPHEUS(ha) || \
(IPS_IS_TROMBONE(ha) && \
(ips_force_i2o))) ? 1 : 0)
#define IPS_USE_MEMIO(ha)           ((IPS_IS_MORPHEUS(ha) || \
((IPS_IS_TROMBONE(ha) || IPS_IS_CLARINET(ha)) && \
(ips_force_memio))) ? 1 : 0)
#define IPS_HAS_ENH_SGLIST(ha)    (IPS_IS_MORPHEUS(ha) || IPS_IS_MARCO(ha))
#define IPS_USE_ENH_SGLIST(ha)    ((ha)->flags & IPS_HA_ENH_SG)
#define IPS_SGLIST_SIZE(ha)       (IPS_USE_ENH_SGLIST(ha) ? \
sizeof(IPS_ENH_SG_LIST) : sizeof(IPS_STD_SG_LIST))
#define IPS_PRINTK(level, pcidev, format, arg...)                 \
dev_printk(level , &((pcidev)->dev) , format , ## arg)
#define MDELAY(n)			\
do  while (0)
#define min(x,y) ((x) < (y) ? x : y)
#define __iomem
#define pci_dma_hi32(a)         ((a >> 16) >> 16)
#define pci_dma_lo32(a)         (a & 0xffffffff)
#if (BITS_PER_LONG > 32) || defined(CONFIG_HIGHMEM64G)
#define IPS_ENABLE_DMA64        (1)
#define IPS_ENABLE_DMA64        (0)
#define IPS_REG_HISR                 0x08
#define IPS_REG_CCSAR                0x10
#define IPS_REG_CCCR                 0x14
#define IPS_REG_SQHR                 0x20
#define IPS_REG_SQTR                 0x24
#define IPS_REG_SQER                 0x28
#define IPS_REG_SQSR                 0x2C
#define IPS_REG_SCPR                 0x05
#define IPS_REG_ISPR                 0x06
#define IPS_REG_CBSP                 0x07
#define IPS_REG_FLAP                 0x18
#define IPS_REG_FLDP                 0x1C
#define IPS_REG_NDAE                 0x38
#define IPS_REG_I2O_INMSGQ           0x40
#define IPS_REG_I2O_OUTMSGQ          0x44
#define IPS_REG_I2O_HIR              0x30
#define IPS_REG_I960_IDR             0x20
#define IPS_REG_I960_MSG0            0x18
#define IPS_REG_I960_MSG1            0x1C
#define IPS_REG_I960_OIMR            0x34
#define IPS_BIT_GHI                  0x04
#define IPS_BIT_SQO                  0x02
#define IPS_BIT_SCE                  0x01
#define IPS_BIT_SEM                  0x08
#define IPS_BIT_ILE                  0x10
#define IPS_BIT_START_CMD            0x101A
#define IPS_BIT_START_STOP           0x0002
#define IPS_BIT_RST                  0x80
#define IPS_BIT_EBM                  0x02
#define IPS_BIT_EI                   0x80
#define IPS_BIT_OP                   0x01
#define IPS_BIT_I2O_OPQI             0x08
#define IPS_BIT_I960_MSG0I           0x01
#define IPS_BIT_I960_MSG1I           0x02
#define IPS_CMD_GET_LD_INFO          0x19
#define IPS_CMD_GET_SUBSYS           0x40
#define IPS_CMD_READ_CONF            0x38
#define IPS_CMD_RW_NVRAM_PAGE        0xBC
#define IPS_CMD_READ                 0x02
#define IPS_CMD_WRITE                0x03
#define IPS_CMD_FFDC                 0xD7
#define IPS_CMD_ENQUIRY              0x05
#define IPS_CMD_FLUSH                0x0A
#define IPS_CMD_READ_SG              0x82
#define IPS_CMD_WRITE_SG             0x83
#define IPS_CMD_DCDB                 0x04
#define IPS_CMD_DCDB_SG              0x84
#define IPS_CMD_EXTENDED_DCDB 	    0x95
#define IPS_CMD_EXTENDED_DCDB_SG	    0x96
#define IPS_CMD_CONFIG_SYNC          0x58
#define IPS_CMD_ERROR_TABLE          0x17
#define IPS_CMD_DOWNLOAD             0x20
#define IPS_CMD_RW_BIOSFW            0x22
#define IPS_CMD_GET_VERSION_INFO     0xC6
#define IPS_CMD_RESET_CHANNEL        0x1A
#define IPS_CSL                      0xFF
#define IPS_POCL                     0x30
#define IPS_NORM_STATE               0x00
#define IPS_MAX_ADAPTER_TYPES        3
#define IPS_MAX_ADAPTERS             16
#define IPS_MAX_IOCTL                1
#define IPS_MAX_IOCTL_QUEUE          8
#define IPS_MAX_QUEUE                128
#define IPS_BLKSIZE                  512
#define IPS_MAX_SG                   17
#define IPS_MAX_LD                   8
#define IPS_MAX_CHANNELS             4
#define IPS_MAX_TARGETS              15
#define IPS_MAX_CHUNKS               16
#define IPS_MAX_CMDS                 128
#define IPS_MAX_XFER                 0x10000
#define IPS_NVRAM_P5_SIG             0xFFDDBB99
#define IPS_MAX_POST_BYTES           0x02
#define IPS_MAX_CONFIG_BYTES         0x02
#define IPS_GOOD_POST_STATUS         0x80
#define IPS_SEM_TIMEOUT              2000
#define IPS_IOCTL_COMMAND            0x0D
#define IPS_INTR_ON                  0
#define IPS_INTR_IORL                1
#define IPS_FFDC                     99
#define IPS_ADAPTER_ID               0xF
#define IPS_VENDORID_IBM             0x1014
#define IPS_VENDORID_ADAPTEC         0x9005
#define IPS_DEVICEID_COPPERHEAD      0x002E
#define IPS_DEVICEID_MORPHEUS        0x01BD
#define IPS_DEVICEID_MARCO           0x0250
#define IPS_SUBDEVICEID_4M           0x01BE
#define IPS_SUBDEVICEID_4L           0x01BF
#define IPS_SUBDEVICEID_4MX          0x0208
#define IPS_SUBDEVICEID_4LX          0x020E
#define IPS_SUBDEVICEID_5I2          0x0259
#define IPS_SUBDEVICEID_5I1          0x0258
#define IPS_SUBDEVICEID_6M           0x0279
#define IPS_SUBDEVICEID_6I           0x028C
#define IPS_SUBDEVICEID_7k           0x028E
#define IPS_SUBDEVICEID_7M           0x028F
#define IPS_IOCTL_SIZE               8192
#define IPS_STATUS_SIZE              4
#define IPS_STATUS_Q_SIZE            (IPS_MAX_CMDS+1) * IPS_STATUS_SIZE
#define IPS_IMAGE_SIZE               500 * 1024
#define IPS_MEMMAP_SIZE              128
#define IPS_ONE_MSEC                 1
#define IPS_ONE_SEC                  1000
#define IPS_COMP_HEADS               128
#define IPS_COMP_SECTORS             32
#define IPS_NORM_HEADS               254
#define IPS_NORM_SECTORS             63
#define IPS_BASIC_STATUS_MASK        0xFF
#define IPS_GSC_STATUS_MASK          0x0F
#define IPS_CMD_SUCCESS              0x00
#define IPS_CMD_RECOVERED_ERROR      0x01
#define IPS_INVAL_OPCO               0x03
#define IPS_INVAL_CMD_BLK            0x04
#define IPS_INVAL_PARM_BLK           0x05
#define IPS_BUSY                     0x08
#define IPS_CMD_CMPLT_WERROR         0x0C
#define IPS_LD_ERROR                 0x0D
#define IPS_CMD_TIMEOUT              0x0E
#define IPS_PHYS_DRV_ERROR           0x0F
#define IPS_ERR_SEL_TO               0xF0
#define IPS_ERR_OU_RUN               0xF2
#define IPS_ERR_HOST_RESET           0xF7
#define IPS_ERR_DEV_RESET            0xF8
#define IPS_ERR_RECOVERY             0xFC
#define IPS_ERR_CKCOND               0xFF
#define IPS_OS_WINDOWS_NT            0x01
#define IPS_OS_NETWARE               0x02
#define IPS_OS_OPENSERVER            0x03
#define IPS_OS_UNIXWARE              0x04
#define IPS_OS_SOLARIS               0x05
#define IPS_OS_OS2                   0x06
#define IPS_OS_LINUX                 0x07
#define IPS_OS_FREEBSD               0x08
#define IPS_REVID_SERVERAID          0x02
#define IPS_REVID_NAVAJO             0x03
#define IPS_REVID_SERVERAID2         0x04
#define IPS_REVID_CLARINETP1         0x05
#define IPS_REVID_CLARINETP2         0x07
#define IPS_REVID_CLARINETP3         0x0D
#define IPS_REVID_TROMBONE32         0x0F
#define IPS_REVID_TROMBONE64         0x10
#define IPS_ADTYPE_SERVERAID         0x01
#define IPS_ADTYPE_SERVERAID2        0x02
#define IPS_ADTYPE_NAVAJO            0x03
#define IPS_ADTYPE_KIOWA             0x04
#define IPS_ADTYPE_SERVERAID3        0x05
#define IPS_ADTYPE_SERVERAID3L       0x06
#define IPS_ADTYPE_SERVERAID4H       0x07
#define IPS_ADTYPE_SERVERAID4M       0x08
#define IPS_ADTYPE_SERVERAID4L       0x09
#define IPS_ADTYPE_SERVERAID4MX      0x0A
#define IPS_ADTYPE_SERVERAID4LX      0x0B
#define IPS_ADTYPE_SERVERAID5I2      0x0C
#define IPS_ADTYPE_SERVERAID5I1      0x0D
#define IPS_ADTYPE_SERVERAID6M       0x0E
#define IPS_ADTYPE_SERVERAID6I       0x0F
#define IPS_ADTYPE_SERVERAID7t       0x10
#define IPS_ADTYPE_SERVERAID7k       0x11
#define IPS_ADTYPE_SERVERAID7M       0x12
#define IPS_SUCCESS                  0x01
#define IPS_SUCCESS_IMM              0x02
#define IPS_FAILURE                  0x04
#define IPS_LD_OFFLINE               0x02
#define IPS_LD_OKAY                  0x03
#define IPS_LD_FREE                  0x00
#define IPS_LD_SYS                   0x06
#define IPS_LD_CRS                   0x24
#define IPS_NO_DISCONNECT            0x00
#define IPS_DISCONNECT_ALLOWED       0x80
#define IPS_NO_AUTO_REQSEN           0x40
#define IPS_DATA_NONE                0x00
#define IPS_DATA_UNK                 0x00
#define IPS_DATA_IN                  0x01
#define IPS_DATA_OUT                 0x02
#define IPS_TRANSFER64K              0x08
#define IPS_NOTIMEOUT                0x00
#define IPS_TIMEOUT10                0x10
#define IPS_TIMEOUT60                0x20
#define IPS_TIMEOUT20M               0x30
#define IPS_SCSI_INQ_TYPE_DASD       0x00
#define IPS_SCSI_INQ_TYPE_PROCESSOR  0x03
#define IPS_SCSI_INQ_LU_CONNECTED    0x00
#define IPS_SCSI_INQ_RD_REV2         0x02
#define IPS_SCSI_INQ_REV2            0x02
#define IPS_SCSI_INQ_REV3            0x03
#define IPS_SCSI_INQ_Address16       0x01
#define IPS_SCSI_INQ_Address32       0x02
#define IPS_SCSI_INQ_MedChanger      0x08
#define IPS_SCSI_INQ_MultiPort       0x10
#define IPS_SCSI_INQ_EncServ         0x40
#define IPS_SCSI_INQ_SoftReset       0x01
#define IPS_SCSI_INQ_CmdQue          0x02
#define IPS_SCSI_INQ_Linked          0x08
#define IPS_SCSI_INQ_Sync            0x10
#define IPS_SCSI_INQ_WBus16          0x20
#define IPS_SCSI_INQ_WBus32          0x40
#define IPS_SCSI_INQ_RelAdr          0x80
#define IPS_SCSI_REQSEN_VALID        0x80
#define IPS_SCSI_REQSEN_CURRENT_ERR  0x70
#define IPS_SCSI_REQSEN_NO_SENSE     0x00
#define IPS_SCSI_MP3_SoftSector      0x01
#define IPS_SCSI_MP3_HardSector      0x02
#define IPS_SCSI_MP3_Removeable      0x04
#define IPS_SCSI_MP3_AllocateSurface 0x08
#define IPS_HA_ENH_SG                0x1
#define IPS_SCB_MAP_SG               0x00008
#define IPS_SCB_MAP_SINGLE           0X00010
#define IPS_COPPUSRCMD              (('C'<<8) | 65)
#define IPS_COPPIOCCMD              (('C'<<8) | 66)
#define IPS_NUMCTRLS                (('C'<<8) | 68)
#define IPS_CTRLINFO                (('C'<<8) | 69)
#define IPS_FW_IMAGE                0x00
#define IPS_BIOS_IMAGE              0x01
#define IPS_WRITE_FW                0x01
#define IPS_WRITE_BIOS              0x02
#define IPS_ERASE_BIOS              0x03
#define IPS_BIOS_HEADER             0xC0
#define IPS_IS_LEAP_YEAR(y)           (((y % 4 == 0) && ((y % 100 != 0) || (y % 400 == 0))) ? 1 : 0)
#define IPS_NUM_LEAP_YEARS_THROUGH(y) ((y) / 4 - (y) / 100 + (y) / 400)
#define IPS_SECS_MIN                 60
#define IPS_SECS_HOUR                3600
#define IPS_SECS_8HOURS              28800
#define IPS_SECS_DAY                 86400
#define IPS_DAYS_NORMAL_YEAR         365
#define IPS_DAYS_LEAP_YEAR           366
#define IPS_EPOCH_YEAR               1970
static int ips_proc_info(struct Scsi_Host *, char *, char **, off_t, int, int);
static int ips_biosparam(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int geom[]);
static int ips_slave_configure(struct scsi_device *SDptr);
typedef struct  IPS_IO_CMD, *PIPS_IO_CMD;
typedef struct  IPS_LD_CMD, *PIPS_LD_CMD;
typedef struct  IPS_IOCTL_CMD, *PIPS_IOCTL_CMD;
typedef struct  IPS_RESET_CMD, *PIPS_RESET_CMD;
typedef struct  IPS_DCDB_CMD, *PIPS_DCDB_CMD;
typedef struct  IPS_CS_CMD, *PIPS_CS_CMD;
typedef struct  IPS_US_CMD, *PIPS_US_CMD;
typedef struct  IPS_FC_CMD, *PIPS_FC_CMD;
typedef struct  IPS_STATUS_CMD, *PIPS_STATUS_CMD;
typedef struct  IPS_NVRAM_CMD, *PIPS_NVRAM_CMD;
typedef struct
IPS_VERSION_INFO, *PIPS_VERSION_INFO;
typedef struct  IPS_FFDC_CMD, *PIPS_FFDC_CMD;
typedef struct  IPS_FLASHFW_CMD, *PIPS_FLASHFW_CMD;
typedef struct  IPS_FLASHBIOS_CMD, *PIPS_FLASHBIOS_CMD;
typedef union  IPS_HOST_COMMAND, *PIPS_HOST_COMMAND;
typedef struct  IPS_DRIVE_INFO, *PIPS_DRIVE_INFO;
typedef struct  IPS_LD_INFO, *PIPS_LD_INFO;
typedef struct  IPS_DCDB_TABLE, *PIPS_DCDB_TABLE;
typedef struct  IPS_DCDB_TABLE_TAPE, *PIPS_DCDB_TABLE_TAPE;
typedef union  IPS_STATUS, *PIPS_STATUS;
typedef struct  IPS_ADAPTER, *PIPS_ADAPTER;
typedef struct  IPS_ENQ, *PIPS_ENQ;
typedef struct  IPS_DEVSTATE, *PIPS_DEVSTATE;
typedef struct  IPS_CHUNK, *PIPS_CHUNK;
typedef struct  IPS_LD, *PIPS_LD;
typedef struct  IPS_HARDWARE, *PIPS_HARDWARE;
typedef struct  IPS_CONF, *PIPS_CONF;
typedef struct  IPS_NVRAM_P5, *PIPS_NVRAM_P5;
#define  IPS_GET_VERSION_SUPPORT 0x00018000
typedef struct
IPS_VERSION_DATA;
typedef struct _IPS_SUBSYS  IPS_SUBSYS, *PIPS_SUBSYS;
typedef struct  IPS_SCSI_INQ_DATA, *PIPS_SCSI_INQ_DATA;
typedef struct  IPS_SCSI_CAPACITY;
typedef struct  IPS_SCSI_REQSEN;
typedef struct  IPS_SCSI_MODE_PAGE3;
typedef struct  IPS_SCSI_MODE_PAGE4;
typedef struct  IPS_SCSI_MODE_PAGE8;
typedef struct  IPS_SCSI_MODE_PAGE_BLKDESC;
typedef struct  IPS_SCSI_MODE_PAGE_HEADER;
typedef struct  IPS_SCSI_MODE_PAGE_DATA;
typedef struct ips_sglist  IPS_STD_SG_LIST;
typedef struct ips_enh_sglist  IPS_ENH_SG_LIST;
typedef union  IPS_SG_LIST;
typedef struct _IPS_INFOSTR  IPS_INFOSTR;
typedef struct  IPS_OPTION;
typedef struct ips_stat  ips_stat_t;
typedef struct ips_scb_queue  ips_scb_queue_t;
typedef struct ips_wait_queue  ips_wait_queue_t;
typedef struct ips_copp_wait_item  ips_copp_wait_item_t;
typedef struct ips_copp_queue  ips_copp_queue_t;
struct ips_ha;
typedef struct  ips_hw_func_t;
typedef struct ips_ha  ips_ha_t;
typedef void (*ips_scb_callback) (ips_ha_t *, struct ips_scb *);
typedef struct ips_scb  ips_scb_t;
typedef struct ips_scb_pt  ips_scb_pt_t;
typedef struct  ips_passthru_t;
#define IPS_VER_MAJOR 7
#define IPS_VER_MAJOR_STRING __stringify(IPS_VER_MAJOR)
#define IPS_VER_MINOR 12
#define IPS_VER_MINOR_STRING __stringify(IPS_VER_MINOR)
#define IPS_VER_BUILD 05
#define IPS_VER_BUILD_STRING __stringify(IPS_VER_BUILD)
#define IPS_VER_STRING IPS_VER_MAJOR_STRING "." \
IPS_VER_MINOR_STRING "." IPS_VER_BUILD_STRING
#define IPS_RELEASE_ID 0x00020000
#define IPS_BUILD_IDENT 761
#define IPS_LEGALCOPYRIGHT_STRING "(C) Copyright IBM Corp. 1994, 2002. All Rights Reserved."
#define IPS_ADAPTECCOPYRIGHT_STRING "(c) Copyright Adaptec, Inc. 2002 to 2004. All Rights Reserved."
#define IPS_DELLCOPYRIGHT_STRING "(c) Copyright Dell 2004. All Rights Reserved."
#define IPS_NT_LEGALCOPYRIGHT_STRING "(C) Copyright IBM Corp. 1994, 2002."
#define IPS_VER_SERVERAID1 "2.25.01"
#define IPS_VER_SERVERAID2 "2.88.13"
#define IPS_VER_NAVAJO "2.88.13"
#define IPS_VER_SERVERAID3 "6.10.24"
#define IPS_VER_SERVERAID4H "7.12.02"
#define IPS_VER_SERVERAID4MLx "7.12.02"
#define IPS_VER_SARASOTA "7.12.02"
#define IPS_VER_MARCO "7.12.02"
#define IPS_VER_SEBRING "7.12.02"
#define IPS_VER_KEYWEST "7.12.02"
#define IPS_COMPAT_UNKNOWN ""
#define IPS_COMPAT_CURRENT "KW710"
#define IPS_COMPAT_SERVERAID1 "2.25.01"
#define IPS_COMPAT_SERVERAID2 "2.88.13"
#define IPS_COMPAT_NAVAJO  "2.88.13"
#define IPS_COMPAT_KIOWA "2.88.13"
#define IPS_COMPAT_SERVERAID3H  "SB610"
#define IPS_COMPAT_SERVERAID3L  "SB610"
#define IPS_COMPAT_SERVERAID4H  "KW710"
#define IPS_COMPAT_SERVERAID4M  "KW710"
#define IPS_COMPAT_SERVERAID4L  "KW710"
#define IPS_COMPAT_SERVERAID4Mx "KW710"
#define IPS_COMPAT_SERVERAID4Lx "KW710"
#define IPS_COMPAT_SARASOTA     "KW710"
#define IPS_COMPAT_MARCO        "KW710"
#define IPS_COMPAT_SEBRING      "KW710"
#define IPS_COMPAT_TAMPA        "KW710"
#define IPS_COMPAT_KEYWEST      "KW710"
#define IPS_COMPAT_BIOS "KW710"
#define IPS_COMPAT_MAX_ADAPTER_TYPE 18
#define IPS_COMPAT_ID_LENGTH 8
#define IPS_DEFINE_COMPAT_TABLE(tablename) \
char tablename[IPS_COMPAT_MAX_ADAPTER_TYPE] [IPS_COMPAT_ID_LENGTH] =
