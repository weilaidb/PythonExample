#define RADIX_INDEX(vma)  ((vma)->vm_pgoff)
#define VMA_SIZE(vma)	  (((vma)->vm_end - (vma)->vm_start) >> PAGE_SHIFT)
#define HEAP_INDEX(vma)	  ((vma)->vm_pgoff + (VMA_SIZE(vma) - 1))
static void get_index(const struct prio_tree_root *root,
const struct prio_tree_node *node,
unsigned long *radix, unsigned long *heap)
static unsigned long index_bits_to_maxindex[BITS_PER_LONG];
void __init prio_tree_init(void)
static inline unsigned long prio_tree_maxindex(unsigned int bits)
static struct prio_tree_node *prio_tree_expand(struct prio_tree_root *root,
struct prio_tree_node *node, unsigned long max_heap_index)
struct prio_tree_node *prio_tree_replace(struct prio_tree_root *root,
struct prio_tree_node *old, struct prio_tree_node *node)
struct prio_tree_node *prio_tree_insert(struct prio_tree_root *root,
struct prio_tree_node *node)
void prio_tree_remove(struct prio_tree_root *root, struct prio_tree_node *node)
static struct prio_tree_node *prio_tree_left(struct prio_tree_iter *iter,
unsigned long *r_index, unsigned long *h_index)
static struct prio_tree_node *prio_tree_right(struct prio_tree_iter *iter,
unsigned long *r_index, unsigned long *h_index)
static struct prio_tree_node *prio_tree_parent(struct prio_tree_iter *iter)
static inline int overlap(struct prio_tree_iter *iter,
unsigned long r_index, unsigned long h_index)
static struct prio_tree_node *prio_tree_first(struct prio_tree_iter *iter)
struct prio_tree_node *prio_tree_next(struct prio_tree_iter *iter)
