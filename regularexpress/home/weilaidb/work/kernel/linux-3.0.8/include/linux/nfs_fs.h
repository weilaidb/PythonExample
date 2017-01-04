#define _LINUX_NFS_FS_H
#define NFS_DEF_UDP_TIMEO	(11)
#define NFS_DEF_UDP_RETRANS	(3)
#define NFS_DEF_TCP_TIMEO	(600)
#define NFS_DEF_TCP_RETRANS	(2)
#define NFS_MAX_UDP_TIMEOUT	(60*HZ)
#define NFS_MAX_TCP_TIMEOUT	(600*HZ)
#define NFS_DEF_ACREGMIN	(3)
#define NFS_DEF_ACREGMAX	(60)
#define NFS_DEF_ACDIRMIN	(30)
#define NFS_DEF_ACDIRMAX	(60)
#define FLUSH_SYNC		1
#define FLUSH_STABLE		4
#define FLUSH_LOWPRI		8
#define FLUSH_HIGHPRI		16
#define FLUSH_COND_STABLE	32
#define NFS_RPC_SWAPFLAGS		(RPC_TASK_SWAPPER|RPC_TASK_ROOTCREDS)
struct nfs_access_entry ;
struct nfs_lock_context ;
struct nfs4_state;
struct nfs_open_context ;
struct nfs_open_dir_context ;
struct nfs_delegation;
struct posix_acl;
struct nfs_inode ;
#define NFS_INO_INVALID_ATTR	0x0001
#define NFS_INO_INVALID_DATA	0x0002
#define NFS_INO_INVALID_ATIME	0x0004
#define NFS_INO_INVALID_ACCESS	0x0008
#define NFS_INO_INVALID_ACL	0x0010
#define NFS_INO_REVAL_PAGECACHE	0x0020
#define NFS_INO_REVAL_FORCED	0x0040
#define NFS_INO_ADVISE_RDPLUS	(0)
#define NFS_INO_STALE		(1)
#define NFS_INO_ACL_LRU_SET	(2)
#define NFS_INO_FLUSHING	(4)
#define NFS_INO_FSCACHE		(5)
#define NFS_INO_FSCACHE_LOCK	(6)
#define NFS_INO_COMMIT		(7)
#define NFS_INO_PNFS_COMMIT	(8)
#define NFS_INO_LAYOUTCOMMIT	(9)
static inline struct nfs_inode *NFS_I(const struct inode *inode)
static inline struct nfs_server *NFS_SB(const struct super_block *s)
static inline struct nfs_fh *NFS_FH(const struct inode *inode)
static inline struct nfs_server *NFS_SERVER(const struct inode *inode)
static inline struct rpc_clnt *NFS_CLIENT(const struct inode *inode)
static inline const struct nfs_rpc_ops *NFS_PROTO(const struct inode *inode)
static inline __be32 *NFS_COOKIEVERF(const struct inode *inode)
static inline unsigned NFS_MINATTRTIMEO(const struct inode *inode)
static inline unsigned NFS_MAXATTRTIMEO(const struct inode *inode)
static inline int NFS_STALE(const struct inode *inode)
static inline int NFS_FSCACHE(const struct inode *inode)
static inline __u64 NFS_FILEID(const struct inode *inode)
static inline void set_nfs_fileid(struct inode *inode, __u64 fileid)
static inline void nfs_mark_for_revalidate(struct inode *inode)
static inline int nfs_server_capable(struct inode *inode, int cap)
static inline int NFS_USE_READDIRPLUS(struct inode *inode)
static inline void nfs_set_verifier(struct dentry * dentry, unsigned long verf)
static inline unsigned long nfs_save_change_attribute(struct inode *dir)
static inline int nfs_verify_change_attribute(struct inode *dir, unsigned long chattr)
extern int nfs_sync_mapping(struct address_space *mapping);
extern void nfs_zap_mapping(struct inode *inode, struct address_space *mapping);
extern void nfs_zap_caches(struct inode *);
extern void nfs_invalidate_atime(struct inode *);
extern struct inode *nfs_fhget(struct super_block *, struct nfs_fh *,
struct nfs_fattr *);
extern int nfs_refresh_inode(struct inode *, struct nfs_fattr *);
extern int nfs_post_op_update_inode(struct inode *inode, struct nfs_fattr *fattr);
extern int nfs_post_op_update_inode_force_wcc(struct inode *inode, struct nfs_fattr *fattr);
extern int nfs_getattr(struct vfsmount *, struct dentry *, struct kstat *);
extern int nfs_permission(struct inode *, int, unsigned int);
extern int nfs_open(struct inode *, struct file *);
extern int nfs_release(struct inode *, struct file *);
extern int nfs_attribute_timeout(struct inode *inode);
extern int nfs_revalidate_inode(struct nfs_server *server, struct inode *inode);
extern int __nfs_revalidate_inode(struct nfs_server *, struct inode *);
extern int nfs_revalidate_mapping(struct inode *inode, struct address_space *mapping);
extern int nfs_setattr(struct dentry *, struct iattr *);
extern void nfs_setattr_update_inode(struct inode *inode, struct iattr *attr);
extern struct nfs_open_context *get_nfs_open_context(struct nfs_open_context *ctx);
extern void put_nfs_open_context(struct nfs_open_context *ctx);
extern struct nfs_open_context *nfs_find_open_context(struct inode *inode, struct rpc_cred *cred, fmode_t mode);
extern struct nfs_open_context *alloc_nfs_open_context(struct path *path, struct rpc_cred *cred, fmode_t f_mode);
extern void nfs_file_set_open_context(struct file *filp, struct nfs_open_context *ctx);
extern struct nfs_lock_context *nfs_get_lock_context(struct nfs_open_context *ctx);
extern void nfs_put_lock_context(struct nfs_lock_context *l_ctx);
extern u64 nfs_compat_user_ino64(u64 fileid);
extern void nfs_fattr_init(struct nfs_fattr *fattr);
extern unsigned long nfs_inc_attr_generation_counter(void);
extern struct nfs_fattr *nfs_alloc_fattr(void);
static inline void nfs_free_fattr(const struct nfs_fattr *fattr)
extern struct nfs_fh *nfs_alloc_fhandle(void);
static inline void nfs_free_fhandle(const struct nfs_fh *fh)
extern int  nfs_root_data(char **root_device, char **root_data);
extern __be32 root_nfs_parse_addr(char *name);
extern const struct inode_operations nfs_file_inode_operations;
extern const struct inode_operations nfs3_file_inode_operations;
extern const struct file_operations nfs_file_operations;
extern const struct address_space_operations nfs_file_aops;
extern const struct address_space_operations nfs_dir_aops;
static inline struct nfs_open_context *nfs_file_open_context(struct file *filp)
static inline struct rpc_cred *nfs_file_cred(struct file *file)
extern ssize_t nfs3_listxattr(struct dentry *, char *, size_t);
extern ssize_t nfs3_getxattr(struct dentry *, const char *, void *, size_t);
extern int nfs3_setxattr(struct dentry *, const char *,
const void *, size_t, int);
extern int nfs3_removexattr (struct dentry *, const char *name);
# define nfs3_listxattr NULL
# define nfs3_getxattr NULL
# define nfs3_setxattr NULL
# define nfs3_removexattr NULL
extern ssize_t nfs_direct_IO(int, struct kiocb *, const struct iovec *, loff_t,
unsigned long);
extern ssize_t nfs_file_direct_read(struct kiocb *iocb,
const struct iovec *iov, unsigned long nr_segs,
loff_t pos);
extern ssize_t nfs_file_direct_write(struct kiocb *iocb,
const struct iovec *iov, unsigned long nr_segs,
loff_t pos);
extern const struct inode_operations nfs_dir_inode_operations;
extern const struct inode_operations nfs3_dir_inode_operations;
extern const struct file_operations nfs_dir_operations;
extern const struct dentry_operations nfs_dentry_operations;
extern void nfs_force_lookup_revalidate(struct inode *dir);
extern int nfs_instantiate(struct dentry *dentry, struct nfs_fh *fh, struct nfs_fattr *fattr);
extern int nfs_may_open(struct inode *inode, struct rpc_cred *cred, int openflags);
extern void nfs_access_zap_cache(struct inode *inode);
extern const struct inode_operations nfs_symlink_inode_operations;
extern int nfs_register_sysctl(void);
extern void nfs_unregister_sysctl(void);
#define nfs_register_sysctl() 0
#define nfs_unregister_sysctl() do  while(0)
extern const struct inode_operations nfs_mountpoint_inode_operations;
extern const struct inode_operations nfs_referral_inode_operations;
extern int nfs_mountpoint_expiry_timeout;
extern void nfs_release_automount_timer(void);
extern void nfs_complete_unlink(struct dentry *dentry, struct inode *);
extern void nfs_block_sillyrename(struct dentry *dentry);
extern void nfs_unblock_sillyrename(struct dentry *dentry);
extern int  nfs_sillyrename(struct inode *dir, struct dentry *dentry);
extern int  nfs_congestion_kb;
extern int  nfs_writepage(struct page *page, struct writeback_control *wbc);
extern int  nfs_writepages(struct address_space *, struct writeback_control *);
extern int  nfs_flush_incompatible(struct file *file, struct page *page);
extern int  nfs_updatepage(struct file *, struct page *, unsigned int, unsigned int);
extern void nfs_writeback_done(struct rpc_task *, struct nfs_write_data *);
extern int nfs_wb_all(struct inode *inode);
extern int nfs_wb_page(struct inode *inode, struct page* page);
extern int nfs_wb_page_cancel(struct inode *inode, struct page* page);
#if defined(CONFIG_NFS_V3) || defined(CONFIG_NFS_V4)
extern int  nfs_commit_inode(struct inode *, int);
extern struct nfs_write_data *nfs_commitdata_alloc(void);
extern void nfs_commit_free(struct nfs_write_data *wdata);
static inline int
nfs_commit_inode(struct inode *inode, int how)
static inline int
nfs_have_writebacks(struct inode *inode)
extern struct nfs_write_data *nfs_writedata_alloc(unsigned int npages);
extern void nfs_writedata_free(struct nfs_write_data *);
extern int  nfs_readpage(struct file *, struct page *);
extern int  nfs_readpages(struct file *, struct address_space *,
struct list_head *, unsigned);
extern int  nfs_readpage_result(struct rpc_task *, struct nfs_read_data *);
extern int  nfs_readpage_async(struct nfs_open_context *, struct inode *,
struct page *);
extern struct nfs_read_data *nfs_readdata_alloc(unsigned int npages);
extern void nfs_readdata_free(struct nfs_read_data *);
extern struct posix_acl *nfs3_proc_getacl(struct inode *inode, int type);
extern int nfs3_proc_setacl(struct inode *inode, int type,
struct posix_acl *acl);
extern int nfs3_proc_set_default_acl(struct inode *dir, struct inode *inode,
mode_t mode);
extern void nfs3_forget_cached_acls(struct inode *inode);
static inline int nfs3_proc_set_default_acl(struct inode *dir,
struct inode *inode,
mode_t mode)
static inline void nfs3_forget_cached_acls(struct inode *inode)
static inline loff_t nfs_size_to_loff_t(__u64 size)
static inline ino_t
nfs_fileid_to_ino_t(u64 fileid)
#define NFS_JUKEBOX_RETRY_TIME (5 * HZ)
#define NFSDBG_VFS		0x0001
#define NFSDBG_DIRCACHE		0x0002
#define NFSDBG_LOOKUPCACHE	0x0004
#define NFSDBG_PAGECACHE	0x0008
#define NFSDBG_PROC		0x0010
#define NFSDBG_XDR		0x0020
#define NFSDBG_FILE		0x0040
#define NFSDBG_ROOT		0x0080
#define NFSDBG_CALLBACK		0x0100
#define NFSDBG_CLIENT		0x0200
#define NFSDBG_MOUNT		0x0400
#define NFSDBG_FSCACHE		0x0800
#define NFSDBG_PNFS		0x1000
#define NFSDBG_PNFS_LD		0x2000
#define NFSDBG_ALL		0xFFFF
# define NFS_DEBUG
# undef ifdebug
# ifdef NFS_DEBUG
#  define ifdebug(fac)		if (unlikely(nfs_debug & NFSDBG_##fac))
# else
#  define ifdebug(fac)		if (0)
# endif
