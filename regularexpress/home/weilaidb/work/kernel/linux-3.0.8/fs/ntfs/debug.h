#define _LINUX_NTFS_DEBUG_H
extern int debug_msgs;
extern void __ntfs_debug(const char *file, int line, const char *function,
const char *format, ...) __attribute__ ((format (printf, 4, 5)));
#define ntfs_debug(f, a...)						\
__ntfs_debug(__FILE__, __LINE__, __func__, f, ##a)
extern void ntfs_debug_dump_runlist(const runlist_element *rl);
#define ntfs_debug(f, a...)		do  while (0)
#define ntfs_debug_dump_runlist(rl)	do  while (0)
extern void __ntfs_warning(const char *function, const struct super_block *sb,
const char *fmt, ...) __attribute__ ((format (printf, 3, 4)));
#define ntfs_warning(sb, f, a...)	__ntfs_warning(__func__, sb, f, ##a)
extern void __ntfs_error(const char *function, const struct super_block *sb,
const char *fmt, ...) __attribute__ ((format (printf, 3, 4)));
#define ntfs_error(sb, f, a...)		__ntfs_error(__func__, sb, f, ##a)
