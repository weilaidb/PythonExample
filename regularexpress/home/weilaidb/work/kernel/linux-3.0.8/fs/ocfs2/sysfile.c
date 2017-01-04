static struct inode * _ocfs2_get_system_file_inode(struct ocfs2_super *osb,
int type,
u32 slot);
static struct lock_class_key ocfs2_sysfile_cluster_lock_key[NUM_SYSTEM_INODES];
static inline int is_global_system_inode(int type)
static struct inode **get_local_system_inode(struct ocfs2_super *osb,
int type,
u32 slot)
struct inode *ocfs2_get_system_file_inode(struct ocfs2_super *osb,
int type,
u32 slot)
static struct inode * _ocfs2_get_system_file_inode(struct ocfs2_super *osb,
int type,
u32 slot)
