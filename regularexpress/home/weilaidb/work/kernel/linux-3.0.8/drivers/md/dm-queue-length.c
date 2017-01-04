#define DM_MSG_PREFIX	"multipath queue-length"
#define QL_MIN_IO	128
#define QL_VERSION	"0.1.0"
struct selector ;
struct path_info ;
static struct selector *alloc_selector(void)
static int ql_create(struct path_selector *ps, unsigned argc, char **argv)
static void ql_free_paths(struct list_head *paths)
static void ql_destroy(struct path_selector *ps)
static int ql_status(struct path_selector *ps, struct dm_path *path,
status_type_t type, char *result, unsigned maxlen)
static int ql_add_path(struct path_selector *ps, struct dm_path *path,
int argc, char **argv, char **error)
static void ql_fail_path(struct path_selector *ps, struct dm_path *path)
static int ql_reinstate_path(struct path_selector *ps, struct dm_path *path)
static struct dm_path *ql_select_path(struct path_selector *ps,
unsigned *repeat_count, size_t nr_bytes)
static int ql_start_io(struct path_selector *ps, struct dm_path *path,
size_t nr_bytes)
static int ql_end_io(struct path_selector *ps, struct dm_path *path,
size_t nr_bytes)
static struct path_selector_type ql_ps = ;
static int __init dm_ql_init(void)
static void __exit dm_ql_exit(void)
module_init(dm_ql_init);
module_exit(dm_ql_exit);
MODULE_AUTHOR("Stefan Bader <Stefan.Bader at de.ibm.com>");
MODULE_DESCRIPTION(
"(C) Copyright IBM Corp. 2004,2005   All Rights Reserved.\n"
DM_NAME " path selector to balance the number of in-flight I/Os"
);
MODULE_LICENSE("GPL");
