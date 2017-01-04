const char *tree_type = "tree";
static int read_one_entry_opt(const unsigned char *sha1, const char *base, int baselen, const char *pathname, unsigned mode, int stage, int opt)
static int read_one_entry(const unsigned char *sha1, const char *base, int baselen, const char *pathname, unsigned mode, int stage, void *context)
static int read_one_entry_quick(const unsigned char *sha1, const char *base, int baselen, const char *pathname, unsigned mode, int stage, void *context)
static int read_tree_1(struct tree *tree, struct strbuf *base,
int stage, const struct pathspec *pathspec,
read_tree_fn_t fn, void *context)
int read_tree_recursive(struct tree *tree,
const char *base, int baselen,
int stage, const struct pathspec *pathspec,
read_tree_fn_t fn, void *context)
static int cmp_cache_name_compare(const void *a_, const void *b_)
int read_tree(struct tree *tree, int stage, struct pathspec *match)
struct tree *lookup_tree(const unsigned char *sha1)
int parse_tree_buffer(struct tree *item, void *buffer, unsigned long size)
int parse_tree(struct tree *item)
void free_tree_buffer(struct tree *tree)
struct tree *parse_tree_indirect(const unsigned char *sha1)
