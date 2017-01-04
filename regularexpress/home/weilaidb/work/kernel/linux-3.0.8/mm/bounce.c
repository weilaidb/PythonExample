#define POOL_SIZE	64
#define ISA_POOL_SIZE	16
static mempool_t *page_pool, *isa_page_pool;
static __init int init_emergency_pool(void)
__initcall(init_emergency_pool);
static void bounce_copy_vec(struct bio_vec *to, unsigned char *vfrom)
#define bounce_copy_vec(to, vfrom)	\
memcpy(page_address((to)->bv_page) + (to)->bv_offset, vfrom, (to)->bv_len)
static void *mempool_alloc_pages_isa(gfp_t gfp_mask, void *data)
int init_emergency_isa_pool(void)
static void copy_to_high_bio_irq(struct bio *to, struct bio *from)
static void bounce_end_io(struct bio *bio, mempool_t *pool, int err)
static void bounce_end_io_write(struct bio *bio, int err)
static void bounce_end_io_write_isa(struct bio *bio, int err)
static void __bounce_end_io_read(struct bio *bio, mempool_t *pool, int err)
static void bounce_end_io_read(struct bio *bio, int err)
static void bounce_end_io_read_isa(struct bio *bio, int err)
static void __blk_queue_bounce(struct request_queue *q, struct bio **bio_orig,
mempool_t *pool)
void blk_queue_bounce(struct request_queue *q, struct bio **bio_orig)
EXPORT_SYMBOL(blk_queue_bounce);
