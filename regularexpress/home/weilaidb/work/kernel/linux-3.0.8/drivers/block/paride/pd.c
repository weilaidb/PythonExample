#define PD_VERSION      "1.05"
#define PD_MAJOR	45
#define PD_NAME		"pd"
#define PD_UNITS	4
static int verbose = 0;
static int major = PD_MAJOR;
static char *name = PD_NAME;
static int cluster = 64;
static int nice = 0;
static int disable = 0;
static int drive0[8] = ;
static int drive1[8] = ;
static int drive2[8] = ;
static int drive3[8] = ;
static int (*drives[4])[8] = ;
enum ;
static DEFINE_MUTEX(pd_mutex);
static DEFINE_SPINLOCK(pd_lock);
module_param(verbose, bool, 0);
module_param(major, int, 0);
module_param(name, charp, 0);
module_param(cluster, int, 0);
module_param(nice, int, 0);
module_param_array(drive0, int, NULL, 0);
module_param_array(drive1, int, NULL, 0);
module_param_array(drive2, int, NULL, 0);
module_param_array(drive3, int, NULL, 0);
#define PD_BITS    4
#define PD_LOG_HEADS    64
#define PD_LOG_SECTS    32
#define PD_ID_OFF       54
#define PD_ID_LEN       14
#define PD_MAX_RETRIES  5
#define PD_TMO          800
#define PD_SPIN_DEL     50
#define PD_SPIN         (1000000*PD_TMO)/(HZ*PD_SPIN_DEL)
#define STAT_ERR        0x00001
#define STAT_INDEX      0x00002
#define STAT_ECC        0x00004
#define STAT_DRQ        0x00008
#define STAT_SEEK       0x00010
#define STAT_WRERR      0x00020
#define STAT_READY      0x00040
#define STAT_BUSY       0x00080
#define ERR_AMNF        0x00100
#define ERR_TK0NF       0x00200
#define ERR_ABRT        0x00400
#define ERR_MCR         0x00800
#define ERR_IDNF        0x01000
#define ERR_MC          0x02000
#define ERR_UNC         0x04000
#define ERR_TMO         0x10000
#define IDE_READ        	0x20
#define IDE_WRITE       	0x30
#define IDE_READ_VRFY		0x40
#define IDE_INIT_DEV_PARMS	0x91
#define IDE_STANDBY     	0x96
#define IDE_ACKCHANGE   	0xdb
#define IDE_DOORLOCK    	0xde
#define IDE_DOORUNLOCK  	0xdf
#define IDE_IDENTIFY    	0xec
#define IDE_EJECT		0xed
#define PD_NAMELEN	8
struct pd_unit ;
static struct pd_unit pd[PD_UNITS];
static char pd_scratch[512];
static char *pd_errs[17] = ;
static inline int status_reg(struct pd_unit *disk)
static inline int read_reg(struct pd_unit *disk, int reg)
static inline void write_status(struct pd_unit *disk, int val)
static inline void write_reg(struct pd_unit *disk, int reg, int val)
static inline u8 DRIVE(struct pd_unit *disk)
static void pd_print_error(struct pd_unit *disk, char *msg, int status)
static void pd_reset(struct pd_unit *disk)
#define DBMSG(msg)	((verbose>1)?(msg):NULL)
static int pd_wait_for(struct pd_unit *disk, int w, char *msg)
static void pd_send_command(struct pd_unit *disk, int n, int s, int h, int c0, int c1, int func)
static void pd_ide_command(struct pd_unit *disk, int func, int block, int count)
enum action ;
static struct request *pd_req;
static enum action (*phase)(void);
static void run_fsm(void);
static void ps_tq_int(struct work_struct *work);
static DECLARE_DELAYED_WORK(fsm_tq, ps_tq_int);
static void schedule_fsm(void)
static void ps_tq_int(struct work_struct *work)
static enum action do_pd_io_start(void);
static enum action pd_special(void);
static enum action do_pd_read_start(void);
static enum action do_pd_write_start(void);
static enum action do_pd_read_drq(void);
static enum action do_pd_write_done(void);
static struct request_queue *pd_queue;
static int pd_claimed;
static struct pd_unit *pd_current;
static PIA *pi_current;
static void run_fsm(void)
static int pd_retries = 0;
static int pd_block;
static int pd_count;
static int pd_run;
static int pd_cmd;
static char *pd_buf;
static enum action do_pd_io_start(void)
static enum action pd_special(void)
static int pd_next_buf(void)
static unsigned long pd_timeout;
static enum action do_pd_read_start(void)
static enum action do_pd_write_start(void)
static inline int pd_ready(void)
static enum action do_pd_read_drq(void)
static enum action do_pd_write_done(void)
static void pd_init_dev_parms(struct pd_unit *disk)
static enum action pd_door_lock(struct pd_unit *disk)
static enum action pd_door_unlock(struct pd_unit *disk)
static enum action pd_eject(struct pd_unit *disk)
static enum action pd_media_check(struct pd_unit *disk)
static void pd_standby_off(struct pd_unit *disk)
static enum action pd_identify(struct pd_unit *disk)
static void do_pd_request(struct request_queue * q)
static int pd_special_command(struct pd_unit *disk,
enum action (*func)(struct pd_unit *disk))
static int pd_open(struct block_device *bdev, fmode_t mode)
static int pd_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static int pd_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg)
static int pd_release(struct gendisk *p, fmode_t mode)
static unsigned int pd_check_events(struct gendisk *p, unsigned int clearing)
static int pd_revalidate(struct gendisk *p)
static const struct block_device_operations pd_fops = ;
static void pd_probe_drive(struct pd_unit *disk)
static int pd_detect(void)
static int __init pd_init(void)
static void __exit pd_exit(void)
MODULE_LICENSE("GPL");
module_init(pd_init)
module_exit(pd_exit)
