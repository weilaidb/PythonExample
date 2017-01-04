#define DEBUG_SIMSCSI	0
#define SIMSCSI_REQ_QUEUE_LEN	64
#define DEFAULT_SIMSCSI_ROOT	"/var/ski-disks/sd"
#define SSC_OPEN			50
#define SSC_CLOSE			51
#define SSC_READ			52
#define SSC_WRITE			53
#define SSC_GET_COMPLETION		54
#define SSC_WAIT_COMPLETION		55
#define SSC_WRITE_ACCESS		2
#define SSC_READ_ACCESS			1
#if DEBUG_SIMSCSI
int simscsi_debug;
# define DBG	simscsi_debug
# define DBG	0
static struct Scsi_Host *host;
static void simscsi_interrupt (unsigned long val);
static DECLARE_TASKLET(simscsi_tasklet, simscsi_interrupt, 0);
struct disk_req ;
struct disk_stat ;
static int desc[16] = ;
static struct queue_entry  queue[SIMSCSI_REQ_QUEUE_LEN];
static int rd, wr;
static atomic_t num_reqs = ATOMIC_INIT(0);
static char *simscsi_root = DEFAULT_SIMSCSI_ROOT;
#define MAX_ROOT_LEN	128
static int __init
simscsi_setup (char *s)
__setup("simscsi=", simscsi_setup);
static void
simscsi_interrupt (unsigned long val)
static int
simscsi_biosparam (struct scsi_device *sdev, struct block_device *n,
sector_t capacity, int ip[])
static void
simscsi_sg_readwrite (struct scsi_cmnd *sc, int mode, unsigned long offset)
static void
simscsi_readwrite6 (struct scsi_cmnd *sc, int mode)
static size_t
simscsi_get_disk_size (int fd)
static void
simscsi_readwrite10 (struct scsi_cmnd *sc, int mode)
static int
simscsi_queuecommand_lck (struct scsi_cmnd *sc, void (*done)(struct scsi_cmnd *))
static DEF_SCSI_QCMD(simscsi_queuecommand)
static int
simscsi_host_reset (struct scsi_cmnd *sc)
static struct scsi_host_template driver_template = ;
static int __init
simscsi_init(void)
static void __exit
simscsi_exit(void)
module_init(simscsi_init);
module_exit(simscsi_exit);
