#define BIO_INLINE_VECS		4
static mempool_t *bio_split_pool __read_mostly;
#define BV(x)
static struct biovec_slab bvec_slabs[BIOVEC_NR_POOLS] __read_mostly = ;
#undef BV
struct bio_set *fs_bio_set;
struct bio_slab ;
static DEFINE_MUTEX(bio_slab_lock);
static struct bio_slab *bio_slabs;
static unsigned int bio_slab_nr, bio_slab_max;
static struct kmem_cache *bio_find_or_create_slab(unsigned int extra_size)
static void bio_put_slab(struct bio_set *bs)
unsigned int bvec_nr_vecs(unsigned short idx)
void bvec_free_bs(struct bio_set *bs, struct bio_vec *bv, unsigned int idx)
struct bio_vec *bvec_alloc_bs(gfp_t gfp_mask, int nr, unsigned long *idx,
struct bio_set *bs)
void bio_free(struct bio *bio, struct bio_set *bs)
EXPORT_SYMBOL(bio_free);
void bio_init(struct bio *bio)
EXPORT_SYMBOL(bio_init);
struct bio *bio_alloc_bioset(gfp_t gfp_mask, int nr_iovecs, struct bio_set *bs)
EXPORT_SYMBOL(bio_alloc_bioset);
static void bio_fs_destructor(struct bio *bio)
struct bio *bio_alloc(gfp_t gfp_mask, int nr_iovecs)
EXPORT_SYMBOL(bio_alloc);
static void bio_kmalloc_destructor(struct bio *bio)
struct bio *bio_kmalloc(gfp_t gfp_mask, int nr_iovecs)
EXPORT_SYMBOL(bio_kmalloc);
void zero_fill_bio(struct bio *bio)
EXPORT_SYMBOL(zero_fill_bio);
void bio_put(struct bio *bio)
EXPORT_SYMBOL(bio_put);
inline int bio_phys_segments(struct request_queue *q, struct bio *bio)
EXPORT_SYMBOL(bio_phys_segments);
void __bio_clone(struct bio *bio, struct bio *bio_src)
EXPORT_SYMBOL(__bio_clone);
struct bio *bio_clone(struct bio *bio, gfp_t gfp_mask)
EXPORT_SYMBOL(bio_clone);
int bio_get_nr_vecs(struct block_device *bdev)
EXPORT_SYMBOL(bio_get_nr_vecs);
static int __bio_add_page(struct request_queue *q, struct bio *bio, struct page
*page, unsigned int len, unsigned int offset,
unsigned short max_sectors)
int bio_add_pc_page(struct request_queue *q, struct bio *bio, struct page *page,
unsigned int len, unsigned int offset)
EXPORT_SYMBOL(bio_add_pc_page);
int bio_add_page(struct bio *bio, struct page *page, unsigned int len,
unsigned int offset)
EXPORT_SYMBOL(bio_add_page);
struct bio_map_data ;
static void bio_set_map_data(struct bio_map_data *bmd, struct bio *bio,
struct sg_iovec *iov, int iov_count,
int is_our_pages)
static void bio_free_map_data(struct bio_map_data *bmd)
static struct bio_map_data *bio_alloc_map_data(int nr_segs, int iov_count,
gfp_t gfp_mask)
static int __bio_copy_iov(struct bio *bio, struct bio_vec *iovecs,
struct sg_iovec *iov, int iov_count,
int to_user, int from_user, int do_free_page)
int bio_uncopy_user(struct bio *bio)
EXPORT_SYMBOL(bio_uncopy_user);
struct bio *bio_copy_user_iov(struct request_queue *q,
struct rq_map_data *map_data,
struct sg_iovec *iov, int iov_count,
int write_to_vm, gfp_t gfp_mask)
struct bio *bio_copy_user(struct request_queue *q, struct rq_map_data *map_data,
unsigned long uaddr, unsigned int len,
int write_to_vm, gfp_t gfp_mask)
EXPORT_SYMBOL(bio_copy_user);
static struct bio *__bio_map_user_iov(struct request_queue *q,
struct block_device *bdev,
struct sg_iovec *iov, int iov_count,
int write_to_vm, gfp_t gfp_mask)
struct bio *bio_map_user(struct request_queue *q, struct block_device *bdev,
unsigned long uaddr, unsigned int len, int write_to_vm,
gfp_t gfp_mask)
EXPORT_SYMBOL(bio_map_user);
struct bio *bio_map_user_iov(struct request_queue *q, struct block_device *bdev,
struct sg_iovec *iov, int iov_count,
int write_to_vm, gfp_t gfp_mask)
static void __bio_unmap_user(struct bio *bio)
void bio_unmap_user(struct bio *bio)
EXPORT_SYMBOL(bio_unmap_user);
static void bio_map_kern_endio(struct bio *bio, int err)
static struct bio *__bio_map_kern(struct request_queue *q, void *data,
unsigned int len, gfp_t gfp_mask)
struct bio *bio_map_kern(struct request_queue *q, void *data, unsigned int len,
gfp_t gfp_mask)
EXPORT_SYMBOL(bio_map_kern);
static void bio_copy_kern_endio(struct bio *bio, int err)
struct bio *bio_copy_kern(struct request_queue *q, void *data, unsigned int len,
gfp_t gfp_mask, int reading)
EXPORT_SYMBOL(bio_copy_kern);
void bio_set_pages_dirty(struct bio *bio)
static void bio_release_pages(struct bio *bio)
static void bio_dirty_fn(struct work_struct *work);
static DECLARE_WORK(bio_dirty_work, bio_dirty_fn);
static DEFINE_SPINLOCK(bio_dirty_lock);
static struct bio *bio_dirty_list;
static void bio_dirty_fn(struct work_struct *work)
void bio_check_pages_dirty(struct bio *bio)
#if ARCH_IMPLEMENTS_FLUSH_DCACHE_PAGE
void bio_flush_dcache_pages(struct bio *bi)
EXPORT_SYMBOL(bio_flush_dcache_pages);
void bio_endio(struct bio *bio, int error)
EXPORT_SYMBOL(bio_endio);
void bio_pair_release(struct bio_pair *bp)
EXPORT_SYMBOL(bio_pair_release);
static void bio_pair_end_1(struct bio *bi, int err)
static void bio_pair_end_2(struct bio *bi, int err)
struct bio_pair *bio_split(struct bio *bi, int first_sectors)
EXPORT_SYMBOL(bio_split);
sector_t bio_sector_offset(struct bio *bio, unsigned short index,
unsigned int offset)
EXPORT_SYMBOL(bio_sector_offset);
static int biovec_create_pools(struct bio_set *bs, int pool_entries)
static void biovec_free_pools(struct bio_set *bs)
void bioset_free(struct bio_set *bs)
EXPORT_SYMBOL(bioset_free);
struct bio_set *bioset_create(unsigned int pool_size, unsigned int front_pad)
EXPORT_SYMBOL(bioset_create);
static void __init biovec_init_slabs(void)
static int __init init_bio(void)
subsys_initcall(init_bio);
