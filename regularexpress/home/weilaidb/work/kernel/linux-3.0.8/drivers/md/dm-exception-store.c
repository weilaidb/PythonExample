#define DM_MSG_PREFIX "snapshot exception stores"
static LIST_HEAD(_exception_store_types);
static DEFINE_SPINLOCK(_lock);
static struct dm_exception_store_type *__find_exception_store_type(const char *name)
static struct dm_exception_store_type *_get_exception_store_type(const char *name)
static struct dm_exception_store_type *get_type(const char *type_name)
static void put_type(struct dm_exception_store_type *type)
int dm_exception_store_type_register(struct dm_exception_store_type *type)
EXPORT_SYMBOL(dm_exception_store_type_register);
int dm_exception_store_type_unregister(struct dm_exception_store_type *type)
EXPORT_SYMBOL(dm_exception_store_type_unregister);
static int set_chunk_size(struct dm_exception_store *store,
const char *chunk_size_arg, char **error)
int dm_exception_store_set_chunk_size(struct dm_exception_store *store,
unsigned chunk_size,
char **error)
int dm_exception_store_create(struct dm_target *ti, int argc, char **argv,
struct dm_snapshot *snap,
unsigned *args_used,
struct dm_exception_store **store)
EXPORT_SYMBOL(dm_exception_store_create);
void dm_exception_store_destroy(struct dm_exception_store *store)
EXPORT_SYMBOL(dm_exception_store_destroy);
int dm_exception_store_init(void)
void dm_exception_store_exit(void)
