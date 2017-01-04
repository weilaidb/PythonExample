#define HEXADECIMAL_RADIX	16
#define DEBUGFS_ADD(name, parent) do  while (0)
#define DEBUGFS_RM(name)  do  while (0)
#define DEBUGFS_READ_FUNC(name)						\
ssize_t iwmct_dbgfs_##name##_read(struct file *file,			\
char __user *user_buf,		\
size_t count, loff_t *ppos);
#define DEBUGFS_WRITE_FUNC(name)					\
ssize_t iwmct_dbgfs_##name##_write(struct file *file,			\
const char __user *user_buf,		\
size_t count, loff_t *ppos);
#define DEBUGFS_READ_FILE_OPS(name)					\
DEBUGFS_READ_FUNC(name)						\
static const struct file_operations iwmct_dbgfs_##name##_ops = ;
#define DEBUGFS_WRITE_FILE_OPS(name)					\
DEBUGFS_WRITE_FUNC(name)					\
static const struct file_operations iwmct_dbgfs_##name##_ops = ;
#define DEBUGFS_READ_WRITE_FILE_OPS(name)				\
DEBUGFS_READ_FUNC(name)						\
DEBUGFS_WRITE_FUNC(name)					\
static const struct file_operations iwmct_dbgfs_##name##_ops = ;
void iwmct_dbgfs_register(struct iwmct_priv *priv, const char *name)
void iwmct_dbgfs_unregister(struct iwmct_debugfs *dbgfs)
