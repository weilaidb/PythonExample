#define FSCACHE_DEBUG_LEVEL COOKIE
static LIST_HEAD(fscache_netfs_list);
int __fscache_register_netfs(struct fscache_netfs *netfs)
EXPORT_SYMBOL(__fscache_register_netfs);
void __fscache_unregister_netfs(struct fscache_netfs *netfs)
EXPORT_SYMBOL(__fscache_unregister_netfs);
