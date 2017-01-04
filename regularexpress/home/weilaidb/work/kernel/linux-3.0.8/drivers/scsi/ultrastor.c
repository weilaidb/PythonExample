#define ULTRASTOR_PRIVATE
#define FALSE 0
#define TRUE 1
#define ULTRASTOR_DEBUG (UD_ABORT|UD_CSIR|UD_RESET)
#define VERSION "1.12"
#define PACKED		__attribute__((packed))
#define ALIGNED(x)	__attribute__((aligned(x)))
typedef struct  ultrastor_sg_list;
struct mscp ;
#define U14F_PRODUCT_ID(port) ((port) + 0x4)
#define CONFIG(port) ((port) + 0x6)
#define LCL_DOORBELL_MASK(port) ((port) + 0x0)
#define LCL_DOORBELL_INTR(port) ((port) + 0x1)
#define SYS_DOORBELL_MASK(port) ((port) + 0x2)
#define SYS_DOORBELL_INTR(port) ((port) + 0x3)
static struct ultrastor_config
config = ;
static int ultrastor_bus_reset;
static const void *const bios_segment_table[8] = ;
static const unsigned char interrupt_table_14f[4] = ;
static const unsigned char dma_channel_table_14f[4] = ;
static const struct  mapping_table[4] = ;
static const unsigned short ultrastor_ports_14f[] = ;
static void ultrastor_interrupt(void *);
static irqreturn_t do_ultrastor_interrupt(int, void *);
static inline void build_sg_list(struct mscp *, struct scsi_cmnd *SCpnt);
static inline int find_and_clear_bit_16(unsigned long *field)
static inline unsigned char xchgb(unsigned char reg,
volatile unsigned char *mem)
#if ULTRASTOR_DEBUG & (UD_COMMAND | UD_ABORT)
static void log_ultrastor_abort(struct ultrastor_config *config,
int command)
static int ultrastor_14f_detect(struct scsi_host_template * tpnt)
static int ultrastor_24f_detect(struct scsi_host_template * tpnt)
static int ultrastor_detect(struct scsi_host_template * tpnt)
static int ultrastor_release(struct Scsi_Host *shost)
static const char *ultrastor_info(struct Scsi_Host * shpnt)
static inline void build_sg_list(struct mscp *mscp, struct scsi_cmnd *SCpnt)
static int ultrastor_queuecommand_lck(struct scsi_cmnd *SCpnt,
void (*done) (struct scsi_cmnd *))
static DEF_SCSI_QCMD(ultrastor_queuecommand)
static int ultrastor_abort(struct scsi_cmnd *SCpnt)
static int ultrastor_host_reset(struct scsi_cmnd * SCpnt)
int ultrastor_biosparam(struct scsi_device *sdev, struct block_device *bdev,
sector_t capacity, int * dkinfo)
static void ultrastor_interrupt(void *dev_id)
static irqreturn_t do_ultrastor_interrupt(int irq, void *dev_id)
MODULE_LICENSE("GPL");
static struct scsi_host_template driver_template = ;
