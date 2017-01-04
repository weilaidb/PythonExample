#define MS_INCD
#define MS_REG_ST0_MB                           0x80
#define MS_REG_ST0_FB0                          0x40
#define MS_REG_ST0_BE                           0x20
#define MS_REG_ST0_BF                           0x10
#define MS_REG_ST0_SL                           0x02
#define MS_REG_ST0_WP                           0x01
#define MS_REG_ST0_WP_ON                        MS_REG_ST0_WP
#define MS_REG_ST0_WP_OFF                       0x00
#define MS_REG_ST1_MB		0x80
#define MS_REG_ST1_FB1		0x40
#define MS_REG_ST1_DTER		0x20
#define MS_REG_ST1_UCDT		0x10
#define MS_REG_ST1_EXER		0x08
#define MS_REG_ST1_UCEX		0x04
#define MS_REG_ST1_FGER		0x02
#define MS_REG_ST1_UCFG		0x01
#define MS_REG_ST1_DEFAULT	(MS_REG_ST1_MB   | MS_REG_ST1_FB1  | \
MS_REG_ST1_DTER | MS_REG_ST1_UCDT | \
MS_REG_ST1_EXER | MS_REG_ST1_UCEX | \
MS_REG_ST1_FGER | MS_REG_ST1_UCFG)
#define MS_REG_SYSPAR_BAMD		0x80
#define MS_REG_SYSPAR_BAND_LINEAR	MS_REG_SYSPAR_BAMD
#define MS_REG_SYSPAR_BAND_CHIP		0x00
#define MS_REG_SYSPAR_ATEN		0x40
#define MS_REG_SYSPAR_ATEN_ENABLE	MS_REG_SYSPAR_ATEN
#define MS_REG_SYSPAR_ATEN_DISABLE	0x00
#define MS_REG_SYSPAR_RESERVED                  0x2f
#define MS_REG_CMDPAR_CP2                       0x80
#define MS_REG_CMDPAR_CP1                       0x40
#define MS_REG_CMDPAR_CP0                       0x20
#define MS_REG_CMDPAR_BLOCK_ACCESS              0
#define MS_REG_CMDPAR_PAGE_ACCESS               MS_REG_CMDPAR_CP0
#define MS_REG_CMDPAR_EXTRA_DATA                MS_REG_CMDPAR_CP1
#define MS_REG_CMDPAR_OVERWRITE                 MS_REG_CMDPAR_CP2
#define MS_REG_CMDPAR_RESERVED                  0x1f
#define MS_REG_OVR_BKST		0x80
#define MS_REG_OVR_BKST_OK                      MS_REG_OVR_BKST
#define MS_REG_OVR_BKST_NG                      0x00
#define MS_REG_OVR_PGST0	0x40
#define MS_REG_OVR_PGST1                        0x20
#define MS_REG_OVR_PGST_MASK	(MS_REG_OVR_PGST0 | MS_REG_OVR_PGST1)
#define MS_REG_OVR_PGST_OK	(MS_REG_OVR_PGST0 | MS_REG_OVR_PGST1)
#define MS_REG_OVR_PGST_NG	MS_REG_OVR_PGST1
#define MS_REG_OVR_PGST_DATA_ERROR              0x00
#define MS_REG_OVR_UDST                         0x10
#define MS_REG_OVR_UDST_UPDATING                0x00
#define MS_REG_OVR_UDST_NO_UPDATE               MS_REG_OVR_UDST
#define MS_REG_OVR_RESERVED                     0x08
#define MS_REG_OVR_DEFAULT                      (MS_REG_OVR_BKST_OK |      \
MS_REG_OVR_PGST_OK |      \
MS_REG_OVR_UDST_NO_UPDATE |   \
MS_REG_OVR_RESERVED)
#define MS_REG_MNG_SCMS0	0x20
#define MS_REG_MNG_SCMS1                        0x10
#define MS_REG_MNG_SCMS_MASK		(MS_REG_MNG_SCMS0 | MS_REG_MNG_SCMS1)
#define MS_REG_MNG_SCMS_COPY_OK		(MS_REG_MNG_SCMS0 | MS_REG_MNG_SCMS1)
#define MS_REG_MNG_SCMS_ONE_COPY                MS_REG_MNG_SCMS1
#define MS_REG_MNG_SCMS_NO_COPY                 0x00
#define MS_REG_MNG_ATFLG	0x08
#define MS_REG_MNG_ATFLG_OTHER                  MS_REG_MNG_ATFLG
#define MS_REG_MNG_ATFLG_ATTBL		0x00
#define MS_REG_MNG_SYSFLG                       0x04
#define MS_REG_MNG_SYSFLG_USER		MS_REG_MNG_SYSFLG
#define MS_REG_MNG_SYSFLG_BOOT                  0x00
#define MS_REG_MNG_RESERVED                     0xc3
#define MS_REG_MNG_DEFAULT		(MS_REG_MNG_SCMS_COPY_OK |	\
MS_REG_MNG_ATFLG_OTHER |	\
MS_REG_MNG_SYSFLG_USER |	\
MS_REG_MNG_RESERVED)
#define MS_STATUS_SUCCESS                       0x0000
#define MS_ERROR_OUT_OF_SPACE                   0x0103
#define MS_STATUS_WRITE_PROTECT                 0x0106
#define MS_ERROR_READ_DATA                      0x8002
#define MS_ERROR_FLASH_READ                     0x8003
#define MS_ERROR_FLASH_WRITE                    0x8004
#define MS_ERROR_FLASH_ERASE                    0x8005
#define MS_ERROR_FLASH_COPY                     0x8006
#define MS_STATUS_ERROR                         0xfffe
#define MS_FIFO_ERROR                           0xfffd
#define MS_UNDEFINED_ERROR                      0xfffc
#define MS_KETIMEOUT_ERROR                      0xfffb
#define MS_STATUS_INT_ERROR                     0xfffa
#define MS_NO_MEMORY_ERROR                      0xfff9
#define MS_NOCARD_ERROR                         0xfff8
#define MS_LB_NOT_USED                          0xffff
#define MS_LB_ERROR                             0xfff0
#define MS_LB_BOOT_BLOCK                        0xfff1
#define MS_LB_INITIAL_ERROR                     0xfff2
#define MS_STATUS_SUCCESS_WITH_ECC              0xfff3
#define MS_LB_ACQUIRED_ERROR                    0xfff4
#define MS_LB_NOT_USED_ERASED                   0xfff5
#define MS_LibConv2Physical(pdx, LogBlock) \
(((LogBlock) >= (pdx)->MS_Lib.NumberOfLogBlock) ? \
MS_STATUS_ERROR : (pdx)->MS_Lib.Log2PhyMap[LogBlock])
#define MS_LibConv2Logical(pdx, PhyBlock) \
(((PhyBlock) >= (pdx)->MS_Lib.NumberOfPhyBlock) ? \
MS_STATUS_ERROR : (pdx)->MS_Lib.Phy2LogMap[PhyBlock])
#define MS_LIB_CTRL_RDONLY                      0
#define MS_LIB_CTRL_WRPROTECT                   1
#define MS_LibCtrlCheck(pdx, Flag)	((pdx)->MS_Lib.flags & (1 << (Flag)))
#define MS_LibCtrlSet(pdx, Flag)	((pdx)->MS_Lib.flags |= (1 << (Flag)))
#define MS_LibCtrlReset(pdx, Flag)	((pdx)->MS_Lib.flags &= ~(1 << (Flag)))
#define MS_LibIsWritable(pdx) \
((MS_LibCtrlCheck((pdx), MS_LIB_CTRL_RDONLY) == 0) && \
(MS_LibCtrlCheck(pdx, MS_LIB_CTRL_WRPROTECT) == 0))
#define MS_MAX_PAGES_PER_BLOCK                  32
#define MS_LIB_BITS_PER_BYTE                    8
#define MS_LibPageMapIdx(n) ((n) / MS_LIB_BITS_PER_BYTE)
#define MS_LibPageMapBit(n) (1 << ((n) % MS_LIB_BITS_PER_BYTE))
#define MS_LibCheckPageMapBit(pdx, n) \
((pdx)->MS_Lib.pagemap[MS_LibPageMapIdx(n)] & MS_LibPageMapBit(n))
#define MS_LibSetPageMapBit(pdx, n) \
((pdx)->MS_Lib.pagemap[MS_LibPageMapIdx(n)] |= MS_LibPageMapBit(n))
#define MS_LibResetPageMapBit(pdx, n) \
((pdx)->MS_Lib.pagemap[MS_LibPageMapIdx(n)] &= ~MS_LibPageMapBit(n))
#define MS_LibClearPageMap(pdx) \
memset((pdx)->MS_Lib.pagemap, 0, sizeof((pdx)->MS_Lib.pagemap))
#define MemStickLogAddr(logadr1, logadr0) \
((((WORD)(logadr1)) << 8) | (logadr0))
#define MS_BYTES_PER_PAGE                       512
#define MS_MAX_INITIAL_ERROR_BLOCKS             10
#define MS_NUMBER_OF_PAGES_FOR_BOOT_BLOCK       3
#define MS_NUMBER_OF_PAGES_FOR_LPCTBL           2
#define MS_NUMBER_OF_BOOT_BLOCK                 2
#define MS_NUMBER_OF_SYSTEM_BLOCK               4
#define MS_LOGICAL_BLOCKS_PER_SEGMENT           496
#define MS_LOGICAL_BLOCKS_IN_1ST_SEGMENT        494
#define MS_PHYSICAL_BLOCKS_PER_SEGMENT          0x200
#define MS_PHYSICAL_BLOCKS_PER_SEGMENT_MASK     0x1ff
#define MS_SECTOR_SIZE                          512
#define MBR_SIGNATURE                           0xAA55
#define PBR_SIGNATURE                           0xAA55
#define PARTITION_FAT_12                        1
#define PARTITION_FAT_16                        2
#define MS_BOOT_BLOCK_ID                        0x0001
#define MS_BOOT_BLOCK_FORMAT_VERSION            0x0100
#define MS_BOOT_BLOCK_DATA_ENTRIES              2
#define MS_SYSINF_MSCLASS_TYPE_1                1
#define MS_SYSINF_CARDTYPE_RDONLY               1
#define MS_SYSINF_CARDTYPE_RDWR                 2
#define MS_SYSINF_CARDTYPE_HYBRID               3
#define MS_SYSINF_SECURITY                      0x01
#define MS_SYSINF_SECURITY_NO_SUPPORT           MS_SYSINF_SECURITY
#define MS_SYSINF_SECURITY_SUPPORT              0
#define MS_SYSINF_FORMAT_MAT                    0
#define MS_SYSINF_FORMAT_FAT                    1
#define MS_SYSINF_USAGE_GENERAL                 0
#define MS_SYSINF_PAGE_SIZE                     MS_BYTES_PER_PAGE
#define MS_SYSINF_RESERVED1                     1
#define MS_SYSINF_RESERVED2                     1
#define MS_SYSENT_TYPE_INVALID_BLOCK            0x01
#define MS_SYSENT_TYPE_CIS_IDI                  0x0a
#define SIZE_OF_KIRO                            1024
#define MS_NUMBER_OF_SYSTEM_ENTRY               4
typedef struct  MemStickStatusRegisters;
typedef struct  MemStickParameterRegisters;
typedef struct  MemStickExtraDataRegisters;
typedef struct  MemStickRegisters, *PMemStickRegisters;
typedef struct  MemStickBootBlockHeader;
typedef struct  MemStickBootBlockSysEntRec;
typedef struct  MemStickBootBlockSysEnt;
typedef struct  MemStickBootBlockSysInf;
typedef struct  MemStickBootBlockPage0;
typedef struct  MemStickBootBlockCIS;
typedef struct  MemStickBootBlockIDI;
typedef struct  MemStickBootBlockCIS_IDI;
typedef struct  MS_LibTypeExtdat;
typedef struct  MS_LibControl;
