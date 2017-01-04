#define EXOFS_DBGMSG2(M...) do  while (0)
void exofs_make_credential(u8 cred_a[OSD_CAP_LEN], const struct osd_obj_id *obj)
int exofs_read_kern(struct osd_dev *od, u8 *cred, struct osd_obj_id *obj,
u64 offset, void *p, unsigned length)
int exofs_get_io_state(struct exofs_layout *layout,
struct exofs_io_state **pios)
void exofs_put_io_state(struct exofs_io_state *ios)
unsigned exofs_layout_od_id(struct exofs_layout *layout,
osd_id obj_no, unsigned layout_index)
static inline struct osd_dev *exofs_ios_od(struct exofs_io_state *ios,
unsigned layout_index)
static void _sync_done(struct exofs_io_state *ios, void *p)
static void _last_io(struct kref *kref)
static void _done_io(struct osd_request *or, void *p)
static int exofs_io_execute(struct exofs_io_state *ios)
static void _clear_bio(struct bio *bio)
int exofs_check_io(struct exofs_io_state *ios, u64 *resid)
struct _striping_info ;
static void _calc_stripe_info(struct exofs_io_state *ios, u64 file_offset,
struct _striping_info *si)
static int _add_stripe_unit(struct exofs_io_state *ios,  unsigned *cur_pg,
unsigned pgbase, struct exofs_per_dev_state *per_dev,
int cur_len)
static int _prepare_one_group(struct exofs_io_state *ios, u64 length,
struct _striping_info *si)
static int _prepare_for_striping(struct exofs_io_state *ios)
int exofs_sbi_create(struct exofs_io_state *ios)
int exofs_sbi_remove(struct exofs_io_state *ios)
static int _sbi_write_mirror(struct exofs_io_state *ios, int cur_comp)
int exofs_sbi_write(struct exofs_io_state *ios)
static int _sbi_read_mirror(struct exofs_io_state *ios, unsigned cur_comp)
int exofs_sbi_read(struct exofs_io_state *ios)
int extract_attr_from_ios(struct exofs_io_state *ios, struct osd_attr *attr)
static int _truncate_mirrors(struct exofs_io_state *ios, unsigned cur_comp,
struct osd_attr *attr)
int exofs_oi_truncate(struct exofs_i_info *oi, u64 size)
