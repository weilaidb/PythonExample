#undef DEBUG
#if defined(CONFIG_SIBYTE_BCM1x55) || defined(CONFIG_SIBYTE_BCM1x80)
#elif defined(CONFIG_SIBYTE_SB1250) || defined(CONFIG_SIBYTE_BCM112X)
#error invalid SiByte UART configuration
#if defined(CONFIG_SIBYTE_BCM1x55) || defined(CONFIG_SIBYTE_BCM1x80)
#undef K_INT_TRACE_FREEZE
#define K_INT_TRACE_FREEZE K_BCM1480_INT_TRACE_FREEZE
#undef K_INT_PERF_CNT
#define K_INT_PERF_CNT K_BCM1480_INT_PERF_CNT
#define SBPROF_TB_MAJOR 240
typedef u64 tb_sample_t[6*256];
enum open_status ;
struct sbprof_tb ;
static struct sbprof_tb sbp;
#define MAX_SAMPLE_BYTES (24*1024*1024)
#define MAX_TBSAMPLE_BYTES (12*1024*1024)
#define MAX_SAMPLES (MAX_SAMPLE_BYTES/sizeof(u_int32_t))
#define TB_SAMPLE_SIZE (sizeof(tb_sample_t))
#define MAX_TB_SAMPLES (MAX_TBSAMPLE_BYTES/TB_SAMPLE_SIZE)
#define SBPROF_ZBSTART		_IOW('s', 0, int)
#define SBPROF_ZBSTOP		_IOW('s', 1, int)
#define SBPROF_ZBWAITFULL	_IOW('s', 2, int)
#define zclk_timer_init(val) \
__asm__ __volatile__ (".set push;" \
".set mips64;" \
"la   $8, 0xb00204c0;" \
"sd   %0, 0x10($8);" \
"sd   %1, 0($8);" \
".set pop" \
: \ \
: "r"(val), "r" ((1ULL << 33) | 1ULL) \
: "$8" )
#define zclk_get(val) \
__asm__ __volatile__ (".set push;" \
".set mips64;" \
"la   $8, 0xb00204c0;" \
"ld   %0, 0x10($8);" \
".set pop" \
: "=r"(val) \
: \
: "$8" )
#define DEVNAME "sb_tbprof"
#define TB_FULL (sbp.next_tb_sample == MAX_TB_SAMPLES)
static u64 tb_period;
static void arm_tb(void)
static irqreturn_t sbprof_tb_intr(int irq, void *dev_id)
static irqreturn_t sbprof_pc_intr(int irq, void *dev_id)
static int sbprof_zbprof_start(struct file *filp)
static int sbprof_zbprof_stop(void)
static int sbprof_tb_open(struct inode *inode, struct file *filp)
static int sbprof_tb_release(struct inode *inode, struct file *filp)
static ssize_t sbprof_tb_read(struct file *filp, char *buf,
size_t size, loff_t *offp)
static long sbprof_tb_ioctl(struct file *filp,
unsigned int command,
unsigned long arg)
static const struct file_operations sbprof_tb_fops = ;
static struct class *tb_class;
static struct device *tb_dev;
static int __init sbprof_tb_init(void)
static void __exit sbprof_tb_cleanup(void)
module_init(sbprof_tb_init);
module_exit(sbprof_tb_cleanup);
MODULE_ALIAS_CHARDEV_MAJOR(SBPROF_TB_MAJOR);
MODULE_AUTHOR("Ralf Baechle <ralf@linux-mips.org>");
MODULE_LICENSE("GPL");
