#define HD_IRQ 14
#define REALLY_SLOW_IO
#undef  HD_IRQ
#define HD_IRQ IRQ_HARDDISK
#define HD_DATA		0x1f0
#define HD_ERROR	0x1f1
#define HD_NSECTOR	0x1f2
#define HD_SECTOR	0x1f3
#define HD_LCYL		0x1f4
#define HD_HCYL		0x1f5
#define HD_CURRENT	0x1f6
#define HD_STATUS	0x1f7
#define HD_FEATURE	HD_ERROR
#define HD_PRECOMP	HD_FEATURE
#define HD_COMMAND	HD_STATUS
#define HD_CMD		0x3f6
#define HD_ALTSTATUS	0x3f6
#define ERR_STAT		0x01
#define INDEX_STAT		0x02
#define ECC_STAT		0x04
#define DRQ_STAT		0x08
#define SEEK_STAT		0x10
#define SERVICE_STAT		SEEK_STAT
#define WRERR_STAT		0x20
#define READY_STAT		0x40
#define BUSY_STAT		0x80
#define MARK_ERR		0x01
#define TRK0_ERR		0x02
#define ABRT_ERR		0x04
#define MCR_ERR			0x08
#define ID_ERR			0x10
#define MC_ERR			0x20
#define ECC_ERR			0x40
#define BBD_ERR			0x80
#define ICRC_ERR		0x80
static DEFINE_SPINLOCK(hd_lock);
static struct request_queue *hd_queue;
static struct request *hd_req;
#define TIMEOUT_VALUE	(6*HZ)
#define	HD_DELAY	0
#define MAX_ERRORS     16
#define RESET_FREQ      8
#define RECAL_FREQ      4
#define MAX_HD		2
#define STAT_OK		(READY_STAT|SEEK_STAT)
#define OK_STATUS(s)	(((s)&(STAT_OK|(BUSY_STAT|WRERR_STAT|ERR_STAT)))==STAT_OK)
static void recal_intr(void);
static void bad_rw_intr(void);
static int reset;
static int hd_error;
struct hd_i_struct ;
static struct hd_i_struct hd_info[] = ;
static int NR_HD = ARRAY_SIZE(hd_info);
static struct hd_i_struct hd_info[MAX_HD];
static int NR_HD;
static struct gendisk *hd_gendisk[MAX_HD];
static struct timer_list device_timer;
#define TIMEOUT_VALUE (6*HZ)
#define SET_TIMER							\
do  while (0)
static void (*do_hd)(void) = NULL;
#define SET_HANDLER(x) \
if ((do_hd = (x)) != NULL) \
SET_TIMER; \
else \
del_timer(&device_timer);
#if (HD_DELAY > 0)
unsigned long last_req;
unsigned long read_timer(void)
static void __init hd_setup(char *str, int *ints)
static bool hd_end_request(int err, unsigned int bytes)
static bool hd_end_request_cur(int err)
static void dump_status(const char *msg, unsigned int stat)
static void check_status(void)
static int controller_busy(void)
static int status_ok(void)
static int controller_ready(unsigned int drive, unsigned int head)
static void hd_out(struct hd_i_struct *disk,
unsigned int nsect,
unsigned int sect,
unsigned int head,
unsigned int cyl,
unsigned int cmd,
void (*intr_addr)(void))
static void hd_request (void);
static int drive_busy(void)
static void reset_controller(void)
static void reset_hd(void)
static void unexpected_hd_interrupt(void)
static void bad_rw_intr(void)
static inline int wait_DRQ(void)
static void read_intr(void)
static void write_intr(void)
static void recal_intr(void)
static void hd_times_out(unsigned long dummy)
static int do_special_op(struct hd_i_struct *disk, struct request *req)
static void hd_request(void)
static void do_hd_request(struct request_queue *q)
static int hd_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static irqreturn_t hd_interrupt(int irq, void *dev_id)
static const struct block_device_operations hd_fops = ;
static int __init hd_init(void)
static int __init parse_hd_setup(char *line)
__setup("hd=", parse_hd_setup);
late_initcall(hd_init);
