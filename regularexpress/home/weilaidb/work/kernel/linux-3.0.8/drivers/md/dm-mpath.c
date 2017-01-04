#define DM_MSG_PREFIX "multipath"
#define MESG_STR(x) x, sizeof(x)
#define DM_PG_INIT_DELAY_MSECS 2000
#define DM_PG_INIT_DELAY_DEFAULT ((unsigned) -1)
struct pgpath ;
#define path_to_pgpath(__pgp) container_of((__pgp), struct pgpath, path)
struct priority_group ;
struct multipath ;
struct dm_mpath_io ;
typedef int (*action_fn) (struct pgpath *pgpath);
#define MIN_IOS 256
static struct kmem_cache *_mpio_cache;
static struct workqueue_struct *kmultipathd, *kmpath_handlerd;
static void process_queued_ios(struct work_struct *work);
static void trigger_event(struct work_struct *work);
static void activate_path(struct work_struct *work);
static struct pgpath *alloc_pgpath(void)
static void free_pgpath(struct pgpath *pgpath)
static struct priority_group *alloc_priority_group(void)
static void free_pgpaths(struct list_head *pgpaths, struct dm_target *ti)
static void free_priority_group(struct priority_group *pg,
struct dm_target *ti)
static struct multipath *alloc_multipath(struct dm_target *ti)
static void free_multipath(struct multipath *m)
static void __pg_init_all_paths(struct multipath *m)
static void __switch_pg(struct multipath *m, struct pgpath *pgpath)
static int __choose_path_in_pg(struct multipath *m, struct priority_group *pg,
size_t nr_bytes)
static void __choose_pgpath(struct multipath *m, size_t nr_bytes)
static int __must_push_back(struct multipath *m)
static int map_io(struct multipath *m, struct request *clone,
struct dm_mpath_io *mpio, unsigned was_queued)
static int queue_if_no_path(struct multipath *m, unsigned queue_if_no_path,
unsigned save_old_value)
static void dispatch_queued_ios(struct multipath *m)
static void process_queued_ios(struct work_struct *work)
static void trigger_event(struct work_struct *work)
struct param ;
static int read_param(struct param *param, char *str, unsigned *v, char **error)
struct arg_set ;
static char *shift(struct arg_set *as)
static void consume(struct arg_set *as, unsigned n)
static int parse_path_selector(struct arg_set *as, struct priority_group *pg,
struct dm_target *ti)
static struct pgpath *parse_path(struct arg_set *as, struct path_selector *ps,
struct dm_target *ti)
static struct priority_group *parse_priority_group(struct arg_set *as,
struct multipath *m)
static int parse_hw_handler(struct arg_set *as, struct multipath *m)
static int parse_features(struct arg_set *as, struct multipath *m)
static int multipath_ctr(struct dm_target *ti, unsigned int argc,
char **argv)
static void multipath_wait_for_pg_init_completion(struct multipath *m)
static void flush_multipath_work(struct multipath *m)
static void multipath_dtr(struct dm_target *ti)
static int multipath_map(struct dm_target *ti, struct request *clone,
union map_info *map_context)
static int fail_path(struct pgpath *pgpath)
static int reinstate_path(struct pgpath *pgpath)
static int action_dev(struct multipath *m, struct dm_dev *dev,
action_fn action)
static void bypass_pg(struct multipath *m, struct priority_group *pg,
int bypassed)
static int switch_pg_num(struct multipath *m, const char *pgstr)
static int bypass_pg_num(struct multipath *m, const char *pgstr, int bypassed)
static int pg_init_limit_reached(struct multipath *m, struct pgpath *pgpath)
static void pg_init_done(void *data, int errors)
static void activate_path(struct work_struct *work)
static int do_end_io(struct multipath *m, struct request *clone,
int error, struct dm_mpath_io *mpio)
static int multipath_end_io(struct dm_target *ti, struct request *clone,
int error, union map_info *map_context)
static void multipath_presuspend(struct dm_target *ti)
static void multipath_postsuspend(struct dm_target *ti)
static void multipath_resume(struct dm_target *ti)
static int multipath_status(struct dm_target *ti, status_type_t type,
char *result, unsigned int maxlen)
static int multipath_message(struct dm_target *ti, unsigned argc, char **argv)
static int multipath_ioctl(struct dm_target *ti, unsigned int cmd,
unsigned long arg)
static int multipath_iterate_devices(struct dm_target *ti,
iterate_devices_callout_fn fn, void *data)
static int __pgpath_busy(struct pgpath *pgpath)
static int multipath_busy(struct dm_target *ti)
static struct target_type multipath_target = ;
static int __init dm_multipath_init(void)
static void __exit dm_multipath_exit(void)
module_init(dm_multipath_init);
module_exit(dm_multipath_exit);
MODULE_DESCRIPTION(DM_NAME " multipath target");
MODULE_AUTHOR("Sistina Software <dm-devel@redhat.com>");
MODULE_LICENSE("GPL");
