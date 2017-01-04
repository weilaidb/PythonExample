#define PG_VERSION      "1.02"
#define PG_MAJOR	97
#define PG_NAME		"pg"
#define PG_UNITS	4
#define PI_PG	4
static int verbose = 0;
static int major = PG_MAJOR;
static char *name = PG_NAME;
static int disable = 0;
static int drive0[6] = ;
static int drive1[6] = ;
static int drive2[6] = ;
static int drive3[6] = ;
static int (*drives[4])[6] = ;
static int pg_drive_count;
enum ;
module_param(verbose, bool, 0644);
module_param(major, int, 0);
module_param(name, charp, 0);
module_param_array(drive0, int, NULL, 0);
module_param_array(drive1, int, NULL, 0);
module_param_array(drive2, int, NULL, 0);
module_param_array(drive3, int, NULL, 0);
#define PG_SPIN_DEL     50
#define PG_SPIN         200
#define PG_TMO		HZ
#define PG_RESET_TMO	10*HZ
#define STAT_ERR        0x01
#define STAT_INDEX      0x02
#define STAT_ECC        0x04
#define STAT_DRQ        0x08
#define STAT_SEEK       0x10
#define STAT_WRERR      0x20
#define STAT_READY      0x40
#define STAT_BUSY       0x80
#define ATAPI_IDENTIFY		0x12
static DEFINE_MUTEX(pg_mutex);
static int pg_open(struct inode *inode, struct file *file);
static int pg_release(struct inode *inode, struct file *file);
static ssize_t pg_read(struct file *filp, char __user *buf,
size_t count, loff_t * ppos);
static ssize_t pg_write(struct file *filp, const char __user *buf,
size_t count, loff_t * ppos);
static int pg_detect(void);
#define PG_NAMELEN      8
struct pg ;
static struct pg devices[PG_UNITS];
static int pg_identify(struct pg *dev, int log);
static char pg_scratch[512];
static struct class *pg_class;
static const struct file_operations pg_fops = ;
static void pg_init_units(void)
static inline int status_reg(struct pg *dev)
static inline int read_reg(struct pg *dev, int reg)
static inline void write_reg(struct pg *dev, int reg, int val)
static inline u8 DRIVE(struct pg *dev)
static void pg_sleep(int cs)
static int pg_wait(struct pg *dev, int go, int stop, unsigned long tmo, char *msg)
static int pg_command(struct pg *dev, char *cmd, int dlen, unsigned long tmo)
static int pg_completion(struct pg *dev, char *buf, unsigned long tmo)
static int pg_reset(struct pg *dev)
static void xs(char *buf, char *targ, int len)
static int pg_identify(struct pg *dev, int log)
static int pg_probe(struct pg *dev)
static int pg_detect(void)
static int pg_open(struct inode *inode, struct file *file)
static int pg_release(struct inode *inode, struct file *file)
static ssize_t pg_write(struct file *filp, const char __user *buf, size_t count, loff_t *ppos)
static ssize_t pg_read(struct file *filp, char __user *buf, size_t count, loff_t *ppos)
static int __init pg_init(void)
static void __exit pg_exit(void)
MODULE_LICENSE("GPL");
module_init(pg_init)
module_exit(pg_exit)
