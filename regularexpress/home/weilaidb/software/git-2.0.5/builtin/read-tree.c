static int nr_trees;
static int read_empty;
static struct tree *trees[MAX_UNPACK_TREES];
static int list_tree(unsigned char *sha1)
static const char * const read_tree_usage[] = ;
static int index_output_cb(const struct option *opt, const char *arg,
int unset)
static int exclude_per_directory_cb(const struct option *opt, const char *arg,
int unset)
static void debug_stage(const char *label, const struct cache_entry *ce,
struct unpack_trees_options *o)
static int debug_merge(const struct cache_entry * const *stages,
struct unpack_trees_options *o)
static struct lock_file lock_file;
int cmd_read_tree(int argc, const char **argv, const char *unused_prefix)
