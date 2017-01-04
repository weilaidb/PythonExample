#define _LINUX_DM_DIRTY_LOG
typedef sector_t region_t;
struct dm_dirty_log_type;
struct dm_dirty_log ;
struct dm_dirty_log_type ;
int dm_dirty_log_type_register(struct dm_dirty_log_type *type);
int dm_dirty_log_type_unregister(struct dm_dirty_log_type *type);
struct dm_dirty_log *dm_dirty_log_create(const char *type_name,
struct dm_target *ti,
int (*flush_callback_fn)(struct dm_target *ti),
unsigned argc, char **argv);
void dm_dirty_log_destroy(struct dm_dirty_log *log);
