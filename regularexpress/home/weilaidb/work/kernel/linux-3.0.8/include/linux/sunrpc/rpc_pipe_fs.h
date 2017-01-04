#define _LINUX_SUNRPC_RPC_PIPE_FS_H
struct rpc_pipe_msg ;
struct rpc_pipe_ops ;
struct rpc_inode ;
static inline struct rpc_inode *
RPC_I(struct inode *inode)
extern int rpc_queue_upcall(struct inode *, struct rpc_pipe_msg *);
struct rpc_clnt;
extern struct dentry *rpc_create_client_dir(struct dentry *, struct qstr *, struct rpc_clnt *);
extern int rpc_remove_client_dir(struct dentry *);
struct cache_detail;
extern struct dentry *rpc_create_cache_dir(struct dentry *,
struct qstr *,
mode_t umode,
struct cache_detail *);
extern void rpc_remove_cache_dir(struct dentry *);
extern struct dentry *rpc_mkpipe(struct dentry *, const char *, void *,
const struct rpc_pipe_ops *, int flags);
extern int rpc_unlink(struct dentry *);
extern struct vfsmount *rpc_get_mount(void);
extern void rpc_put_mount(void);
extern int register_rpc_pipefs(void);
extern void unregister_rpc_pipefs(void);
