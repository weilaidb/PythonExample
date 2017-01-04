#define NFSDBG_FACILITY         NFSDBG_PNFS_LD
struct pnfs_layout_hdr *
objlayout_alloc_layout_hdr(struct inode *inode, gfp_t gfp_flags)
void
objlayout_free_layout_hdr(struct pnfs_layout_hdr *lo)
struct pnfs_layout_segment *
objlayout_alloc_lseg(struct pnfs_layout_hdr *pnfslay,
struct nfs4_layoutget_res *lgr,
gfp_t gfp_flags)
void
objlayout_free_lseg(struct pnfs_layout_segment *lseg)
static inline u64
end_offset(u64 start, u64 len)
static inline u64
last_byte_offset(u64 start, u64 len)
static struct objlayout_io_state *
objlayout_alloc_io_state(struct pnfs_layout_hdr *pnfs_layout_type,
struct page **pages,
unsigned pgbase,
loff_t offset,
size_t count,
struct pnfs_layout_segment *lseg,
void *rpcdata,
gfp_t gfp_flags)
static void
objlayout_free_io_state(struct objlayout_io_state *state)
static void
objlayout_iodone(struct objlayout_io_state *state)
void
objlayout_io_set_result(struct objlayout_io_state *state, unsigned index,
struct pnfs_osd_objid *pooid, int osd_error,
u64 offset, u64 length, bool is_write)
static void _rpc_read_complete(struct work_struct *work)
void
objlayout_read_done(struct objlayout_io_state *state, ssize_t status, bool sync)
enum pnfs_try_status
objlayout_read_pagelist(struct nfs_read_data *rdata)
static void _rpc_write_complete(struct work_struct *work)
void
objlayout_write_done(struct objlayout_io_state *state, ssize_t status,
bool sync)
enum pnfs_try_status
objlayout_write_pagelist(struct nfs_write_data *wdata,
int how)
void
objlayout_encode_layoutcommit(struct pnfs_layout_hdr *pnfslay,
struct xdr_stream *xdr,
const struct nfs4_layoutcommit_args *args)
static int
err_prio(u32 oer_errno)
static void
merge_ioerr(struct pnfs_osd_ioerr *dest_err,
const struct pnfs_osd_ioerr *src_err)
static void
encode_accumulated_error(struct objlayout *objlay, __be32 *p)
void
objlayout_encode_layoutreturn(struct pnfs_layout_hdr *pnfslay,
struct xdr_stream *xdr,
const struct nfs4_layoutreturn_args *args)
struct objlayout_deviceinfo ;
int objlayout_get_deviceinfo(struct pnfs_layout_hdr *pnfslay,
struct nfs4_deviceid *d_id, struct pnfs_osd_deviceaddr **deviceaddr,
gfp_t gfp_flags)
void objlayout_put_deviceinfo(struct pnfs_osd_deviceaddr *deviceaddr)
