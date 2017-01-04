#define NFSDBG_FACILITY		NFSDBG_VFS
#define NFS_DEFAULT_VERSION 3
#define NFS_DEFAULT_VERSION 2
enum ;
static const match_table_t nfs_mount_option_tokens = ;
enum ;
static const match_table_t nfs_xprt_protocol_tokens = ;
enum ;
static const match_table_t nfs_secflavor_tokens = ;
enum ;
static match_table_t nfs_lookupcache_tokens = ;
enum ;
static match_table_t nfs_local_lock_tokens = ;
static void nfs_umount_begin(struct super_block *);
static int  nfs_statfs(struct dentry *, struct kstatfs *);
static int  nfs_show_options(struct seq_file *, struct vfsmount *);
static int  nfs_show_devname(struct seq_file *, struct vfsmount *);
static int  nfs_show_path(struct seq_file *, struct vfsmount *);
static int  nfs_show_stats(struct seq_file *, struct vfsmount *);
static struct dentry *nfs_fs_mount(struct file_system_type *,
int, const char *, void *);
static struct dentry *nfs_xdev_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *raw_data);
static void nfs_put_super(struct super_block *);
static void nfs_kill_super(struct super_block *);
static int nfs_remount(struct super_block *sb, int *flags, char *raw_data);
static struct file_system_type nfs_fs_type = ;
struct file_system_type nfs_xdev_fs_type = ;
static const struct super_operations nfs_sops = ;
static int nfs4_validate_text_mount_data(void *options,
struct nfs_parsed_mount_data *args, const char *dev_name);
static struct dentry *nfs4_try_mount(int flags, const char *dev_name,
struct nfs_parsed_mount_data *data);
static struct dentry *nfs4_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *raw_data);
static struct dentry *nfs4_remote_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *raw_data);
static struct dentry *nfs4_xdev_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *raw_data);
static struct dentry *nfs4_referral_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *raw_data);
static struct dentry *nfs4_remote_referral_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *raw_data);
static void nfs4_kill_super(struct super_block *sb);
static struct file_system_type nfs4_fs_type = ;
static struct file_system_type nfs4_remote_fs_type = ;
struct file_system_type nfs4_xdev_fs_type = ;
static struct file_system_type nfs4_remote_referral_fs_type = ;
struct file_system_type nfs4_referral_fs_type = ;
static const struct super_operations nfs4_sops = ;
static struct shrinker acl_shrinker = ;
int __init register_nfs_fs(void)
void __exit unregister_nfs_fs(void)
void nfs_sb_active(struct super_block *sb)
void nfs_sb_deactive(struct super_block *sb)
static int nfs_statfs(struct dentry *dentry, struct kstatfs *buf)
static const char *nfs_pseudoflavour_to_name(rpc_authflavor_t flavour)
static void nfs_show_mountd_netid(struct seq_file *m, struct nfs_server *nfss,
int showdefaults)
static void nfs_show_mountd_options(struct seq_file *m, struct nfs_server *nfss,
int showdefaults)
static void nfs_show_nfsv4_options(struct seq_file *m, struct nfs_server *nfss,
int showdefaults)
static void nfs_show_nfsv4_options(struct seq_file *m, struct nfs_server *nfss,
int showdefaults)
static void nfs_show_mount_options(struct seq_file *m, struct nfs_server *nfss,
int showdefaults)
static int nfs_show_options(struct seq_file *m, struct vfsmount *mnt)
void show_sessions(struct seq_file *m, struct nfs_server *server)
void show_sessions(struct seq_file *m, struct nfs_server *server)
void show_pnfs(struct seq_file *m, struct nfs_server *server)
void show_pnfs(struct seq_file *m, struct nfs_server *server)
static int nfs_show_devname(struct seq_file *m, struct vfsmount *mnt)
static int nfs_show_path(struct seq_file *m, struct vfsmount *mnt)
static int nfs_show_stats(struct seq_file *m, struct vfsmount *mnt)
static void nfs_umount_begin(struct super_block *sb)
static struct nfs_parsed_mount_data *nfs_alloc_parsed_mount_data(unsigned int version)
static int nfs_verify_server_address(struct sockaddr *addr)
static void nfs_set_port(struct sockaddr *sap, int *port,
const unsigned short default_port)
static void nfs_validate_transport_protocol(struct nfs_parsed_mount_data *mnt)
static void nfs_set_mount_transport_protocol(struct nfs_parsed_mount_data *mnt)
static int nfs_parse_security_flavors(char *value,
struct nfs_parsed_mount_data *mnt)
static int nfs_get_option_str(substring_t args[], char **option)
static int nfs_get_option_ul(substring_t args[], unsigned long *option)
static int nfs_parse_mount_options(char *raw,
struct nfs_parsed_mount_data *mnt)
static int nfs_walk_authlist(struct nfs_parsed_mount_data *args,
struct nfs_mount_request *request)
static int nfs_try_mount(struct nfs_parsed_mount_data *args,
struct nfs_fh *root_fh)
static int nfs_parse_devname(const char *dev_name,
char **hostname, size_t maxnamlen,
char **export_path, size_t maxpathlen)
static int nfs_validate_mount_data(void *options,
struct nfs_parsed_mount_data *args,
struct nfs_fh *mntfh,
const char *dev_name)
static int
nfs_compare_remount_data(struct nfs_server *nfss,
struct nfs_parsed_mount_data *data)
static int
nfs_remount(struct super_block *sb, int *flags, char *raw_data)
static inline void nfs_initialise_sb(struct super_block *sb)
static void nfs_fill_super(struct super_block *sb,
struct nfs_parsed_mount_data *data)
static void nfs_clone_super(struct super_block *sb,
const struct super_block *old_sb)
static int nfs_compare_mount_options(const struct super_block *s, const struct nfs_server *b, int flags)
struct nfs_sb_mountdata ;
static int nfs_set_super(struct super_block *s, void *data)
static int nfs_compare_super_address(struct nfs_server *server1,
struct nfs_server *server2)
static int nfs_compare_super(struct super_block *sb, void *data)
static int nfs_bdi_register(struct nfs_server *server)
static struct dentry *nfs_fs_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *raw_data)
static void nfs_put_super(struct super_block *s)
static void nfs_kill_super(struct super_block *s)
static struct dentry *
nfs_xdev_mount(struct file_system_type *fs_type, int flags,
const char *dev_name, void *raw_data)
static void nfs4_clone_super(struct super_block *sb,
const struct super_block *old_sb)
static void nfs4_fill_super(struct super_block *sb)
static void nfs4_validate_mount_flags(struct nfs_parsed_mount_data *args)
static int nfs4_validate_text_mount_data(void *options,
struct nfs_parsed_mount_data *args,
const char *dev_name)
static int nfs4_validate_mount_data(void *options,
struct nfs_parsed_mount_data *args,
const char *dev_name)
static struct dentry *
nfs4_remote_mount(struct file_system_type *fs_type, int flags,
const char *dev_name, void *raw_data)
static struct vfsmount *nfs_do_root_mount(struct file_system_type *fs_type,
int flags, void *data, const char *hostname)
struct nfs_referral_count ;
static LIST_HEAD(nfs_referral_count_list);
static DEFINE_SPINLOCK(nfs_referral_count_list_lock);
static struct nfs_referral_count *nfs_find_referral_count(void)
#define NFS_MAX_NESTED_REFERRALS 2
static int nfs_referral_loop_protect(void)
static void nfs_referral_loop_unprotect(void)
static struct dentry *nfs_follow_remote_path(struct vfsmount *root_mnt,
const char *export_path)
static struct dentry *nfs4_try_mount(int flags, const char *dev_name,
struct nfs_parsed_mount_data *data)
static struct dentry *nfs4_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *raw_data)
static void nfs4_kill_super(struct super_block *sb)
static struct dentry *
nfs4_xdev_mount(struct file_system_type *fs_type, int flags,
const char *dev_name, void *raw_data)
static struct dentry *
nfs4_remote_referral_mount(struct file_system_type *fs_type, int flags,
const char *dev_name, void *raw_data)
static struct dentry *nfs4_referral_mount(struct file_system_type *fs_type,
int flags, const char *dev_name, void *raw_data)
