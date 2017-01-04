struct integrity_slab ;
#define IS(x)
struct integrity_slab bip_slab[BIOVEC_NR_POOLS] __read_mostly = ;
#undef IS
static struct workqueue_struct *kintegrityd_wq;
static inline unsigned int vecs_to_idx(unsigned int nr)
static inline int use_bip_pool(unsigned int idx)
struct bio_integrity_payload *bio_integrity_alloc_bioset(struct bio *bio,
gfp_t gfp_mask,
unsigned int nr_vecs,
struct bio_set *bs)
EXPORT_SYMBOL(bio_integrity_alloc_bioset);
struct bio_integrity_payload *bio_integrity_alloc(struct bio *bio,
gfp_t gfp_mask,
unsigned int nr_vecs)
EXPORT_SYMBOL(bio_integrity_alloc);
void bio_integrity_free(struct bio *bio, struct bio_set *bs)
EXPORT_SYMBOL(bio_integrity_free);
int bio_integrity_add_page(struct bio *bio, struct page *page,
unsigned int len, unsigned int offset)
EXPORT_SYMBOL(bio_integrity_add_page);
static int bdev_integrity_enabled(struct block_device *bdev, int rw)
int bio_integrity_enabled(struct bio *bio)
EXPORT_SYMBOL(bio_integrity_enabled);
static inline unsigned int bio_integrity_hw_sectors(struct blk_integrity *bi,
unsigned int sectors)
unsigned int bio_integrity_tag_size(struct bio *bio)
EXPORT_SYMBOL(bio_integrity_tag_size);
int bio_integrity_tag(struct bio *bio, void *tag_buf, unsigned int len, int set)
int bio_integrity_set_tag(struct bio *bio, void *tag_buf, unsigned int len)
EXPORT_SYMBOL(bio_integrity_set_tag);
int bio_integrity_get_tag(struct bio *bio, void *tag_buf, unsigned int len)
EXPORT_SYMBOL(bio_integrity_get_tag);
static void bio_integrity_generate(struct bio *bio)
static inline unsigned short blk_integrity_tuple_size(struct blk_integrity *bi)
int bio_integrity_prep(struct bio *bio)
EXPORT_SYMBOL(bio_integrity_prep);
static int bio_integrity_verify(struct bio *bio)
static void bio_integrity_verify_fn(struct work_struct *work)
void bio_integrity_endio(struct bio *bio, int error)
EXPORT_SYMBOL(bio_integrity_endio);
void bio_integrity_mark_head(struct bio_integrity_payload *bip,
unsigned int skip)
void bio_integrity_mark_tail(struct bio_integrity_payload *bip,
unsigned int len)
void bio_integrity_advance(struct bio *bio, unsigned int bytes_done)
EXPORT_SYMBOL(bio_integrity_advance);
void bio_integrity_trim(struct bio *bio, unsigned int offset,
unsigned int sectors)
EXPORT_SYMBOL(bio_integrity_trim);
void bio_integrity_split(struct bio *bio, struct bio_pair *bp, int sectors)
EXPORT_SYMBOL(bio_integrity_split);
int bio_integrity_clone(struct bio *bio, struct bio *bio_src,
gfp_t gfp_mask, struct bio_set *bs)
EXPORT_SYMBOL(bio_integrity_clone);
int bioset_integrity_create(struct bio_set *bs, int pool_size)
EXPORT_SYMBOL(bioset_integrity_create);
void bioset_integrity_free(struct bio_set *bs)
EXPORT_SYMBOL(bioset_integrity_free);
void __init bio_integrity_init(void)
