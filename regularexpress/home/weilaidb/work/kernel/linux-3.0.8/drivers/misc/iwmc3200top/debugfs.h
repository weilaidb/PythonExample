#define __DEBUGFS_H__
struct iwmct_debugfs ;
void iwmct_dbgfs_register(struct iwmct_priv *priv, const char *name);
void iwmct_dbgfs_unregister(struct iwmct_debugfs *dbgfs);
struct iwmct_debugfs;
static inline void
iwmct_dbgfs_register(struct iwmct_priv *priv, const char *name)
static inline void
iwmct_dbgfs_unregister(struct iwmct_debugfs *dbgfs)
