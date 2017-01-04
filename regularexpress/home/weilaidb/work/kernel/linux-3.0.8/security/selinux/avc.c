#define AVC_CACHE_SLOTS			512
#define AVC_DEF_CACHE_THRESHOLD		512
#define AVC_CACHE_RECLAIM		16
#define avc_cache_stats_incr(field)	this_cpu_inc(avc_cache_stats.field)
#define avc_cache_stats_incr(field)	do  while (0)
struct avc_entry ;
struct avc_node ;
struct avc_cache ;
struct avc_callback_node ;
unsigned int avc_cache_threshold = AVC_DEF_CACHE_THRESHOLD;
DEFINE_PER_CPU(struct avc_cache_stats, avc_cache_stats) = ;
static struct avc_cache avc_cache;
static struct avc_callback_node *avc_callbacks;
static struct kmem_cache *avc_node_cachep;
static inline int avc_hash(u32 ssid, u32 tsid, u16 tclass)
static void avc_dump_av(struct audit_buffer *ab, u16 tclass, u32 av)
static void avc_dump_query(struct audit_buffer *ab, u32 ssid, u32 tsid, u16 tclass)
void __init avc_init(void)
int avc_get_hash_stats(char *page)
static void avc_node_free(struct rcu_head *rhead)
static void avc_node_delete(struct avc_node *node)
static void avc_node_kill(struct avc_node *node)
static void avc_node_replace(struct avc_node *new, struct avc_node *old)
static inline int avc_reclaim_node(void)
static struct avc_node *avc_alloc_node(void)
static void avc_node_populate(struct avc_node *node, u32 ssid, u32 tsid, u16 tclass, struct av_decision *avd)
static inline struct avc_node *avc_search_node(u32 ssid, u32 tsid, u16 tclass)
static struct avc_node *avc_lookup(u32 ssid, u32 tsid, u16 tclass)
static int avc_latest_notif_update(int seqno, int is_insert)
static struct avc_node *avc_insert(u32 ssid, u32 tsid, u16 tclass, struct av_decision *avd)
static void avc_audit_pre_callback(struct audit_buffer *ab, void *a)
static void avc_audit_post_callback(struct audit_buffer *ab, void *a)
int avc_audit(u32 ssid, u32 tsid,
u16 tclass, u32 requested,
struct av_decision *avd, int result, struct common_audit_data *a,
unsigned flags)
int avc_add_callback(int (*callback)(u32 event, u32 ssid, u32 tsid,
u16 tclass, u32 perms,
u32 *out_retained),
u32 events, u32 ssid, u32 tsid,
u16 tclass, u32 perms)
static inline int avc_sidcmp(u32 x, u32 y)
static int avc_update_node(u32 event, u32 perms, u32 ssid, u32 tsid, u16 tclass,
u32 seqno)
static void avc_flush(void)
int avc_ss_reset(u32 seqno)
int avc_has_perm_noaudit(u32 ssid, u32 tsid,
u16 tclass, u32 requested,
unsigned flags,
struct av_decision *avd)
int avc_has_perm_flags(u32 ssid, u32 tsid, u16 tclass,
u32 requested, struct common_audit_data *auditdata,
unsigned flags)
u32 avc_policy_seqno(void)
void avc_disable(void)
