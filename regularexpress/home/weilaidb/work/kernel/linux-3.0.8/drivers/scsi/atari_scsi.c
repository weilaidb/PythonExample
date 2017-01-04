#define NDEBUG (0)
#define NDEBUG_ABORT		0x00100000
#define NDEBUG_TAGS		0x00200000
#define NDEBUG_MERGING		0x00400000
#define AUTOSENSE
#define	REAL_DMA
#define	SUPPORT_TAGS
#define	MAX_TAGS 32
#define	IS_A_TT()	ATARIHW_PRESENT(TT_SCSI)
#define	SCSI_DMA_WRITE_P(elt,val)				\
do  while(0)
#define	SCSI_DMA_READ_P(elt)					\
(((((((unsigned long)tt_scsi_dma.elt##_hi << 8) |	\
(unsigned long)tt_scsi_dma.elt##_hmd) << 8) |	\
(unsigned long)tt_scsi_dma.elt##_lmd) << 8) |	\
(unsigned long)tt_scsi_dma.elt##_lo)
static inline void SCSI_DMA_SETADR(unsigned long adr)
static inline unsigned long SCSI_DMA_GETADR(void)
static inline void ENABLE_IRQ(void)
static inline void DISABLE_IRQ(void)
#define HOSTDATA_DMALEN		(((struct NCR5380_hostdata *) \
(atari_scsi_host->hostdata))->dma_len)
#define	AFTER_RESET_DELAY	(HZ/2)
#define	AFTER_RESET_DELAY	(5*HZ/2)
static int scsi_dma_is_ignored_buserr(unsigned char dma_stat);
static void atari_scsi_fetch_restbytes(void);
static long atari_scsi_dma_residual(struct Scsi_Host *instance);
static int falcon_classify_cmd(Scsi_Cmnd *cmd);
static unsigned long atari_dma_xfer_len(unsigned long wanted_len,
Scsi_Cmnd *cmd, int write_flag);
static irqreturn_t scsi_tt_intr(int irq, void *dummy);
static irqreturn_t scsi_falcon_intr(int irq, void *dummy);
static void falcon_release_lock_if_possible(struct NCR5380_hostdata *hostdata);
static void falcon_get_lock(void);
static void atari_scsi_reset_boot(void);
static unsigned char atari_scsi_tt_reg_read(unsigned char reg);
static void atari_scsi_tt_reg_write(unsigned char reg, unsigned char value);
static unsigned char atari_scsi_falcon_reg_read(unsigned char reg);
static void atari_scsi_falcon_reg_write(unsigned char reg, unsigned char value);
static struct Scsi_Host *atari_scsi_host;
static unsigned char (*atari_scsi_reg_read)(unsigned char reg);
static void (*atari_scsi_reg_write)(unsigned char reg, unsigned char value);
static unsigned long	atari_dma_residual, atari_dma_startaddr;
static short		atari_dma_active;
static char		*atari_dma_buffer;
static unsigned long	atari_dma_phys_buffer;
static char		*atari_dma_orig_addr;
#define	STRAM_BUFFER_SIZE	(4096)
static unsigned long	atari_dma_stram_mask;
#define STRAM_ADDR(a)	(((a) & atari_dma_stram_mask) == 0)
static int atari_read_overruns;
static int setup_can_queue = -1;
module_param(setup_can_queue, int, 0);
static int setup_cmd_per_lun = -1;
module_param(setup_cmd_per_lun, int, 0);
static int setup_sg_tablesize = -1;
module_param(setup_sg_tablesize, int, 0);
static int setup_use_tagged_queuing = -1;
module_param(setup_use_tagged_queuing, int, 0);
static int setup_hostid = -1;
module_param(setup_hostid, int, 0);
#if defined(REAL_DMA)
static int scsi_dma_is_ignored_buserr(unsigned char dma_stat)
static irqreturn_t scsi_tt_intr(int irq, void *dummy)
static irqreturn_t scsi_falcon_intr(int irq, void *dummy)
static void atari_scsi_fetch_restbytes(void)
static int falcon_got_lock = 0;
static DECLARE_WAIT_QUEUE_HEAD(falcon_fairness_wait);
static int falcon_trying_lock = 0;
static DECLARE_WAIT_QUEUE_HEAD(falcon_try_wait);
static int falcon_dont_release = 0;
static void falcon_release_lock_if_possible(struct NCR5380_hostdata *hostdata)
static void falcon_get_lock(void)
int __init atari_scsi_detect(struct scsi_host_template *host)
int atari_scsi_release(struct Scsi_Host *sh)
void __init atari_scsi_setup(char *str, int *ints)
int atari_scsi_bus_reset(Scsi_Cmnd *cmd)
static void __init atari_scsi_reset_boot(void)
const char *atari_scsi_info(struct Scsi_Host *host)
#if defined(REAL_DMA)
unsigned long atari_scsi_dma_setup(struct Scsi_Host *instance, void *data,
unsigned long count, int dir)
static long atari_scsi_dma_residual(struct Scsi_Host *instance)
#define	CMD_SURELY_BLOCK_MODE	0
#define	CMD_SURELY_BYTE_MODE	1
#define	CMD_MODE_UNKNOWN		2
static int falcon_classify_cmd(Scsi_Cmnd *cmd)
static unsigned long atari_dma_xfer_len(unsigned long wanted_len,
Scsi_Cmnd *cmd, int write_flag)
static unsigned char atari_scsi_tt_reg_read(unsigned char reg)
static void atari_scsi_tt_reg_write(unsigned char reg, unsigned char value)
static unsigned char atari_scsi_falcon_reg_read(unsigned char reg)
static void atari_scsi_falcon_reg_write(unsigned char reg, unsigned char value)
static struct scsi_host_template driver_template = ;
MODULE_LICENSE("GPL");
