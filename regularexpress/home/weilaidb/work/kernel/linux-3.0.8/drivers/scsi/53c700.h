#define _53C700_H
#undef	NCR_700_DEBUG
#undef NCR_700_TAG_DEBUG
#define DEBUG(x)	printk x
#define DDEBUG(prefix, sdev, fmt, a...) \
sdev_printk(prefix, sdev, fmt, ##a)
#define CDEBUG(prefix, scmd, fmt, a...) \
scmd_printk(prefix, scmd, fmt, ##a)
#define DEBUG(x)	do  while (0)
#define DDEBUG(prefix, scmd, fmt, a...) do  while (0)
#define CDEBUG(prefix, scmd, fmt, a...) do  while (0)
#define NCR_700_COMMAND_SLOTS_PER_HOST	64
#define NCR_700_SG_SEGMENTS		32
#define NCR_700_MAX_LUNS		32
#define NCR_700_LUN_MASK		(NCR_700_MAX_LUNS - 1)
#define NCR_700_MAX_TAGS		16
#define NCR_700_DEFAULT_TAGS		4
#define NCR_700_CMD_PER_LUN		2
#define NCR_700_INTERNAL_SENSE_MAGIC	0x42
struct NCR_700_Host_Parameters;
struct Scsi_Host *NCR_700_detect(struct scsi_host_template *,
struct NCR_700_Host_Parameters *, struct device *);
int NCR_700_release(struct Scsi_Host *host);
irqreturn_t NCR_700_intr(int, void *);
enum NCR_700_Host_State ;
struct NCR_700_SG_List ;
struct NCR_700_Device_Parameters ;
#define NCR_700_DEV_NEGOTIATED_SYNC	(1<<16)
#define NCR_700_DEV_BEGIN_SYNC_NEGOTIATION	(1<<17)
#define NCR_700_DEV_PRINT_SYNC_NEGOTIATION (1<<19)
static inline char *NCR_700_get_sense_cmnd(struct scsi_device *SDp)
static inline void
NCR_700_set_depth(struct scsi_device *SDp, __u8 depth)
static inline __u8
NCR_700_get_depth(struct scsi_device *SDp)
static inline int
NCR_700_is_flag_set(struct scsi_device *SDp, __u32 flag)
static inline int
NCR_700_is_flag_clear(struct scsi_device *SDp, __u32 flag)
static inline void
NCR_700_set_flag(struct scsi_device *SDp, __u32 flag)
static inline void
NCR_700_clear_flag(struct scsi_device *SDp, __u32 flag)
enum NCR_700_tag_neg_state ;
static inline enum NCR_700_tag_neg_state
NCR_700_get_tag_neg_state(struct scsi_device *SDp)
static inline void
NCR_700_set_tag_neg_state(struct scsi_device *SDp,
enum NCR_700_tag_neg_state state)
struct NCR_700_command_slot ;
struct NCR_700_Host_Parameters ;
#define bE	(hostdata->force_le_on_be ? 0 : 3)
#define	bSWAP	(hostdata->force_le_on_be)
#define bEBus	(!hostdata->force_le_on_be)
#elif defined(__BIG_ENDIAN)
#define bE	3
#define bSWAP	0
#elif defined(__LITTLE_ENDIAN)
#define bE	0
#define bSWAP	0
#error "__BIG_ENDIAN or __LITTLE_ENDIAN must be defined, did you include byteorder.h?"
#define bEBus	1
#define bEBus	0
#define bS_to_cpu(x)	(bSWAP ? le32_to_cpu(x) : (x))
#define bS_to_host(x)	(bSWAP ? cpu_to_le32(x) : (x))
#define	SCNTL0_REG			0x00
#define		FULL_ARBITRATION	0xc0
#define 	PARITY			0x08
#define		ENABLE_PARITY		0x04
#define 	AUTO_ATN		0x02
#define	SCNTL1_REG			0x01
#define 	SLOW_BUS		0x80
#define		ENABLE_SELECT		0x20
#define		ASSERT_RST		0x08
#define		ASSERT_EVEN_PARITY	0x04
#define	SDID_REG			0x02
#define	SIEN_REG			0x03
#define 	PHASE_MM_INT		0x80
#define 	FUNC_COMP_INT		0x40
#define 	SEL_TIMEOUT_INT		0x20
#define 	SELECT_INT		0x10
#define 	GROSS_ERR_INT		0x08
#define 	UX_DISC_INT		0x04
#define 	RST_INT			0x02
#define 	PAR_ERR_INT		0x01
#define	SCID_REG			0x04
#define SXFER_REG			0x05
#define		ASYNC_OPERATION		0x00
#define SODL_REG                        0x06
#define	SOCL_REG			0x07
#define	SFBR_REG			0x08
#define	SIDL_REG			0x09
#define	SBDL_REG			0x0A
#define	SBCL_REG			0x0B
#define		SBCL_IO			0x01
#define		SYNC_DIV_AS_ASYNC	0x00
#define		SYNC_DIV_1_0		0x01
#define		SYNC_DIV_1_5		0x02
#define		SYNC_DIV_2_0		0x03
#define	DSTAT_REG			0x0C
#define		ILGL_INST_DETECTED	0x01
#define		WATCH_DOG_INTERRUPT	0x02
#define		SCRIPT_INT_RECEIVED	0x04
#define		ABORTED			0x10
#define	SSTAT0_REG			0x0D
#define		PARITY_ERROR		0x01
#define		SCSI_RESET_DETECTED	0x02
#define		UNEXPECTED_DISCONNECT	0x04
#define		SCSI_GROSS_ERROR	0x08
#define		SELECTED		0x10
#define		SELECTION_TIMEOUT	0x20
#define		FUNCTION_COMPLETE	0x40
#define		PHASE_MISMATCH 		0x80
#define	SSTAT1_REG			0x0E
#define		SIDL_REG_FULL		0x80
#define		SODR_REG_FULL		0x40
#define		SODL_REG_FULL		0x20
#define SSTAT2_REG                      0x0F
#define CTEST0_REG                      0x14
#define		BTB_TIMER_DISABLE	0x40
#define CTEST1_REG                      0x15
#define CTEST2_REG                      0x16
#define CTEST3_REG                      0x17
#define CTEST4_REG                      0x18
#define         DISABLE_FIFO            0x00
#define         SLBE                    0x10
#define         SFWR                    0x08
#define         BYTE_LANE0              0x04
#define         BYTE_LANE1              0x05
#define         BYTE_LANE2              0x06
#define         BYTE_LANE3              0x07
#define         SCSI_ZMODE              0x20
#define         ZMODE                   0x40
#define CTEST5_REG                      0x19
#define         MASTER_CONTROL          0x10
#define         DMA_DIRECTION           0x08
#define CTEST7_REG                      0x1B
#define		BURST_DISABLE		0x80
#define		SEL_TIMEOUT_DISABLE	0x10
#define         DFP                     0x08
#define         EVP                     0x04
#define         CTEST7_TT1              0x02
#define		DIFF			0x01
#define CTEST6_REG                      0x1A
#define	TEMP_REG			0x1C
#define	DFIFO_REG			0x20
#define		FLUSH_DMA_FIFO		0x80
#define		CLR_FIFO		0x40
#define	ISTAT_REG			0x21
#define		ABORT_OPERATION		0x80
#define		SOFTWARE_RESET_710	0x40
#define		DMA_INT_PENDING		0x01
#define		SCSI_INT_PENDING	0x02
#define		CONNECTED		0x08
#define CTEST8_REG                      0x22
#define         LAST_DIS_ENBL           0x01
#define		SHORTEN_FILTERING	0x04
#define		ENABLE_ACTIVE_NEGATION	0x10
#define		GENERATE_RECEIVE_PARITY	0x20
#define		CLR_FIFO_710		0x04
#define		FLUSH_DMA_FIFO_710	0x08
#define CTEST9_REG                      0x23
#define	DBC_REG				0x24
#define	DCMD_REG			0x27
#define	DNAD_REG			0x28
#define	DIEN_REG			0x39
#define		BUS_FAULT		0x20
#define 	ABORT_INT		0x10
#define 	INT_INST_INT		0x04
#define 	WD_INT			0x02
#define 	ILGL_INST_INT		0x01
#define	DCNTL_REG			0x3B
#define		SOFTWARE_RESET		0x01
#define		COMPAT_700_MODE		0x01
#define 	SCRPTS_16BITS		0x20
#define		EA_710			0x20
#define		ASYNC_DIV_2_0		0x00
#define		ASYNC_DIV_1_5		0x40
#define		ASYNC_DIV_1_0		0x80
#define		ASYNC_DIV_3_0		0xc0
#define DMODE_710_REG			0x38
#define	DMODE_700_REG			0x34
#define		BURST_LENGTH_1		0x00
#define		BURST_LENGTH_2		0x40
#define		BURST_LENGTH_4		0x80
#define		BURST_LENGTH_8		0xC0
#define		DMODE_FC1		0x10
#define		DMODE_FC2		0x20
#define 	BW16			32
#define 	MODE_286		16
#define 	IO_XFER			8
#define 	FIXED_ADDR		4
#define DSP_REG                         0x2C
#define DSPS_REG                        0x30
#define NCR_700_MAX_OFFSET	8
#define NCR_710_MAX_OFFSET	8
#define NCR_700_MIN_XFERP	1
#define NCR_710_MIN_XFERP	0
#define NCR_700_MIN_PERIOD	25
#define script_patch_32(dev, script, symbol, value) \
#define script_patch_32_abs(dev, script, symbol, value) \
#define script_patch_ID(dev, script, symbol, value) \
#define script_patch_16(dev, script, symbol, value) \
static inline __u8
NCR_700_readb(struct Scsi_Host *host, __u32 reg)
static inline __u32
NCR_700_readl(struct Scsi_Host *host, __u32 reg)
static inline void
NCR_700_writeb(__u8 value, struct Scsi_Host *host, __u32 reg)
static inline void
NCR_700_writel(__u32 value, struct Scsi_Host *host, __u32 reg)
