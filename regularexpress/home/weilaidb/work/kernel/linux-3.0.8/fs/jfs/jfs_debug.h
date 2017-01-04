#define _H_JFS_DEBUG
#if defined(CONFIG_PROC_FS) && (defined(CONFIG_JFS_DEBUG) || defined(CONFIG_JFS_STATISTICS))
#define PROC_FS_JFS
extern void jfs_proc_init(void);
extern void jfs_proc_clean(void);
#define assert(p) do  while (0)
#define ASSERT(p) assert(p)
#define JFS_LOGLEVEL_ERR 1
#define JFS_LOGLEVEL_WARN 2
#define JFS_LOGLEVEL_DEBUG 3
#define JFS_LOGLEVEL_INFO 4
extern int jfsloglevel;
extern const struct file_operations jfs_txanchor_proc_fops;
#define jfs_info(fmt, arg...) do  while (0)
#define jfs_debug(fmt, arg...) do  while (0)
#define jfs_warn(fmt, arg...) do  while (0)
#define jfs_err(fmt, arg...) do  while (0)
#define ASSERT(p) do  while (0)
#define jfs_info(fmt, arg...) do  while (0)
#define jfs_debug(fmt, arg...) do  while (0)
#define jfs_warn(fmt, arg...) do  while (0)
#define jfs_err(fmt, arg...) do  while (0)
extern const struct file_operations jfs_lmstats_proc_fops;
extern const struct file_operations jfs_txstats_proc_fops;
extern const struct file_operations jfs_mpstat_proc_fops;
extern const struct file_operations jfs_xtstat_proc_fops;
#define	INCREMENT(x)		((x)++)
#define	DECREMENT(x)		((x)--)
#define	HIGHWATERMARK(x,y)	((x) = max((x), (y)))
#define	INCREMENT(x)
#define	DECREMENT(x)
#define	HIGHWATERMARK(x,y)
