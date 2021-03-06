#define	_LINUX_RBTREE_H
struct rb_node
__attribute__((aligned(sizeof(long))));
struct rb_root
;
#define rb_parent(r)   ((struct rb_node *)((r)->rb_parent_color & ~3))
#define rb_color(r)   ((r)->rb_parent_color & 1)
#define rb_is_red(r)   (!rb_color(r))
#define rb_is_black(r) rb_color(r)
#define rb_set_red(r)  do  while (0)
#define rb_set_black(r)  do  while (0)
static inline void rb_set_parent(struct rb_node *rb, struct rb_node *p)
static inline void rb_set_color(struct rb_node *rb, int color)
#define RB_ROOT	(struct rb_root)
#define	rb_entry(ptr, type, member) container_of(ptr, type, member)
#define RB_EMPTY_ROOT(root)	((root)->rb_node == NULL)
#define RB_EMPTY_NODE(node)	(rb_parent(node) == node)
#define RB_CLEAR_NODE(node)	(rb_set_parent(node, node))
static inline void rb_init_node(struct rb_node *rb)
extern void rb_insert_color(struct rb_node *, struct rb_root *);
extern void rb_erase(struct rb_node *, struct rb_root *);
typedef void (*rb_augment_f)(struct rb_node *node, void *data);
extern void rb_augment_insert(struct rb_node *node,
rb_augment_f func, void *data);
extern struct rb_node *rb_augment_erase_begin(struct rb_node *node);
extern void rb_augment_erase_end(struct rb_node *node,
rb_augment_f func, void *data);
extern struct rb_node *rb_next(const struct rb_node *);
extern struct rb_node *rb_prev(const struct rb_node *);
extern struct rb_node *rb_first(const struct rb_root *);
extern struct rb_node *rb_last(const struct rb_root *);
extern void rb_replace_node(struct rb_node *victim, struct rb_node *new,
struct rb_root *root);
static inline void rb_link_node(struct rb_node * node, struct rb_node * parent,
struct rb_node ** rb_link)
