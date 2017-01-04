#define BITMAP_H 1
#define BITMAP_MAJOR_LO 3
#define BITMAP_MAJOR_HI 4
#define	BITMAP_MAJOR_HOSTENDIAN 3
#define BITMAP_MINOR 39
#define PAGE_BITS (PAGE_SIZE << 3)
#define PAGE_BIT_SHIFT (PAGE_SHIFT + 3)
typedef __u16 bitmap_counter_t;
#define COUNTER_BITS 16
#define COUNTER_BIT_SHIFT 4
#define COUNTER_BYTE_SHIFT (COUNTER_BIT_SHIFT - 3)
#define NEEDED_MASK ((bitmap_counter_t) (1 << (COUNTER_BITS - 1)))
#define RESYNC_MASK ((bitmap_counter_t) (1 << (COUNTER_BITS - 2)))
#define COUNTER_MAX ((bitmap_counter_t) RESYNC_MASK - 1)
#define NEEDED(x) (((bitmap_counter_t) x) & NEEDED_MASK)
#define RESYNC(x) (((bitmap_counter_t) x) & RESYNC_MASK)
#define COUNTER(x) (((bitmap_counter_t) x) & COUNTER_MAX)
#define PAGE_COUNTER_RATIO (PAGE_BITS / COUNTER_BITS)
#define PAGE_COUNTER_SHIFT (PAGE_BIT_SHIFT - COUNTER_BIT_SHIFT)
#define PAGE_COUNTER_MASK  (PAGE_COUNTER_RATIO - 1)
#define BITMAP_BLOCK_SIZE 512
#define BITMAP_BLOCK_SHIFT 9
#define CHUNK_BLOCK_RATIO(bitmap) ((bitmap)->mddev->bitmap_info.chunksize >> BITMAP_BLOCK_SHIFT)
#define CHUNK_BLOCK_SHIFT(bitmap) ((bitmap)->chunkshift - BITMAP_BLOCK_SHIFT)
#define CHUNK_BLOCK_MASK(bitmap) (CHUNK_BLOCK_RATIO(bitmap) - 1)
#define PAGEPTR_BLOCK_RATIO(bitmap) \
(CHUNK_BLOCK_RATIO(bitmap) << PAGE_COUNTER_SHIFT >> 1)
#define PAGEPTR_BLOCK_SHIFT(bitmap) \
(CHUNK_BLOCK_SHIFT(bitmap) + PAGE_COUNTER_SHIFT - 1)
#define PAGEPTR_BLOCK_MASK(bitmap) (PAGEPTR_BLOCK_RATIO(bitmap) - 1)
#define BITMAP_MAGIC 0x6d746962
enum bitmap_state ;
typedef struct bitmap_super_s  bitmap_super_t;
struct bitmap_page ;
struct page_list ;
struct bitmap ;
int  bitmap_create(mddev_t *mddev);
int bitmap_load(mddev_t *mddev);
void bitmap_flush(mddev_t *mddev);
void bitmap_destroy(mddev_t *mddev);
void bitmap_print_sb(struct bitmap *bitmap);
void bitmap_update_sb(struct bitmap *bitmap);
int  bitmap_setallbits(struct bitmap *bitmap);
void bitmap_write_all(struct bitmap *bitmap);
void bitmap_dirty_bits(struct bitmap *bitmap, unsigned long s, unsigned long e);
int bitmap_startwrite(struct bitmap *bitmap, sector_t offset,
unsigned long sectors, int behind);
void bitmap_endwrite(struct bitmap *bitmap, sector_t offset,
unsigned long sectors, int success, int behind);
int bitmap_start_sync(struct bitmap *bitmap, sector_t offset, sector_t *blocks, int degraded);
void bitmap_end_sync(struct bitmap *bitmap, sector_t offset, sector_t *blocks, int aborted);
void bitmap_close_sync(struct bitmap *bitmap);
void bitmap_cond_end_sync(struct bitmap *bitmap, sector_t sector);
void bitmap_unplug(struct bitmap *bitmap);
void bitmap_daemon_work(mddev_t *mddev);
