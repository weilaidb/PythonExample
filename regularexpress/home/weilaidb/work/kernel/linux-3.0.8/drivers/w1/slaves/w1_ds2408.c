MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jean-Francois Dagenais <dagenaisj@sonatest.com>");
MODULE_DESCRIPTION("w1 family 29 driver for DS2408 8 Pin IO");
#define W1_F29_RETRIES		3
#define W1_F29_REG_LOGIG_STATE             0x88
#define W1_F29_REG_OUTPUT_LATCH_STATE      0x89
#define W1_F29_REG_ACTIVITY_LATCH_STATE    0x8A
#define W1_F29_REG_COND_SEARCH_SELECT_MASK 0x8B
#define W1_F29_REG_COND_SEARCH_POL_SELECT  0x8C
#define W1_F29_REG_CONTROL_AND_STATUS      0x8D
#define W1_F29_FUNC_READ_PIO_REGS          0xF0
#define W1_F29_FUNC_CHANN_ACCESS_READ      0xF5
#define W1_F29_FUNC_CHANN_ACCESS_WRITE     0x5A
#define W1_F29_FUNC_WRITE_COND_SEARCH_REG  0xCC
#define W1_F29_FUNC_RESET_ACTIVITY_LATCHES 0xC3
#define W1_F29_SUCCESS_CONFIRM_BYTE        0xAA
static int _read_reg(struct w1_slave *sl, u8 address, unsigned char* buf)
static ssize_t w1_f29_read_state(
struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t w1_f29_read_output(
struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t w1_f29_read_activity(
struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t w1_f29_read_cond_search_mask(
struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t w1_f29_read_cond_search_polarity(
struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t w1_f29_read_status_control(
struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t w1_f29_write_output(
struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t w1_f29_write_activity(
struct file *filp, struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf, loff_t off, size_t count)
static ssize_t w1_f29_write_status_control(
struct file *filp,
struct kobject *kobj,
struct bin_attribute *bin_attr,
char *buf,
loff_t off,
size_t count)
#define NB_SYSFS_BIN_FILES 6
static struct bin_attribute w1_f29_sysfs_bin_files[NB_SYSFS_BIN_FILES] = ;
static int w1_f29_add_slave(struct w1_slave *sl)
static void w1_f29_remove_slave(struct w1_slave *sl)
static struct w1_family_ops w1_f29_fops = ;
static struct w1_family w1_family_29 = ;
static int __init w1_f29_init(void)
static void __exit w1_f29_exit(void)
module_init(w1_f29_init);
module_exit(w1_f29_exit);
