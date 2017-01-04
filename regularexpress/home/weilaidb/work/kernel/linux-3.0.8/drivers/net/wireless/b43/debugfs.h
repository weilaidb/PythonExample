#define B43_DEBUGFS_H_
struct b43_wldev;
struct b43_txstatus;
enum b43_dyndbg ;
struct dentry;
#define B43_NR_LOGGED_TXSTATUS	100
struct b43_txstatus_log ;
struct b43_dfs_file ;
struct b43_dfsentry ;
bool b43_debug(struct b43_wldev *dev, enum b43_dyndbg feature);
void b43_debugfs_init(void);
void b43_debugfs_exit(void);
void b43_debugfs_add_device(struct b43_wldev *dev);
void b43_debugfs_remove_device(struct b43_wldev *dev);
void b43_debugfs_log_txstat(struct b43_wldev *dev,
const struct b43_txstatus *status);
static inline bool b43_debug(struct b43_wldev *dev, enum b43_dyndbg feature)
static inline void b43_debugfs_init(void)
static inline void b43_debugfs_exit(void)
static inline void b43_debugfs_add_device(struct b43_wldev *dev)
static inline void b43_debugfs_remove_device(struct b43_wldev *dev)
static inline void b43_debugfs_log_txstat(struct b43_wldev *dev,
const struct b43_txstatus *status)
