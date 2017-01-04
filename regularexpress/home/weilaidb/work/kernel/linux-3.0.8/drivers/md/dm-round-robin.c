#define DM_MSG_PREFIX "multipath round-robin"
struct path_info ;
static void free_paths(struct list_head *paths)
#define RR_MIN_IO		1000
struct selector ;
static struct selector *alloc_selector(void)
static int rr_create(struct path_selector *ps, unsigned argc, char **argv)
static void rr_destroy(struct path_selector *ps)
static int rr_status(struct path_selector *ps, struct dm_path *path,
status_type_t type, char *result, unsigned int maxlen)
static int rr_add_path(struct path_selector *ps, struct dm_path *path,
int argc, char **argv, char **error)
static void rr_fail_path(struct path_selector *ps, struct dm_path *p)
static int rr_reinstate_path(struct path_selector *ps, struct dm_path *p)
static struct dm_path *rr_select_path(struct path_selector *ps,
unsigned *repeat_count, size_t nr_bytes)
static struct path_selector_type rr_ps = ;
static int __init dm_rr_init(void)
static void __exit dm_rr_exit(void)
module_init(dm_rr_init);
module_exit(dm_rr_exit);
MODULE_DESCRIPTION(DM_NAME " round-robin multipath path selector");
MODULE_AUTHOR("Sistina Software <dm-devel@redhat.com>");
MODULE_LICENSE("GPL");
