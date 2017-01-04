#define __PNFS_OSD_XDR_H__
#define PNFS_OSD_OSDNAME_MAXSIZE 256
enum pnfs_osd_raid_algorithm4 ;
struct pnfs_osd_data_map ;
struct pnfs_osd_objid ;
#define _DEVID_LO(oid_device_id) \
(unsigned long long)be64_to_cpup((__be64 *)(oid_device_id)->data)
#define _DEVID_HI(oid_device_id) \
(unsigned long long)be64_to_cpup(((__be64 *)(oid_device_id)->data) + 1)
static inline int
pnfs_osd_objid_xdr_sz(void)
enum pnfs_osd_version ;
struct pnfs_osd_opaque_cred ;
enum pnfs_osd_cap_key_sec ;
struct pnfs_osd_object_cred ;
struct pnfs_osd_layout ;
enum pnfs_osd_targetid_type ;
struct pnfs_osd_targetid ;
enum ;
struct pnfs_osd_net_addr ;
struct pnfs_osd_targetaddr ;
enum ;
struct pnfs_osd_deviceaddr ;
enum ;
struct pnfs_osd_layoutupdate ;
enum pnfs_osd_errno ;
struct pnfs_osd_ioerr ;
struct pnfs_osd_xdr_decode_layout_iter ;
extern int pnfs_osd_xdr_decode_layout_map(struct pnfs_osd_layout *layout,
struct pnfs_osd_xdr_decode_layout_iter *iter, struct xdr_stream *xdr);
extern bool pnfs_osd_xdr_decode_layout_comp(struct pnfs_osd_object_cred *comp,
struct pnfs_osd_xdr_decode_layout_iter *iter, struct xdr_stream *xdr,
int *err);
extern void pnfs_osd_xdr_decode_deviceaddr(
struct pnfs_osd_deviceaddr *deviceaddr, __be32 *p);
extern int
pnfs_osd_xdr_encode_layoutupdate(struct xdr_stream *xdr,
struct pnfs_osd_layoutupdate *lou);
extern __be32 *pnfs_osd_xdr_ioerr_reserve_space(struct xdr_stream *xdr);
extern void pnfs_osd_xdr_encode_ioerr(__be32 *p, struct pnfs_osd_ioerr *ioerr);
