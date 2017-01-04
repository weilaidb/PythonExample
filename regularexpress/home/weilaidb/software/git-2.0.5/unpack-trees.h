#define UNPACK_TREES_H
#define MAX_UNPACK_TREES 8
struct unpack_trees_options;
struct exclude_list;
typedef int (*merge_fn_t)(const struct cache_entry * const *src,
struct unpack_trees_options *options);
enum unpack_trees_error_types ;
void setup_unpack_trees_porcelain(struct unpack_trees_options *opts,
const char *cmd);
struct unpack_trees_options ;
extern int unpack_trees(unsigned n, struct tree_desc *t,
struct unpack_trees_options *options);
int threeway_merge(const struct cache_entry * const *stages,
struct unpack_trees_options *o);
int twoway_merge(const struct cache_entry * const *src,
struct unpack_trees_options *o);
int bind_merge(const struct cache_entry * const *src,
struct unpack_trees_options *o);
int oneway_merge(const struct cache_entry * const *src,
struct unpack_trees_options *o);
