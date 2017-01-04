#define __DELAYED_REF__
#define BTRFS_ADD_DELAYED_REF    1
#define BTRFS_DROP_DELAYED_REF   2
#define BTRFS_ADD_DELAYED_EXTENT 3
#define BTRFS_UPDATE_DELAYED_HEAD 4
struct btrfs_delayed_ref_node ;
struct btrfs_delayed_extent_op ;
struct btrfs_delayed_ref_head ;
struct btrfs_delayed_tree_ref ;
struct btrfs_delayed_data_ref ;
struct btrfs_delayed_ref_root ;
static inline void btrfs_put_delayed_ref(struct btrfs_delayed_ref_node *ref)
int btrfs_add_delayed_tree_ref(struct btrfs_trans_handle *trans,
u64 bytenr, u64 num_bytes, u64 parent,
u64 ref_root, int level, int action,
struct btrfs_delayed_extent_op *extent_op);
int btrfs_add_delayed_data_ref(struct btrfs_trans_handle *trans,
u64 bytenr, u64 num_bytes,
u64 parent, u64 ref_root,
u64 owner, u64 offset, int action,
struct btrfs_delayed_extent_op *extent_op);
int btrfs_add_delayed_extent_op(struct btrfs_trans_handle *trans,
u64 bytenr, u64 num_bytes,
struct btrfs_delayed_extent_op *extent_op);
struct btrfs_delayed_ref_head *
btrfs_find_delayed_ref_head(struct btrfs_trans_handle *trans, u64 bytenr);
int btrfs_delayed_ref_lock(struct btrfs_trans_handle *trans,
struct btrfs_delayed_ref_head *head);
int btrfs_find_ref_cluster(struct btrfs_trans_handle *trans,
struct list_head *cluster, u64 search_start);
static int btrfs_delayed_ref_is_head(struct btrfs_delayed_ref_node *node)
static inline struct btrfs_delayed_tree_ref *
btrfs_delayed_node_to_tree_ref(struct btrfs_delayed_ref_node *node)
static inline struct btrfs_delayed_data_ref *
btrfs_delayed_node_to_data_ref(struct btrfs_delayed_ref_node *node)
static inline struct btrfs_delayed_ref_head *
btrfs_delayed_node_to_head(struct btrfs_delayed_ref_node *node)
