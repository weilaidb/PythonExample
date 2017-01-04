#define HIBERNATE_SIG	"S1SUSPEND"
#define MAP_PAGE_ENTRIES	(PAGE_SIZE / sizeof(sector_t) - 1)
struct swap_map_page ;
struct swap_map_handle ;
struct swsusp_header  __attribute__((packed));
static struct swsusp_header *swsusp_header;
struct swsusp_extent ;
static struct rb_root swsusp_extents = RB_ROOT;
static int swsusp_extents_insert(unsigned long swap_offset)
sector_t alloc_swapdev_block(int swap)
void free_all_swap_pages(int swap)
int swsusp_swap_in_use(void)
static unsigned short root_swap = 0xffff;
struct block_device *hib_resume_bdev;
static int mark_swapfiles(struct swap_map_handle *handle, unsigned int flags)
static int swsusp_swap_check(void)
static int write_page(void *buf, sector_t offset, struct bio **bio_chain)
static void release_swap_writer(struct swap_map_handle *handle)
static int get_swap_writer(struct swap_map_handle *handle)
static int swap_write_page(struct swap_map_handle *handle, void *buf,
struct bio **bio_chain)
static int flush_swap_writer(struct swap_map_handle *handle)
static int swap_writer_finish(struct swap_map_handle *handle,
unsigned int flags, int error)
#define LZO_HEADER	sizeof(size_t)
#define LZO_UNC_PAGES	32
#define LZO_UNC_SIZE	(LZO_UNC_PAGES * PAGE_SIZE)
#define LZO_CMP_PAGES	DIV_ROUND_UP(lzo1x_worst_compress(LZO_UNC_SIZE) + \
LZO_HEADER, PAGE_SIZE)
#define LZO_CMP_SIZE	(LZO_CMP_PAGES * PAGE_SIZE)
static int save_image(struct swap_map_handle *handle,
struct snapshot_handle *snapshot,
unsigned int nr_to_write)
static int save_image_lzo(struct swap_map_handle *handle,
struct snapshot_handle *snapshot,
unsigned int nr_to_write)
static int enough_swap(unsigned int nr_pages, unsigned int flags)
int swsusp_write(unsigned int flags)
static void release_swap_reader(struct swap_map_handle *handle)
static int get_swap_reader(struct swap_map_handle *handle,
unsigned int *flags_p)
static int swap_read_page(struct swap_map_handle *handle, void *buf,
struct bio **bio_chain)
static int swap_reader_finish(struct swap_map_handle *handle)
static int load_image(struct swap_map_handle *handle,
struct snapshot_handle *snapshot,
unsigned int nr_to_read)
static int load_image_lzo(struct swap_map_handle *handle,
struct snapshot_handle *snapshot,
unsigned int nr_to_read)
int swsusp_read(unsigned int *flags_p)
int swsusp_check(void)
void swsusp_close(fmode_t mode)
static int swsusp_header_init(void)
core_initcall(swsusp_header_init);
