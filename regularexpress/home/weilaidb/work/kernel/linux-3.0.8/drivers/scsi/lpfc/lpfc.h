#if defined(CONFIG_DEBUG_FS) && !defined(CONFIG_SCSI_LPFC_DEBUG_FS)
#define CONFIG_SCSI_LPFC_DEBUG_FS
struct lpfc_sli2_slim;
#define LPFC_PCI_DEV_LP		0x1
#define LPFC_PCI_DEV_OC		0x2
#define LPFC_SLI_REV2		2
#define LPFC_SLI_REV3		3
#define LPFC_SLI_REV4		4
#define LPFC_MAX_TARGET		4096
#define LPFC_MAX_DISC_THREADS	64
#define LPFC_MAX_NS_RETRY	3
#define LPFC_CMD_PER_LUN	3
#define LPFC_DEFAULT_SG_SEG_CNT 64
#define LPFC_DEFAULT_MENLO_SG_SEG_CNT 128
#define LPFC_DEFAULT_PROT_SG_SEG_CNT 4096
#define LPFC_MAX_SG_SEG_CNT	4096
#define LPFC_MAX_SGE_SIZE       0x80000000
#define LPFC_MAX_PROT_SG_SEG_CNT 4096
#define LPFC_IOCB_LIST_CNT	2250
#define LPFC_Q_RAMP_UP_INTERVAL 120
#define LPFC_VNAME_LEN		100
#define LPFC_TGTQ_INTERVAL	40000
#define LPFC_TGTQ_RAMPUP_PCENT	5
#define LPFC_MIN_TGT_QDEPTH	10
#define LPFC_MAX_TGT_QDEPTH	0xFFFF
#define  LPFC_MAX_BUCKET_COUNT 20
#define QUEUE_RAMP_DOWN_INTERVAL	(1 * HZ)
#define QUEUE_RAMP_UP_INTERVAL		(300 * HZ)
#define LPFC_DISC_IOCB_BUFF_COUNT 20
#define LPFC_HB_MBOX_INTERVAL   5
#define LPFC_HB_MBOX_TIMEOUT    30
#define LPFC_ERATT_POLL_INTERVAL	5
#define putPaddrLow(addr)    ((uint32_t) (0xffffffff & (u64)(addr)))
#define putPaddrHigh(addr)   ((uint32_t) (0xffffffff & (((u64)(addr))>>32)))
#define getPaddr(high, low)  ((dma_addr_t)( \
(( (u64)(high)<<16 ) << 16)|( (u64)(low))))
#define LPFC_DRVR_TIMEOUT	16
#define FC_MAX_ADPTMSG		64
#define MAX_HBAEVT	32
#define LPFC_MSIX_VECTORS	2
#define LPFC_DATA_READY		(1<<0)
enum lpfc_polling_flags ;
struct lpfc_dmabuf ;
struct lpfc_dma_pool ;
struct hbq_dmabuf ;
#define MEM_PRI		0x100
typedef struct lpfc_vpd  lpfc_vpd_t;
struct lpfc_scsi_buf;
struct lpfc_stats ;
enum sysfs_mbox_state ;
struct lpfc_sysfs_mbox ;
struct lpfc_hba;
enum discovery_state ;
enum hba_state ;
struct lpfc_vport ;
struct hbq_s ;
#define LPFC_MAX_HBQS  4
#define LPFC_ELS_HBQ	0
#define LPFC_EXTRA_HBQ	1
enum hba_temp_state ;
enum intr_type_t ;
struct unsol_rcv_ct_ctx ;
#define LPFC_USER_LINK_SPEED_AUTO	0
#define LPFC_USER_LINK_SPEED_1G		1
#define LPFC_USER_LINK_SPEED_2G		2
#define LPFC_USER_LINK_SPEED_4G		4
#define LPFC_USER_LINK_SPEED_8G		8
#define LPFC_USER_LINK_SPEED_10G	10
#define LPFC_USER_LINK_SPEED_16G	16
#define LPFC_USER_LINK_SPEED_MAX	LPFC_USER_LINK_SPEED_16G
#define LPFC_USER_LINK_SPEED_BITMAP ((1 << LPFC_USER_LINK_SPEED_16G) | \
(1 << LPFC_USER_LINK_SPEED_10G) | \
(1 << LPFC_USER_LINK_SPEED_8G) | \
(1 << LPFC_USER_LINK_SPEED_4G) | \
(1 << LPFC_USER_LINK_SPEED_2G) | \
(1 << LPFC_USER_LINK_SPEED_1G) | \
(1 << LPFC_USER_LINK_SPEED_AUTO))
#define LPFC_LINK_SPEED_STRING "0, 1, 2, 4, 8, 10, 16"
enum nemb_type ;
enum mbox_type ;
enum dma_type ;
enum sta_type ;
struct lpfc_mbox_ext_buf_ctx ;
struct lpfc_hba ;
static inline struct Scsi_Host *
lpfc_shost_from_vport(struct lpfc_vport *vport)
static inline void
lpfc_set_loopback_flag(struct lpfc_hba *phba)
static inline int
lpfc_is_link_up(struct lpfc_hba *phba)
static inline void
lpfc_worker_wake_up(struct lpfc_hba *phba)
static inline int
lpfc_readl(void __iomem *addr, uint32_t *data)
static inline int
lpfc_sli_read_hs(struct lpfc_hba *phba)
