#define _LINUX_PNODE_H
#define IS_MNT_SHARED(mnt) (mnt->mnt_flags & MNT_SHARED)
#define IS_MNT_SLAVE(mnt) (mnt->mnt_master)
#define IS_MNT_NEW(mnt)  (!mnt->mnt_ns)
#define CLEAR_MNT_SHARED(mnt) (mnt->mnt_flags &= ~MNT_SHARED)
#define IS_MNT_UNBINDABLE(mnt) (mnt->mnt_flags & MNT_UNBINDABLE)
#define CL_EXPIRE    		0x01
#define CL_SLAVE     		0x02
#define CL_COPY_ALL 		0x04
#define CL_MAKE_SHARED 		0x08
#define CL_PRIVATE 		0x10
static inline void set_mnt_shared(struct vfsmount *mnt)
void change_mnt_propagation(struct vfsmount *, int);
int propagate_mnt(struct vfsmount *, struct dentry *, struct vfsmount *,
struct list_head *);
int propagate_umount(struct list_head *);
int propagate_mount_busy(struct vfsmount *, int);
void mnt_release_group_id(struct vfsmount *);
int get_dominating_id(struct vfsmount *mnt, const struct path *root);
