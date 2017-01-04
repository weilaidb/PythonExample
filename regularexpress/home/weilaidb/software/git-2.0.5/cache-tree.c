#define DEBUG 0
struct cache_tree *cache_tree(void)
void cache_tree_free(struct cache_tree **it_p)
static int subtree_name_cmp(const char *one, int onelen,
const char *two, int twolen)
static int subtree_pos(struct cache_tree *it, const char *path, int pathlen)
static struct cache_tree_sub *find_subtree(struct cache_tree *it,
const char *path,
int pathlen,
int create)
struct cache_tree_sub *cache_tree_sub(struct cache_tree *it, const char *path)
void cache_tree_invalidate_path(struct cache_tree *it, const char *path)
static int verify_cache(const struct cache_entry * const *cache,
int entries, int flags)
static void discard_unused_subtrees(struct cache_tree *it)
int cache_tree_fully_valid(struct cache_tree *it)
static int update_one(struct cache_tree *it,
const struct cache_entry * const *cache,
int entries,
const char *base,
int baselen,
int *skip_count,
int flags)
int cache_tree_update(struct cache_tree *it,
const struct cache_entry * const *cache,
int entries,
int flags)
static void write_one(struct strbuf *buffer, struct cache_tree *it,
const char *path, int pathlen)
void cache_tree_write(struct strbuf *sb, struct cache_tree *root)
static struct cache_tree *read_one(const char **buffer, unsigned long *size_p)
struct cache_tree *cache_tree_read(const char *buffer, unsigned long size)
static struct cache_tree *cache_tree_find(struct cache_tree *it, const char *path)
int write_cache_as_tree(unsigned char *sha1, int flags, const char *prefix)
static void prime_cache_tree_rec(struct cache_tree *it, struct tree *tree)
void prime_cache_tree(struct cache_tree **it, struct tree *tree)
static struct cache_tree *find_cache_tree_from_traversal(struct cache_tree *root,
struct traverse_info *info)
int cache_tree_matches_traversal(struct cache_tree *root,
struct name_entry *ent,
struct traverse_info *info)
int update_main_cache_tree(int flags)
