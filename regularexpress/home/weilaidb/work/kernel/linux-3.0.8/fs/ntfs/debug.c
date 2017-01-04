static char err_buf[1024];
static DEFINE_SPINLOCK(err_buf_lock);
void __ntfs_warning(const char *function, const struct super_block *sb,
const char *fmt, ...)
void __ntfs_error(const char *function, const struct super_block *sb,
const char *fmt, ...)
int debug_msgs = 0;
void __ntfs_debug (const char *file, int line, const char *function,
const char *fmt, ...)
void ntfs_debug_dump_runlist(const runlist_element *rl)
