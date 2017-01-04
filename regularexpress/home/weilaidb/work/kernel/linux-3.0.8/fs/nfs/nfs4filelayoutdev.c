#define NFSDBG_FACILITY		NFSDBG_PNFS_LD
DEFINE_SPINLOCK(nfs4_ds_cache_lock);
static LIST_HEAD(nfs4_data_server_cache);
void
print_ds(struct nfs4_pnfs_ds *ds)
static struct nfs4_pnfs_ds *
_data_server_lookup_locked(u32 ip_addr, u32 port)
static int
nfs4_ds_connect(struct nfs_server *mds_srv, struct nfs4_pnfs_ds *ds)
static void
destroy_ds(struct nfs4_pnfs_ds *ds)
void
nfs4_fl_free_deviceid(struct nfs4_file_layout_dsaddr *dsaddr)
static struct nfs4_pnfs_ds *
nfs4_pnfs_ds_add(struct inode *inode, u32 ip_addr, u32 port, gfp_t gfp_flags)
static struct nfs4_pnfs_ds *
decode_and_add_ds(struct xdr_stream *streamp, struct inode *inode, gfp_t gfp_flags)
static struct nfs4_file_layout_dsaddr*
decode_device(struct inode *ino, struct pnfs_device *pdev, gfp_t gfp_flags)
static struct nfs4_file_layout_dsaddr *
decode_and_add_device(struct inode *inode, struct pnfs_device *dev, gfp_t gfp_flags)
struct nfs4_file_layout_dsaddr *
get_device_info(struct inode *inode, struct nfs4_deviceid *dev_id, gfp_t gfp_flags)
void
nfs4_fl_put_deviceid(struct nfs4_file_layout_dsaddr *dsaddr)
u32
nfs4_fl_calc_j_index(struct pnfs_layout_segment *lseg, loff_t offset)
u32
nfs4_fl_calc_ds_index(struct pnfs_layout_segment *lseg, u32 j)
struct nfs_fh *
nfs4_fl_select_ds_fh(struct pnfs_layout_segment *lseg, u32 j)
static void
filelayout_mark_devid_negative(struct nfs4_file_layout_dsaddr *dsaddr,
int err, u32 ds_addr)
struct nfs4_pnfs_ds *
nfs4_fl_prepare_ds(struct pnfs_layout_segment *lseg, u32 ds_idx)
