#define _OBJLAYOUT_H
struct objlayout ;
static inline struct objlayout *
OBJLAYOUT(struct pnfs_layout_hdr *lo)
struct objlayout_io_state ;
extern int objio_alloc_lseg(struct pnfs_layout_segment **outp,
struct pnfs_layout_hdr *pnfslay,
struct pnfs_layout_range *range,
struct xdr_stream *xdr,
gfp_t gfp_flags);
extern void objio_free_lseg(struct pnfs_layout_segment *lseg);
extern int objio_alloc_io_state(
struct pnfs_layout_segment *lseg,
struct objlayout_io_state **outp,
gfp_t gfp_flags);
extern void objio_free_io_state(struct objlayout_io_state *state);
extern ssize_t objio_read_pagelist(struct objlayout_io_state *ol_state);
extern ssize_t objio_write_pagelist(struct objlayout_io_state *ol_state,
bool stable);
extern void objlayout_io_set_result(struct objlayout_io_state *state,
unsigned index, struct pnfs_osd_objid *pooid,
int osd_error, u64 offset, u64 length, bool is_write);
static inline void
objlayout_add_delta_space_used(struct objlayout_io_state *state, s64 space_used)
extern void objlayout_read_done(struct objlayout_io_state *state,
ssize_t status, bool sync);
extern void objlayout_write_done(struct objlayout_io_state *state,
ssize_t status, bool sync);
extern int objlayout_get_deviceinfo(struct pnfs_layout_hdr *pnfslay,
struct nfs4_deviceid *d_id, struct pnfs_osd_deviceaddr **deviceaddr,
gfp_t gfp_flags);
extern void objlayout_put_deviceinfo(struct pnfs_osd_deviceaddr *deviceaddr);
extern struct pnfs_layout_hdr *objlayout_alloc_layout_hdr(struct inode *, gfp_t gfp_flags);
extern void objlayout_free_layout_hdr(struct pnfs_layout_hdr *);
extern struct pnfs_layout_segment *objlayout_alloc_lseg(
struct pnfs_layout_hdr *,
struct nfs4_layoutget_res *,
gfp_t gfp_flags);
extern void objlayout_free_lseg(struct pnfs_layout_segment *);
extern enum pnfs_try_status objlayout_read_pagelist(
struct nfs_read_data *);
extern enum pnfs_try_status objlayout_write_pagelist(
struct nfs_write_data *,
int how);
extern void objlayout_encode_layoutcommit(
struct pnfs_layout_hdr *,
struct xdr_stream *,
const struct nfs4_layoutcommit_args *);
extern void objlayout_encode_layoutreturn(
struct pnfs_layout_hdr *,
struct xdr_stream *,
const struct nfs4_layoutreturn_args *);
