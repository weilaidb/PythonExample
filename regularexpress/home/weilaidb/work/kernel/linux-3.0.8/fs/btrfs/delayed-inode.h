#define __DELAYED_TREE_OPERATION_H
#define BTRFS_DELAYED_INSERTION_ITEM	1
#define BTRFS_DELAYED_DELETION_ITEM	2
struct btrfs_delayed_root ;
struct btrfs_delayed_node ;
struct btrfs_delayed_item ;
static inline void btrfs_init_delayed_root(
struct btrfs_delayed_root *delayed_root)
int btrfs_insert_delayed_dir_index(struct btrfs_trans_handle *trans,
struct btrfs_root *root, const char *name,
int name_len, struct inode *dir,
struct btrfs_disk_key *disk_key, u8 type,
u64 index);
int btrfs_delete_delayed_dir_index(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct inode *dir,
u64 index);
int btrfs_inode_delayed_dir_index_count(struct inode *inode);
int btrfs_run_delayed_items(struct btrfs_trans_handle *trans,
struct btrfs_root *root);
void btrfs_balance_delayed_items(struct btrfs_root *root);
int btrfs_commit_inode_delayed_items(struct btrfs_trans_handle *trans,
struct inode *inode);
void btrfs_remove_delayed_node(struct inode *inode);
void btrfs_kill_delayed_inode_items(struct inode *inode);
int btrfs_delayed_update_inode(struct btrfs_trans_handle *trans,
struct btrfs_root *root, struct inode *inode);
int btrfs_fill_inode(struct inode *inode, u32 *rdev);
void btrfs_kill_all_delayed_nodes(struct btrfs_root *root);
void btrfs_get_delayed_items(struct inode *inode, struct list_head *ins_list,
struct list_head *del_list);
void btrfs_put_delayed_items(struct list_head *ins_list,
struct list_head *del_list);
int btrfs_should_delete_dir_index(struct list_head *del_list,
u64 index);
int btrfs_readdir_delayed_dir_index(struct file *filp, void *dirent,
filldir_t filldir,
struct list_head *ins_list);
int __init btrfs_delayed_inode_init(void);
void btrfs_delayed_inode_exit(void);
void btrfs_assert_delayed_root_empty(struct btrfs_root *root);
