#define NO_THE_INDEX_COMPATIBILITY_MACROS
static const char *unpack_plumbing_errors[NB_UNPACK_TREES_ERROR_TYPES] = ;
#define ERRORMSG(o,type) \
( ((o) && (o)->msgs[(type)]) \
? ((o)->msgs[(type)])      \
: (unpack_plumbing_errors[(type)]) )
void setup_unpack_trees_porcelain(struct unpack_trees_options *opts,
const char *cmd)
static int do_add_entry(struct unpack_trees_options *o, struct cache_entry *ce,
unsigned int set, unsigned int clear)
static struct cache_entry *dup_entry(const struct cache_entry *ce)
static void add_entry(struct unpack_trees_options *o,
const struct cache_entry *ce,
unsigned int set, unsigned int clear)
static int add_rejected_path(struct unpack_trees_options *o,
enum unpack_trees_error_types e,
const char *path)
static void display_error_msgs(struct unpack_trees_options *o)
static void unlink_entry(const struct cache_entry *ce)
static struct checkout state;
static int check_updates(struct unpack_trees_options *o)
static int verify_uptodate_sparse(const struct cache_entry *ce,
struct unpack_trees_options *o);
static int verify_absent_sparse(const struct cache_entry *ce,
enum unpack_trees_error_types,
struct unpack_trees_options *o);
static int apply_sparse_checkout(struct cache_entry *ce, struct unpack_trees_options *o)
static inline int call_unpack_fn(const struct cache_entry * const *src,
struct unpack_trees_options *o)
static void mark_ce_used(struct cache_entry *ce, struct unpack_trees_options *o)
static void mark_all_ce_unused(struct index_state *index)
static int locate_in_src_index(const struct cache_entry *ce,
struct unpack_trees_options *o)
static void mark_ce_used_same_name(struct cache_entry *ce,
struct unpack_trees_options *o)
static struct cache_entry *next_cache_entry(struct unpack_trees_options *o)
static void add_same_unmerged(const struct cache_entry *ce,
struct unpack_trees_options *o)
static int unpack_index_entry(struct cache_entry *ce,
struct unpack_trees_options *o)
static int find_cache_pos(struct traverse_info *, const struct name_entry *);
static void restore_cache_bottom(struct traverse_info *info, int bottom)
static int switch_cache_bottom(struct traverse_info *info)
static int traverse_trees_recursive(int n, unsigned long dirmask,
unsigned long df_conflicts,
struct name_entry *names,
struct traverse_info *info)
static int do_compare_entry(const struct cache_entry *ce, const struct traverse_info *info, const struct name_entry *n)
static int compare_entry(const struct cache_entry *ce, const struct traverse_info *info, const struct name_entry *n)
static int ce_in_traverse_path(const struct cache_entry *ce,
const struct traverse_info *info)
static struct cache_entry *create_ce_entry(const struct traverse_info *info, const struct name_entry *n, int stage)
static int unpack_nondirectories(int n, unsigned long mask,
unsigned long dirmask,
struct cache_entry **src,
const struct name_entry *names,
const struct traverse_info *info)
static int unpack_failed(struct unpack_trees_options *o, const char *message)
static int name_compare(const char *a, int a_len,
const char *b, int b_len)
static int find_cache_pos(struct traverse_info *info,
const struct name_entry *p)
static struct cache_entry *find_cache_entry(struct traverse_info *info,
const struct name_entry *p)
static void debug_path(struct traverse_info *info)
static void debug_name_entry(int i, struct name_entry *n)
static void debug_unpack_callback(int n,
unsigned long mask,
unsigned long dirmask,
struct name_entry *names,
struct traverse_info *info)
static int unpack_callback(int n, unsigned long mask, unsigned long dirmask, struct name_entry *names, struct traverse_info *info)
static int clear_ce_flags_1(struct cache_entry **cache, int nr,
struct strbuf *prefix,
int select_mask, int clear_mask,
struct exclude_list *el, int defval);
static int clear_ce_flags_dir(struct cache_entry **cache, int nr,
struct strbuf *prefix,
char *basename,
int select_mask, int clear_mask,
struct exclude_list *el, int defval)
static int clear_ce_flags_1(struct cache_entry **cache, int nr,
struct strbuf *prefix,
int select_mask, int clear_mask,
struct exclude_list *el, int defval)
static int clear_ce_flags(struct cache_entry **cache, int nr,
int select_mask, int clear_mask,
struct exclude_list *el)
static void mark_new_skip_worktree(struct exclude_list *el,
struct index_state *the_index,
int select_flag, int skip_wt_flag)
static int verify_absent(const struct cache_entry *,
enum unpack_trees_error_types,
struct unpack_trees_options *);
int unpack_trees(unsigned len, struct tree_desc *t, struct unpack_trees_options *o)
static int reject_merge(const struct cache_entry *ce,
struct unpack_trees_options *o)
static int same(const struct cache_entry *a, const struct cache_entry *b)
static int verify_uptodate_1(const struct cache_entry *ce,
struct unpack_trees_options *o,
enum unpack_trees_error_types error_type)
static int verify_uptodate(const struct cache_entry *ce,
struct unpack_trees_options *o)
static int verify_uptodate_sparse(const struct cache_entry *ce,
struct unpack_trees_options *o)
static void invalidate_ce_path(const struct cache_entry *ce,
struct unpack_trees_options *o)
static int verify_clean_submodule(const struct cache_entry *ce,
enum unpack_trees_error_types error_type,
struct unpack_trees_options *o)
static int verify_clean_subdirectory(const struct cache_entry *ce,
enum unpack_trees_error_types error_type,
struct unpack_trees_options *o)
static int icase_exists(struct unpack_trees_options *o, const char *name, int len, struct stat *st)
static int check_ok_to_remove(const char *name, int len, int dtype,
const struct cache_entry *ce, struct stat *st,
enum unpack_trees_error_types error_type,
struct unpack_trees_options *o)
static int verify_absent_1(const struct cache_entry *ce,
enum unpack_trees_error_types error_type,
struct unpack_trees_options *o)
static int verify_absent(const struct cache_entry *ce,
enum unpack_trees_error_types error_type,
struct unpack_trees_options *o)
static int verify_absent_sparse(const struct cache_entry *ce,
enum unpack_trees_error_types error_type,
struct unpack_trees_options *o)
static int merged_entry(const struct cache_entry *ce,
const struct cache_entry *old,
struct unpack_trees_options *o)
static int deleted_entry(const struct cache_entry *ce,
const struct cache_entry *old,
struct unpack_trees_options *o)
static int keep_entry(const struct cache_entry *ce,
struct unpack_trees_options *o)
#if DBRT_DEBUG
static void show_stage_entry(FILE *o,
const char *label, const struct cache_entry *ce)
int threeway_merge(const struct cache_entry * const *stages,
struct unpack_trees_options *o)
int twoway_merge(const struct cache_entry * const *src,
struct unpack_trees_options *o)
int bind_merge(const struct cache_entry * const *src,
struct unpack_trees_options *o)
int oneway_merge(const struct cache_entry * const *src,
struct unpack_trees_options *o)
