#define DM_MSG_PREFIX "table"
#define MAX_DEPTH 16
#define NODE_SIZE L1_CACHE_BYTES
#define KEYS_PER_NODE (NODE_SIZE / sizeof(sector_t))
#define CHILDREN_PER_NODE (KEYS_PER_NODE + 1)
struct dm_table ;
static unsigned int int_log(unsigned int n, unsigned int base)
static inline unsigned int get_child(unsigned int n, unsigned int k)
static inline sector_t *get_node(struct dm_table *t,
unsigned int l, unsigned int n)
static sector_t high(struct dm_table *t, unsigned int l, unsigned int n)
static int setup_btree_index(unsigned int l, struct dm_table *t)
void *dm_vcalloc(unsigned long nmemb, unsigned long elem_size)
static int alloc_targets(struct dm_table *t, unsigned int num)
int dm_table_create(struct dm_table **result, fmode_t mode,
unsigned num_targets, struct mapped_device *md)
static void free_devices(struct list_head *devices)
void dm_table_destroy(struct dm_table *t)
void dm_table_get(struct dm_table *t)
void dm_table_put(struct dm_table *t)
static inline int check_space(struct dm_table *t)
static struct dm_dev_internal *find_device(struct list_head *l, dev_t dev)
static int open_dev(struct dm_dev_internal *d, dev_t dev,
struct mapped_device *md)
static void close_dev(struct dm_dev_internal *d, struct mapped_device *md)
static int device_area_is_invalid(struct dm_target *ti, struct dm_dev *dev,
sector_t start, sector_t len, void *data)
static int upgrade_mode(struct dm_dev_internal *dd, fmode_t new_mode,
struct mapped_device *md)
static int __table_get_device(struct dm_table *t, struct dm_target *ti,
const char *path, fmode_t mode, struct dm_dev **result)
int dm_set_device_limits(struct dm_target *ti, struct dm_dev *dev,
sector_t start, sector_t len, void *data)
EXPORT_SYMBOL_GPL(dm_set_device_limits);
int dm_get_device(struct dm_target *ti, const char *path, fmode_t mode,
struct dm_dev **result)
void dm_put_device(struct dm_target *ti, struct dm_dev *d)
static int adjoin(struct dm_table *table, struct dm_target *ti)
static char **realloc_argv(unsigned *array_size, char **old_argv)
int dm_split_args(int *argc, char ***argvp, char *input)
static int validate_hardware_logical_block_alignment(struct dm_table *table,
struct queue_limits *limits)
int dm_table_add_target(struct dm_table *t, const char *type,
sector_t start, sector_t len, char *params)
static int dm_table_set_type(struct dm_table *t)
unsigned dm_table_get_type(struct dm_table *t)
bool dm_table_request_based(struct dm_table *t)
int dm_table_alloc_md_mempools(struct dm_table *t)
void dm_table_free_md_mempools(struct dm_table *t)
struct dm_md_mempools *dm_table_get_md_mempools(struct dm_table *t)
static int setup_indexes(struct dm_table *t)
static int dm_table_build_index(struct dm_table *t)
static struct gendisk * dm_table_get_integrity_disk(struct dm_table *t,
bool match_all)
static int dm_table_prealloc_integrity(struct dm_table *t, struct mapped_device *md)
int dm_table_complete(struct dm_table *t)
static DEFINE_MUTEX(_event_lock);
void dm_table_event_callback(struct dm_table *t,
void (*fn)(void *), void *context)
void dm_table_event(struct dm_table *t)
sector_t dm_table_get_size(struct dm_table *t)
struct dm_target *dm_table_get_target(struct dm_table *t, unsigned int index)
struct dm_target *dm_table_find_target(struct dm_table *t, sector_t sector)
int dm_calculate_queue_limits(struct dm_table *table,
struct queue_limits *limits)
static void dm_table_set_integrity(struct dm_table *t)
void dm_table_set_restrictions(struct dm_table *t, struct request_queue *q,
struct queue_limits *limits)
unsigned int dm_table_get_num_targets(struct dm_table *t)
struct list_head *dm_table_get_devices(struct dm_table *t)
fmode_t dm_table_get_mode(struct dm_table *t)
static void suspend_targets(struct dm_table *t, unsigned postsuspend)
void dm_table_presuspend_targets(struct dm_table *t)
void dm_table_postsuspend_targets(struct dm_table *t)
int dm_table_resume_targets(struct dm_table *t)
void dm_table_add_target_callbacks(struct dm_table *t, struct dm_target_callbacks *cb)
EXPORT_SYMBOL_GPL(dm_table_add_target_callbacks);
int dm_table_any_congested(struct dm_table *t, int bdi_bits)
int dm_table_any_busy_target(struct dm_table *t)
struct mapped_device *dm_table_get_md(struct dm_table *t)
static int device_discard_capable(struct dm_target *ti, struct dm_dev *dev,
sector_t start, sector_t len, void *data)
bool dm_table_supports_discards(struct dm_table *t)
EXPORT_SYMBOL(dm_vcalloc);
EXPORT_SYMBOL(dm_get_device);
EXPORT_SYMBOL(dm_put_device);
EXPORT_SYMBOL(dm_table_event);
EXPORT_SYMBOL(dm_table_get_size);
EXPORT_SYMBOL(dm_table_get_mode);
EXPORT_SYMBOL(dm_table_get_md);
EXPORT_SYMBOL(dm_table_put);
EXPORT_SYMBOL(dm_table_get);
