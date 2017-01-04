#define NFSDBG_FACILITY         NFSDBG_PNFS_LD
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Dean Hildebrand <dhildebz@umich.edu>");
MODULE_DESCRIPTION("The NFSv4 file layout driver");
#define FILELAYOUT_POLL_RETRY_MAX     (15*HZ)
static loff_t
filelayout_get_dense_offset(struct nfs4_filelayout_segment *flseg,
loff_t offset)
static loff_t
filelayout_get_dserver_offset(struct pnfs_layout_segment *lseg, loff_t offset)
static void
filelayout_set_lo_fail(struct pnfs_layout_segment *lseg)
static int filelayout_async_handle_error(struct rpc_task *task,
struct nfs4_state *state,
struct nfs_client *clp,
int *reset)
static int filelayout_read_done_cb(struct rpc_task *task,
struct nfs_read_data *data)
static void
filelayout_set_layoutcommit(struct nfs_write_data *wdata)
static void filelayout_read_prepare(struct rpc_task *task, void *data)
static void filelayout_read_call_done(struct rpc_task *task, void *data)
static void filelayout_read_release(void *data)
static int filelayout_write_done_cb(struct rpc_task *task,
struct nfs_write_data *data)
static void prepare_to_resend_writes(struct nfs_write_data *data)
static int filelayout_commit_done_cb(struct rpc_task *task,
struct nfs_write_data *data)
static void filelayout_write_prepare(struct rpc_task *task, void *data)
static void filelayout_write_call_done(struct rpc_task *task, void *data)
static void filelayout_write_release(void *data)
static void filelayout_commit_release(void *data)
struct rpc_call_ops filelayout_read_call_ops = ;
struct rpc_call_ops filelayout_write_call_ops = ;
struct rpc_call_ops filelayout_commit_call_ops = ;
static enum pnfs_try_status
filelayout_read_pagelist(struct nfs_read_data *data)
static enum pnfs_try_status
filelayout_write_pagelist(struct nfs_write_data *data, int sync)
static int
filelayout_check_layout(struct pnfs_layout_hdr *lo,
struct nfs4_filelayout_segment *fl,
struct nfs4_layoutget_res *lgr,
struct nfs4_deviceid *id,
gfp_t gfp_flags)
static void filelayout_free_fh_array(struct nfs4_filelayout_segment *fl)
static void
_filelayout_free_lseg(struct nfs4_filelayout_segment *fl)
static int
filelayout_decode_layout(struct pnfs_layout_hdr *flo,
struct nfs4_filelayout_segment *fl,
struct nfs4_layoutget_res *lgr,
struct nfs4_deviceid *id,
gfp_t gfp_flags)
static void
filelayout_free_lseg(struct pnfs_layout_segment *lseg)
static struct pnfs_layout_segment *
filelayout_alloc_lseg(struct pnfs_layout_hdr *layoutid,
struct nfs4_layoutget_res *lgr,
gfp_t gfp_flags)
bool
filelayout_pg_test(struct nfs_pageio_descriptor *pgio, struct nfs_page *prev,
struct nfs_page *req)
static bool filelayout_mark_pnfs_commit(struct pnfs_layout_segment *lseg)
static u32 select_bucket_index(struct nfs4_filelayout_segment *fl, u32 j)
struct list_head *filelayout_choose_commit_list(struct nfs_page *req)
static u32 calc_ds_index_from_commit(struct pnfs_layout_segment *lseg, u32 i)
static struct nfs_fh *
select_ds_fh_from_commit(struct pnfs_layout_segment *lseg, u32 i)
static int filelayout_initiate_commit(struct nfs_write_data *data, int how)
static struct pnfs_layout_segment *find_only_write_lseg(struct inode *inode)
static int alloc_ds_commits(struct inode *inode, struct list_head *list)
static int
filelayout_commit_pagelist(struct inode *inode, struct list_head *mds_pages,
int how)
static void
filelayout_free_deveiceid_node(struct nfs4_deviceid_node *d)
static struct pnfs_layoutdriver_type filelayout_type = ;
static int __init nfs4filelayout_init(void)
static void __exit nfs4filelayout_exit(void)
module_init(nfs4filelayout_init);
module_exit(nfs4filelayout_exit);
