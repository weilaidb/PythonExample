static void __rb_rotate_left(struct rb_node *node, struct rb_root *root)
static void __rb_rotate_right(struct rb_node *node, struct rb_root *root)
void rb_insert_color(struct rb_node *node, struct rb_root *root)
EXPORT_SYMBOL(rb_insert_color);
static void __rb_erase_color(struct rb_node *node, struct rb_node *parent,
struct rb_root *root)
void rb_erase(struct rb_node *node, struct rb_root *root)
EXPORT_SYMBOL(rb_erase);
static void rb_augment_path(struct rb_node *node, rb_augment_f func, void *data)
void rb_augment_insert(struct rb_node *node, rb_augment_f func, void *data)
EXPORT_SYMBOL(rb_augment_insert);
struct rb_node *rb_augment_erase_begin(struct rb_node *node)
EXPORT_SYMBOL(rb_augment_erase_begin);
void rb_augment_erase_end(struct rb_node *node, rb_augment_f func, void *data)
EXPORT_SYMBOL(rb_augment_erase_end);
struct rb_node *rb_first(const struct rb_root *root)
EXPORT_SYMBOL(rb_first);
struct rb_node *rb_last(const struct rb_root *root)
EXPORT_SYMBOL(rb_last);
struct rb_node *rb_next(const struct rb_node *node)
EXPORT_SYMBOL(rb_next);
struct rb_node *rb_prev(const struct rb_node *node)
EXPORT_SYMBOL(rb_prev);
void rb_replace_node(struct rb_node *victim, struct rb_node *new,
struct rb_root *root)
EXPORT_SYMBOL(rb_replace_node);
