#define AUTOSENSE
#define SUN3_SCSI_VME
#undef SUN3_SCSI_DEBUG
#define REAL_DMA
extern int sun3_map_test(unsigned long, char *);
#define USE_WRAPPER
#define DRIVER_SETUP
#define NDEBUG 0
#undef RESET_BOOT
#undef DRIVER_SETUP
#define ENABLE_IRQ()
static irqreturn_t scsi_sun3_intr(int irq, void *dummy);
static inline unsigned char sun3scsi_read(int reg);
static inline void sun3scsi_write(int reg, int value);
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
static struct scsi_cmnd *sun3_dma_setup_done = NULL;
#define	AFTER_RESET_DELAY	(HZ/2)
#define SUN3_DMA_DELAY 10
#define SUN3_DVMA_BUFSIZE 0xe000
#define SUN3_DMA_MINSIZE 128
static volatile unsigned char *sun3_scsi_regp;
static volatile struct sun3_dma_regs *dregs;
static unsigned char *dmabuf = NULL;
static unsigned char *sun3_dma_orig_addr = NULL;
static unsigned long sun3_dma_orig_count = 0;
static int sun3_dma_active = 0;
static unsigned long last_residual = 0;
static inline unsigned char sun3scsi_read(int reg)
static inline void sun3scsi_write(int reg, int value)
static struct Scsi_Host *default_instance;
static int sun3scsi_detect(struct scsi_host_template * tpnt)
int sun3scsi_release (struct Scsi_Host *shpnt)
static void sun3_scsi_reset_boot(struct Scsi_Host *instance)
static const char * sun3scsi_info (struct Scsi_Host *spnt)
#define CSR_GOOD 0x060f
static irqreturn_t scsi_sun3_intr(int irq, void *dummy)
static unsigned long sun3scsi_dma_setup(void *data, unsigned long count, int write_flag)
static inline unsigned long sun3scsi_dma_residual(struct Scsi_Host *instance)
static inline unsigned long sun3scsi_dma_xfer_len(unsigned long wanted,
struct scsi_cmnd *cmd,
int write_flag)
static int sun3scsi_dma_start(unsigned long count, char *data)
static int sun3scsi_dma_finish(int write_flag)
static struct scsi_host_template driver_template = ;
MODULE_LICENSE("GPL");
