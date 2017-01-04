#define BTRFS_DELAYED_WRITEBACK		400
#define BTRFS_DELAYED_BACKGROUND	100
static struct kmem_cache *delayed_node_cache;
int __init btrfs_delayed_inode_init(void)
void btrfs_delayed_inode_exit(void)
static inline void btrfs_init_delayed_node(
struct btrfs_delayed_node *delayed_node,
struct btrfs_root *root, u64 inode_id)
static inline int btrfs_is_continuous_delayed_item(
struct btrfs_delayed_item *item1,
struct btrfs_delayed_item *item2)
static inline struct btrfs_delayed_root *btrfs_get_delayed_root(
struct btrfs_root *root)
static struct btrfs_delayed_node *btrfs_get_delayed_node(struct inode *inode)
static struct btrfs_delayed_node *btrfs_get_or_create_delayed_node(
struct inode *inode)
static void btrfs_queue_delayed_node(struct btrfs_delayed_root *root,
struct btrfs_delayed_node *node,
int mod)
static void btrfs_dequeue_delayed_node(struct btrfs_delayed_root *root,
struct btrfs_delayed_node *node)
struct btrfs_delayed_node *btrfs_first_delayed_node(
struct btrfs_delayed_root *delayed_root)
struct btrfs_delayed_node *btrfs_next_delayed_node(
struct btrfs_delayed_node *node)
static void __btrfs_release_delayed_node(
struct btrfs_delayed_node *delayed_node,
int mod)
static inline void btrfs_release_delayed_node(struct btrfs_delayed_node *node)
struct btrfs_delayed_node *btrfs_first_prepared_delayed_node(
struct btrfs_delayed_root *delayed_root)
static inline void btrfs_release_prepared_delayed_node(
struct btrfs_delayed_node *node)
struct btrfs_delayed_item *btrfs_alloc_delayed_item(u32 data_len)
static struct btrfs_delayed_item *__btrfs_lookup_delayed_item(
struct rb_root *root,
struct btrfs_key *key,
struct btrfs_delayed_item **prev,
struct btrfs_delayed_item **next)
struct btrfs_delayed_item *__btrfs_lookup_delayed_insertion_item(
struct btrfs_delayed_node *delayed_node,
struct btrfs_key *key)
struct btrfs_delayed_item *__btrfs_lookup_delayed_deletion_item(
struct btrfs_delayed_node *delayed_node,
struct btrfs_key *key)
struct btrfs_delayed_item *__btrfs_search_delayed_insertion_item(
struct btrfs_delayed_node *delayed_node,
struct btrfs_key *key)
struct btrfs_delayed_item *__btrfs_search_delayed_deletion_item(
struct btrfs_delayed_node *delayed_node,
struct btrfs_key *key)
static int __btrfs_add_delayed_item(struct btrfs_delayed_node *delayed_node,
struct btrfs_delayed_item *ins,
int action)
static int __btrfs_add_delayed_insertion_item(struct btrfs_delayed_node *node,
struct btrfs_delayed_item *item)
static int __btrfs_add_delayed_deletion_item(struct btrfs_delayed_node *node,
struct btrfs_delayed_item *item)
static void __btrfs_remove_delayed_item(struct btrfs_delayed_item *delayed_item)
static void btrfs_release_delayed_item(struct btrfs_delayed_item *item)
struct btrfs_delayed_item *__btrfs_first_delayed_insertion_item(
struct btrfs_delayed_node *delayed_node)
struct btrfs_delayed_item *__btrfs_first_delayed_deletion_item(
struct btrfs_delayed_node *delayed_node)
struct btrfs_delayed_item *__btrfs_next_delayed_item(
struct btrfs_delayed_item *item)
static inline struct btrfs_root *btrfs_get_fs_root(struct btrfs_root *root,
u64 root_id)
static int btrfs_delayed_item_reserve_metadata(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_delayed_item *item)
static void btrfs_delayed_item_release_metadata(struct btrfs_root *root,
struct btrfs_delayed_item *item)
static int btrfs_delayed_inode_reserve_metadata(
struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_delayed_node *node)
static void btrfs_delayed_inode_release_metadata(struct btrfs_root *root,
struct btrfs_delayed_node *node)
static int btrfs_batch_insert_items(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_delayed_item *item)
static int btrfs_insert_delayed_item(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_delayed_item *delayed_item)
static int btrfs_insert_delayed_items(struct btrfs_trans_handle *trans,
struct btrfs_path *path,
struct btrfs_root *root,
struct btrfs_delayed_node *node)
static int btrfs_batch_delete_items(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_delayed_item *item)
static int btrfs_delete_delayed_items(struct btrfs_trans_handle *trans,
struct btrfs_path *path,
struct btrfs_root *root,
struct btrfs_delayed_node *node)
static void btrfs_release_delayed_inode(struct btrfs_delayed_node *delayed_node)
static int btrfs_update_delayed_inode(struct btrfs_trans_handle *trans,
struct btrfs_root *root,
struct btrfs_path *path,
struct btrfs_delayed_node *node)
int btrfs_run_delayed_items(struct btrfs_trans_handle *trans,
struct btrfs_root *root)
static int __btrfs_commit_inode_delayed_items(struct btrfs_trans_handle *trans,
struct btrfs_delayed_node *node)
int btrfs_commit_inode_delayed_items(struct btrfs_trans_handle *trans,
struct inode *inode)
void btrfs_remove_delayed_node(struct inode *inode)
struct btrfs_async_delayed_node ;
static void btrfs_async_run_delayed_node_done(struct btrfs_work *work)
static int btrfs_wq_run_delayed_node(struct btrfs_delayed_root *delayed_root,
struct btrfs_root *root, int all)
void btrfs_assert_delayed_root_empty(struct btrfs_root *root)
void btrfs_balance_delayed_items(struct btrfs_root *root)
int btrfs_insert_delayed_dir_index(struct btrfs_trans_handle *trans,
struct btrfs_root *root, const char *name,
int name_len, struct inode *dir,
struct btrfs_disk_key *disk_key, u8 type,
u64 index)
static int btrfs_delete_delayed_insertion_item(struct btrfs_root *root,
struct btrfs_delayed_node *node,
struct btrfs_key *key)
int btrfs_delete_delayed_dir_index(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct inode *dir,
u64 index)
int btrfs_inode_delayed_dir_index_count(struct inode *inode)
void btrfs_get_delayed_items(struct inode *inode, struct list_head *ins_list,
struct list_head *del_list)
void btrfs_put_delayed_items(struct list_head *ins_list,
struct list_head *del_list)
int btrfs_should_delete_dir_index(struct list_head *del_list,
u64 index)
int btrfs_readdir_delayed_dir_index(struct file *filp, void *dirent,
filldir_t filldir,
struct list_head *ins_list)
BTRFS_SETGET_STACK_FUNCS(stack_inode_generation, struct btrfs_inode_item,
generation, 64);
BTRFS_SETGET_STACK_FUNCS(stack_inode_sequence, struct btrfs_inode_item,
sequence, 64);
BTRFS_SETGET_STACK_FUNCS(stack_inode_transid, struct btrfs_inode_item,
transid, 64);
BTRFS_SETGET_STACK_FUNCS(stack_inode_size, struct btrfs_inode_item, size, 64);
BTRFS_SETGET_STACK_FUNCS(stack_inode_nbytes, struct btrfs_inode_item,
nbytes, 64);
BTRFS_SETGET_STACK_FUNCS(stack_inode_block_group, struct btrfs_inode_item,
block_group, 64);
BTRFS_SETGET_STACK_FUNCS(stack_inode_nlink, struct btrfs_inode_item, nlink, 32);
BTRFS_SETGET_STACK_FUNCS(stack_inode_uid, struct btrfs_inode_item, uid, 32);
BTRFS_SETGET_STACK_FUNCS(stack_inode_gid, struct btrfs_inode_item, gid, 32);
BTRFS_SETGET_STACK_FUNCS(stack_inode_mode, struct btrfs_inode_item, mode, 32);
BTRFS_SETGET_STACK_FUNCS(stack_inode_rdev, struct btrfs_inode_item, rdev, 64);
BTRFS_SETGET_STACK_FUNCS(stack_inode_flags, struct btrfs_inode_item, flags, 64);
BTRFS_SETGET_STACK_FUNCS(stack_timespec_sec, struct btrfs_timespec, sec, 64);
BTRFS_SETGET_STACK_FUNCS(stack_timespec_nsec, struct btrfs_timespec, nsec, 32);
static void fill_stack_inode_item(struct btrfs_trans_handle *trans,
struct btrfs_inode_item *inode_item,
struct inode *inode)
int btrfs_fill_inode(struct inode *inode, u32 *rdev)
int btrfs_delayed_update_inode(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct inode *inode)
static void __btrfs_kill_delayed_node(struct btrfs_delayed_node *delayed_node)
void btrfs_kill_delayed_inode_items(struct inode *inode)
void btrfs_kill_all_delayed_nodes(struct btrfs_root *root)
