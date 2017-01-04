#define DLMGLUE_H
#define OCFS2_LVB_VERSION 5
struct ocfs2_meta_lvb ;
#define OCFS2_QINFO_LVB_VERSION 1
struct ocfs2_qinfo_lvb ;
#define OCFS2_ORPHAN_LVB_VERSION 1
struct ocfs2_orphan_scan_lvb ;
#define OCFS2_META_LOCK_RECOVERY	(0x01)
#define OCFS2_META_LOCK_NOQUEUE		(0x02)
#define OCFS2_LOCK_NONBLOCK		(0x04)
enum ;
int ocfs2_dlm_init(struct ocfs2_super *osb);
void ocfs2_dlm_shutdown(struct ocfs2_super *osb, int hangup_pending);
void ocfs2_lock_res_init_once(struct ocfs2_lock_res *res);
void ocfs2_inode_lock_res_init(struct ocfs2_lock_res *res,
enum ocfs2_lock_type type,
unsigned int generation,
struct inode *inode);
void ocfs2_dentry_lock_res_init(struct ocfs2_dentry_lock *dl,
u64 parent, struct inode *inode);
struct ocfs2_file_private;
void ocfs2_file_lock_res_init(struct ocfs2_lock_res *lockres,
struct ocfs2_file_private *fp);
struct ocfs2_mem_dqinfo;
void ocfs2_qinfo_lock_res_init(struct ocfs2_lock_res *lockres,
struct ocfs2_mem_dqinfo *info);
void ocfs2_refcount_lock_res_init(struct ocfs2_lock_res *lockres,
struct ocfs2_super *osb, u64 ref_blkno,
unsigned int generation);
void ocfs2_lock_res_free(struct ocfs2_lock_res *res);
int ocfs2_create_new_inode_locks(struct inode *inode);
int ocfs2_drop_inode_locks(struct inode *inode);
int ocfs2_rw_lock(struct inode *inode, int write);
void ocfs2_rw_unlock(struct inode *inode, int write);
int ocfs2_open_lock(struct inode *inode);
int ocfs2_try_open_lock(struct inode *inode, int write);
void ocfs2_open_unlock(struct inode *inode);
int ocfs2_inode_lock_atime(struct inode *inode,
struct vfsmount *vfsmnt,
int *level);
int ocfs2_inode_lock_full_nested(struct inode *inode,
struct buffer_head **ret_bh,
int ex,
int arg_flags,
int subclass);
int ocfs2_inode_lock_with_page(struct inode *inode,
struct buffer_head **ret_bh,
int ex,
struct page *page);
#define ocfs2_inode_lock_full(i, r, e, f)\
ocfs2_inode_lock_full_nested(i, r, e, f, OI_LS_NORMAL)
#define ocfs2_inode_lock_nested(i, b, e, s)\
ocfs2_inode_lock_full_nested(i, b, e, 0, s)
#define ocfs2_inode_lock(i, b, e) ocfs2_inode_lock_full_nested(i, b, e, 0, OI_LS_NORMAL)
void ocfs2_inode_unlock(struct inode *inode,
int ex);
int ocfs2_super_lock(struct ocfs2_super *osb,
int ex);
void ocfs2_super_unlock(struct ocfs2_super *osb,
int ex);
int ocfs2_orphan_scan_lock(struct ocfs2_super *osb, u32 *seqno);
void ocfs2_orphan_scan_unlock(struct ocfs2_super *osb, u32 seqno);
int ocfs2_rename_lock(struct ocfs2_super *osb);
void ocfs2_rename_unlock(struct ocfs2_super *osb);
int ocfs2_nfs_sync_lock(struct ocfs2_super *osb, int ex);
void ocfs2_nfs_sync_unlock(struct ocfs2_super *osb, int ex);
int ocfs2_dentry_lock(struct dentry *dentry, int ex);
void ocfs2_dentry_unlock(struct dentry *dentry, int ex);
int ocfs2_file_lock(struct file *file, int ex, int trylock);
void ocfs2_file_unlock(struct file *file);
int ocfs2_qinfo_lock(struct ocfs2_mem_dqinfo *oinfo, int ex);
void ocfs2_qinfo_unlock(struct ocfs2_mem_dqinfo *oinfo, int ex);
struct ocfs2_refcount_tree;
int ocfs2_refcount_lock(struct ocfs2_refcount_tree *ref_tree, int ex);
void ocfs2_refcount_unlock(struct ocfs2_refcount_tree *ref_tree, int ex);
void ocfs2_mark_lockres_freeing(struct ocfs2_lock_res *lockres);
void ocfs2_simple_drop_lockres(struct ocfs2_super *osb,
struct ocfs2_lock_res *lockres);
void ocfs2_wake_downconvert_thread(struct ocfs2_super *osb);
struct ocfs2_dlm_debug *ocfs2_new_dlm_debug(void);
void ocfs2_put_dlm_debug(struct ocfs2_dlm_debug *dlm_debug);
void ocfs2_set_locking_protocol(void);
