#define FS_NFS_DELEGATION_H
#if defined(CONFIG_NFS_V4)
struct nfs_delegation ;
enum ;
int nfs_inode_set_delegation(struct inode *inode, struct rpc_cred *cred, struct nfs_openres *res);
void nfs_inode_reclaim_delegation(struct inode *inode, struct rpc_cred *cred, struct nfs_openres *res);
int nfs_inode_return_delegation(struct inode *inode);
int nfs_async_inode_return_delegation(struct inode *inode, const nfs4_stateid *stateid);
void nfs_inode_return_delegation_noreclaim(struct inode *inode);
struct inode *nfs_delegation_find_inode(struct nfs_client *clp, const struct nfs_fh *fhandle);
void nfs_super_return_all_delegations(struct super_block *sb);
void nfs_expire_all_delegations(struct nfs_client *clp);
void nfs_expire_all_delegation_types(struct nfs_client *clp, fmode_t flags);
void nfs_expire_unreferenced_delegations(struct nfs_client *clp);
void nfs_handle_cb_pathdown(struct nfs_client *clp);
int nfs_client_return_marked_delegations(struct nfs_client *clp);
int nfs_delegations_present(struct nfs_client *clp);
void nfs_delegation_mark_reclaim(struct nfs_client *clp);
void nfs_delegation_reap_unclaimed(struct nfs_client *clp);
int nfs4_proc_delegreturn(struct inode *inode, struct rpc_cred *cred, const nfs4_stateid *stateid, int issync);
int nfs4_open_delegation_recall(struct nfs_open_context *ctx, struct nfs4_state *state, const nfs4_stateid *stateid);
int nfs4_lock_delegation_recall(struct nfs4_state *state, struct file_lock *fl);
int nfs4_copy_delegation_stateid(nfs4_stateid *dst, struct inode *inode);
void nfs_mark_delegation_referenced(struct nfs_delegation *delegation);
int nfs_have_delegation(struct inode *inode, fmode_t flags);
static inline int nfs_have_delegation(struct inode *inode, fmode_t flags)
static inline int nfs_inode_return_delegation(struct inode *inode)
static inline int nfs_have_delegated_attributes(struct inode *inode)
