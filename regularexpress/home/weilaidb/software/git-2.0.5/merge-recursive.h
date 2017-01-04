#define MERGE_RECURSIVE_H
struct merge_options ;
int merge_recursive(struct merge_options *o,
struct commit *h1,
struct commit *h2,
struct commit_list *ancestors,
struct commit **result);
int merge_trees(struct merge_options *o,
struct tree *head,
struct tree *merge,
struct tree *common,
struct tree **result);
int merge_recursive_generic(struct merge_options *o,
const unsigned char *head,
const unsigned char *merge,
int num_ca,
const unsigned char **ca,
struct commit **result);
void init_merge_options(struct merge_options *o);
struct tree *write_tree_from_memory(struct merge_options *o);
int parse_merge_opt(struct merge_options *out, const char *s);
