#define NFSDBG_FACILITY         NFSDBG_PNFS_LD
#define _LLU(x) ((unsigned long long)x)
enum ;
struct objio_dev_ent ;
static void
objio_free_deviceid_node(struct nfs4_deviceid_node *d)
static struct objio_dev_ent *_dev_list_find(const struct nfs_server *nfss,
const struct nfs4_deviceid *d_id)
static struct objio_dev_ent *
_dev_list_add(const struct nfs_server *nfss,
const struct nfs4_deviceid *d_id, struct osd_dev *od,
gfp_t gfp_flags)
struct caps_buffers ;
struct objio_segment ;
static inline struct objio_segment *
OBJIO_LSEG(struct pnfs_layout_segment *lseg)
struct objio_state;
typedef ssize_t (*objio_done_fn)(struct objio_state *ios);
struct objio_state ;
static struct objio_dev_ent *_device_lookup(struct pnfs_layout_hdr *pnfslay,
struct objio_segment *objio_seg, unsigned comp,
gfp_t gfp_flags)
static int objio_devices_lookup(struct pnfs_layout_hdr *pnfslay,
struct objio_segment *objio_seg,
gfp_t gfp_flags)
static int _verify_data_map(struct pnfs_osd_layout *layout)
static void copy_single_comp(struct pnfs_osd_object_cred *cur_comp,
struct pnfs_osd_object_cred *src_comp,
struct caps_buffers *caps_p)
int objio_alloc_lseg(struct pnfs_layout_segment **outp,
struct pnfs_layout_hdr *pnfslay,
struct pnfs_layout_range *range,
struct xdr_stream *xdr,
gfp_t gfp_flags)
void objio_free_lseg(struct pnfs_layout_segment *lseg)
int objio_alloc_io_state(struct pnfs_layout_segment *lseg,
struct objlayout_io_state **outp,
gfp_t gfp_flags)
void objio_free_io_state(struct objlayout_io_state *ol_state)
enum pnfs_osd_errno osd_pri_2_pnfs_err(enum osd_err_priority oep)
static void _clear_bio(struct bio *bio)
static int _io_check(struct objio_state *ios, bool is_write)
static void _io_free(struct objio_state *ios)
struct osd_dev *_io_od(struct objio_state *ios, unsigned dev)
struct _striping_info ;
static void _calc_stripe_info(struct objio_state *ios, u64 file_offset,
struct _striping_info *si)
static int _add_stripe_unit(struct objio_state *ios,  unsigned *cur_pg,
unsigned pgbase, struct _objio_per_comp *per_dev, int len,
gfp_t gfp_flags)
static int _prepare_one_group(struct objio_state *ios, u64 length,
struct _striping_info *si, unsigned *last_pg,
gfp_t gfp_flags)
static int _io_rw_pagelist(struct objio_state *ios, gfp_t gfp_flags)
static ssize_t _sync_done(struct objio_state *ios)
static void _last_io(struct kref *kref)
static void _done_io(struct osd_request *or, void *p)
static ssize_t _io_exec(struct objio_state *ios)
static ssize_t _read_done(struct objio_state *ios)
static int _read_mirrors(struct objio_state *ios, unsigned cur_comp)
static ssize_t _read_exec(struct objio_state *ios)
ssize_t objio_read_pagelist(struct objlayout_io_state *ol_state)
static ssize_t _write_done(struct objio_state *ios)
static int _write_mirrors(struct objio_state *ios, unsigned cur_comp)
static ssize_t _write_exec(struct objio_state *ios)
ssize_t objio_write_pagelist(struct objlayout_io_state *ol_state, bool stable)
static bool objio_pg_test(struct nfs_pageio_descriptor *pgio,
struct nfs_page *prev, struct nfs_page *req)
static struct pnfs_layoutdriver_type objlayout_type = ;
MODULE_DESCRIPTION("pNFS Layout Driver for OSD2 objects");
MODULE_AUTHOR("Benny Halevy <bhalevy@panasas.com>");
MODULE_LICENSE("GPL");
static int __init
objlayout_init(void)
static void __exit
objlayout_exit(void)
module_init(objlayout_init);
module_exit(objlayout_exit);
