#define DM_UEVENT_H
enum dm_uevent_type ;
extern int dm_uevent_init(void);
extern void dm_uevent_exit(void);
extern void dm_send_uevents(struct list_head *events, struct kobject *kobj);
extern void dm_path_uevent(enum dm_uevent_type event_type,
struct dm_target *ti, const char *path,
unsigned nr_valid_paths);
static inline int dm_uevent_init(void)
static inline void dm_uevent_exit(void)
static inline void dm_send_uevents(struct list_head *events,
struct kobject *kobj)
static inline void dm_path_uevent(enum dm_uevent_type event_type,
struct dm_target *ti, const char *path,
unsigned nr_valid_paths)
