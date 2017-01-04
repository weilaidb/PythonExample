#define NLMDBG_FACILITY		NLMDBG_HOSTCACHE
#define NLM_HOST_NRHASH		32
#define NLM_HOST_REBIND		(60 * HZ)
#define NLM_HOST_EXPIRE		(300 * HZ)
#define NLM_HOST_COLLECT	(120 * HZ)
static struct hlist_head	nlm_server_hosts[NLM_HOST_NRHASH];
static struct hlist_head	nlm_client_hosts[NLM_HOST_NRHASH];
#define for_each_host(host, pos, chain, table) \
for ((chain) = (table); \
(chain) < (table) + NLM_HOST_NRHASH; ++(chain)) \
hlist_for_each_entry((host), (pos), (chain), h_hash)
#define for_each_host_safe(host, pos, next, chain, table) \
for ((chain) = (table); \
(chain) < (table) + NLM_HOST_NRHASH; ++(chain)) \
hlist_for_each_entry_safe((host), (pos), (next), \
(chain), h_hash)
static unsigned long		next_gc;
static unsigned long		nrhosts;
static DEFINE_MUTEX(nlm_host_mutex);
static void			nlm_gc_hosts(void);
struct nlm_lookup_host_info ;
static unsigned int __nlm_hash32(const __be32 n)
static unsigned int __nlm_hash_addr4(const struct sockaddr *sap)
static unsigned int __nlm_hash_addr6(const struct sockaddr *sap)
static unsigned int nlm_hash_address(const struct sockaddr *sap)
static struct nlm_host *nlm_alloc_host(struct nlm_lookup_host_info *ni,
struct nsm_handle *nsm)
static void nlm_destroy_host_locked(struct nlm_host *host)
struct nlm_host *nlmclnt_lookup_host(const struct sockaddr *sap,
const size_t salen,
const unsigned short protocol,
const u32 version,
const char *hostname,
int noresvport)
void nlmclnt_release_host(struct nlm_host *host)
struct nlm_host *nlmsvc_lookup_host(const struct svc_rqst *rqstp,
const char *hostname,
const size_t hostname_len)
void nlmsvc_release_host(struct nlm_host *host)
struct rpc_clnt *
nlm_bind_host(struct nlm_host *host)
void
nlm_rebind_host(struct nlm_host *host)
struct nlm_host * nlm_get_host(struct nlm_host *host)
static struct nlm_host *next_host_state(struct hlist_head *cache,
struct nsm_handle *nsm,
const struct nlm_reboot *info)
void nlm_host_rebooted(const struct nlm_reboot *info)
void
nlm_shutdown_hosts(void)
static void
nlm_gc_hosts(void)
