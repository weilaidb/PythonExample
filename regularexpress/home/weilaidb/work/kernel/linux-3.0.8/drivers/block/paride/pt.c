#define PT_VERSION      "1.04"
#define PT_MAJOR	96
#define PT_NAME		"pt"
#define PT_UNITS	4
static int verbose = 0;
static int major = PT_MAJOR;
static char *name = PT_NAME;
static int disable = 0;
static int drive0[6] = ;
static int drive1[6] = ;
static int drive2[6] = ;
static int drive3[6] = ;
static int (*drives[4])[6] = ;
#define D_PRT   0
#define D_PRO   1
#define D_UNI   2
#define D_MOD   3
#define D_SLV   4
#define D_DLY   5
#define DU              (*drives[unit])
module_param(verbose, bool, 0);
module_param(major, int, 0);
module_param(name, charp, 0);
module_param_array(drive0, int, NULL, 0);
module_param_array(drive1, int, NULL, 0);
module_param_array(drive2, int, NULL, 0);
module_param_array(drive3, int, NULL, 0);
#define PT_MAX_RETRIES  5
#define PT_TMO          3000
#define PT_SPIN_DEL     50
#define PT_RESET_TMO    30
#define PT_READY_TMO	60
#define PT_REWIND_TMO	1200
#define PT_SPIN         ((1000000/(HZ*PT_SPIN_DEL))*PT_TMO)
#define STAT_ERR        0x00001
#define STAT_INDEX      0x00002
#define STAT_ECC        0x00004
#define STAT_DRQ        0x00008
#define STAT_SEEK       0x00010
#define STAT_WRERR      0x00020
#define STAT_READY      0x00040
#define STAT_BUSY       0x00080
#define STAT_SENSE	0x1f000
#define ATAPI_TEST_READY	0x00
#define ATAPI_REWIND		0x01
#define ATAPI_REQ_SENSE		0x03
#define ATAPI_READ_6		0x08
#define ATAPI_WRITE_6		0x0a
#define ATAPI_WFM		0x10
#define ATAPI_IDENTIFY		0x12
#define ATAPI_MODE_SENSE	0x1a
#define ATAPI_LOG_SENSE		0x4d
static DEFINE_MUTEX(pt_mutex);
static int pt_open(struct inode *inode, struct file *file);
static long pt_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
static int pt_release(struct inode *inode, struct file *file);
static ssize_t pt_read(struct file *filp, char __user *buf,
size_t count, loff_t * ppos);
static ssize_t pt_write(struct file *filp, const char __user *buf,
size_t count, loff_t * ppos);
static int pt_detect(void);
#define PT_MEDIA	1
#define PT_WRITE_OK	2
#define PT_REWIND	4
#define PT_WRITING      8
#define PT_READING     16
#define PT_EOF	       32
#define PT_NAMELEN      8
#define PT_BUFSIZE  16384
struct pt_unit ;
static int pt_identify(struct pt_unit *tape);
static struct pt_unit pt[PT_UNITS];
static char pt_scratch[512];
static const struct file_operations pt_fops = ;
static struct class *pt_class;
static inline int status_reg(struct pi_adapter *pi)
static inline int read_reg(struct pi_adapter *pi, int reg)
static inline void write_reg(struct pi_adapter *pi, int reg, int val)
static inline u8 DRIVE(struct pt_unit *tape)
static int pt_wait(struct pt_unit *tape, int go, int stop, char *fun, char *msg)
static int pt_command(struct pt_unit *tape, char *cmd, int dlen, char *fun)
static int pt_completion(struct pt_unit *tape, char *buf, char *fun)
static void pt_req_sense(struct pt_unit *tape, int quiet)
static int pt_atapi(struct pt_unit *tape, char *cmd, int dlen, char *buf, char *fun)
static void pt_sleep(int cs)
static int pt_poll_dsc(struct pt_unit *tape, int pause, int tmo, char *msg)
static void pt_media_access_cmd(struct pt_unit *tape, int tmo, char *cmd, char *fun)
static void pt_rewind(struct pt_unit *tape)
static void pt_write_fm(struct pt_unit *tape)
#define DBMSG(msg)      ((verbose>1)?(msg):NULL)
static int pt_reset(struct pt_unit *tape)
static int pt_ready_wait(struct pt_unit *tape, int tmo)
static void xs(char *buf, char *targ, int offs, int len)
static int xn(char *buf, int offs, int size)
static int pt_identify(struct pt_unit *tape)
static int pt_probe(struct pt_unit *tape)
static int pt_detect(void)
static int pt_open(struct inode *inode, struct file *file)
static long pt_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int
pt_release(struct inode *inode, struct file *file)
static ssize_t pt_read(struct file *filp, char __user *buf, size_t count, loff_t * ppos)
static ssize_t pt_write(struct file *filp, const char __user *buf, size_t count, loff_t * ppos)
static int __init pt_init(void)
static void __exit pt_exit(void)
MODULE_LICENSE("GPL");
module_init(pt_init)
module_exit(pt_exit)
