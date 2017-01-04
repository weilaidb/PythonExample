#define PF_VERSION      "1.04"
#define PF_MAJOR	47
#define PF_NAME		"pf"
#define PF_UNITS	4
static int verbose = 0;
static int major = PF_MAJOR;
static char *name = PF_NAME;
static int cluster = 64;
static int nice = 0;
static int disable = 0;
static int drive0[7] = ;
static int drive1[7] = ;
static int drive2[7] = ;
static int drive3[7] = ;
static int (*drives[4])[7] = ;
static int pf_drive_count;
enum ;
static DEFINE_MUTEX(pf_mutex);
static DEFINE_SPINLOCK(pf_spin_lock);
module_param(verbose, bool, 0644);
module_param(major, int, 0);
module_param(name, charp, 0);
module_param(cluster, int, 0);
module_param(nice, int, 0);
module_param_array(drive0, int, NULL, 0);
module_param_array(drive1, int, NULL, 0);
module_param_array(drive2, int, NULL, 0);
module_param_array(drive3, int, NULL, 0);
#define PF_FD_MAX	8192
#define PF_FD_HDS	2
#define PF_FD_SPT	18
#define PF_HD_HDS	64
#define PF_HD_SPT	32
#define PF_MAX_RETRIES  5
#define PF_TMO          800
#define PF_SPIN_DEL     50
#define PF_SPIN         (1000000*PF_TMO)/(HZ*PF_SPIN_DEL)
#define STAT_ERR        0x00001
#define STAT_INDEX      0x00002
#define STAT_ECC        0x00004
#define STAT_DRQ        0x00008
#define STAT_SEEK       0x00010
#define STAT_WRERR      0x00020
#define STAT_READY      0x00040
#define STAT_BUSY       0x00080
#define ATAPI_REQ_SENSE		0x03
#define ATAPI_LOCK		0x1e
#define ATAPI_DOOR		0x1b
#define ATAPI_MODE_SENSE	0x5a
#define ATAPI_CAPACITY		0x25
#define ATAPI_IDENTIFY		0x12
#define ATAPI_READ_10		0x28
#define ATAPI_WRITE_10		0x2a
static int pf_open(struct block_device *bdev, fmode_t mode);
static void do_pf_request(struct request_queue * q);
static int pf_ioctl(struct block_device *bdev, fmode_t mode,
unsigned int cmd, unsigned long arg);
static int pf_getgeo(struct block_device *bdev, struct hd_geometry *geo);
static int pf_release(struct gendisk *disk, fmode_t mode);
static int pf_detect(void);
static void do_pf_read(void);
static void do_pf_read_start(void);
static void do_pf_write(void);
static void do_pf_write_start(void);
static void do_pf_read_drq(void);
static void do_pf_write_done(void);
#define PF_NM           0
#define PF_RO           1
#define PF_RW           2
#define PF_NAMELEN      8
struct pf_unit ;
static struct pf_unit units[PF_UNITS];
static int pf_identify(struct pf_unit *pf);
static void pf_lock(struct pf_unit *pf, int func);
static void pf_eject(struct pf_unit *pf);
static unsigned int pf_check_events(struct gendisk *disk,
unsigned int clearing);
static char pf_scratch[512];
static int pf_retries = 0;
static int pf_busy = 0;
static struct request *pf_req;
static int pf_block;
static int pf_count;
static int pf_run;
static int pf_cmd;
static struct pf_unit *pf_current;
static int pf_mask;
static char *pf_buf;
static const struct block_device_operations pf_fops = ;
static void __init pf_init_units(void)
static int pf_open(struct block_device *bdev, fmode_t mode)
static int pf_getgeo(struct block_device *bdev, struct hd_geometry *geo)
static int pf_ioctl(struct block_device *bdev, fmode_t mode, unsigned int cmd, unsigned long arg)
static int pf_release(struct gendisk *disk, fmode_t mode)
static unsigned int pf_check_events(struct gendisk *disk, unsigned int clearing)
static inline int status_reg(struct pf_unit *pf)
static inline int read_reg(struct pf_unit *pf, int reg)
static inline void write_reg(struct pf_unit *pf, int reg, int val)
static int pf_wait(struct pf_unit *pf, int go, int stop, char *fun, char *msg)
static int pf_command(struct pf_unit *pf, char *cmd, int dlen, char *fun)
static int pf_completion(struct pf_unit *pf, char *buf, char *fun)
static void pf_req_sense(struct pf_unit *pf, int quiet)
static int pf_atapi(struct pf_unit *pf, char *cmd, int dlen, char *buf, char *fun)
static void pf_lock(struct pf_unit *pf, int func)
static void pf_eject(struct pf_unit *pf)
#define PF_RESET_TMO   30
static void pf_sleep(int cs)
static int pf_reset(struct pf_unit *pf)
static void pf_mode_sense(struct pf_unit *pf)
static void xs(char *buf, char *targ, int offs, int len)
static int xl(char *buf, int offs)
static void pf_get_capacity(struct pf_unit *pf)
static int pf_identify(struct pf_unit *pf)
static int pf_probe(struct pf_unit *pf)
static int pf_detect(void)
static int pf_start(struct pf_unit *pf, int cmd, int b, int c)
static int pf_ready(void)
static struct request_queue *pf_queue;
static void pf_end_request(int err)
static void do_pf_request(struct request_queue * q)
static int pf_next_buf(void)
static inline void next_request(int err)
static void do_pf_read(void)
static void do_pf_read_start(void)
static void do_pf_read_drq(void)
static void do_pf_write(void)
static void do_pf_write_start(void)
static void do_pf_write_done(void)
static int __init pf_init(void)
static void __exit pf_exit(void)
MODULE_LICENSE("GPL");
module_init(pf_init)
module_exit(pf_exit)
