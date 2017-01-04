#define DM_MSG_PREFIX "uevent"
static const struct  _dm_uevent_type_names[] = ;
static struct kmem_cache *_dm_event_cache;
struct dm_uevent ;
static void dm_uevent_free(struct dm_uevent *event)
static struct dm_uevent *dm_uevent_alloc(struct mapped_device *md)
static struct dm_uevent *dm_build_path_uevent(struct mapped_device *md,
struct dm_target *ti,
enum kobject_action action,
const char *dm_action,
const char *path,
unsigned nr_valid_paths)
void dm_send_uevents(struct list_head *events, struct kobject *kobj)
EXPORT_SYMBOL_GPL(dm_send_uevents);
void dm_path_uevent(enum dm_uevent_type event_type, struct dm_target *ti,
const char *path, unsigned nr_valid_paths)
EXPORT_SYMBOL_GPL(dm_path_uevent);
int dm_uevent_init(void)
void dm_uevent_exit(void)
