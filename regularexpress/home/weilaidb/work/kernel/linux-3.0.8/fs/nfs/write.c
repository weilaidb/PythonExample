#define NFSDBG_FACILITY		NFSDBG_PAGECACHE
#define MIN_POOL_WRITE		(32)
#define MIN_POOL_COMMIT		(4)
static void nfs_pageio_init_write(struct nfs_pageio_descriptor *desc,
struct inode *inode, int ioflags);
static void nfs_redirty_request(struct nfs_page *req);
static const struct rpc_call_ops nfs_write_partial_ops;
static const struct rpc_call_ops nfs_write_full_ops;
static const struct rpc_call_ops nfs_commit_ops;
static struct kmem_cache *nfs_wdata_cachep;
static mempool_t *nfs_wdata_mempool;
static mempool_t *nfs_commit_mempool;
struct nfs_write_data *nfs_commitdata_alloc(void)
EXPORT_SYMBOL_GPL(nfs_commitdata_alloc);
void nfs_commit_free(struct nfs_write_data *p)
EXPORT_SYMBOL_GPL(nfs_commit_free);
struct nfs_write_data *nfs_writedata_alloc(unsigned int pagecount)
void nfs_writedata_free(struct nfs_write_data *p)
static void nfs_writedata_release(struct nfs_write_data *wdata)
static void nfs_context_set_write_error(struct nfs_open_context *ctx, int error)
static struct nfs_page *nfs_page_find_request_locked(struct page *page)
static struct nfs_page *nfs_page_find_request(struct page *page)
static void nfs_grow_file(struct page *page, unsigned int offset, unsigned int count)
static void nfs_set_pageerror(struct page *page)
static void nfs_mark_uptodate(struct page *page, unsigned int base, unsigned int count)
static int wb_priority(struct writeback_control *wbc)
int nfs_congestion_kb;
#define NFS_CONGESTION_ON_THRESH 	(nfs_congestion_kb >> (PAGE_SHIFT-10))
#define NFS_CONGESTION_OFF_THRESH	\
(NFS_CONGESTION_ON_THRESH - (NFS_CONGESTION_ON_THRESH >> 2))
static int nfs_set_page_writeback(struct page *page)
static void nfs_end_page_writeback(struct page *page)
static struct nfs_page *nfs_find_and_lock_request(struct page *page, bool nonblock)
static int nfs_page_async_flush(struct nfs_pageio_descriptor *pgio,
struct page *page, bool nonblock)
static int nfs_do_writepage(struct page *page, struct writeback_control *wbc, struct nfs_pageio_descriptor *pgio)
static int nfs_writepage_locked(struct page *page, struct writeback_control *wbc)
int nfs_writepage(struct page *page, struct writeback_control *wbc)
static int nfs_writepages_callback(struct page *page, struct writeback_control *wbc, void *data)
int nfs_writepages(struct address_space *mapping, struct writeback_control *wbc)
static int nfs_inode_add_request(struct inode *inode, struct nfs_page *req)
static void nfs_inode_remove_request(struct nfs_page *req)
static void
nfs_mark_request_dirty(struct nfs_page *req)
#if defined(CONFIG_NFS_V3) || defined(CONFIG_NFS_V4)
static void
nfs_mark_request_commit(struct nfs_page *req, struct pnfs_layout_segment *lseg)
static int
nfs_clear_request_commit(struct nfs_page *req)
static inline
int nfs_write_need_commit(struct nfs_write_data *data)
static inline
int nfs_reschedule_unstable_write(struct nfs_page *req,
struct nfs_write_data *data)
static inline void
nfs_mark_request_commit(struct nfs_page *req, struct pnfs_layout_segment *lseg)
static inline int
nfs_clear_request_commit(struct nfs_page *req)
static inline
int nfs_write_need_commit(struct nfs_write_data *data)
static inline
int nfs_reschedule_unstable_write(struct nfs_page *req,
struct nfs_write_data *data)
#if defined(CONFIG_NFS_V3) || defined(CONFIG_NFS_V4)
static int
nfs_need_commit(struct nfs_inode *nfsi)
static int
nfs_scan_commit(struct inode *inode, struct list_head *dst, pgoff_t idx_start, unsigned int npages)
static inline int nfs_need_commit(struct nfs_inode *nfsi)
static inline int nfs_scan_commit(struct inode *inode, struct list_head *dst, pgoff_t idx_start, unsigned int npages)
static struct nfs_page *nfs_try_to_update_request(struct inode *inode,
struct page *page,
unsigned int offset,
unsigned int bytes)
static struct nfs_page * nfs_setup_write_request(struct nfs_open_context* ctx,
struct page *page, unsigned int offset, unsigned int bytes)
static int nfs_writepage_setup(struct nfs_open_context *ctx, struct page *page,
unsigned int offset, unsigned int count)
int nfs_flush_incompatible(struct file *file, struct page *page)
static int nfs_write_pageuptodate(struct page *page, struct inode *inode)
int nfs_updatepage(struct file *file, struct page *page,
unsigned int offset, unsigned int count)
static void nfs_writepage_release(struct nfs_page *req,
struct nfs_write_data *data)
static int flush_task_priority(int how)
int nfs_initiate_write(struct nfs_write_data *data,
struct rpc_clnt *clnt,
const struct rpc_call_ops *call_ops,
int how)
EXPORT_SYMBOL_GPL(nfs_initiate_write);
static int nfs_write_rpcsetup(struct nfs_page *req,
struct nfs_write_data *data,
const struct rpc_call_ops *call_ops,
unsigned int count, unsigned int offset,
struct pnfs_layout_segment *lseg,
int how)
static void nfs_redirty_request(struct nfs_page *req)
static int nfs_flush_multi(struct nfs_pageio_descriptor *desc)
static int nfs_flush_one(struct nfs_pageio_descriptor *desc)
static void nfs_pageio_init_write(struct nfs_pageio_descriptor *pgio,
struct inode *inode, int ioflags)
static void nfs_writeback_done_partial(struct rpc_task *task, void *calldata)
static void nfs_writeback_release_partial(void *calldata)
#if defined(CONFIG_NFS_V4_1)
void nfs_write_prepare(struct rpc_task *task, void *calldata)
static const struct rpc_call_ops nfs_write_partial_ops = ;
static void nfs_writeback_done_full(struct rpc_task *task, void *calldata)
static void nfs_writeback_release_full(void *calldata)
static const struct rpc_call_ops nfs_write_full_ops = ;
void nfs_writeback_done(struct rpc_task *task, struct nfs_write_data *data)
#if defined(CONFIG_NFS_V3) || defined(CONFIG_NFS_V4)
static int nfs_commit_set_lock(struct nfs_inode *nfsi, int may_wait)
void nfs_commit_clear_lock(struct nfs_inode *nfsi)
EXPORT_SYMBOL_GPL(nfs_commit_clear_lock);
void nfs_commitdata_release(void *data)
EXPORT_SYMBOL_GPL(nfs_commitdata_release);
int nfs_initiate_commit(struct nfs_write_data *data, struct rpc_clnt *clnt,
const struct rpc_call_ops *call_ops,
int how)
EXPORT_SYMBOL_GPL(nfs_initiate_commit);
void nfs_init_commit(struct nfs_write_data *data,
struct list_head *head,
struct pnfs_layout_segment *lseg)
EXPORT_SYMBOL_GPL(nfs_init_commit);
void nfs_retry_commit(struct list_head *page_list,
struct pnfs_layout_segment *lseg)
EXPORT_SYMBOL_GPL(nfs_retry_commit);
static int
nfs_commit_list(struct inode *inode, struct list_head *head, int how)
static void nfs_commit_done(struct rpc_task *task, void *calldata)
void nfs_commit_release_pages(struct nfs_write_data *data)
EXPORT_SYMBOL_GPL(nfs_commit_release_pages);
static void nfs_commit_release(void *calldata)
static const struct rpc_call_ops nfs_commit_ops = ;
int nfs_commit_inode(struct inode *inode, int how)
static int nfs_commit_unstable_pages(struct inode *inode, struct writeback_control *wbc)
static int nfs_commit_unstable_pages(struct inode *inode, struct writeback_control *wbc)
int nfs_write_inode(struct inode *inode, struct writeback_control *wbc)
int nfs_wb_all(struct inode *inode)
int nfs_wb_page_cancel(struct inode *inode, struct page *page)
int nfs_wb_page(struct inode *inode, struct page *page)
int nfs_migrate_page(struct address_space *mapping, struct page *newpage,
struct page *page)
int __init nfs_init_writepagecache(void)
void nfs_destroy_writepagecache(void)
