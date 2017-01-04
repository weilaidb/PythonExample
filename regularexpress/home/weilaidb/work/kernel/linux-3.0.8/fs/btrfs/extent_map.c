static struct kmem_cache *extent_map_cache;
int __init extent_map_init(void)
void extent_map_exit(void)
void extent_map_tree_init(struct extent_map_tree *tree)
struct extent_map *alloc_extent_map(void)
void free_extent_map(struct extent_map *em)
static struct rb_node *tree_insert(struct rb_root *root, u64 offset,
struct rb_node *node)
static struct rb_node *__tree_search(struct rb_root *root, u64 offset,
struct rb_node **prev_ret,
struct rb_node **next_ret)
static int mergable_maps(struct extent_map *prev, struct extent_map *next)
int unpin_extent_cache(struct extent_map_tree *tree, u64 start, u64 len)
int add_extent_mapping(struct extent_map_tree *tree,
struct extent_map *em)
static u64 range_end(u64 start, u64 len)
struct extent_map *lookup_extent_mapping(struct extent_map_tree *tree,
u64 start, u64 len)
struct extent_map *search_extent_mapping(struct extent_map_tree *tree,
u64 start, u64 len)
int remove_extent_mapping(struct extent_map_tree *tree, struct extent_map *em)
