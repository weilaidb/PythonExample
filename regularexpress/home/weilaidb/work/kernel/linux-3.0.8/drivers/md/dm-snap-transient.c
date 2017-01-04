#define DM_MSG_PREFIX "transient snapshot"
struct transient_c ;
static void transient_dtr(struct dm_exception_store *store)
static int transient_read_metadata(struct dm_exception_store *store,
int (*callback)(void *callback_context,
chunk_t old, chunk_t new),
void *callback_context)
static int transient_prepare_exception(struct dm_exception_store *store,
struct dm_exception *e)
static void transient_commit_exception(struct dm_exception_store *store,
struct dm_exception *e,
void (*callback) (void *, int success),
void *callback_context)
static void transient_usage(struct dm_exception_store *store,
sector_t *total_sectors,
sector_t *sectors_allocated,
sector_t *metadata_sectors)
static int transient_ctr(struct dm_exception_store *store,
unsigned argc, char **argv)
static unsigned transient_status(struct dm_exception_store *store,
status_type_t status, char *result,
unsigned maxlen)
static struct dm_exception_store_type _transient_type = ;
static struct dm_exception_store_type _transient_compat_type = ;
int dm_transient_snapshot_init(void)
void dm_transient_snapshot_exit(void)
