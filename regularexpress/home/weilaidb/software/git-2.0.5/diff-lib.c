static int check_removed(const struct cache_entry *ce, struct stat *st)
static int match_stat_with_submodule(struct diff_options *diffopt,
const struct cache_entry *ce,
struct stat *st, unsigned ce_option,
unsigned *dirty_submodule)
int run_diff_files(struct rev_info *revs, unsigned int option)
static void diff_index_show_file(struct rev_info *revs,
const char *prefix,
const struct cache_entry *ce,
const unsigned char *sha1, int sha1_valid,
unsigned int mode,
unsigned dirty_submodule)
static int get_stat_data(const struct cache_entry *ce,
const unsigned char **sha1p,
unsigned int *modep,
int cached, int match_missing,
unsigned *dirty_submodule, struct diff_options *diffopt)
static void show_new_file(struct rev_info *revs,
const struct cache_entry *new,
int cached, int match_missing)
static int show_modified(struct rev_info *revs,
const struct cache_entry *old,
const struct cache_entry *new,
int report_missing,
int cached, int match_missing)
static void do_oneway_diff(struct unpack_trees_options *o,
const struct cache_entry *idx,
const struct cache_entry *tree)
static int oneway_diff(const struct cache_entry * const *src,
struct unpack_trees_options *o)
static int diff_cache(struct rev_info *revs,
const unsigned char *tree_sha1,
const char *tree_name,
int cached)
int run_diff_index(struct rev_info *revs, int cached)
int do_diff_cache(const unsigned char *tree_sha1, struct diff_options *opt)
int index_differs_from(const char *def, int diff_flags)
