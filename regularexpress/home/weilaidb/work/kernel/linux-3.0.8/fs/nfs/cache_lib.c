#define NFS_CACHE_UPCALL_PATHLEN 256
#define NFS_CACHE_UPCALL_TIMEOUT 15
static char nfs_cache_getent_prog[NFS_CACHE_UPCALL_PATHLEN] =
"/sbin/nfs_cache_getent";
static unsigned long nfs_cache_getent_timeout = NFS_CACHE_UPCALL_TIMEOUT;
module_param_string(cache_getent, nfs_cache_getent_prog,
sizeof(nfs_cache_getent_prog), 0600);
MODULE_PARM_DESC(cache_getent, "Path to the client cache upcall program");
module_param_named(cache_getent_timeout, nfs_cache_getent_timeout, ulong, 0600);
MODULE_PARM_DESC(cache_getent_timeout, "Timeout (in seconds) after which "
"the cache upcall is assumed to have failed");
int nfs_cache_upcall(struct cache_detail *cd, char *entry_name)
void nfs_cache_defer_req_put(struct nfs_cache_defer_req *dreq)
static void nfs_dns_cache_revisit(struct cache_deferred_req *d, int toomany)
static struct cache_deferred_req *nfs_dns_cache_defer(struct cache_req *req)
struct nfs_cache_defer_req *nfs_cache_defer_req_alloc(void)
int nfs_cache_wait_for_upcall(struct nfs_cache_defer_req *dreq)
int nfs_cache_register(struct cache_detail *cd)
void nfs_cache_unregister(struct cache_detail *cd)
