#define _GDTH_H
#define TRUE 1
#define FALSE 0
#define GDTH_VERSION_STR        "3.05"
#define GDTH_VERSION            3
#define GDTH_SUBVERSION         5
#define PROTOCOL_VERSION        1
#define OEM_ID_ICP      0x941c
#define OEM_ID_INTEL    0x8000
#define GDT_ISA         0x01
#define GDT_EISA        0x02
#define GDT_PCI         0x03
#define GDT_PCINEW      0x04
#define GDT_PCIMPR      0x05
#define GDT3_ID         0x0130941c
#define GDT3A_ID        0x0230941c
#define GDT3B_ID        0x0330941c
#define GDT2_ID         0x0120941c
#define PCI_VENDOR_ID_VORTEX            0x1119
#define PCI_VENDOR_ID_INTEL             0x8086
#define PCI_DEVICE_ID_VORTEX_GDT60x0    0
#define PCI_DEVICE_ID_VORTEX_GDT6000B   1
#define PCI_DEVICE_ID_VORTEX_GDT6x10    2
#define PCI_DEVICE_ID_VORTEX_GDT6x20    3
#define PCI_DEVICE_ID_VORTEX_GDT6530    4
#define PCI_DEVICE_ID_VORTEX_GDT6550    5
#define PCI_DEVICE_ID_VORTEX_GDT6x17    6
#define PCI_DEVICE_ID_VORTEX_GDT6x27    7
#define PCI_DEVICE_ID_VORTEX_GDT6537    8
#define PCI_DEVICE_ID_VORTEX_GDT6557    9
#define PCI_DEVICE_ID_VORTEX_GDT6x15    10
#define PCI_DEVICE_ID_VORTEX_GDT6x25    11
#define PCI_DEVICE_ID_VORTEX_GDT6535    12
#define PCI_DEVICE_ID_VORTEX_GDT6555    13
#define PCI_DEVICE_ID_VORTEX_GDT6x17RP  0x100
#define PCI_DEVICE_ID_VORTEX_GDT6x27RP  0x101
#define PCI_DEVICE_ID_VORTEX_GDT6537RP  0x102
#define PCI_DEVICE_ID_VORTEX_GDT6557RP  0x103
#define PCI_DEVICE_ID_VORTEX_GDT6x11RP  0x104
#define PCI_DEVICE_ID_VORTEX_GDT6x21RP  0x105
#define PCI_DEVICE_ID_VORTEX_GDT6x17RD  0x110
#define PCI_DEVICE_ID_VORTEX_GDT6x27RD  0x111
#define PCI_DEVICE_ID_VORTEX_GDT6537RD  0x112
#define PCI_DEVICE_ID_VORTEX_GDT6557RD  0x113
#define PCI_DEVICE_ID_VORTEX_GDT6x11RD  0x114
#define PCI_DEVICE_ID_VORTEX_GDT6x21RD  0x115
#define PCI_DEVICE_ID_VORTEX_GDT6x18RD  0x118
#define PCI_DEVICE_ID_VORTEX_GDT6x28RD  0x119
#define PCI_DEVICE_ID_VORTEX_GDT6x38RD  0x11A
#define PCI_DEVICE_ID_VORTEX_GDT6x58RD  0x11B
#define PCI_DEVICE_ID_VORTEX_GDT7x18RN  0x168
#define PCI_DEVICE_ID_VORTEX_GDT7x28RN  0x169
#define PCI_DEVICE_ID_VORTEX_GDT7x38RN  0x16A
#define PCI_DEVICE_ID_VORTEX_GDT7x58RN  0x16B
#define PCI_DEVICE_ID_VORTEX_GDT6x19RD  0x210
#define PCI_DEVICE_ID_VORTEX_GDT6x29RD  0x211
#define PCI_DEVICE_ID_VORTEX_GDT7x19RN  0x260
#define PCI_DEVICE_ID_VORTEX_GDT7x29RN  0x261
#define PCI_DEVICE_ID_VORTEX_GDTMAXRP   0x2ff
#define PCI_DEVICE_ID_VORTEX_GDTNEWRX   0x300
#define PCI_DEVICE_ID_VORTEX_GDTNEWRX2  0x301
#define PCI_DEVICE_ID_INTEL_SRC         0x600
#define PCI_DEVICE_ID_INTEL_SRC_XSCALE  0x601
#define GDTH_SCRATCH    PAGE_SIZE
#define GDTH_MAXCMDS    120
#define GDTH_MAXC_P_L   16
#define GDTH_MAX_RAW    2
#define MAXOFFSETS      128
#define MAXHA           16
#define MAXID           127
#define MAXLUN          8
#define MAXBUS          6
#define MAX_EVENTS      100
#define MAX_RES_ARGS    40
#define MAXCYLS         1024
#define HEADS           64
#define SECS            32
#define MEDHEADS        127
#define MEDSECS         63
#define BIGHEADS        255
#define BIGSECS         63
#define UNUSED_CMND     ((Scsi_Cmnd *)-1)
#define INTERNAL_CMND   ((Scsi_Cmnd *)-2)
#define SCREEN_CMND     ((Scsi_Cmnd *)-3)
#define SPECIAL_SCP(p)  (p==UNUSED_CMND || p==INTERNAL_CMND || p==SCREEN_CMND)
#define SCSIRAWSERVICE  3
#define CACHESERVICE    9
#define SCREENSERVICE   11
#define MSG_INV_HANDLE  -1
#define MSGLEN          16
#define MSG_SIZE        34
#define MSG_REQUEST     0
#define SECTOR_SIZE     0x200
#define DPMEM_MAGIC     0xC0FFEE11
#define IC_HEADER_BYTES 48
#define IC_QUEUE_BYTES  4
#define DPMEM_COMMAND_OFFSET    IC_HEADER_BYTES+IC_QUEUE_BYTES*MAXOFFSETS
#define CLUSTER_DRIVE         1
#define CLUSTER_MOUNTED       2
#define CLUSTER_RESERVED      4
#define CLUSTER_RESERVE_STATE (CLUSTER_DRIVE|CLUSTER_MOUNTED|CLUSTER_RESERVED)
#define GDT_INIT        0
#define GDT_READ        1
#define GDT_WRITE       2
#define GDT_INFO        3
#define GDT_FLUSH       4
#define GDT_IOCTL       5
#define GDT_DEVTYPE     9
#define GDT_MOUNT       10
#define GDT_UNMOUNT     11
#define GDT_SET_FEAT    12
#define GDT_GET_FEAT    13
#define GDT_WRITE_THR   16
#define GDT_READ_THR    17
#define GDT_EXT_INFO    18
#define GDT_RESET       19
#define GDT_RESERVE_DRV 20
#define GDT_RELEASE_DRV 21
#define GDT_CLUST_INFO  22
#define GDT_RW_ATTRIBS  23
#define GDT_CLUST_RESET 24
#define GDT_FREEZE_IO   25
#define GDT_UNFREEZE_IO 26
#define GDT_X_INIT_HOST 29
#define GDT_X_INFO      30
#define GDT_RESERVE     14
#define GDT_RELEASE     15
#define GDT_RESERVE_ALL 16
#define GDT_RELEASE_ALL 17
#define GDT_RESET_BUS   18
#define GDT_SCAN_START  19
#define GDT_SCAN_END    20
#define GDT_X_INIT_RAW  21
#define GDT_REALTIME    3
#define GDT_X_INIT_SCR  4
#define SCSI_DR_INFO    0x00
#define SCSI_CHAN_CNT   0x05
#define SCSI_DR_LIST    0x06
#define SCSI_DEF_CNT    0x15
#define DSK_STATISTICS  0x4b
#define IOCHAN_DESC     0x5d
#define IOCHAN_RAW_DESC 0x5e
#define L_CTRL_PATTERN  0x20000000L
#define ARRAY_INFO      0x12
#define ARRAY_DRV_LIST  0x0f
#define ARRAY_DRV_LIST2 0x34
#define LA_CTRL_PATTERN 0x10000000L
#define CACHE_DRV_CNT   0x01
#define CACHE_DRV_LIST  0x02
#define CACHE_INFO      0x04
#define CACHE_CONFIG    0x05
#define CACHE_DRV_INFO  0x07
#define BOARD_FEATURES  0x15
#define BOARD_INFO      0x28
#define SET_PERF_MODES  0x82
#define GET_PERF_MODES  0x83
#define CACHE_READ_OEM_STRING_RECORD 0x84
#define HOST_GET        0x10001L
#define IO_CHANNEL      0x00020000L
#define INVALID_CHANNEL 0x0000ffffL
#define S_OK            1
#define S_GENERR        6
#define S_BSY           7
#define S_CACHE_UNKNOWN 12
#define S_RAW_SCSI      12
#define S_RAW_ILL       0xff
#define S_NOFUNC        -2
#define S_CACHE_RESERV  -24
#define INIT_RETRIES    100000
#define INIT_TIMEOUT    100000
#define POLL_TIMEOUT    10000
#define DEFAULT_PRI     0x20
#define IOCTL_PRI       0x10
#define HIGH_PRI        0x08
#define GDTH_DATA_IN    0x01000000L
#define GDTH_DATA_OUT   0x00000000L
#define ID0REG          0x0c80
#define EINTENABREG     0x0c89
#define SEMA0REG        0x0c8a
#define SEMA1REG        0x0c8b
#define LDOORREG        0x0c8d
#define EDENABREG       0x0c8e
#define EDOORREG        0x0c8f
#define MAILBOXREG      0x0c90
#define EISAREG         0x0cc0
#define LINUX_OS        8
#define SECS32          0x1f
#define BIOS_ID_OFFS    0x10
#define LOCALBOARD      0
#define ASYNCINDEX      0
#define SPEZINDEX       1
#define COALINDEX       (GDTH_MAXCMDS + 2)
#define SCATTER_GATHER  1
#define GDT_WR_THROUGH  0x100
#define GDT_64BIT       0x200
typedef struct  __attribute__((packed)) gdth_msg_str;
typedef struct  __attribute__((packed)) gdth_coal_status;
typedef struct  __attribute__((packed)) gdth_perf_modes;
typedef struct  __attribute__((packed)) gdth_diskinfo_str;
typedef struct  __attribute__((packed)) gdth_getch_str;
typedef struct  __attribute__((packed)) gdth_drlist_str;
typedef struct  __attribute__((packed)) gdth_defcnt_str;
typedef struct  __attribute__((packed)) gdth_dskstat_str;
typedef struct  __attribute__((packed)) gdth_iochan_header;
typedef struct  __attribute__((packed)) gdth_iochan_str;
typedef struct  __attribute__((packed)) gdth_raw_iochan_str;
typedef struct  __attribute__((packed)) gdth_arraycomp_str;
typedef struct  __attribute__((packed)) gdth_arrayinf_str;
typedef struct  __attribute__((packed)) gdth_alist_str;
typedef struct  __attribute__((packed)) gdth_arcdl_str;
typedef struct  __attribute__((packed)) gdth_cpar_str;
typedef struct  __attribute__((packed)) gdth_cstat_str;
typedef struct  __attribute__((packed)) gdth_cinfo_str;
typedef struct  __attribute__((packed)) gdth_cdrinfo_str;
typedef struct  __attribute__((packed)) gdth_oem_str_params;
typedef struct  __attribute__((packed)) gdth_oem_str;
typedef struct  __attribute__((packed)) gdth_oem_str_ioctl;
typedef struct  __attribute__((packed)) gdth_bfeat_str;
typedef struct  __attribute__((packed)) gdth_binfo_str;
typedef struct  __attribute__((packed)) gdth_hentry_str;
typedef struct  __attribute__((packed)) gdth_hget_str;
typedef struct  __attribute__((packed)) gdt_dpr_if;
typedef struct  __attribute__((packed)) gdt_pci_sram;
typedef struct  __attribute__((packed)) gdt_eisa_sram;
typedef struct  __attribute__((packed)) gdt2_dpram_str;
typedef struct  __attribute__((packed)) gdt6_dpram_str;
typedef struct  __attribute__((packed)) gdt6c_plx_regs;
typedef struct  __attribute__((packed)) gdt6c_dpram_str;
typedef struct  __attribute__((packed)) gdt6m_i960_regs;
typedef struct  __attribute__((packed)) gdt6m_dpram_str;
typedef struct  gdth_pci_str;
typedef struct  gdth_ha_str;
static inline struct gdth_cmndinfo *gdth_cmnd_priv(struct scsi_cmnd* cmd)
typedef struct  __attribute__((packed)) gdth_inq_data;
typedef struct  __attribute__((packed)) gdth_rdcap_data;
typedef struct  __attribute__((packed)) gdth_rdcap16_data;
typedef struct  __attribute__((packed)) gdth_sense_data;
typedef struct  __attribute__((packed)) gdth_modep_data;
typedef struct  __attribute__((packed)) gdth_stackframe;
int gdth_proc_info(struct Scsi_Host *, char *,char **,off_t,int,int);
