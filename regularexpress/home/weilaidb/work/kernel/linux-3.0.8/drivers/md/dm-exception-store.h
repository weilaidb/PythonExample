#define _LINUX_DM_EXCEPTION_STORE
typedef sector_t chunk_t;
struct dm_exception ;
struct dm_exception_store;
struct dm_exception_store_type ;
struct dm_snapshot;
struct dm_exception_store ;
struct dm_dev *dm_snap_origin(struct dm_snapshot *snap);
struct dm_dev *dm_snap_cow(struct dm_snapshot *snap);
#  if defined(CONFIG_LBDAF) || (BITS_PER_LONG == 64)
#    define DM_CHUNK_CONSECUTIVE_BITS 8
#    define DM_CHUNK_NUMBER_BITS 56
static inline chunk_t dm_chunk_number(chunk_t chunk)
static inline unsigned dm_consecutive_chunk_count(struct dm_exception *e)
static inline void dm_consecutive_chunk_count_inc(struct dm_exception *e)
static inline void dm_consecutive_chunk_count_dec(struct dm_exception *e)
#  else
#    define DM_CHUNK_CONSECUTIVE_BITS 0
static inline chunk_t dm_chunk_number(chunk_t chunk)
static inline unsigned dm_consecutive_chunk_count(struct dm_exception *e)
static inline void dm_consecutive_chunk_count_inc(struct dm_exception *e)
static inline void dm_consecutive_chunk_count_dec(struct dm_exception *e)
#  endif
static inline sector_t get_dev_size(struct block_device *bdev)
static inline chunk_t sector_to_chunk(struct dm_exception_store *store,
sector_t sector)
int dm_exception_store_type_register(struct dm_exception_store_type *type);
int dm_exception_store_type_unregister(struct dm_exception_store_type *type);
int dm_exception_store_set_chunk_size(struct dm_exception_store *store,
unsigned chunk_size,
char **error);
int dm_exception_store_create(struct dm_target *ti, int argc, char **argv,
struct dm_snapshot *snap,
unsigned *args_used,
struct dm_exception_store **store);
void dm_exception_store_destroy(struct dm_exception_store *store);
int dm_exception_store_init(void);
void dm_exception_store_exit(void);
int dm_persistent_snapshot_init(void);
void dm_persistent_snapshot_exit(void);
int dm_transient_snapshot_init(void);
void dm_transient_snapshot_exit(void);
