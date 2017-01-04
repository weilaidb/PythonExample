#define NFSDBG_FACILITY		NFSDBG_CLIENT
static DEFINE_SPINLOCK(nfs_client_lock);
static LIST_HEAD(nfs_client_list);
static LIST_HEAD(nfs_volume_list);
static DECLARE_WAIT_QUEUE_HEAD(nfs_client_active_wq);
static DEFINE_IDR(cb_ident_idr);
static int nfs_get_cb_ident_idr(struct nfs_client *clp, int minorversion)
static int nfs4_disable_idmapping = 0;
static struct rpc_version *nfs_version[5] = ;
struct rpc_program nfs_program = ;
struct rpc_stat nfs_rpcstat = ;
static struct rpc_stat		nfsacl_rpcstat = ;
static struct rpc_version *	nfsacl_version[] = ;
struct rpc_program		nfsacl_program = ;
struct nfs_client_initdata ;
static struct nfs_client *nfs_alloc_client(const struct nfs_client_initdata *cl_init)
static void nfs4_shutdown_session(struct nfs_client *clp)
static void nfs4_shutdown_session(struct nfs_client *clp)
static void nfs4_destroy_callback(struct nfs_client *clp)
static void nfs4_shutdown_client(struct nfs_client *clp)
void nfs_cleanup_cb_ident_idr(void)
static void nfs_cb_idr_remove_locked(struct nfs_client *clp)
static void pnfs_init_server(struct nfs_server *server)
static void nfs4_shutdown_client(struct nfs_client *clp)
void nfs_cleanup_cb_ident_idr(void)
static void nfs_cb_idr_remove_locked(struct nfs_client *clp)
static void pnfs_init_server(struct nfs_server *server)
static void nfs_free_client(struct nfs_client *clp)
void nfs_put_client(struct nfs_client *clp)
EXPORT_SYMBOL_GPL(nfs_put_client);
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
static int nfs_sockaddr_match_ipaddr6(const struct sockaddr *sa1,
const struct sockaddr *sa2)
static int nfs_sockaddr_match_ipaddr6(const struct sockaddr *sa1,
const struct sockaddr *sa2)
static int nfs_sockaddr_match_ipaddr4(const struct sockaddr *sa1,
const struct sockaddr *sa2)
static int nfs_sockaddr_cmp_ip6(const struct sockaddr *sa1,
const struct sockaddr *sa2)
static int nfs_sockaddr_cmp_ip4(const struct sockaddr *sa1,
const struct sockaddr *sa2)
static int nfs_sockaddr_match_ipaddr(const struct sockaddr *sa1,
const struct sockaddr *sa2)
static int nfs_sockaddr_cmp(const struct sockaddr *sa1,
const struct sockaddr *sa2)
bool
nfs4_cb_match_client(const struct sockaddr *addr, struct nfs_client *clp,
u32 minorversion)
static struct nfs_client *nfs_match_client(const struct nfs_client_initdata *data)
static struct nfs_client *
nfs_get_client(const struct nfs_client_initdata *cl_init,
const struct rpc_timeout *timeparms,
const char *ip_addr,
rpc_authflavor_t authflavour,
int noresvport)
void nfs_mark_client_ready(struct nfs_client *clp, int state)
int nfs4_check_client_ready(struct nfs_client *clp)
static void nfs_init_timeout_values(struct rpc_timeout *to, int proto,
unsigned int timeo, unsigned int retrans)
static int nfs_create_rpc_client(struct nfs_client *clp,
const struct rpc_timeout *timeparms,
rpc_authflavor_t flavor,
int discrtry, int noresvport)
static void nfs_destroy_server(struct nfs_server *server)
static int nfs_start_lockd(struct nfs_server *server)
static void nfs_init_server_aclclient(struct nfs_server *server)
static inline void nfs_init_server_aclclient(struct nfs_server *server)
static int nfs_init_server_rpcclient(struct nfs_server *server,
const struct rpc_timeout *timeo,
rpc_authflavor_t pseudoflavour)
int nfs_init_client(struct nfs_client *clp, const struct rpc_timeout *timeparms,
const char *ip_addr, rpc_authflavor_t authflavour,
int noresvport)
static int nfs_init_server(struct nfs_server *server,
const struct nfs_parsed_mount_data *data)
static void nfs_server_set_fsinfo(struct nfs_server *server, struct nfs_fsinfo *fsinfo)
static int nfs_probe_fsinfo(struct nfs_server *server, struct nfs_fh *mntfh, struct nfs_fattr *fattr)
static void nfs_server_copy_userdata(struct nfs_server *target, struct nfs_server *source)
static void nfs_server_insert_lists(struct nfs_server *server)
static void nfs_server_remove_lists(struct nfs_server *server)
static struct nfs_server *nfs_alloc_server(void)
void nfs_free_server(struct nfs_server *server)
struct nfs_server *nfs_create_server(const struct nfs_parsed_mount_data *data,
struct nfs_fh *mntfh)
struct nfs_client *
nfs4_find_client_no_ident(const struct sockaddr *addr)
struct nfs_client *
nfs4_find_client_ident(int cb_ident)
#if defined(CONFIG_NFS_V4_1)
struct nfs_client *
nfs4_find_client_sessionid(const struct sockaddr *addr,
struct nfs4_sessionid *sid)
struct nfs_client *
nfs4_find_client_sessionid(const struct sockaddr *addr,
struct nfs4_sessionid *sid)
static int nfs4_init_callback(struct nfs_client *clp)
static int nfs4_init_client_minor_version(struct nfs_client *clp)
int nfs4_init_client(struct nfs_client *clp,
const struct rpc_timeout *timeparms,
const char *ip_addr,
rpc_authflavor_t authflavour,
int noresvport)
static int nfs4_set_client(struct nfs_server *server,
const char *hostname,
const struct sockaddr *addr,
const size_t addrlen,
const char *ip_addr,
rpc_authflavor_t authflavour,
int proto, const struct rpc_timeout *timeparms,
u32 minorversion)
struct nfs_client *nfs4_set_ds_client(struct nfs_client* mds_clp,
const struct sockaddr *ds_addr,
int ds_addrlen, int ds_proto)
EXPORT_SYMBOL(nfs4_set_ds_client);
static void nfs4_session_set_rwsize(struct nfs_server *server)
static int nfs4_server_common_setup(struct nfs_server *server,
struct nfs_fh *mntfh)
static int nfs4_init_server(struct nfs_server *server,
const struct nfs_parsed_mount_data *data)
struct nfs_server *nfs4_create_server(const struct nfs_parsed_mount_data *data,
struct nfs_fh *mntfh)
struct nfs_server *nfs4_create_referral_server(struct nfs_clone_mount *data,
struct nfs_fh *mntfh)
struct nfs_server *nfs_clone_server(struct nfs_server *source,
struct nfs_fh *fh,
struct nfs_fattr *fattr)
static struct proc_dir_entry *proc_fs_nfs;
static int nfs_server_list_open(struct inode *inode, struct file *file);
static void *nfs_server_list_start(struct seq_file *p, loff_t *pos);
static void *nfs_server_list_next(struct seq_file *p, void *v, loff_t *pos);
static void nfs_server_list_stop(struct seq_file *p, void *v);
static int nfs_server_list_show(struct seq_file *m, void *v);
static const struct seq_operations nfs_server_list_ops = ;
static const struct file_operations nfs_server_list_fops = ;
static int nfs_volume_list_open(struct inode *inode, struct file *file);
static void *nfs_volume_list_start(struct seq_file *p, loff_t *pos);
static void *nfs_volume_list_next(struct seq_file *p, void *v, loff_t *pos);
static void nfs_volume_list_stop(struct seq_file *p, void *v);
static int nfs_volume_list_show(struct seq_file *m, void *v);
static const struct seq_operations nfs_volume_list_ops = ;
static const struct file_operations nfs_volume_list_fops = ;
static int nfs_server_list_open(struct inode *inode, struct file *file)
static void *nfs_server_list_start(struct seq_file *m, loff_t *_pos)
static void *nfs_server_list_next(struct seq_file *p, void *v, loff_t *pos)
static void nfs_server_list_stop(struct seq_file *p, void *v)
static int nfs_server_list_show(struct seq_file *m, void *v)
static int nfs_volume_list_open(struct inode *inode, struct file *file)
static void *nfs_volume_list_start(struct seq_file *m, loff_t *_pos)
static void *nfs_volume_list_next(struct seq_file *p, void *v, loff_t *pos)
static void nfs_volume_list_stop(struct seq_file *p, void *v)
static int nfs_volume_list_show(struct seq_file *m, void *v)
int __init nfs_fs_proc_init(void)
void nfs_fs_proc_exit(void)
module_param(nfs4_disable_idmapping, bool, 0644);
MODULE_PARM_DESC(nfs4_disable_idmapping,
"Turn off NFSv4 idmapping when using 'sec=sys'");
