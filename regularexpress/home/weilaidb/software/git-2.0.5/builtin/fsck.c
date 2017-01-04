#define REACHABLE 0x0001
#define SEEN      0x0002
#define HAS_OBJ   0x0004
static int show_root;
static int show_tags;
static int show_unreachable;
static int include_reflogs = 1;
static int check_full = 1;
static int check_strict;
static int keep_cache_objects;
static unsigned char head_sha1[20];
static const char *head_points_at;
static int errors_found;
static int write_lost_and_found;
static int verbose;
static int show_progress = -1;
static int show_dangling = 1;
#define ERROR_OBJECT 01
#define ERROR_REACHABLE 02
#define ERROR_PACK 04
#define SORT_DIRENT 0
#define DIRENT_SORT_HINT(de) 0
#define SORT_DIRENT 1
#define DIRENT_SORT_HINT(de) ((de)->d_ino)
static void objreport(struct object *obj, const char *severity,
const char *err, va_list params)
__attribute__((format (printf, 2, 3)))
static int objerror(struct object *obj, const char *err, ...)
__attribute__((format (printf, 3, 4)))
static int fsck_error_func(struct object *obj, int type, const char *err, ...)
static struct object_array pending;
static int mark_object(struct object *obj, int type, void *data)
static void mark_object_reachable(struct object *obj)
static int traverse_one_object(struct object *obj)
static int traverse_reachable(void)
static int mark_used(struct object *obj, int type, void *data)
static void check_reachable_object(struct object *obj)
static void check_unreachable_object(struct object *obj)
static void check_object(struct object *obj)
static void check_connectivity(void)
static int fsck_obj(struct object *obj)
static int fsck_sha1(const unsigned char *sha1)
static int fsck_obj_buffer(const unsigned char *sha1, enum object_type type,
unsigned long size, void *buffer, int *eaten)
#define MAX_SHA1_ENTRIES (1024)
struct sha1_entry ;
static struct  sha1_list;
static int ino_compare(const void *_a, const void *_b)
static void fsck_sha1_list(void)
static void add_sha1_list(unsigned char *sha1, unsigned long ino)
static inline int is_loose_object_file(struct dirent *de,
char *name, unsigned char *sha1)
static void fsck_dir(int i, char *path)
static int default_refs;
static int fsck_handle_reflog_ent(unsigned char *osha1, unsigned char *nsha1,
const char *email, unsigned long timestamp, int tz,
const char *message, void *cb_data)
static int fsck_handle_reflog(const char *logname, const unsigned char *sha1, int flag, void *cb_data)
static int is_branch(const char *refname)
static int fsck_handle_ref(const char *refname, const unsigned char *sha1, int flag, void *cb_data)
static void get_default_heads(void)
static void fsck_object_dir(const char *path)
static int fsck_head_link(void)
static int fsck_cache_tree(struct cache_tree *it)
static char const * const fsck_usage[] = ;
static struct option fsck_opts[] = ;
int cmd_fsck(int argc, const char **argv, const char *prefix)
