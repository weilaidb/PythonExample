#define NFSDBG_FACILITY         NFSDBG_PNFS_LD
static __be32 *
_osd_xdr_decode_objid(__be32 *p, struct pnfs_osd_objid *objid)
static int
_osd_xdr_decode_opaque_cred(struct pnfs_osd_opaque_cred *opaque_cred,
struct xdr_stream *xdr)
static int
_osd_xdr_decode_object_cred(struct pnfs_osd_object_cred *comp,
struct xdr_stream *xdr)
static inline int
_osd_data_map_xdr_sz(void)
static __be32 *
_osd_xdr_decode_data_map(__be32 *p, struct pnfs_osd_data_map *data_map)
int pnfs_osd_xdr_decode_layout_map(struct pnfs_osd_layout *layout,
struct pnfs_osd_xdr_decode_layout_iter *iter, struct xdr_stream *xdr)
bool pnfs_osd_xdr_decode_layout_comp(struct pnfs_osd_object_cred *comp,
struct pnfs_osd_xdr_decode_layout_iter *iter, struct xdr_stream *xdr,
int *err)
static __be32 *
__read_u8_opaque(__be32 *p, struct nfs4_string *str)
static __be32 *
__read_targetid(__be32 *p, struct pnfs_osd_targetid* targetid)
static __be32 *
__read_net_addr(__be32 *p, struct pnfs_osd_net_addr* netaddr)
static __be32 *
__read_targetaddr(__be32 *p, struct pnfs_osd_targetaddr *targetaddr)
static __be32 *
__read_opaque_cred(__be32 *p,
struct pnfs_osd_opaque_cred *opaque_cred)
static __be32 *
__read_object_cred(__be32 *p, struct pnfs_osd_object_cred *comp)
void pnfs_osd_xdr_decode_deviceaddr(
struct pnfs_osd_deviceaddr *deviceaddr, __be32 *p)
int
pnfs_osd_xdr_encode_layoutupdate(struct xdr_stream *xdr,
struct pnfs_osd_layoutupdate *lou)
static inline __be32 *
pnfs_osd_xdr_encode_objid(__be32 *p, struct pnfs_osd_objid *object_id)
void pnfs_osd_xdr_encode_ioerr(__be32 *p, struct pnfs_osd_ioerr *ioerr)
__be32 *pnfs_osd_xdr_ioerr_reserve_space(struct xdr_stream *xdr)
