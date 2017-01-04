bool ip_callchain__valid(struct ip_callchain *chain,
const union perf_event *event)
#define chain_for_each_child(child, parent)	\
list_for_each_entry(child, &parent->children, siblings)
#define chain_for_each_child_safe(child, next, parent)	\
list_for_each_entry_safe(child, next, &parent->children, siblings)
static void
rb_insert_callchain(struct rb_root *root, struct callchain_node *chain,
enum chain_mode mode)
static void
__sort_chain_flat(struct rb_root *rb_root, struct callchain_node *node,
u64 min_hit)
static void
sort_chain_flat(struct rb_root *rb_root, struct callchain_root *root,
u64 min_hit, struct callchain_param *param __used)
static void __sort_chain_graph_abs(struct callchain_node *node,
u64 min_hit)
static void
sort_chain_graph_abs(struct rb_root *rb_root, struct callchain_root *chain_root,
u64 min_hit, struct callchain_param *param __used)
static void __sort_chain_graph_rel(struct callchain_node *node,
double min_percent)
static void
sort_chain_graph_rel(struct rb_root *rb_root, struct callchain_root *chain_root,
u64 min_hit __used, struct callchain_param *param)
int callchain_register_param(struct callchain_param *param)
static struct callchain_node *
create_child(struct callchain_node *parent, bool inherit_children)
static void
fill_node(struct callchain_node *node, struct callchain_cursor *cursor)
static void
add_child(struct callchain_node *parent,
struct callchain_cursor *cursor,
u64 period)
static void
split_add_child(struct callchain_node *parent,
struct callchain_cursor *cursor,
struct callchain_list *to_split,
u64 idx_parents, u64 idx_local, u64 period)
static int
append_chain(struct callchain_node *root,
struct callchain_cursor *cursor,
u64 period);
static void
append_chain_children(struct callchain_node *root,
struct callchain_cursor *cursor,
u64 period)
static int
append_chain(struct callchain_node *root,
struct callchain_cursor *cursor,
u64 period)
int callchain_append(struct callchain_root *root,
struct callchain_cursor *cursor,
u64 period)
static int
merge_chain_branch(struct callchain_cursor *cursor,
struct callchain_node *dst, struct callchain_node *src)
int callchain_merge(struct callchain_cursor *cursor,
struct callchain_root *dst, struct callchain_root *src)
int callchain_cursor_append(struct callchain_cursor *cursor,
u64 ip, struct map *map, struct symbol *sym)
