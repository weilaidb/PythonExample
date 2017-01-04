#define DM_MSG_PREFIX "persistent snapshot"
#define DM_CHUNK_SIZE_DEFAULT_SECTORS 32
#define SNAP_MAGIC 0x70416e53
#define SNAPSHOT_DISK_VERSION 1
#define NUM_SNAPSHOT_HDR_CHUNKS 1
struct disk_header ;
struct disk_exception ;
struct commit_callback ;
struct pstore ;
static int alloc_area(struct pstore *ps)
static void free_area(struct pstore *ps)
struct mdata_req ;
static void do_metadata(struct work_struct *work)
static int chunk_io(struct pstore *ps, void *area, chunk_t chunk, int rw,
int metadata)
static chunk_t area_location(struct pstore *ps, chunk_t area)
static int area_io(struct pstore *ps, int rw)
static void zero_memory_area(struct pstore *ps)
static int zero_disk_area(struct pstore *ps, chunk_t area)
static int read_header(struct pstore *ps, int *new_snapshot)
static int write_header(struct pstore *ps)
static struct disk_exception *get_exception(struct pstore *ps, uint32_t index)
static void read_exception(struct pstore *ps,
uint32_t index, struct disk_exception *result)
static void write_exception(struct pstore *ps,
uint32_t index, struct disk_exception *de)
static void clear_exception(struct pstore *ps, uint32_t index)
static int insert_exceptions(struct pstore *ps,
int (*callback)(void *callback_context,
chunk_t old, chunk_t new),
void *callback_context,
int *full)
static int read_exceptions(struct pstore *ps,
int (*callback)(void *callback_context, chunk_t old,
chunk_t new),
void *callback_context)
static struct pstore *get_info(struct dm_exception_store *store)
static void persistent_usage(struct dm_exception_store *store,
sector_t *total_sectors,
sector_t *sectors_allocated,
sector_t *metadata_sectors)
static void persistent_dtr(struct dm_exception_store *store)
static int persistent_read_metadata(struct dm_exception_store *store,
int (*callback)(void *callback_context,
chunk_t old, chunk_t new),
void *callback_context)
static int persistent_prepare_exception(struct dm_exception_store *store,
struct dm_exception *e)
static void persistent_commit_exception(struct dm_exception_store *store,
struct dm_exception *e,
void (*callback) (void *, int success),
void *callback_context)
static int persistent_prepare_merge(struct dm_exception_store *store,
chunk_t *last_old_chunk,
chunk_t *last_new_chunk)
static int persistent_commit_merge(struct dm_exception_store *store,
int nr_merged)
static void persistent_drop_snapshot(struct dm_exception_store *store)
static int persistent_ctr(struct dm_exception_store *store,
unsigned argc, char **argv)
static unsigned persistent_status(struct dm_exception_store *store,
status_type_t status, char *result,
unsigned maxlen)
static struct dm_exception_store_type _persistent_type = ;
static struct dm_exception_store_type _persistent_compat_type = ;
int dm_persistent_snapshot_init(void)
void dm_persistent_snapshot_exit(void)
