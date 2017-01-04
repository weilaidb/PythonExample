static int nfs_map_string_to_numeric(const char *name, size_t namelen, __u32 *res)
static int nfs_map_numeric_to_string(__u32 id, char *buf, size_t buflen)
#define NFS_UINT_MAXLEN 11
const struct cred *id_resolver_cache;
struct key_type key_type_id_resolver = ;
int nfs_idmap_init(void)
void nfs_idmap_quit(void)
static ssize_t nfs_idmap_get_desc(const char *name, size_t namelen,
const char *type, size_t typelen, char **desc)
static ssize_t nfs_idmap_request_key(const char *name, size_t namelen,
const char *type, void *data, size_t data_size)
static ssize_t nfs_idmap_lookup_name(__u32 id, const char *type, char *buf, size_t buflen)
static int nfs_idmap_lookup_id(const char *name, size_t namelen,
const char *type, __u32 *id)
int nfs_map_name_to_uid(const struct nfs_server *server, const char *name, size_t namelen, __u32 *uid)
int nfs_map_group_to_gid(const struct nfs_server *server, const char *name, size_t namelen, __u32 *gid)
int nfs_map_uid_to_name(const struct nfs_server *server, __u32 uid, char *buf, size_t buflen)
int nfs_map_gid_to_group(const struct nfs_server *server, __u32 gid, char *buf, size_t buflen)
#define IDMAP_HASH_SZ          128
unsigned int nfs_idmap_cache_timeout = 600 * HZ;
static int param_set_idmap_timeout(const char *val, struct kernel_param *kp)
module_param_call(idmap_cache_timeout, param_set_idmap_timeout, param_get_int,
&nfs_idmap_cache_timeout, 0644);
struct idmap_hashent ;
struct idmap_hashtable ;
struct idmap ;
static ssize_t idmap_pipe_upcall(struct file *, struct rpc_pipe_msg *,
char __user *, size_t);
static ssize_t idmap_pipe_downcall(struct file *, const char __user *,
size_t);
static void idmap_pipe_destroy_msg(struct rpc_pipe_msg *);
static unsigned int fnvhash32(const void *, size_t);
static const struct rpc_pipe_ops idmap_upcall_ops = ;
int
nfs_idmap_new(struct nfs_client *clp)
void
nfs_idmap_delete(struct nfs_client *clp)
static inline struct idmap_hashent *
idmap_name_hash(struct idmap_hashtable* h, const char *name, size_t len)
static struct idmap_hashent *
idmap_lookup_name(struct idmap_hashtable *h, const char *name, size_t len)
static inline struct idmap_hashent *
idmap_id_hash(struct idmap_hashtable* h, __u32 id)
static struct idmap_hashent *
idmap_lookup_id(struct idmap_hashtable *h, __u32 id)
static inline struct idmap_hashent *
idmap_alloc_name(struct idmap_hashtable *h, char *name, size_t len)
static inline struct idmap_hashent *
idmap_alloc_id(struct idmap_hashtable *h, __u32 id)
static void
idmap_update_entry(struct idmap_hashent *he, const char *name,
size_t namelen, __u32 id)
static int
nfs_idmap_id(struct idmap *idmap, struct idmap_hashtable *h,
const char *name, size_t namelen, __u32 *id)
static int
nfs_idmap_name(struct idmap *idmap, struct idmap_hashtable *h,
__u32 id, char *name)
static ssize_t
idmap_pipe_upcall(struct file *filp, struct rpc_pipe_msg *msg,
char __user *dst, size_t buflen)
static ssize_t
idmap_pipe_downcall(struct file *filp, const char __user *src, size_t mlen)
static void
idmap_pipe_destroy_msg(struct rpc_pipe_msg *msg)
#define FNV_P_32 ((unsigned int)0x01000193)
#define FNV_1_32 ((unsigned int)0x811c9dc5)
static unsigned int fnvhash32(const void *buf, size_t buflen)
int nfs_map_name_to_uid(const struct nfs_server *server, const char *name, size_t namelen, __u32 *uid)
int nfs_map_group_to_gid(const struct nfs_server *server, const char *name, size_t namelen, __u32 *uid)
int nfs_map_uid_to_name(const struct nfs_server *server, __u32 uid, char *buf, size_t buflen)
int nfs_map_gid_to_group(const struct nfs_server *server, __u32 uid, char *buf, size_t buflen)
