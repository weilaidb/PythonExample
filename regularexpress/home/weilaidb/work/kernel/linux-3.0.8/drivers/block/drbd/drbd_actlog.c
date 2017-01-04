struct __packed al_transaction ;
struct update_odbm_work ;
struct update_al_work ;
struct drbd_atodb_wait ;
int w_al_write_transaction(struct drbd_conf *, struct drbd_work *, int);
static int _drbd_md_sync_page_io(struct drbd_conf *mdev,
struct drbd_backing_dev *bdev,
struct page *page, sector_t sector,
int rw, int size)
int drbd_md_sync_page_io(struct drbd_conf *mdev, struct drbd_backing_dev *bdev,
sector_t sector, int rw)
static struct lc_element *_al_get(struct drbd_conf *mdev, unsigned int enr)
void drbd_al_begin_io(struct drbd_conf *mdev, sector_t sector)
void drbd_al_complete_io(struct drbd_conf *mdev, sector_t sector)
#if (PAGE_SHIFT + 3) < (AL_EXTENT_SHIFT - BM_BLOCK_SHIFT)
# error FIXME
static unsigned int al_extent_to_bm_page(unsigned int al_enr)
static unsigned int rs_extent_to_bm_page(unsigned int rs_enr)
int
w_al_write_transaction(struct drbd_conf *mdev, struct drbd_work *w, int unused)
static int drbd_al_read_tr(struct drbd_conf *mdev,
struct drbd_backing_dev *bdev,
struct al_transaction *b,
int index)
int drbd_al_read_log(struct drbd_conf *mdev, struct drbd_backing_dev *bdev)
void drbd_al_apply_to_bm(struct drbd_conf *mdev)
static int _try_lc_del(struct drbd_conf *mdev, struct lc_element *al_ext)
void drbd_al_shrink(struct drbd_conf *mdev)
static int w_update_odbm(struct drbd_conf *mdev, struct drbd_work *w, int unused)
static void drbd_try_clear_on_disk_bm(struct drbd_conf *mdev, sector_t sector,
int count, int success)
void drbd_advance_rs_marks(struct drbd_conf *mdev, unsigned long still_to_go)
void __drbd_set_in_sync(struct drbd_conf *mdev, sector_t sector, int size,
const char *file, const unsigned int line)
int __drbd_set_out_of_sync(struct drbd_conf *mdev, sector_t sector, int size,
const char *file, const unsigned int line)
static
struct bm_extent *_bme_get(struct drbd_conf *mdev, unsigned int enr)
static int _is_in_al(struct drbd_conf *mdev, unsigned int enr)
int drbd_rs_begin_io(struct drbd_conf *mdev, sector_t sector)
int drbd_try_rs_begin_io(struct drbd_conf *mdev, sector_t sector)
void drbd_rs_complete_io(struct drbd_conf *mdev, sector_t sector)
void drbd_rs_cancel_all(struct drbd_conf *mdev)
int drbd_rs_del_all(struct drbd_conf *mdev)
void drbd_rs_failed_io(struct drbd_conf *mdev, sector_t sector, int size)
