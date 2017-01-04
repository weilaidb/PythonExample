#define NLMDBG_FACILITY		NLMDBG_SVCSUBS
#define FILE_HASH_BITS		7
#define FILE_NRHASH		(1<<FILE_HASH_BITS)
static struct hlist_head	nlm_files[FILE_NRHASH];
static DEFINE_MUTEX(nlm_file_mutex);
static inline void nlm_debug_print_fh(char *msg, struct nfs_fh *f)
static inline void nlm_debug_print_file(char *msg, struct nlm_file *file)
static inline void nlm_debug_print_fh(char *msg, struct nfs_fh *f)
static inline void nlm_debug_print_file(char *msg, struct nlm_file *file)
static inline unsigned int file_hash(struct nfs_fh *f)
__be32
nlm_lookup_file(struct svc_rqst *rqstp, struct nlm_file **result,
struct nfs_fh *f)
static inline void
nlm_delete_file(struct nlm_file *file)
static int
nlm_traverse_locks(struct nlm_host *host, struct nlm_file *file,
nlm_host_match_fn_t match)
static int
nlmsvc_always_match(void *dummy1, struct nlm_host *dummy2)
static inline int
nlm_inspect_file(struct nlm_host *host, struct nlm_file *file, nlm_host_match_fn_t match)
static inline int
nlm_file_inuse(struct nlm_file *file)
static int
nlm_traverse_files(void *data, nlm_host_match_fn_t match,
int (*is_failover_file)(void *data, struct nlm_file *file))
void
nlm_release_file(struct nlm_file *file)
static int
nlmsvc_mark_host(void *data, struct nlm_host *dummy)
static int
nlmsvc_same_host(void *data, struct nlm_host *other)
static int
nlmsvc_is_client(void *data, struct nlm_host *dummy)
void
nlmsvc_mark_resources(void)
void
nlmsvc_free_host_resources(struct nlm_host *host)
void
nlmsvc_invalidate_all(void)
static int
nlmsvc_match_sb(void *datap, struct nlm_file *file)
int
nlmsvc_unlock_all_by_sb(struct super_block *sb)
EXPORT_SYMBOL_GPL(nlmsvc_unlock_all_by_sb);
static int
nlmsvc_match_ip(void *datap, struct nlm_host *host)
int
nlmsvc_unlock_all_by_ip(struct sockaddr *server_addr)
EXPORT_SYMBOL_GPL(nlmsvc_unlock_all_by_ip);
