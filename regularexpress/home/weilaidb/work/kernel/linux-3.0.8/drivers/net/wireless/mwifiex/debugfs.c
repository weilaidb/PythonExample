static struct dentry *mwifiex_dfs_dir;
static char *bss_modes[] = ;
#define item_size(n)		(FIELD_SIZEOF(struct mwifiex_debug_info, n))
#define item_addr(n)		(offsetof(struct mwifiex_debug_info, n))
#define adapter_item_size(n)	(FIELD_SIZEOF(struct mwifiex_adapter, n))
#define adapter_item_addr(n)	(offsetof(struct mwifiex_adapter, n))
struct mwifiex_debug_data ;
static struct mwifiex_debug_data items[] = ;
static int num_of_items = ARRAY_SIZE(items);
static int
mwifiex_open_generic(struct inode *inode, struct file *file)
static ssize_t
mwifiex_info_read(struct file *file, char __user *ubuf,
size_t count, loff_t *ppos)
static ssize_t
mwifiex_getlog_read(struct file *file, char __user *ubuf,
size_t count, loff_t *ppos)
static struct mwifiex_debug_info info;
static ssize_t
mwifiex_debug_read(struct file *file, char __user *ubuf,
size_t count, loff_t *ppos)
static u32 saved_reg_type, saved_reg_offset, saved_reg_value;
static ssize_t
mwifiex_regrdwr_write(struct file *file,
const char __user *ubuf, size_t count, loff_t *ppos)
static ssize_t
mwifiex_regrdwr_read(struct file *file, char __user *ubuf,
size_t count, loff_t *ppos)
static u32 saved_offset = -1, saved_bytes = -1;
static ssize_t
mwifiex_rdeeprom_write(struct file *file,
const char __user *ubuf, size_t count, loff_t *ppos)
static ssize_t
mwifiex_rdeeprom_read(struct file *file, char __user *ubuf,
size_t count, loff_t *ppos)
#define MWIFIEX_DFS_ADD_FILE(name) do  while (0);
#define MWIFIEX_DFS_FILE_OPS(name)                                      \
static const struct file_operations mwifiex_dfs_##name##_fops = ;
#define MWIFIEX_DFS_FILE_READ_OPS(name)                                 \
static const struct file_operations mwifiex_dfs_##name##_fops = ;
#define MWIFIEX_DFS_FILE_WRITE_OPS(name)                                \
static const struct file_operations mwifiex_dfs_##name##_fops = ;
MWIFIEX_DFS_FILE_READ_OPS(info);
MWIFIEX_DFS_FILE_READ_OPS(debug);
MWIFIEX_DFS_FILE_READ_OPS(getlog);
MWIFIEX_DFS_FILE_OPS(regrdwr);
MWIFIEX_DFS_FILE_OPS(rdeeprom);
void
mwifiex_dev_debugfs_init(struct mwifiex_private *priv)
void
mwifiex_dev_debugfs_remove(struct mwifiex_private *priv)
void
mwifiex_debugfs_init(void)
void
mwifiex_debugfs_remove(void)
