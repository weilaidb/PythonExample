#define MAX_RDR_WORDS	24
#define PERF_VERSION	2
struct rdr_tbl_ent ;
static int perf_processor_interface __read_mostly = UNKNOWN_INTF;
static int perf_enabled __read_mostly;
static spinlock_t perf_lock;
struct parisc_device *cpu_device __read_mostly;
static const int perf_rdrs_W[] =
;
static const int perf_rdrs_U[] =
;
static const struct rdr_tbl_ent perf_rdr_tbl_W[] = ;
static const struct rdr_tbl_ent perf_rdr_tbl_U[] = ;
static const uint64_t perf_bitmasks[] = ;
static const uint64_t perf_bitmasks_piranha[] = ;
static const uint64_t *bitmask_array;
static int perf_config(uint32_t *image_ptr);
static int perf_release(struct inode *inode, struct file *file);
static int perf_open(struct inode *inode, struct file *file);
static ssize_t perf_read(struct file *file, char __user *buf, size_t cnt, loff_t *ppos);
static ssize_t perf_write(struct file *file, const char __user *buf, size_t count,
loff_t *ppos);
static long perf_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
static void perf_start_counters(void);
static int perf_stop_counters(uint32_t *raddr);
static const struct rdr_tbl_ent * perf_rdr_get_entry(uint32_t rdr_num);
static int perf_rdr_read_ubuf(uint32_t	rdr_num, uint64_t *buffer);
static int perf_rdr_clear(uint32_t rdr_num);
static int perf_write_image(uint64_t *memaddr);
static void perf_rdr_write(uint32_t rdr_num, uint64_t *buffer);
extern uint64_t perf_rdr_shift_in_W (uint32_t rdr_num, uint16_t width);
extern uint64_t perf_rdr_shift_in_U (uint32_t rdr_num, uint16_t width);
extern void perf_rdr_shift_out_W (uint32_t rdr_num, uint64_t buffer);
extern void perf_rdr_shift_out_U (uint32_t rdr_num, uint64_t buffer);
extern void perf_intrigue_enable_perf_counters (void);
extern void perf_intrigue_disable_perf_counters (void);
static int perf_config(uint32_t *image_ptr)
static int perf_open(struct inode *inode, struct file *file)
static int perf_release(struct inode *inode, struct file *file)
static ssize_t perf_read(struct file *file, char __user *buf, size_t cnt, loff_t *ppos)
static ssize_t perf_write(struct file *file, const char __user *buf, size_t count,
loff_t *ppos)
static void perf_patch_images(void)
static long perf_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static const struct file_operations perf_fops = ;
static struct miscdevice perf_dev = ;
static int __init perf_init(void)
static void perf_start_counters(void)
static int perf_stop_counters(uint32_t *raddr)
static const struct rdr_tbl_ent * perf_rdr_get_entry(uint32_t rdr_num)
static int perf_rdr_read_ubuf(uint32_t	rdr_num, uint64_t *buffer)
static int perf_rdr_clear(uint32_t	rdr_num)
static int perf_write_image(uint64_t *memaddr)
static void perf_rdr_write(uint32_t rdr_num, uint64_t *buffer)
module_init(perf_init);
