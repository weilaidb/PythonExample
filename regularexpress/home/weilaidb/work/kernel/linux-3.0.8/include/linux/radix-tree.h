#define _LINUX_RADIX_TREE_H
#define RADIX_TREE_INDIRECT_PTR	1
#define radix_tree_indirect_to_ptr(ptr) \
radix_tree_indirect_to_ptr((void __force *)(ptr))
static inline int radix_tree_is_indirect_ptr(void *ptr)
#define RADIX_TREE_MAX_TAGS 3
struct radix_tree_root ;
#define RADIX_TREE_INIT(mask)
#define RADIX_TREE(name, mask) \
struct radix_tree_root name = RADIX_TREE_INIT(mask)
#define INIT_RADIX_TREE(root, mask)					\
do  while (0)
static inline void *radix_tree_deref_slot(void **pslot)
static inline void *radix_tree_deref_slot_protected(void **pslot,
spinlock_t *treelock)
static inline int radix_tree_deref_retry(void *arg)
static inline void radix_tree_replace_slot(void **pslot, void *item)
int radix_tree_insert(struct radix_tree_root *, unsigned long, void *);
void *radix_tree_lookup(struct radix_tree_root *, unsigned long);
void **radix_tree_lookup_slot(struct radix_tree_root *, unsigned long);
void *radix_tree_delete(struct radix_tree_root *, unsigned long);
unsigned int
radix_tree_gang_lookup(struct radix_tree_root *root, void **results,
unsigned long first_index, unsigned int max_items);
unsigned int
radix_tree_gang_lookup_slot(struct radix_tree_root *root, void ***results,
unsigned long first_index, unsigned int max_items);
unsigned long radix_tree_next_hole(struct radix_tree_root *root,
unsigned long index, unsigned long max_scan);
unsigned long radix_tree_prev_hole(struct radix_tree_root *root,
unsigned long index, unsigned long max_scan);
int radix_tree_preload(gfp_t gfp_mask);
void radix_tree_init(void);
void *radix_tree_tag_set(struct radix_tree_root *root,
unsigned long index, unsigned int tag);
void *radix_tree_tag_clear(struct radix_tree_root *root,
unsigned long index, unsigned int tag);
int radix_tree_tag_get(struct radix_tree_root *root,
unsigned long index, unsigned int tag);
unsigned int
radix_tree_gang_lookup_tag(struct radix_tree_root *root, void **results,
unsigned long first_index, unsigned int max_items,
unsigned int tag);
unsigned int
radix_tree_gang_lookup_tag_slot(struct radix_tree_root *root, void ***results,
unsigned long first_index, unsigned int max_items,
unsigned int tag);
unsigned long radix_tree_range_tag_if_tagged(struct radix_tree_root *root,
unsigned long *first_indexp, unsigned long last_index,
unsigned long nr_to_tag,
unsigned int fromtag, unsigned int totag);
int radix_tree_tagged(struct radix_tree_root *root, unsigned int tag);
static inline void radix_tree_preload_end(void)
