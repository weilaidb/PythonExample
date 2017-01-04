#if defined(CONFIG_DEBUG_FS)
static char *chstate(unsigned n)
static int dump_ch(char *buf, int max, struct smd_channel *ch)
static int debug_read_stat(char *buf, int max)
static int debug_read_mem(char *buf, int max)
static int debug_read_ch(char *buf, int max)
static int debug_read_version(char *buf, int max)
static int debug_read_build_id(char *buf, int max)
static int debug_read_alloc_tbl(char *buf, int max)
#define DEBUG_BUFMAX 4096
static char debug_buffer[DEBUG_BUFMAX];
static ssize_t debug_read(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static int debug_open(struct inode *inode, struct file *file)
static const struct file_operations debug_ops = ;
static void debug_create(const char *name, mode_t mode,
struct dentry *dent,
int (*fill)(char *buf, int max))
static int smd_debugfs_init(void)
late_initcall(smd_debugfs_init);
#define MAX_NUM_SLEEP_CLIENTS		64
#define MAX_SLEEP_NAME_LEN		8
#define NUM_GPIO_INT_REGISTERS		6
#define GPIO_SMEM_NUM_GROUPS		2
#define GPIO_SMEM_MAX_PC_INTERRUPTS	8
struct tramp_gpio_save ;
struct tramp_gpio_smem ;
void smsm_print_sleep_info(void)
