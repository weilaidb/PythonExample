#define MAX_LINE_LENGTH 64
struct rt2x00debug_crypto ;
struct rt2x00debug_intf ;
void rt2x00debug_update_crypto(struct rt2x00_dev *rt2x00dev,
struct rxdone_entry_desc *rxdesc)
void rt2x00debug_dump_frame(struct rt2x00_dev *rt2x00dev,
enum rt2x00_dump_type type, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(rt2x00debug_dump_frame);
static int rt2x00debug_file_open(struct inode *inode, struct file *file)
static int rt2x00debug_file_release(struct inode *inode, struct file *file)
static int rt2x00debug_open_queue_dump(struct inode *inode, struct file *file)
static int rt2x00debug_release_queue_dump(struct inode *inode, struct file *file)
static ssize_t rt2x00debug_read_queue_dump(struct file *file,
char __user *buf,
size_t length,
loff_t *offset)
static unsigned int rt2x00debug_poll_queue_dump(struct file *file,
poll_table *wait)
static const struct file_operations rt2x00debug_fop_queue_dump = ;
static ssize_t rt2x00debug_read_queue_stats(struct file *file,
char __user *buf,
size_t length,
loff_t *offset)
static const struct file_operations rt2x00debug_fop_queue_stats = ;
static ssize_t rt2x00debug_read_crypto_stats(struct file *file,
char __user *buf,
size_t length,
loff_t *offset)
static const struct file_operations rt2x00debug_fop_crypto_stats = ;
#define RT2X00DEBUGFS_OPS_READ(__name, __format, __type)	\
static ssize_t rt2x00debug_read_##__name(struct file *file,	\
char __user *buf,	\
size_t length,		\
loff_t *offset)	\
#define RT2X00DEBUGFS_OPS_WRITE(__name, __type)			\
static ssize_t rt2x00debug_write_##__name(struct file *file,	\
const char __user *buf,\
size_t length,	\
loff_t *offset)	\
#define RT2X00DEBUGFS_OPS(__name, __format, __type)		\
RT2X00DEBUGFS_OPS_READ(__name, __format, __type);		\
RT2X00DEBUGFS_OPS_WRITE(__name, __type);			\
\
static const struct file_operations rt2x00debug_fop_##__name = ;
RT2X00DEBUGFS_OPS(csr, "0x%.8x\n", u32);
RT2X00DEBUGFS_OPS(eeprom, "0x%.4x\n", u16);
RT2X00DEBUGFS_OPS(bbp, "0x%.2x\n", u8);
RT2X00DEBUGFS_OPS(rf, "0x%.8x\n", u32);
static ssize_t rt2x00debug_read_dev_flags(struct file *file,
char __user *buf,
size_t length,
loff_t *offset)
static const struct file_operations rt2x00debug_fop_dev_flags = ;
static ssize_t rt2x00debug_read_cap_flags(struct file *file,
char __user *buf,
size_t length,
loff_t *offset)
static const struct file_operations rt2x00debug_fop_cap_flags = ;
static struct dentry *rt2x00debug_create_file_driver(const char *name,
struct rt2x00debug_intf
*intf,
struct debugfs_blob_wrapper
*blob)
static struct dentry *rt2x00debug_create_file_chipset(const char *name,
struct rt2x00debug_intf
*intf,
struct
debugfs_blob_wrapper
*blob)
void rt2x00debug_register(struct rt2x00_dev *rt2x00dev)
void rt2x00debug_deregister(struct rt2x00_dev *rt2x00dev)
