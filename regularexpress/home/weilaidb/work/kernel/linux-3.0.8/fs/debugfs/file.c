static ssize_t default_read_file(struct file *file, char __user *buf,
size_t count, loff_t *ppos)
static ssize_t default_write_file(struct file *file, const char __user *buf,
size_t count, loff_t *ppos)
static int default_open(struct inode *inode, struct file *file)
const struct file_operations debugfs_file_operations = ;
static void *debugfs_follow_link(struct dentry *dentry, struct nameidata *nd)
const struct inode_operations debugfs_link_operations = ;
static int debugfs_u8_set(void *data, u64 val)
static int debugfs_u8_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_u8, debugfs_u8_get, debugfs_u8_set, "%llu\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_u8_ro, debugfs_u8_get, NULL, "%llu\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_u8_wo, NULL, debugfs_u8_set, "%llu\n");
struct dentry *debugfs_create_u8(const char *name, mode_t mode,
struct dentry *parent, u8 *value)
EXPORT_SYMBOL_GPL(debugfs_create_u8);
static int debugfs_u16_set(void *data, u64 val)
static int debugfs_u16_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_u16, debugfs_u16_get, debugfs_u16_set, "%llu\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_u16_ro, debugfs_u16_get, NULL, "%llu\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_u16_wo, NULL, debugfs_u16_set, "%llu\n");
struct dentry *debugfs_create_u16(const char *name, mode_t mode,
struct dentry *parent, u16 *value)
EXPORT_SYMBOL_GPL(debugfs_create_u16);
static int debugfs_u32_set(void *data, u64 val)
static int debugfs_u32_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_u32, debugfs_u32_get, debugfs_u32_set, "%llu\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_u32_ro, debugfs_u32_get, NULL, "%llu\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_u32_wo, NULL, debugfs_u32_set, "%llu\n");
struct dentry *debugfs_create_u32(const char *name, mode_t mode,
struct dentry *parent, u32 *value)
EXPORT_SYMBOL_GPL(debugfs_create_u32);
static int debugfs_u64_set(void *data, u64 val)
static int debugfs_u64_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_u64, debugfs_u64_get, debugfs_u64_set, "%llu\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_u64_ro, debugfs_u64_get, NULL, "%llu\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_u64_wo, NULL, debugfs_u64_set, "%llu\n");
struct dentry *debugfs_create_u64(const char *name, mode_t mode,
struct dentry *parent, u64 *value)
EXPORT_SYMBOL_GPL(debugfs_create_u64);
DEFINE_SIMPLE_ATTRIBUTE(fops_x8, debugfs_u8_get, debugfs_u8_set, "0x%02llx\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_x8_ro, debugfs_u8_get, NULL, "0x%02llx\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_x8_wo, NULL, debugfs_u8_set, "0x%02llx\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_x16, debugfs_u16_get, debugfs_u16_set, "0x%04llx\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_x16_ro, debugfs_u16_get, NULL, "0x%04llx\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_x16_wo, NULL, debugfs_u16_set, "0x%04llx\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_x32, debugfs_u32_get, debugfs_u32_set, "0x%08llx\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_x32_ro, debugfs_u32_get, NULL, "0x%08llx\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_x32_wo, NULL, debugfs_u32_set, "0x%08llx\n");
DEFINE_SIMPLE_ATTRIBUTE(fops_x64, debugfs_u64_get, debugfs_u64_set, "0x%016llx\n");
struct dentry *debugfs_create_x8(const char *name, mode_t mode,
struct dentry *parent, u8 *value)
EXPORT_SYMBOL_GPL(debugfs_create_x8);
struct dentry *debugfs_create_x16(const char *name, mode_t mode,
struct dentry *parent, u16 *value)
EXPORT_SYMBOL_GPL(debugfs_create_x16);
struct dentry *debugfs_create_x32(const char *name, mode_t mode,
struct dentry *parent, u32 *value)
EXPORT_SYMBOL_GPL(debugfs_create_x32);
struct dentry *debugfs_create_x64(const char *name, mode_t mode,
struct dentry *parent, u64 *value)
EXPORT_SYMBOL_GPL(debugfs_create_x64);
static int debugfs_size_t_set(void *data, u64 val)
static int debugfs_size_t_get(void *data, u64 *val)
DEFINE_SIMPLE_ATTRIBUTE(fops_size_t, debugfs_size_t_get, debugfs_size_t_set,
"%llu\n");
struct dentry *debugfs_create_size_t(const char *name, mode_t mode,
struct dentry *parent, size_t *value)
EXPORT_SYMBOL_GPL(debugfs_create_size_t);
static ssize_t read_file_bool(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static ssize_t write_file_bool(struct file *file, const char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_bool = ;
struct dentry *debugfs_create_bool(const char *name, mode_t mode,
struct dentry *parent, u32 *value)
EXPORT_SYMBOL_GPL(debugfs_create_bool);
static ssize_t read_file_blob(struct file *file, char __user *user_buf,
size_t count, loff_t *ppos)
static const struct file_operations fops_blob = ;
struct dentry *debugfs_create_blob(const char *name, mode_t mode,
struct dentry *parent,
struct debugfs_blob_wrapper *blob)
EXPORT_SYMBOL_GPL(debugfs_create_blob);
