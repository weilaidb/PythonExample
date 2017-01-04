static unsigned int ath5k_debug;
module_param_named(debug, ath5k_debug, uint, 0);
static int ath5k_debugfs_open(struct inode *inode, struct file *file)
struct reg ;
#define REG_STRUCT_INIT(r)
static const struct reg regs[] = ;
static void *reg_start(struct seq_file *seq, loff_t *pos)
static void reg_stop(struct seq_file *seq, void *p)
static void *reg_next(struct seq_file *seq, void *p, loff_t *pos)
static int reg_show(struct seq_file *seq, void *p)
static const struct seq_operations register_seq_ops = ;
static int open_file_registers(struct inode *inode, struct file *file)
static const struct file_operations fops_registers = ;
static ssize_t read_file_beacon(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t write_file_beacon(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations fops_beacon = ;
static ssize_t write_file_reset(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations fops_reset = ;
static const struct  dbg_info[] = ;
static ssize_t read_file_debug(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t write_file_debug(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations fops_debug = ;
static ssize_t read_file_antenna(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t write_file_antenna(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations fops_antenna = ;
static ssize_t read_file_misc(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_misc = ;
static ssize_t read_file_frameerrors(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t write_file_frameerrors(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations fops_frameerrors = ;
static ssize_t read_file_ani(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t write_file_ani(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations fops_ani = ;
static ssize_t read_file_queue(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t write_file_queue(struct file *file,
const char __user *userbuf,
size_t count, loff_t *ppos)
static const struct file_operations fops_queue = ;
void
ath5k_debug_init_device(struct ath5k_softc *sc)
void
ath5k_debug_dump_bands(struct ath5k_softc *sc)
static inline void
ath5k_debug_printrxbuf(struct ath5k_buf *bf, int done,
struct ath5k_rx_status *rs)
void
ath5k_debug_printrxbuffs(struct ath5k_softc *sc, struct ath5k_hw *ah)
void
ath5k_debug_printtxbuf(struct ath5k_softc *sc, struct ath5k_buf *bf)
