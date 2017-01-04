#define NFSDBG_FACILITY		NFSDBG_FSCACHE
struct fscache_netfs nfs_fscache_netfs = ;
int nfs_fscache_register(void)
void nfs_fscache_unregister(void)
struct nfs_server_key ;
static uint16_t nfs_server_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
const struct fscache_cookie_def nfs_fscache_server_index_def = ;
static uint16_t nfs_super_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
const struct fscache_cookie_def nfs_fscache_super_index_def = ;
struct nfs_fscache_inode_auxdata ;
static uint16_t nfs_fscache_inode_get_key(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
static void nfs_fscache_inode_get_attr(const void *cookie_netfs_data,
uint64_t *size)
static uint16_t nfs_fscache_inode_get_aux(const void *cookie_netfs_data,
void *buffer, uint16_t bufmax)
static
enum fscache_checkaux nfs_fscache_inode_check_aux(void *cookie_netfs_data,
const void *data,
uint16_t datalen)
static void nfs_fscache_inode_now_uncached(void *cookie_netfs_data)
static void nfs_fh_get_context(void *cookie_netfs_data, void *context)
static void nfs_fh_put_context(void *cookie_netfs_data, void *context)
const struct fscache_cookie_def nfs_fscache_inode_object_def = ;
