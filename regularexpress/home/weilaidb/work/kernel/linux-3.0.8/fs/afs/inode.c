struct afs_iget_data ;
static int afs_inode_map_status(struct afs_vnode *vnode, struct key *key)
static int afs_iget5_test(struct inode *inode, void *opaque)
static int afs_iget5_autocell_test(struct inode *inode, void *opaque)
static int afs_iget5_set(struct inode *inode, void *opaque)
struct inode *afs_iget_autocell(struct inode *dir, const char *dev_name,
int namesz, struct key *key)
struct inode *afs_iget(struct super_block *sb, struct key *key,
struct afs_fid *fid, struct afs_file_status *status,
struct afs_callback *cb)
void afs_zap_data(struct afs_vnode *vnode)
int afs_validate(struct afs_vnode *vnode, struct key *key)
int afs_getattr(struct vfsmount *mnt, struct dentry *dentry,
struct kstat *stat)
int afs_drop_inode(struct inode *inode)
void afs_evict_inode(struct inode *inode)
",
vnode->fid.vid,
vnode->fid.vnode,
vnode->fid.unique,
vnode->cb_version,
vnode->cb_expiry,
vnode->cb_type);
_debug("CLEAR INODE %p", inode);
ASSERTCMP(inode->i_ino, ==, vnode->fid.vnode);
truncate_inode_pages(&inode->i_data, 0);
end_writeback(inode);
afs_give_up_callback(vnode);
if (vnode->server)
ASSERT(list_empty(&vnode->writebacks));
ASSERT(!vnode->cb_promised);
fscache_relinquish_cookie(vnode->cache, 0);
vnode->cache = NULL;
mutex_lock(&vnode->permits_lock);
permits = vnode->permits;
rcu_assign_pointer(vnode->permits, NULL);
mutex_unlock(&vnode->permits_lock);
if (permits)
call_rcu(&permits->rcu, afs_zap_permits);
_leave("");
}
int afs_setattr(struct dentry *dentry, struct iattr *attr)
