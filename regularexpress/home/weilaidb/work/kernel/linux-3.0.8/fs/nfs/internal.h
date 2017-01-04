#define NFS_MS_MASK (MS_RDONLY|MS_NOSUID|MS_NODEV|MS_NOEXEC|MS_SYNCHRONOUS)
struct nfs_string;
#define NFS_MAX_READAHEAD	(RPC_DEF_SLOT_TABLE - 1)
static inline int nfs4_has_session(const struct nfs_client *clp)
static inline int nfs4_has_persistent_session(const struct nfs_client *clp)
static inline void nfs_attr_check_mountpoint(struct super_block *parent, struct nfs_fattr *fattr)
static inline int nfs_attr_use_mounted_on_fileid(struct nfs_fattr *fattr)
struct nfs_clone_mount ;
#define NFS_MAX_SECFLAVORS	(12)
#define NFS_UNSPEC_PORT		(-1)
#define NFS_MAX_READDIR_PAGES 8
struct nfs_parsed_mount_data ;
struct nfs_mount_request ;
extern int nfs_mount(struct nfs_mount_request *info);
extern void nfs_umount(const struct nfs_mount_request *info);
extern struct rpc_program nfs_program;
extern void nfs_cleanup_cb_ident_idr(void);
extern void nfs_put_client(struct nfs_client *);
extern struct nfs_client *nfs4_find_client_no_ident(const struct sockaddr *);
extern struct nfs_client *nfs4_find_client_ident(int);
extern struct nfs_client *
nfs4_find_client_sessionid(const struct sockaddr *, struct nfs4_sessionid *);
extern struct nfs_server *nfs_create_server(
const struct nfs_parsed_mount_data *,
struct nfs_fh *);
extern struct nfs_server *nfs4_create_server(
const struct nfs_parsed_mount_data *,
struct nfs_fh *);
extern struct nfs_server *nfs4_create_referral_server(struct nfs_clone_mount *,
struct nfs_fh *);
extern void nfs_free_server(struct nfs_server *server);
extern struct nfs_server *nfs_clone_server(struct nfs_server *,
struct nfs_fh *,
struct nfs_fattr *);
extern void nfs_mark_client_ready(struct nfs_client *clp, int state);
extern int nfs4_check_client_ready(struct nfs_client *clp);
extern struct nfs_client *nfs4_set_ds_client(struct nfs_client* mds_clp,
const struct sockaddr *ds_addr,
int ds_addrlen, int ds_proto);
extern int __init nfs_fs_proc_init(void);
extern void nfs_fs_proc_exit(void);
static inline int nfs_fs_proc_init(void)
static inline void nfs_fs_proc_exit(void)
extern struct vfsmount *nfs_do_refmount(struct dentry *dentry);
static inline
struct vfsmount *nfs_do_refmount(struct dentry *dentry)
extern struct svc_version nfs4_callback_version1;
extern struct svc_version nfs4_callback_version4;
extern int __init nfs_init_nfspagecache(void);
extern void nfs_destroy_nfspagecache(void);
extern int __init nfs_init_readpagecache(void);
extern void nfs_destroy_readpagecache(void);
extern int __init nfs_init_writepagecache(void);
extern void nfs_destroy_writepagecache(void);
extern int __init nfs_init_directcache(void);
extern void nfs_destroy_directcache(void);
extern int nfs_stat_to_errno(enum nfs_stat);
extern struct rpc_procinfo nfs_procedures[];
extern int nfs2_decode_dirent(struct xdr_stream *,
struct nfs_entry *, int);
extern struct rpc_procinfo nfs3_procedures[];
extern int nfs3_decode_dirent(struct xdr_stream *,
struct nfs_entry *, int);
extern int nfs4_decode_dirent(struct xdr_stream *,
struct nfs_entry *, int);
extern const u32 nfs41_maxread_overhead;
extern const u32 nfs41_maxwrite_overhead;
extern struct rpc_procinfo nfs4_procedures[];
void nfs_fixup_secinfo_attributes(struct nfs_fattr *, struct nfs_fh *);
extern int nfs4_init_ds_session(struct nfs_client *clp);
void nfs_close_context(struct nfs_open_context *ctx, int is_sync);
extern int nfs_init_client(struct nfs_client *clp,
const struct rpc_timeout *timeparms,
const char *ip_addr, rpc_authflavor_t authflavour,
int noresvport);
extern int nfs_access_cache_shrinker(struct shrinker *shrink,
struct shrink_control *sc);
extern struct workqueue_struct *nfsiod_workqueue;
extern struct inode *nfs_alloc_inode(struct super_block *sb);
extern void nfs_destroy_inode(struct inode *);
extern int nfs_write_inode(struct inode *, struct writeback_control *);
extern void nfs_evict_inode(struct inode *);
extern void nfs4_evict_inode(struct inode *);
void nfs_zap_acl_cache(struct inode *inode);
extern int nfs_wait_bit_killable(void *word);
extern struct file_system_type nfs_xdev_fs_type;
extern struct file_system_type nfs4_xdev_fs_type;
extern struct file_system_type nfs4_referral_fs_type;
extern struct rpc_stat nfs_rpcstat;
extern int __init register_nfs_fs(void);
extern void __exit unregister_nfs_fs(void);
extern void nfs_sb_active(struct super_block *sb);
extern void nfs_sb_deactive(struct super_block *sb);
extern char *nfs_path(char **p, struct dentry *dentry,
char *buffer, ssize_t buflen);
extern struct vfsmount *nfs_d_automount(struct path *path);
extern struct dentry *nfs_get_root(struct super_block *, struct nfs_fh *,
const char *);
extern struct dentry *nfs4_get_root(struct super_block *, struct nfs_fh *,
const char *);
extern int nfs4_get_rootfh(struct nfs_server *server, struct nfs_fh *mntfh);
extern int nfs_initiate_read(struct nfs_read_data *data, struct rpc_clnt *clnt,
const struct rpc_call_ops *call_ops);
extern void nfs_read_prepare(struct rpc_task *task, void *calldata);
extern void nfs_commit_free(struct nfs_write_data *p);
extern int nfs_initiate_write(struct nfs_write_data *data,
struct rpc_clnt *clnt,
const struct rpc_call_ops *call_ops,
int how);
extern void nfs_write_prepare(struct rpc_task *task, void *calldata);
extern int nfs_initiate_commit(struct nfs_write_data *data,
struct rpc_clnt *clnt,
const struct rpc_call_ops *call_ops,
int how);
extern void nfs_init_commit(struct nfs_write_data *data,
struct list_head *head,
struct pnfs_layout_segment *lseg);
void nfs_retry_commit(struct list_head *page_list,
struct pnfs_layout_segment *lseg);
void nfs_commit_clear_lock(struct nfs_inode *nfsi);
void nfs_commitdata_release(void *data);
void nfs_commit_release_pages(struct nfs_write_data *data);
extern int nfs_migrate_page(struct address_space *,
struct page *, struct page *);
#define nfs_migrate_page NULL
extern void __nfs4_read_done_cb(struct nfs_read_data *);
extern void nfs4_reset_read(struct rpc_task *task, struct nfs_read_data *data);
extern int nfs4_init_client(struct nfs_client *clp,
const struct rpc_timeout *timeparms,
const char *ip_addr,
rpc_authflavor_t authflavour,
int noresvport);
extern void nfs4_reset_write(struct rpc_task *task, struct nfs_write_data *data);
extern int _nfs4_call_sync(struct rpc_clnt *clnt,
struct nfs_server *server,
struct rpc_message *msg,
struct nfs4_sequence_args *args,
struct nfs4_sequence_res *res,
int cache_reply);
extern int _nfs4_call_sync_session(struct rpc_clnt *clnt,
struct nfs_server *server,
struct rpc_message *msg,
struct nfs4_sequence_args *args,
struct nfs4_sequence_res *res,
int cache_reply);
static inline char *nfs_devname(struct dentry *dentry,
char *buffer, ssize_t buflen)
static inline
unsigned long nfs_block_bits(unsigned long bsize, unsigned char *nrbitsp)
static inline blkcnt_t nfs_calc_block_size(u64 tsize)
static inline
unsigned long nfs_block_size(unsigned long bsize, unsigned char *nrbitsp)
static inline
void nfs_super_set_maxbytes(struct super_block *sb, __u64 maxfilesize)
static inline
unsigned int nfs_page_length(struct page *page)
static inline
unsigned char nfs_umode_to_dtype(umode_t mode)
static inline
unsigned int nfs_page_array_len(unsigned int base, size_t len)
static inline int nfs_restart_rpc(struct rpc_task *task, const struct nfs_client *clp)
