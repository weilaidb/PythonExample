#define __MEGARAID_H__
#define MEGARAID_VERSION	\
"v2.00.4 (Release Date: Thu Feb 9 08:51:30 EST 2006)\n"
#define MEGA_HAVE_COALESCING	0
#define MEGA_HAVE_CLUSTERING	1
#define MEGA_HAVE_STATS		0
#define MEGA_HAVE_ENH_PROC	1
#define MAX_DEV_TYPE	32
#define PCI_VENDOR_ID_LSI_LOGIC		0x1000
#define PCI_VENDOR_ID_AMI		0x101E
#define PCI_VENDOR_ID_DELL		0x1028
#define PCI_VENDOR_ID_INTEL		0x8086
#define PCI_DEVICE_ID_AMI_MEGARAID	0x9010
#define PCI_DEVICE_ID_AMI_MEGARAID2	0x9060
#define PCI_DEVICE_ID_AMI_MEGARAID3	0x1960
#define PCI_DEVICE_ID_DISCOVERY		0x000E
#define PCI_DEVICE_ID_PERC4_DI		0x000F
#define PCI_DEVICE_ID_PERC4_QC_VERDE	0x0407
#define	AMI_SUBSYS_VID			0x101E
#define DELL_SUBSYS_VID			0x1028
#define	HP_SUBSYS_VID			0x103C
#define LSI_SUBSYS_VID			0x1000
#define INTEL_SUBSYS_VID		0x8086
#define HBA_SIGNATURE	      		0x3344
#define HBA_SIGNATURE_471	  	0xCCCC
#define HBA_SIGNATURE_64BIT		0x0299
#define MBOX_BUSY_WAIT			10
#define DEFAULT_INITIATOR_ID	7
#define MAX_SGLIST		64
#define MIN_SGLIST		26
#define MAX_COMMANDS		126
#define CMDID_INT_CMDS		MAX_COMMANDS+1
#define MAX_CDB_LEN	     	10
#define MAX_EXT_CDB_LEN		16
#define DEF_CMD_PER_LUN		63
#define MAX_CMD_PER_LUN		MAX_COMMANDS
#define MAX_FIRMWARE_STATUS	46
#define MAX_XFER_PER_CMD	(64*1024)
#define MAX_SECTORS_PER_IO	128
#define MAX_LOGICAL_DRIVES_40LD		40
#define FC_MAX_PHYSICAL_DEVICES		256
#define MAX_LOGICAL_DRIVES_8LD		8
#define MAX_CHANNELS			5
#define MAX_TARGET			15
#define MAX_PHYSICAL_DRIVES		MAX_CHANNELS*MAX_TARGET
#define MAX_ROW_SIZE_40LD		32
#define MAX_ROW_SIZE_8LD		8
#define MAX_SPAN_DEPTH			8
#define NVIRT_CHAN		4
struct mbox_out  __attribute__ ((packed));
struct mbox_in  __attribute__ ((packed));
typedef struct  __attribute__ ((packed)) mbox_t;
typedef struct  __attribute__ ((packed)) mbox64_t;
#define MAX_REQ_SENSE_LEN       0x20
typedef struct  __attribute__ ((packed)) mega_passthru;
typedef struct  __attribute__ ((packed)) mega_ext_passthru;
typedef struct  __attribute__ ((packed)) mega_sgl64;
typedef struct  __attribute__ ((packed)) mega_sglist;
typedef struct  scb_t;
#define SCB_FREE	0x0000
#define SCB_ACTIVE	0x0001
#define SCB_PENDQ	0x0002
#define SCB_ISSUED	0x0004
#define SCB_ABORT	0x0008
#define SCB_RESET	0x0010
typedef struct  __attribute__ ((packed)) mega_product_info;
struct notify  __attribute__ ((packed));
#define MAX_NOTIFY_SIZE     0x80
#define CUR_NOTIFY_SIZE     sizeof(struct notify)
typedef struct  __attribute__ ((packed)) mega_inquiry3;
typedef struct  __attribute__ ((packed)) mega_adp_info;
typedef struct  __attribute__ ((packed)) mega_ldrv_info;
typedef struct  __attribute__ ((packed)) mega_pdrv_info;
typedef struct  __attribute__ ((packed)) mraid_inquiry;
typedef struct  __attribute__ ((packed)) mraid_ext_inquiry;
typedef struct __attribute__ ((packed)) adp_device;
typedef struct __attribute__ ((packed)) adp_span_40ld;
typedef struct __attribute__ ((packed)) adp_span_8ld;
typedef struct  __attribute__ ((packed)) logdrv_param;
typedef struct __attribute__ ((packed)) logdrv_40ld;
typedef struct __attribute__ ((packed)) logdrv_8ld;
typedef struct __attribute__ ((packed)) phys_drv;
typedef struct __attribute__ ((packed)) disk_array_40ld;
typedef struct __attribute__ ((packed)) disk_array_8ld;
#define IOCTL_MAX_DATALEN       4096
struct uioctl_t  __attribute__ ((packed));
#define MAX_CONTROLLERS 32
struct mcontroller ;
typedef struct  __attribute__ ((packed)) megacmd_t;
#define MEGAIOC_MAGIC  	'm'
#define MEGAIOC_QNADAP		'm'
#define MEGAIOC_QDRVRVER	'e'
#define MEGAIOC_QADAPINFO   	'g'
#define MKADAP(adapno)	  	(MEGAIOC_MAGIC << 8 | (adapno) )
#define GETADAP(mkadap)	 	( (mkadap) ^ MEGAIOC_MAGIC << 8 )
#define VENDOR_SPECIFIC_COMMANDS	0xE0
#define MEGA_INTERNAL_CMD		VENDOR_SPECIFIC_COMMANDS + 0x01
#define USCSICMD	VENDOR_SPECIFIC_COMMANDS
#define UIOC_RD		0x00001
#define UIOC_WR		0x00002
#define MBOX_CMD	0x00000
#define GET_DRIVER_VER	0x10000
#define GET_N_ADAP	0x20000
#define GET_ADAP_INFO	0x30000
#define GET_CAP		0x40000
#define GET_STATS	0x50000
typedef struct nitioctl_t;
typedef struct megastat_t;
struct private_bios_data  __attribute__ ((packed));
#define MEGA_MBOXCMD_LREAD	0x01
#define MEGA_MBOXCMD_LWRITE	0x02
#define MEGA_MBOXCMD_PASSTHRU	0x03
#define MEGA_MBOXCMD_ADPEXTINQ	0x04
#define MEGA_MBOXCMD_ADAPTERINQ	0x05
#define MEGA_MBOXCMD_LREAD64	0xA7
#define MEGA_MBOXCMD_LWRITE64	0xA8
#define MEGA_MBOXCMD_PASSTHRU64	0xC3
#define MEGA_MBOXCMD_EXTPTHRU	0xE3
#define MAIN_MISC_OPCODE	0xA4
#define GET_MAX_SG_SUPPORT	0x01
#define FC_NEW_CONFIG		0xA1
#define NC_SUBOP_PRODUCT_INFO	0x0E
#define NC_SUBOP_ENQUIRY3	0x0F
#define ENQ3_GET_SOLICITED_FULL	0x02
#define OP_DCMD_READ_CONFIG	0x04
#define NEW_READ_CONFIG_8LD	0x67
#define READ_CONFIG_8LD		0x07
#define FLUSH_ADAPTER		0x0A
#define FLUSH_SYSTEM		0xFE
#define	FC_DEL_LOGDRV		0xA4
#define	OP_SUP_DEL_LOGDRV	0x2A
#define OP_GET_LDID_MAP		0x18
#define OP_DEL_LOGDRV		0x1C
#define IS_BIOS_ENABLED		0x62
#define GET_BIOS		0x01
#define CHNL_CLASS		0xA9
#define GET_CHNL_CLASS		0x00
#define SET_CHNL_CLASS		0x01
#define CH_RAID			0x01
#define CH_SCSI			0x00
#define BIOS_PVT_DATA		0x40
#define GET_BIOS_PVT_DATA	0x00
#define MEGA_GET_TARGET_ID	0x7D
#define MEGA_CLUSTER_OP		0x70
#define MEGA_GET_CLUSTER_MODE	0x02
#define MEGA_CLUSTER_CMD	0x6E
#define MEGA_RESERVE_LD		0x01
#define MEGA_RELEASE_LD		0x02
#define MEGA_RESET_RESERVATIONS	0x03
#define MEGA_RESERVATION_STATUS	0x04
#define MEGA_RESERVE_PD		0x05
#define MEGA_RELEASE_PD		0x06
#define MEGA_BATT_MODULE_MISSING	0x01
#define MEGA_BATT_LOW_VOLTAGE		0x02
#define MEGA_BATT_TEMP_HIGH		0x04
#define MEGA_BATT_PACK_MISSING		0x08
#define MEGA_BATT_CHARGE_MASK		0x30
#define MEGA_BATT_CHARGE_DONE		0x00
#define MEGA_BATT_CHARGE_INPROG		0x10
#define MEGA_BATT_CHARGE_FAIL		0x20
#define MEGA_BATT_CYCLES_EXCEEDED	0x40
#define PDRV_UNCNF	0
#define PDRV_ONLINE	3
#define PDRV_FAILED	4
#define PDRV_RBLD	5
#define PDRV_HOTSPARE	6
#define RDRV_OFFLINE	0
#define RDRV_DEGRADED	1
#define RDRV_OPTIMAL	2
#define RDRV_DELETED	3
#define NO_READ_AHEAD		0
#define READ_AHEAD		1
#define ADAP_READ_AHEAD		2
#define WRMODE_WRITE_THRU	0
#define WRMODE_WRITE_BACK	1
#define CACHED_IO		0
#define DIRECT_IO		1
#define SCSI_LIST(scp) ((struct list_head *)(&(scp)->SCp))
typedef struct adapter_t;
struct mega_hbas ;
#define IN_ABORT	0x80000000L
#define IN_RESET	0x40000000L
#define BOARD_MEMMAP	0x20000000L
#define BOARD_IOMAP	0x10000000L
#define BOARD_40LD   	0x08000000L
#define BOARD_64BIT	0x04000000L
#define INTR_VALID			0x40
#define PCI_CONF_AMISIG			0xa0
#define PCI_CONF_AMISIG64		0xa4
#define MEGA_DMA_TYPE_NONE		0xFFFF
#define MEGA_BULK_DATA			0x0001
#define MEGA_SGLIST			0x0002
#define CMD_PORT	 	0x00
#define ACK_PORT	 	0x00
#define TOGGLE_PORT		0x01
#define INTR_PORT	  	0x0a
#define MBOX_BUSY_PORT     	0x00
#define MBOX_PORT0	 	0x04
#define MBOX_PORT1	 	0x05
#define MBOX_PORT2	 	0x06
#define MBOX_PORT3	 	0x07
#define ENABLE_MBOX_REGION 	0x0B
#define ISSUE_BYTE	 	0x10
#define ACK_BYTE	   	0x08
#define ENABLE_INTR_BYTE   	0xc0
#define DISABLE_INTR_BYTE  	0x00
#define VALID_INTR_BYTE    	0x40
#define MBOX_BUSY_BYTE     	0x10
#define ENABLE_MBOX_BYTE   	0x00
#define issue_command(adapter)	\
outb_p(ISSUE_BYTE, (adapter)->base + CMD_PORT)
#define irq_state(adapter)	inb_p((adapter)->base + INTR_PORT)
#define set_irq_state(adapter, value)	\
outb_p((value), (adapter)->base + INTR_PORT)
#define irq_ack(adapter)	\
outb_p(ACK_BYTE, (adapter)->base + ACK_PORT)
#define irq_enable(adapter)	\
outb_p(ENABLE_INTR_BYTE, (adapter)->base + TOGGLE_PORT)
#define irq_disable(adapter)	\
outb_p(DISABLE_INTR_BYTE, (adapter)->base + TOGGLE_PORT)
const char *megaraid_info (struct Scsi_Host *);
static int mega_query_adapter(adapter_t *);
static int issue_scb(adapter_t *, scb_t *);
static int mega_setup_mailbox(adapter_t *);
static int megaraid_queue (struct Scsi_Host *, struct scsi_cmnd *);
static scb_t * mega_build_cmd(adapter_t *, Scsi_Cmnd *, int *);
static void __mega_runpendq(adapter_t *);
static int issue_scb_block(adapter_t *, u_char *);
static irqreturn_t megaraid_isr_memmapped(int, void *);
static irqreturn_t megaraid_isr_iomapped(int, void *);
static void mega_free_scb(adapter_t *, scb_t *);
static int megaraid_abort(Scsi_Cmnd *);
static int megaraid_reset(Scsi_Cmnd *);
static int megaraid_abort_and_reset(adapter_t *, Scsi_Cmnd *, int);
static int megaraid_biosparam(struct scsi_device *, struct block_device *,
sector_t, int []);
static int mega_build_sglist (adapter_t *adapter, scb_t *scb,
u32 *buffer, u32 *length);
static int __mega_busywait_mbox (adapter_t *);
static void mega_rundoneq (adapter_t *);
static void mega_cmd_done(adapter_t *, u8 [], int, int);
static inline void mega_free_sgl (adapter_t *adapter);
static void mega_8_to_40ld (mraid_inquiry *inquiry,
mega_inquiry3 *enquiry3, mega_product_info *);
static int megadev_open (struct inode *, struct file *);
static int megadev_ioctl (struct file *, unsigned int, unsigned long);
static int mega_m_to_n(void __user *, nitioctl_t *);
static int mega_n_to_m(void __user *, megacmd_t *);
static int mega_init_scb (adapter_t *);
static int mega_is_bios_enabled (adapter_t *);
static int mega_print_inquiry(char *, char *);
static void mega_create_proc_entry(int, struct proc_dir_entry *);
static int proc_read_config(char *, char **, off_t, int, int *, void *);
static int proc_read_stat(char *, char **, off_t, int, int *, void *);
static int proc_read_mbox(char *, char **, off_t, int, int *, void *);
static int proc_rebuild_rate(char *, char **, off_t, int, int *, void *);
static int proc_battery(char *, char **, off_t, int, int *, void *);
static int proc_pdrv_ch0(char *, char **, off_t, int, int *, void *);
static int proc_pdrv_ch1(char *, char **, off_t, int, int *, void *);
static int proc_pdrv_ch2(char *, char **, off_t, int, int *, void *);
static int proc_pdrv_ch3(char *, char **, off_t, int, int *, void *);
static int proc_pdrv(adapter_t *, char *, int);
static int proc_rdrv_10(char *, char **, off_t, int, int *, void *);
static int proc_rdrv_20(char *, char **, off_t, int, int *, void *);
static int proc_rdrv_30(char *, char **, off_t, int, int *, void *);
static int proc_rdrv_40(char *, char **, off_t, int, int *, void *);
static int proc_rdrv(adapter_t *, char *, int, int);
static int mega_adapinq(adapter_t *, dma_addr_t);
static int mega_internal_dev_inquiry(adapter_t *, u8, u8, dma_addr_t);
static int mega_support_ext_cdb(adapter_t *);
static mega_passthru* mega_prepare_passthru(adapter_t *, scb_t *,
Scsi_Cmnd *, int, int);
static mega_ext_passthru* mega_prepare_extpassthru(adapter_t *,
scb_t *, Scsi_Cmnd *, int, int);
static void mega_enum_raid_scsi(adapter_t *);
static void mega_get_boot_drv(adapter_t *);
static int mega_support_random_del(adapter_t *);
static int mega_del_logdrv(adapter_t *, int);
static int mega_do_del_logdrv(adapter_t *, int);
static void mega_get_max_sgl(adapter_t *);
static int mega_internal_command(adapter_t *, megacmd_t *, mega_passthru *);
static void mega_internal_done(Scsi_Cmnd *);
static int mega_support_cluster(adapter_t *);
