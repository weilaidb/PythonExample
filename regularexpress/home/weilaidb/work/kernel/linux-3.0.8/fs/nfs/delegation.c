static void nfs_free_delegation(struct nfs_delegation *delegation)
void nfs_mark_delegation_referenced(struct nfs_delegation *delegation)
int nfs_have_delegation(struct inode *inode, fmode_t flags)
static int nfs_delegation_claim_locks(struct nfs_open_context *ctx, struct nfs4_state *state)
static int nfs_delegation_claim_opens(struct inode *inode, const nfs4_stateid *stateid)
void nfs_inode_reclaim_delegation(struct inode *inode, struct rpc_cred *cred,
struct nfs_openres *res)
static int nfs_do_return_delegation(struct inode *inode, struct nfs_delegation *delegation, int issync)
static struct inode *nfs_delegation_grab_inode(struct nfs_delegation *delegation)
static struct nfs_delegation *
nfs_detach_delegation_locked(struct nfs_inode *nfsi,
struct nfs_server *server)
static struct nfs_delegation *nfs_detach_delegation(struct nfs_inode *nfsi,
struct nfs_server *server)
int nfs_inode_set_delegation(struct inode *inode, struct rpc_cred *cred, struct nfs_openres *res)
static int __nfs_inode_return_delegation(struct inode *inode, struct nfs_delegation *delegation, int issync)
int nfs_client_return_marked_delegations(struct nfs_client *clp)
void nfs_inode_return_delegation_noreclaim(struct inode *inode)
int nfs_inode_return_delegation(struct inode *inode)
static void nfs_mark_return_delegation(struct nfs_server *server,
struct nfs_delegation *delegation)
void nfs_super_return_all_delegations(struct super_block *sb)
static void nfs_mark_return_all_delegation_types(struct nfs_server *server,
fmode_t flags)
static void nfs_client_mark_return_all_delegation_types(struct nfs_client *clp,
fmode_t flags)
static void nfs_client_mark_return_all_delegations(struct nfs_client *clp)
static void nfs_delegation_run_state_manager(struct nfs_client *clp)
void nfs_expire_all_delegation_types(struct nfs_client *clp, fmode_t flags)
void nfs_expire_all_delegations(struct nfs_client *clp)
void nfs_handle_cb_pathdown(struct nfs_client *clp)
static void nfs_mark_return_unreferenced_delegations(struct nfs_server *server)
void nfs_expire_unreferenced_delegations(struct nfs_client *clp)
int nfs_async_inode_return_delegation(struct inode *inode,
const nfs4_stateid *stateid)
static struct inode *
nfs_delegation_find_inode_server(struct nfs_server *server,
const struct nfs_fh *fhandle)
struct inode *nfs_delegation_find_inode(struct nfs_client *clp,
const struct nfs_fh *fhandle)
static void nfs_delegation_mark_reclaim_server(struct nfs_server *server)
void nfs_delegation_mark_reclaim(struct nfs_client *clp)
void nfs_delegation_reap_unclaimed(struct nfs_client *clp)
int nfs_delegations_present(struct nfs_client *clp)
int nfs4_copy_delegation_stateid(nfs4_stateid *dst, struct inode *inode)
