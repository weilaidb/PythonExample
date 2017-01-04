#define RADIX_TREE_MAP_SHIFT	(CONFIG_BASE_SMALL ? 4 : 6)
#define RADIX_TREE_MAP_SHIFT	3
#define RADIX_TREE_MAP_SIZE	(1UL << RADIX_TREE_MAP_SHIFT)
#define RADIX_TREE_MAP_MASK	(RADIX_TREE_MAP_SIZE-1)
#define RADIX_TREE_TAG_LONGS	\
((RADIX_TREE_MAP_SIZE + BITS_PER_LONG - 1) / BITS_PER_LONG)
struct radix_tree_node ;
struct radix_tree_path ;
#define RADIX_TREE_INDEX_BITS  (8 * sizeof(unsigned long))
#define RADIX_TREE_MAX_PATH (DIV_ROUND_UP(RADIX_TREE_INDEX_BITS, \
RADIX_TREE_MAP_SHIFT))
static unsigned long height_to_maxindex[RADIX_TREE_MAX_PATH + 1] __read_mostly;
static struct kmem_cache *radix_tree_node_cachep;
struct radix_tree_preload ;
static DEFINE_PER_CPU(struct radix_tree_preload, radix_tree_preloads) = ;
static inline void *ptr_to_indirect(void *ptr)
static inline void *indirect_to_ptr(void *ptr)
static inline gfp_t root_gfp_mask(struct radix_tree_root *root)
static inline void tag_set(struct radix_tree_node *node, unsigned int tag,
int offset)
static inline void tag_clear(struct radix_tree_node *node, unsigned int tag,
int offset)
static inline int tag_get(struct radix_tree_node *node, unsigned int tag,
int offset)
static inline void root_tag_set(struct radix_tree_root *root, unsigned int tag)
static inline void root_tag_clear(struct radix_tree_root *root, unsigned int tag)
static inline void root_tag_clear_all(struct radix_tree_root *root)
static inline int root_tag_get(struct radix_tree_root *root, unsigned int tag)
static inline int any_tag_set(struct radix_tree_node *node, unsigned int tag)
static struct radix_tree_node *
radix_tree_node_alloc(struct radix_tree_root *root)
static void radix_tree_node_rcu_free(struct rcu_head *head)
static inline void
radix_tree_node_free(struct radix_tree_node *node)
int radix_tree_preload(gfp_t gfp_mask)
EXPORT_SYMBOL(radix_tree_preload);
static inline unsigned long radix_tree_maxindex(unsigned int height)
static int radix_tree_extend(struct radix_tree_root *root, unsigned long index)
int radix_tree_insert(struct radix_tree_root *root,
unsigned long index, void *item)
EXPORT_SYMBOL(radix_tree_insert);
static void *radix_tree_lookup_element(struct radix_tree_root *root,
unsigned long index, int is_slot)
void **radix_tree_lookup_slot(struct radix_tree_root *root, unsigned long index)
EXPORT_SYMBOL(radix_tree_lookup_slot);
void *radix_tree_lookup(struct radix_tree_root *root, unsigned long index)
EXPORT_SYMBOL(radix_tree_lookup);
void *radix_tree_tag_set(struct radix_tree_root *root,
unsigned long index, unsigned int tag)
EXPORT_SYMBOL(radix_tree_tag_set);
void *radix_tree_tag_clear(struct radix_tree_root *root,
unsigned long index, unsigned int tag)
EXPORT_SYMBOL(radix_tree_tag_clear);
int radix_tree_tag_get(struct radix_tree_root *root,
unsigned long index, unsigned int tag)
EXPORT_SYMBOL(radix_tree_tag_get);
unsigned long radix_tree_range_tag_if_tagged(struct radix_tree_root *root,
unsigned long *first_indexp, unsigned long last_index,
unsigned long nr_to_tag,
unsigned int iftag, unsigned int settag)
EXPORT_SYMBOL(radix_tree_range_tag_if_tagged);
unsigned long radix_tree_next_hole(struct radix_tree_root *root,
unsigned long index, unsigned long max_scan)
EXPORT_SYMBOL(radix_tree_next_hole);
unsigned long radix_tree_prev_hole(struct radix_tree_root *root,
unsigned long index, unsigned long max_scan)
EXPORT_SYMBOL(radix_tree_prev_hole);
static unsigned int
__lookup(struct radix_tree_node *slot, void ***results, unsigned long index,
unsigned int max_items, unsigned long *next_index)
unsigned int
radix_tree_gang_lookup(struct radix_tree_root *root, void **results,
unsigned long first_index, unsigned int max_items)
EXPORT_SYMBOL(radix_tree_gang_lookup);
unsigned int
radix_tree_gang_lookup_slot(struct radix_tree_root *root, void ***results,
unsigned long first_index, unsigned int max_items)
EXPORT_SYMBOL(radix_tree_gang_lookup_slot);
static unsigned int
__lookup_tag(struct radix_tree_node *slot, void ***results, unsigned long index,
unsigned int max_items, unsigned long *next_index, unsigned int tag)
unsigned int
radix_tree_gang_lookup_tag(struct radix_tree_root *root, void **results,
unsigned long first_index, unsigned int max_items,
unsigned int tag)
EXPORT_SYMBOL(radix_tree_gang_lookup_tag);
unsigned int
radix_tree_gang_lookup_tag_slot(struct radix_tree_root *root, void ***results,
unsigned long first_index, unsigned int max_items,
unsigned int tag)
EXPORT_SYMBOL(radix_tree_gang_lookup_tag_slot);
static inline void radix_tree_shrink(struct radix_tree_root *root)
void *radix_tree_delete(struct radix_tree_root *root, unsigned long index)
EXPORT_SYMBOL(radix_tree_delete);
int radix_tree_tagged(struct radix_tree_root *root, unsigned int tag)
EXPORT_SYMBOL(radix_tree_tagged);
static void
radix_tree_node_ctor(void *node)
static __init unsigned long __maxindex(unsigned int height)
static __init void radix_tree_init_maxindex(void)
static int radix_tree_callback(struct notifier_block *nfb,
unsigned long action,
void *hcpu)
void __init radix_tree_init(void)
