static const char merge_tree_usage[] = "git merge-tree <base-tree> <branch1> <branch2>";
struct merge_list ;
static struct merge_list *merge_result, **merge_result_end = &merge_result;
static void add_merge_entry(struct merge_list *entry)
static void merge_trees_recursive(struct tree_desc t[3], const char *base, int df_conflict);
static const char *explanation(struct merge_list *entry)
static void *result(struct merge_list *entry, unsigned long *size)
static void *origin(struct merge_list *entry, unsigned long *size)
static int show_outf(void *priv_, mmbuffer_t *mb, int nbuf)
static void show_diff(struct merge_list *entry)
static void show_result_list(struct merge_list *entry)
static void show_result(void)
static int same_entry(struct name_entry *a, struct name_entry *b)
static int both_empty(struct name_entry *a, struct name_entry *b)
static struct merge_list *create_entry(unsigned stage, unsigned mode, const unsigned char *sha1, const char *path)
static char *traverse_path(const struct traverse_info *info, const struct name_entry *n)
static void resolve(const struct traverse_info *info, struct name_entry *ours, struct name_entry *result)
static void unresolved_directory(const struct traverse_info *info, struct name_entry n[3],
int df_conflict)
static struct merge_list *link_entry(unsigned stage, const struct traverse_info *info, struct name_entry *n, struct merge_list *entry)
static void unresolved(const struct traverse_info *info, struct name_entry n[3])
static int threeway_callback(int n, unsigned long mask, unsigned long dirmask, struct name_entry *entry, struct traverse_info *info)
static void merge_trees_recursive(struct tree_desc t[3], const char *base, int df_conflict)
static void merge_trees(struct tree_desc t[3], const char *base)
static void *get_tree_descriptor(struct tree_desc *desc, const char *rev)
int cmd_merge_tree(int argc, const char **argv, const char *prefix)
