#define __BTRFS_LOCKING_
int btrfs_tree_lock(struct extent_buffer *eb);
int btrfs_tree_unlock(struct extent_buffer *eb);
int btrfs_try_spin_lock(struct extent_buffer *eb);
void btrfs_set_lock_blocking(struct extent_buffer *eb);
void btrfs_clear_lock_blocking(struct extent_buffer *eb);
void btrfs_assert_tree_locked(struct extent_buffer *eb);
