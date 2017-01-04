#define _NFS_IOSTAT
struct nfs_iostats  ____cacheline_aligned;
static inline void nfs_inc_server_stats(const struct nfs_server *server,
enum nfs_stat_eventcounters stat)
static inline void nfs_inc_stats(const struct inode *inode,
enum nfs_stat_eventcounters stat)
static inline void nfs_add_server_stats(const struct nfs_server *server,
enum nfs_stat_bytecounters stat,
long addend)
static inline void nfs_add_stats(const struct inode *inode,
enum nfs_stat_bytecounters stat,
long addend)
static inline void nfs_add_fscache_stats(struct inode *inode,
enum nfs_stat_fscachecounters stat,
long addend)
static inline struct nfs_iostats __percpu *nfs_alloc_iostats(void)
static inline void nfs_free_iostats(struct nfs_iostats __percpu *stats)
