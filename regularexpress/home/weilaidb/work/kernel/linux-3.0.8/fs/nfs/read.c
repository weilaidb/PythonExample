#define NFSDBG_FACILITY		NFSDBG_PAGECACHE
static int nfs_pagein_multi(struct nfs_pageio_descriptor *desc);
static int nfs_pagein_one(struct nfs_pageio_descriptor *desc);
static const struct rpc_call_ops nfs_read_partial_ops;
static const struct rpc_call_ops nfs_read_full_ops;
static struct kmem_cache *nfs_rdata_cachep;
static mempool_t *nfs_rdata_mempool;
#define MIN_POOL_READ	(32)
struct nfs_read_data *nfs_readdata_alloc(unsigned int pagecount)
void nfs_readdata_free(struct nfs_read_data *p)
static void nfs_readdata_release(struct nfs_read_data *rdata)
static
int nfs_return_empty_page(struct page *page)
static void nfs_readpage_truncate_uninitialised_page(struct nfs_read_data *data)
int nfs_readpage_async(struct nfs_open_context *ctx, struct inode *inode,
struct page *page)
static void nfs_readpage_release(struct nfs_page *req)
int nfs_initiate_read(struct nfs_read_data *data, struct rpc_clnt *clnt,
const struct rpc_call_ops *call_ops)
EXPORT_SYMBOL_GPL(nfs_initiate_read);
static int nfs_read_rpcsetup(struct nfs_page *req, struct nfs_read_data *data,
const struct rpc_call_ops *call_ops,
unsigned int count, unsigned int offset,
struct pnfs_layout_segment *lseg)
static void
nfs_async_read_error(struct list_head *head)
static int nfs_pagein_multi(struct nfs_pageio_descriptor *desc)
static int nfs_pagein_one(struct nfs_pageio_descriptor *desc)
int nfs_readpage_result(struct rpc_task *task, struct nfs_read_data *data)
static void nfs_readpage_retry(struct rpc_task *task, struct nfs_read_data *data)
static void nfs_readpage_result_partial(struct rpc_task *task, void *calldata)
static void nfs_readpage_release_partial(void *calldata)
#if defined(CONFIG_NFS_V4_1)
void nfs_read_prepare(struct rpc_task *task, void *calldata)
static const struct rpc_call_ops nfs_read_partial_ops = ;
static void nfs_readpage_set_pages_uptodate(struct nfs_read_data *data)
static void nfs_readpage_result_full(struct rpc_task *task, void *calldata)
static void nfs_readpage_release_full(void *calldata)
static const struct rpc_call_ops nfs_read_full_ops = ;
int nfs_readpage(struct file *file, struct page *page)
struct nfs_readdesc ;
static int
readpage_async_filler(void *data, struct page *page)
int nfs_readpages(struct file *filp, struct address_space *mapping,
struct list_head *pages, unsigned nr_pages)
int __init nfs_init_readpagecache(void)
void nfs_destroy_readpagecache(void)
