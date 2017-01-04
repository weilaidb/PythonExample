static int comp_tree_refs(struct btrfs_delayed_tree_ref *ref2,
struct btrfs_delayed_tree_ref *ref1)
static int comp_data_refs(struct btrfs_delayed_data_ref *ref2,
struct btrfs_delayed_data_ref *ref1)
static int comp_entry(struct btrfs_delayed_ref_node *ref2,
struct btrfs_delayed_ref_node *ref1)
static struct btrfs_delayed_ref_node *tree_insert(struct rb_root *root,
struct rb_node *node)
static struct btrfs_delayed_ref_node *find_ref_head(struct rb_root *root,
u64 bytenr,
struct btrfs_delayed_ref_node **last)
int btrfs_delayed_ref_lock(struct btrfs_trans_handle *trans,
struct btrfs_delayed_ref_head *head)
int btrfs_find_ref_cluster(struct btrfs_trans_handle *trans,
struct list_head *cluster, u64 start)
static noinline void
update_existing_ref(struct btrfs_trans_handle *trans,
struct btrfs_delayed_ref_root *delayed_refs,
struct btrfs_delayed_ref_node *existing,
struct btrfs_delayed_ref_node *update)
static noinline void
update_existing_head_ref(struct btrfs_delayed_ref_node *existing,
struct btrfs_delayed_ref_node *update)
static noinline int add_delayed_ref_head(struct btrfs_trans_handle *trans,
struct btrfs_delayed_ref_node *ref,
u64 bytenr, u64 num_bytes,
int action, int is_data)
static noinline int add_delayed_tree_ref(struct btrfs_trans_handle *trans,
struct btrfs_delayed_ref_node *ref,
u64 bytenr, u64 num_bytes, u64 parent,
u64 ref_root, int level, int action)
static noinline int add_delayed_data_ref(struct btrfs_trans_handle *trans,
struct btrfs_delayed_ref_node *ref,
u64 bytenr, u64 num_bytes, u64 parent,
u64 ref_root, u64 owner, u64 offset,
int action)
int btrfs_add_delayed_tree_ref(struct btrfs_trans_handle *trans,
u64 bytenr, u64 num_bytes, u64 parent,
u64 ref_root,  int level, int action,
struct btrfs_delayed_extent_op *extent_op)
int btrfs_add_delayed_data_ref(struct btrfs_trans_handle *trans,
u64 bytenr, u64 num_bytes,
u64 parent, u64 ref_root,
u64 owner, u64 offset, int action,
struct btrfs_delayed_extent_op *extent_op)
int btrfs_add_delayed_extent_op(struct btrfs_trans_handle *trans,
u64 bytenr, u64 num_bytes,
struct btrfs_delayed_extent_op *extent_op)
struct btrfs_delayed_ref_head *
btrfs_find_delayed_ref_head(struct btrfs_trans_handle *trans, u64 bytenr)
