#define DM_MSG_PREFIX "io"
#define DM_IO_MAX_REGIONS	BITS_PER_LONG
#define MIN_IOS		16
#define MIN_BIOS	16
struct dm_io_client ;
struct io  __attribute__((aligned(DM_IO_MAX_REGIONS)));
static struct kmem_cache *_dm_io_cache;
struct dm_io_client *dm_io_client_create(void)
EXPORT_SYMBOL(dm_io_client_create);
void dm_io_client_destroy(struct dm_io_client *client)
EXPORT_SYMBOL(dm_io_client_destroy);
static void store_io_and_region_in_bio(struct bio *bio, struct io *io,
unsigned region)
static void retrieve_io_and_region_from_bio(struct bio *bio, struct io **io,
unsigned *region)
static void dec_count(struct io *io, unsigned int region, int error)
static void endio(struct bio *bio, int error)
struct dpages ;
static void list_get_page(struct dpages *dp,
struct page **p, unsigned long *len, unsigned *offset)
static void list_next_page(struct dpages *dp)
static void list_dp_init(struct dpages *dp, struct page_list *pl, unsigned offset)
static void bvec_get_page(struct dpages *dp,
struct page **p, unsigned long *len, unsigned *offset)
static void bvec_next_page(struct dpages *dp)
static void bvec_dp_init(struct dpages *dp, struct bio_vec *bvec)
static void vm_get_page(struct dpages *dp,
struct page **p, unsigned long *len, unsigned *offset)
static void vm_next_page(struct dpages *dp)
static void vm_dp_init(struct dpages *dp, void *data)
static void dm_bio_destructor(struct bio *bio)
static void km_get_page(struct dpages *dp, struct page **p, unsigned long *len,
unsigned *offset)
static void km_next_page(struct dpages *dp)
static void km_dp_init(struct dpages *dp, void *data)
static void do_region(int rw, unsigned region, struct dm_io_region *where,
struct dpages *dp, struct io *io)
static void dispatch_io(int rw, unsigned int num_regions,
struct dm_io_region *where, struct dpages *dp,
struct io *io, int sync)
static int sync_io(struct dm_io_client *client, unsigned int num_regions,
struct dm_io_region *where, int rw, struct dpages *dp,
unsigned long *error_bits)
static int async_io(struct dm_io_client *client, unsigned int num_regions,
struct dm_io_region *where, int rw, struct dpages *dp,
io_notify_fn fn, void *context)
static int dp_init(struct dm_io_request *io_req, struct dpages *dp,
unsigned long size)
int dm_io(struct dm_io_request *io_req, unsigned num_regions,
struct dm_io_region *where, unsigned long *sync_error_bits)
EXPORT_SYMBOL(dm_io);
int __init dm_io_init(void)
void dm_io_exit(void)
