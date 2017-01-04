struct key *afs_request_key(struct afs_cell *cell)
void afs_zap_permits(struct rcu_head *rcu)
static void afs_dispose_of_permits(struct rcu_head *rcu)
static struct afs_vnode *afs_get_auth_inode(struct afs_vnode *vnode,
struct key *key)
void afs_clear_permits(struct afs_vnode *vnode)
void afs_cache_permit(struct afs_vnode *vnode, struct key *key, long acl_order)
static int afs_check_permit(struct afs_vnode *vnode, struct key *key,
afs_access_t *_access)
int afs_permission(struct inode *inode, int mask, unsigned int flags)
