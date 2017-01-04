struct ll_merge_driver;
typedef int (*ll_merge_fn)(const struct ll_merge_driver *,
mmbuffer_t *result,
const char *path,
mmfile_t *orig, const char *orig_name,
mmfile_t *src1, const char *name1,
mmfile_t *src2, const char *name2,
const struct ll_merge_options *opts,
int marker_size);
struct ll_merge_driver ;
static int ll_binary_merge(const struct ll_merge_driver *drv_unused,
mmbuffer_t *result,
const char *path,
mmfile_t *orig, const char *orig_name,
mmfile_t *src1, const char *name1,
mmfile_t *src2, const char *name2,
const struct ll_merge_options *opts,
int marker_size)
static int ll_xdl_merge(const struct ll_merge_driver *drv_unused,
mmbuffer_t *result,
const char *path,
mmfile_t *orig, const char *orig_name,
mmfile_t *src1, const char *name1,
mmfile_t *src2, const char *name2,
const struct ll_merge_options *opts,
int marker_size)
static int ll_union_merge(const struct ll_merge_driver *drv_unused,
mmbuffer_t *result,
const char *path_unused,
mmfile_t *orig, const char *orig_name,
mmfile_t *src1, const char *name1,
mmfile_t *src2, const char *name2,
const struct ll_merge_options *opts,
int marker_size)
#define LL_BINARY_MERGE 0
#define LL_TEXT_MERGE 1
#define LL_UNION_MERGE 2
static struct ll_merge_driver ll_merge_drv[] = ;
static void create_temp(mmfile_t *src, char *path)
static int ll_ext_merge(const struct ll_merge_driver *fn,
mmbuffer_t *result,
const char *path,
mmfile_t *orig, const char *orig_name,
mmfile_t *src1, const char *name1,
mmfile_t *src2, const char *name2,
const struct ll_merge_options *opts,
int marker_size)
static struct ll_merge_driver *ll_user_merge, **ll_user_merge_tail;
static const char *default_ll_merge;
static int read_merge_config(const char *var, const char *value, void *cb)
static void initialize_ll_merge(void)
static const struct ll_merge_driver *find_ll_merge_driver(const char *merge_attr)
static int git_path_check_merge(const char *path, struct git_attr_check check[2])
static void normalize_file(mmfile_t *mm, const char *path)
int ll_merge(mmbuffer_t *result_buf,
const char *path,
mmfile_t *ancestor, const char *ancestor_label,
mmfile_t *ours, const char *our_label,
mmfile_t *theirs, const char *their_label,
const struct ll_merge_options *opts)
int ll_merge_marker_size(const char *path)
