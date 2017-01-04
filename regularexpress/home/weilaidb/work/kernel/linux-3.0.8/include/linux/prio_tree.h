#define _LINUX_PRIO_TREE_H
struct raw_prio_tree_node ;
struct prio_tree_node ;
struct prio_tree_root ;
struct prio_tree_iter ;
static inline void prio_tree_iter_init(struct prio_tree_iter *iter,
struct prio_tree_root *root, pgoff_t r_index, pgoff_t h_index)
#define __INIT_PRIO_TREE_ROOT(ptr, _raw)	\
do  while (0)
#define INIT_PRIO_TREE_ROOT(ptr)	__INIT_PRIO_TREE_ROOT(ptr, 0)
#define INIT_RAW_PRIO_TREE_ROOT(ptr)	__INIT_PRIO_TREE_ROOT(ptr, 1)
#define INIT_PRIO_TREE_NODE(ptr)				\
do  while (0)
#define INIT_PRIO_TREE_ITER(ptr)	\
do  while (0)
#define prio_tree_entry(ptr, type, member) \
((type *)((char *)(ptr)-(unsigned long)(&((type *)0)->member)))
static inline int prio_tree_empty(const struct prio_tree_root *root)
static inline int prio_tree_root(const struct prio_tree_node *node)
static inline int prio_tree_left_empty(const struct prio_tree_node *node)
static inline int prio_tree_right_empty(const struct prio_tree_node *node)
struct prio_tree_node *prio_tree_replace(struct prio_tree_root *root,
struct prio_tree_node *old, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_insert(struct prio_tree_root *root,
struct prio_tree_node *node);
void prio_tree_remove(struct prio_tree_root *root, struct prio_tree_node *node);
struct prio_tree_node *prio_tree_next(struct prio_tree_iter *iter);
#define raw_prio_tree_replace(root, old, node) \
prio_tree_replace(root, (struct prio_tree_node *) (old), \
(struct prio_tree_node *) (node))
#define raw_prio_tree_insert(root, node) \
prio_tree_insert(root, (struct prio_tree_node *) (node))
#define raw_prio_tree_remove(root, node) \
prio_tree_remove(root, (struct prio_tree_node *) (node))
