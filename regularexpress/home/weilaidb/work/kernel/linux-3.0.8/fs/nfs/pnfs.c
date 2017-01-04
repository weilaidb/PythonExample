#define NFSDBG_FACILITY		NFSDBG_PNFS
static DEFINE_SPINLOCK(pnfs_spinlock);
static LIST_HEAD(pnfs_modules_tbl);
static struct pnfs_layoutdriver_type *
find_pnfs_driver_locked(u32 id)
static struct pnfs_layoutdriver_type *
find_pnfs_driver(u32 id)
void
unset_pnfs_layoutdriver(struct nfs_server *nfss)
void
set_pnfs_layoutdriver(struct nfs_server *server, u32 id)
int
pnfs_register_layoutdriver(struct pnfs_layoutdriver_type *ld_type)
EXPORT_SYMBOL_GPL(pnfs_register_layoutdriver);
void
pnfs_unregister_layoutdriver(struct pnfs_layoutdriver_type *ld_type)
EXPORT_SYMBOL_GPL(pnfs_unregister_layoutdriver);
void
get_layout_hdr(struct pnfs_layout_hdr *lo)
static struct pnfs_layout_hdr *
pnfs_alloc_layout_hdr(struct inode *ino, gfp_t gfp_flags)
static void
pnfs_free_layout_hdr(struct pnfs_layout_hdr *lo)
static void
destroy_layout_hdr(struct pnfs_layout_hdr *lo)
static void
put_layout_hdr_locked(struct pnfs_layout_hdr *lo)
void
put_layout_hdr(struct pnfs_layout_hdr *lo)
static void
init_lseg(struct pnfs_layout_hdr *lo, struct pnfs_layout_segment *lseg)
static void free_lseg(struct pnfs_layout_segment *lseg)
static void
put_lseg_common(struct pnfs_layout_segment *lseg)
void
put_lseg(struct pnfs_layout_segment *lseg)
EXPORT_SYMBOL_GPL(put_lseg);
static inline u64
end_offset(u64 start, u64 len)
static inline u64
last_byte_offset(u64 start, u64 len)
static inline int
lo_seg_contained(struct pnfs_layout_range *l1,
struct pnfs_layout_range *l2)
static inline int
lo_seg_intersecting(struct pnfs_layout_range *l1,
struct pnfs_layout_range *l2)
static bool
should_free_lseg(struct pnfs_layout_range *lseg_range,
struct pnfs_layout_range *recall_range)
static int mark_lseg_invalid(struct pnfs_layout_segment *lseg,
struct list_head *tmp_list)
int
mark_matching_lsegs_invalid(struct pnfs_layout_hdr *lo,
struct list_head *tmp_list,
struct pnfs_layout_range *recall_range)
void
pnfs_free_lseg_list(struct list_head *free_me)
void
pnfs_destroy_layout(struct nfs_inode *nfsi)
void
pnfs_destroy_all_layouts(struct nfs_client *clp)
void
pnfs_set_layout_stateid(struct pnfs_layout_hdr *lo, const nfs4_stateid *new,
bool update_barrier)
static bool
pnfs_layoutgets_blocked(struct pnfs_layout_hdr *lo, nfs4_stateid *stateid,
int lget)
int
pnfs_choose_layoutget_stateid(nfs4_stateid *dst, struct pnfs_layout_hdr *lo,
struct nfs4_state *open_state)
static struct pnfs_layout_segment *
send_layoutget(struct pnfs_layout_hdr *lo,
struct nfs_open_context *ctx,
struct pnfs_layout_range *range,
gfp_t gfp_flags)
int
_pnfs_return_layout(struct inode *ino)
bool pnfs_roc(struct inode *ino)
void pnfs_roc_release(struct inode *ino)
void pnfs_roc_set_barrier(struct inode *ino, u32 barrier)
bool pnfs_roc_drain(struct inode *ino, u32 *barrier)
static s64
cmp_layout(struct pnfs_layout_range *l1,
struct pnfs_layout_range *l2)
static void
pnfs_insert_layout(struct pnfs_layout_hdr *lo,
struct pnfs_layout_segment *lseg)
static struct pnfs_layout_hdr *
alloc_init_layout_hdr(struct inode *ino,
struct nfs_open_context *ctx,
gfp_t gfp_flags)
static struct pnfs_layout_hdr *
pnfs_find_alloc_layout(struct inode *ino,
struct nfs_open_context *ctx,
gfp_t gfp_flags)
static int
is_matching_lseg(struct pnfs_layout_range *ls_range,
struct pnfs_layout_range *range)
static struct pnfs_layout_segment *
pnfs_find_lseg(struct pnfs_layout_hdr *lo,
struct pnfs_layout_range *range)
struct pnfs_layout_segment *
pnfs_update_layout(struct inode *ino,
struct nfs_open_context *ctx,
loff_t pos,
u64 count,
enum pnfs_iomode iomode,
gfp_t gfp_flags)
int
pnfs_layout_process(struct nfs4_layoutget *lgp)
bool
pnfs_generic_pg_test(struct nfs_pageio_descriptor *pgio, struct nfs_page *prev,
struct nfs_page *req)
EXPORT_SYMBOL_GPL(pnfs_generic_pg_test);
int
pnfs_ld_write_done(struct nfs_write_data *data)
EXPORT_SYMBOL_GPL(pnfs_ld_write_done);
enum pnfs_try_status
pnfs_try_to_write_data(struct nfs_write_data *wdata,
const struct rpc_call_ops *call_ops, int how)
int
pnfs_ld_read_done(struct nfs_read_data *data)
EXPORT_SYMBOL_GPL(pnfs_ld_read_done);
enum pnfs_try_status
pnfs_try_to_read_data(struct nfs_read_data *rdata,
const struct rpc_call_ops *call_ops)
static void pnfs_list_write_lseg(struct inode *inode, struct list_head *listp)
void
pnfs_set_layoutcommit(struct nfs_write_data *wdata)
EXPORT_SYMBOL_GPL(pnfs_set_layoutcommit);
int
pnfs_layoutcommit_inode(struct inode *inode, bool sync)
