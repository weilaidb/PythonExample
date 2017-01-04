#define DM_MSG_PREFIX	"multipath service-time"
#define ST_MIN_IO	1
#define ST_MAX_RELATIVE_THROUGHPUT	100
#define ST_MAX_RELATIVE_THROUGHPUT_SHIFT	7
#define ST_MAX_INFLIGHT_SIZE	((size_t)-1 >> ST_MAX_RELATIVE_THROUGHPUT_SHIFT)
#define ST_VERSION	"0.2.0"
struct selector ;
struct path_info ;
static struct selector *alloc_selector(void)
static int st_create(struct path_selector *ps, unsigned argc, char **argv)
static void free_paths(struct list_head *paths)
static void st_destroy(struct path_selector *ps)
static int st_status(struct path_selector *ps, struct dm_path *path,
status_type_t type, char *result, unsigned maxlen)
static int st_add_path(struct path_selector *ps, struct dm_path *path,
int argc, char **argv, char **error)
static void st_fail_path(struct path_selector *ps, struct dm_path *path)
static int st_reinstate_path(struct path_selector *ps, struct dm_path *path)
static int st_compare_load(struct path_info *pi1, struct path_info *pi2,
size_t incoming)
static struct dm_path *st_select_path(struct path_selector *ps,
unsigned *repeat_count, size_t nr_bytes)
static int st_start_io(struct path_selector *ps, struct dm_path *path,
size_t nr_bytes)
static int st_end_io(struct path_selector *ps, struct dm_path *path,
size_t nr_bytes)
static struct path_selector_type st_ps = ;
static int __init dm_st_init(void)
static void __exit dm_st_exit(void)
module_init(dm_st_init);
module_exit(dm_st_exit);
MODULE_DESCRIPTION(DM_NAME " throughput oriented path selector");
MODULE_AUTHOR("Kiyoshi Ueda <k-ueda@ct.jp.nec.com>");
MODULE_LICENSE("GPL");
