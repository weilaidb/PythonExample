struct scrub_bio;
struct scrub_page;
struct scrub_dev;
static void scrub_bio_end_io(struct bio *bio, int err);
static void scrub_checksum(struct btrfs_work *work);
static int scrub_checksum_data(struct scrub_dev *sdev,
struct scrub_page *spag, void *buffer);
static int scrub_checksum_tree_block(struct scrub_dev *sdev,
struct scrub_page *spag, u64 logical,
void *buffer);
static int scrub_checksum_super(struct scrub_bio *sbio, void *buffer);
static int scrub_fixup_check(struct scrub_bio *sbio, int ix);
static void scrub_fixup_end_io(struct bio *bio, int err);
static int scrub_fixup_io(int rw, struct block_device *bdev, sector_t sector,
struct page *page);
static void scrub_fixup(struct scrub_bio *sbio, int ix);
#define SCRUB_PAGES_PER_BIO	16
#define SCRUB_BIOS_PER_DEV	16
struct scrub_page ;
struct scrub_bio ;
struct scrub_dev ;
static void scrub_free_csums(struct scrub_dev *sdev)
static void scrub_free_bio(struct bio *bio)
static noinline_for_stack void scrub_free_dev(struct scrub_dev *sdev)
static noinline_for_stack
struct scrub_dev *scrub_setup_dev(struct btrfs_device *dev)
static void scrub_recheck_error(struct scrub_bio *sbio, int ix)
static int scrub_fixup_check(struct scrub_bio *sbio, int ix)
static void scrub_fixup_end_io(struct bio *bio, int err)
static void scrub_fixup(struct scrub_bio *sbio, int ix)
static int scrub_fixup_io(int rw, struct block_device *bdev, sector_t sector,
struct page *page)
static void scrub_bio_end_io(struct bio *bio, int err)
static void scrub_checksum(struct btrfs_work *work)
static int scrub_checksum_data(struct scrub_dev *sdev,
struct scrub_page *spag, void *buffer)
static int scrub_checksum_tree_block(struct scrub_dev *sdev,
struct scrub_page *spag, u64 logical,
void *buffer)
static int scrub_checksum_super(struct scrub_bio *sbio, void *buffer)
static int scrub_submit(struct scrub_dev *sdev)
static int scrub_page(struct scrub_dev *sdev, u64 logical, u64 len,
u64 physical, u64 flags, u64 gen, u64 mirror_num,
u8 *csum, int force)
static int scrub_find_csum(struct scrub_dev *sdev, u64 logical, u64 len,
u8 *csum)
static int scrub_extent(struct scrub_dev *sdev, u64 logical, u64 len,
u64 physical, u64 flags, u64 gen, u64 mirror_num)
static noinline_for_stack int scrub_stripe(struct scrub_dev *sdev,
struct map_lookup *map, int num, u64 base, u64 length)
static noinline_for_stack int scrub_chunk(struct scrub_dev *sdev,
u64 chunk_tree, u64 chunk_objectid, u64 chunk_offset, u64 length)
static noinline_for_stack
int scrub_enumerate_chunks(struct scrub_dev *sdev, u64 start, u64 end)
static noinline_for_stack int scrub_supers(struct scrub_dev *sdev)
static noinline_for_stack int scrub_workers_get(struct btrfs_root *root)
static noinline_for_stack void scrub_workers_put(struct btrfs_root *root)
int btrfs_scrub_dev(struct btrfs_root *root, u64 devid, u64 start, u64 end,
struct btrfs_scrub_progress *progress, int readonly)
int btrfs_scrub_pause(struct btrfs_root *root)
int btrfs_scrub_continue(struct btrfs_root *root)
int btrfs_scrub_pause_super(struct btrfs_root *root)
int btrfs_scrub_continue_super(struct btrfs_root *root)
int btrfs_scrub_cancel(struct btrfs_root *root)
int btrfs_scrub_cancel_dev(struct btrfs_root *root, struct btrfs_device *dev)
int btrfs_scrub_cancel_devid(struct btrfs_root *root, u64 devid)
int btrfs_scrub_progress(struct btrfs_root *root, u64 devid,
struct btrfs_scrub_progress *progress)
