#define B43legacy_DEBUGFS_H_
struct b43legacy_wldev;
struct b43legacy_txstatus;
enum b43legacy_dyndbg ;
struct dentry;
#define B43legacy_NR_LOGGED_TXSTATUS	100
struct b43legacy_txstatus_log ;
struct b43legacy_dfs_file ;
struct b43legacy_dfsentry ;
int b43legacy_debug(struct b43legacy_wldev *dev,
enum b43legacy_dyndbg feature);
void b43legacy_debugfs_init(void);
void b43legacy_debugfs_exit(void);
void b43legacy_debugfs_add_device(struct b43legacy_wldev *dev);
void b43legacy_debugfs_remove_device(struct b43legacy_wldev *dev);
void b43legacy_debugfs_log_txstat(struct b43legacy_wldev *dev,
const struct b43legacy_txstatus *status);
static inline
int b43legacy_debug(struct b43legacy_wldev *dev,
enum b43legacy_dyndbg feature)
static inline
void b43legacy_debugfs_init(void)
static inline
void b43legacy_debugfs_exit(void)
static inline
void b43legacy_debugfs_add_device(struct b43legacy_wldev *dev)
static inline
void b43legacy_debugfs_remove_device(struct b43legacy_wldev *dev)
static inline
void b43legacy_debugfs_log_txstat(struct b43legacy_wldev *dev,
const struct b43legacy_txstatus *status)
