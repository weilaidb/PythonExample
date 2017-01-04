static int pohmelfs_send_lock_trans(struct pohmelfs_inode *pi,
u64 id, u64 start, u32 size, int type)
int pohmelfs_data_lock(struct pohmelfs_inode *pi, u64 start, u32 size, int type)
int pohmelfs_data_unlock(struct pohmelfs_inode *pi, u64 start, u32 size, int type)
