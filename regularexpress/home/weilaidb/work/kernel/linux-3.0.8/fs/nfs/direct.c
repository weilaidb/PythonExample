#define NFSDBG_FACILITY		NFSDBG_VFS
static struct kmem_cache *nfs_direct_cachep;
struct nfs_direct_req ;
static void nfs_direct_write_complete(struct nfs_direct_req *dreq, struct inode *inode);
static const struct rpc_call_ops nfs_write_direct_ops;
static inline void get_dreq(struct nfs_direct_req *dreq)
static inline int put_dreq(struct nfs_direct_req *dreq)
ssize_t nfs_direct_IO(int rw, struct kiocb *iocb, const struct iovec *iov, loff_t pos, unsigned long nr_segs)
static void nfs_direct_dirty_pages(struct page **pages, unsigned int pgbase, size_t count)
static void nfs_direct_release_pages(struct page **pages, unsigned int npages)
static inline struct nfs_direct_req *nfs_direct_req_alloc(void)
static void nfs_direct_req_free(struct kref *kref)
static void nfs_direct_req_release(struct nfs_direct_req *dreq)
static ssize_t nfs_direct_wait(struct nfs_direct_req *dreq)
static void nfs_direct_complete(struct nfs_direct_req *dreq)
static void nfs_direct_read_result(struct rpc_task *task, void *calldata)
static void nfs_direct_read_release(void *calldata)
static const struct rpc_call_ops nfs_read_direct_ops = ;
static ssize_t nfs_direct_read_schedule_segment(struct nfs_direct_req *dreq,
const struct iovec *iov,
loff_t pos)
static ssize_t nfs_direct_read_schedule_iovec(struct nfs_direct_req *dreq,
const struct iovec *iov,
unsigned long nr_segs,
loff_t pos)
static ssize_t nfs_direct_read(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
static void nfs_direct_free_writedata(struct nfs_direct_req *dreq)
#if defined(CONFIG_NFS_V3) || defined(CONFIG_NFS_V4)
static void nfs_direct_write_reschedule(struct nfs_direct_req *dreq)
static void nfs_direct_commit_result(struct rpc_task *task, void *calldata)
static void nfs_direct_commit_release(void *calldata)
static const struct rpc_call_ops nfs_commit_direct_ops = ;
static void nfs_direct_commit_schedule(struct nfs_direct_req *dreq)
static void nfs_direct_write_complete(struct nfs_direct_req *dreq, struct inode *inode)
static void nfs_alloc_commit_data(struct nfs_direct_req *dreq)
static inline void nfs_alloc_commit_data(struct nfs_direct_req *dreq)
static void nfs_direct_write_complete(struct nfs_direct_req *dreq, struct inode *inode)
static void nfs_direct_write_result(struct rpc_task *task, void *calldata)
static void nfs_direct_write_release(void *calldata)
static const struct rpc_call_ops nfs_write_direct_ops = ;
static ssize_t nfs_direct_write_schedule_segment(struct nfs_direct_req *dreq,
const struct iovec *iov,
loff_t pos, int sync)
static ssize_t nfs_direct_write_schedule_iovec(struct nfs_direct_req *dreq,
const struct iovec *iov,
unsigned long nr_segs,
loff_t pos, int sync)
static ssize_t nfs_direct_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos,
size_t count)
ssize_t nfs_file_direct_read(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
ssize_t nfs_file_direct_write(struct kiocb *iocb, const struct iovec *iov,
unsigned long nr_segs, loff_t pos)
int __init nfs_init_directcache(void)
void nfs_destroy_directcache(void)
