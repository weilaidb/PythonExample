DEFINE_MUTEX(xfrm_cfg_mutex);
EXPORT_SYMBOL(xfrm_cfg_mutex);
static DEFINE_SPINLOCK(xfrm_policy_sk_bundle_lock);
static struct dst_entry *xfrm_policy_sk_bundles;
static DEFINE_RWLOCK(xfrm_policy_lock);
static DEFINE_RWLOCK(xfrm_policy_afinfo_lock);
static struct xfrm_policy_afinfo *xfrm_policy_afinfo[NPROTO];
static struct kmem_cache *xfrm_dst_cache __read_mostly;
static struct xfrm_policy_afinfo *xfrm_policy_get_afinfo(unsigned short family);
static void xfrm_policy_put_afinfo(struct xfrm_policy_afinfo *afinfo);
static void xfrm_init_pmtu(struct dst_entry *dst);
static int stale_bundle(struct dst_entry *dst);
static int xfrm_bundle_ok(struct xfrm_dst *xdst);
static struct xfrm_policy *__xfrm_policy_unlink(struct xfrm_policy *pol,
int dir);
static inline int
__xfrm4_selector_match(const struct xfrm_selector *sel, const struct flowi *fl)
static inline int
__xfrm6_selector_match(const struct xfrm_selector *sel, const struct flowi *fl)
int xfrm_selector_match(const struct xfrm_selector *sel, const struct flowi *fl,
unsigned short family)
static inline struct dst_entry *__xfrm_dst_lookup(struct net *net, int tos,
const xfrm_address_t *saddr,
const xfrm_address_t *daddr,
int family)
static inline struct dst_entry *xfrm_dst_lookup(struct xfrm_state *x, int tos,
xfrm_address_t *prev_saddr,
xfrm_address_t *prev_daddr,
int family)
static inline unsigned long make_jiffies(long secs)
static void xfrm_policy_timer(unsigned long data)
static struct flow_cache_object *xfrm_policy_flo_get(struct flow_cache_object *flo)
static int xfrm_policy_flo_check(struct flow_cache_object *flo)
static void xfrm_policy_flo_delete(struct flow_cache_object *flo)
static const struct flow_cache_ops xfrm_policy_fc_ops = ;
struct xfrm_policy *xfrm_policy_alloc(struct net *net, gfp_t gfp)
EXPORT_SYMBOL(xfrm_policy_alloc);
void xfrm_policy_destroy(struct xfrm_policy *policy)
EXPORT_SYMBOL(xfrm_policy_destroy);
static void xfrm_policy_kill(struct xfrm_policy *policy)
static unsigned int xfrm_policy_hashmax __read_mostly = 1 * 1024 * 1024;
static inline unsigned int idx_hash(struct net *net, u32 index)
static struct hlist_head *policy_hash_bysel(struct net *net,
const struct xfrm_selector *sel,
unsigned short family, int dir)
static struct hlist_head *policy_hash_direct(struct net *net,
const xfrm_address_t *daddr,
const xfrm_address_t *saddr,
unsigned short family, int dir)
static void xfrm_dst_hash_transfer(struct hlist_head *list,
struct hlist_head *ndsttable,
unsigned int nhashmask)
static void xfrm_idx_hash_transfer(struct hlist_head *list,
struct hlist_head *nidxtable,
unsigned int nhashmask)
static unsigned long xfrm_new_hash_mask(unsigned int old_hmask)
static void xfrm_bydst_resize(struct net *net, int dir)
static void xfrm_byidx_resize(struct net *net, int total)
static inline int xfrm_bydst_should_resize(struct net *net, int dir, int *total)
static inline int xfrm_byidx_should_resize(struct net *net, int total)
void xfrm_spd_getinfo(struct net *net, struct xfrmk_spdinfo *si)
EXPORT_SYMBOL(xfrm_spd_getinfo);
static DEFINE_MUTEX(hash_resize_mutex);
static void xfrm_hash_resize(struct work_struct *work)
static u32 xfrm_gen_index(struct net *net, int dir)
static inline int selector_cmp(struct xfrm_selector *s1, struct xfrm_selector *s2)
int xfrm_policy_insert(int dir, struct xfrm_policy *policy, int excl)
EXPORT_SYMBOL(xfrm_policy_insert);
struct xfrm_policy *xfrm_policy_bysel_ctx(struct net *net, u32 mark, u8 type,
int dir, struct xfrm_selector *sel,
struct xfrm_sec_ctx *ctx, int delete,
int *err)
EXPORT_SYMBOL(xfrm_policy_bysel_ctx);
struct xfrm_policy *xfrm_policy_byid(struct net *net, u32 mark, u8 type,
int dir, u32 id, int delete, int *err)
EXPORT_SYMBOL(xfrm_policy_byid);
static inline int
xfrm_policy_flush_secctx_check(struct net *net, u8 type, struct xfrm_audit *audit_info)
static inline int
xfrm_policy_flush_secctx_check(struct net *net, u8 type, struct xfrm_audit *audit_info)
int xfrm_policy_flush(struct net *net, u8 type, struct xfrm_audit *audit_info)
EXPORT_SYMBOL(xfrm_policy_flush);
int xfrm_policy_walk(struct net *net, struct xfrm_policy_walk *walk,
int (*func)(struct xfrm_policy *, int, int, void*),
void *data)
EXPORT_SYMBOL(xfrm_policy_walk);
void xfrm_policy_walk_init(struct xfrm_policy_walk *walk, u8 type)
EXPORT_SYMBOL(xfrm_policy_walk_init);
void xfrm_policy_walk_done(struct xfrm_policy_walk *walk)
EXPORT_SYMBOL(xfrm_policy_walk_done);
static int xfrm_policy_match(const struct xfrm_policy *pol,
const struct flowi *fl,
u8 type, u16 family, int dir)
static struct xfrm_policy *xfrm_policy_lookup_bytype(struct net *net, u8 type,
const struct flowi *fl,
u16 family, u8 dir)
static struct xfrm_policy *
__xfrm_policy_lookup(struct net *net, const struct flowi *fl, u16 family, u8 dir)
static struct flow_cache_object *
xfrm_policy_lookup(struct net *net, const struct flowi *fl, u16 family,
u8 dir, struct flow_cache_object *old_obj, void *ctx)
static inline int policy_to_flow_dir(int dir)
static struct xfrm_policy *xfrm_sk_policy_lookup(struct sock *sk, int dir,
const struct flowi *fl)
static void __xfrm_policy_link(struct xfrm_policy *pol, int dir)
static struct xfrm_policy *__xfrm_policy_unlink(struct xfrm_policy *pol,
int dir)
int xfrm_policy_delete(struct xfrm_policy *pol, int dir)
EXPORT_SYMBOL(xfrm_policy_delete);
int xfrm_sk_policy_insert(struct sock *sk, int dir, struct xfrm_policy *pol)
static struct xfrm_policy *clone_policy(const struct xfrm_policy *old, int dir)
int __xfrm_sk_clone_policy(struct sock *sk)
static int
xfrm_get_saddr(struct net *net, xfrm_address_t *local, xfrm_address_t *remote,
unsigned short family)
static int
xfrm_tmpl_resolve_one(struct xfrm_policy *policy, const struct flowi *fl,
struct xfrm_state **xfrm, unsigned short family)
static int
xfrm_tmpl_resolve(struct xfrm_policy **pols, int npols, const struct flowi *fl,
struct xfrm_state **xfrm, unsigned short family)
static inline int xfrm_get_tos(const struct flowi *fl, int family)
static struct flow_cache_object *xfrm_bundle_flo_get(struct flow_cache_object *flo)
static int xfrm_bundle_flo_check(struct flow_cache_object *flo)
static void xfrm_bundle_flo_delete(struct flow_cache_object *flo)
static const struct flow_cache_ops xfrm_bundle_fc_ops = ;
static inline struct xfrm_dst *xfrm_alloc_dst(struct net *net, int family)
static inline int xfrm_init_path(struct xfrm_dst *path, struct dst_entry *dst,
int nfheader_len)
static inline int xfrm_fill_dst(struct xfrm_dst *xdst, struct net_device *dev,
const struct flowi *fl)
static struct dst_entry *xfrm_bundle_create(struct xfrm_policy *policy,
struct xfrm_state **xfrm, int nx,
const struct flowi *fl,
struct dst_entry *dst)
static int inline
xfrm_dst_alloc_copy(void **target, const void *src, int size)
static int inline
xfrm_dst_update_parent(struct dst_entry *dst, const struct xfrm_selector *sel)
static int inline
xfrm_dst_update_origin(struct dst_entry *dst, const struct flowi *fl)
static int xfrm_expand_policies(const struct flowi *fl, u16 family,
struct xfrm_policy **pols,
int *num_pols, int *num_xfrms)
static struct xfrm_dst *
xfrm_resolve_and_create_bundle(struct xfrm_policy **pols, int num_pols,
const struct flowi *fl, u16 family,
struct dst_entry *dst_orig)
static struct flow_cache_object *
xfrm_bundle_lookup(struct net *net, const struct flowi *fl, u16 family, u8 dir,
struct flow_cache_object *oldflo, void *ctx)
static struct dst_entry *make_blackhole(struct net *net, u16 family,
struct dst_entry *dst_orig)
struct dst_entry *xfrm_lookup(struct net *net, struct dst_entry *dst_orig,
const struct flowi *fl,
struct sock *sk, int flags)
EXPORT_SYMBOL(xfrm_lookup);
static inline int
xfrm_secpath_reject(int idx, struct sk_buff *skb, const struct flowi *fl)
static inline int
xfrm_state_ok(const struct xfrm_tmpl *tmpl, const struct xfrm_state *x,
unsigned short family)
static inline int
xfrm_policy_ok(const struct xfrm_tmpl *tmpl, const struct sec_path *sp, int start,
unsigned short family)
int __xfrm_decode_session(struct sk_buff *skb, struct flowi *fl,
unsigned int family, int reverse)
EXPORT_SYMBOL(__xfrm_decode_session);
static inline int secpath_has_nontransport(const struct sec_path *sp, int k, int *idxp)
int __xfrm_policy_check(struct sock *sk, int dir, struct sk_buff *skb,
unsigned short family)
EXPORT_SYMBOL(__xfrm_policy_check);
int __xfrm_route_forward(struct sk_buff *skb, unsigned short family)
EXPORT_SYMBOL(__xfrm_route_forward);
static struct dst_entry *xfrm_dst_check(struct dst_entry *dst, u32 cookie)
static int stale_bundle(struct dst_entry *dst)
void xfrm_dst_ifdown(struct dst_entry *dst, struct net_device *dev)
EXPORT_SYMBOL(xfrm_dst_ifdown);
static void xfrm_link_failure(struct sk_buff *skb)
static struct dst_entry *xfrm_negative_advice(struct dst_entry *dst)
static void __xfrm_garbage_collect(struct net *net)
static void xfrm_init_pmtu(struct dst_entry *dst)
static int xfrm_bundle_ok(struct xfrm_dst *first)
static unsigned int xfrm_default_advmss(const struct dst_entry *dst)
static unsigned int xfrm_default_mtu(const struct dst_entry *dst)
int xfrm_policy_register_afinfo(struct xfrm_policy_afinfo *afinfo)
EXPORT_SYMBOL(xfrm_policy_register_afinfo);
int xfrm_policy_unregister_afinfo(struct xfrm_policy_afinfo *afinfo)
EXPORT_SYMBOL(xfrm_policy_unregister_afinfo);
static void __net_init xfrm_dst_ops_init(struct net *net)
static struct xfrm_policy_afinfo *xfrm_policy_get_afinfo(unsigned short family)
static void xfrm_policy_put_afinfo(struct xfrm_policy_afinfo *afinfo)
static int xfrm_dev_event(struct notifier_block *this, unsigned long event, void *ptr)
static struct notifier_block xfrm_dev_notifier = ;
static int __net_init xfrm_statistics_init(struct net *net)
static void xfrm_statistics_fini(struct net *net)
static int __net_init xfrm_statistics_init(struct net *net)
static void xfrm_statistics_fini(struct net *net)
static int __net_init xfrm_policy_init(struct net *net)
static void xfrm_policy_fini(struct net *net)
static int __net_init xfrm_net_init(struct net *net)
static void __net_exit xfrm_net_exit(struct net *net)
static struct pernet_operations __net_initdata xfrm_net_ops = ;
void __init xfrm_init(void)
static void xfrm_audit_common_policyinfo(struct xfrm_policy *xp,
struct audit_buffer *audit_buf)
void xfrm_audit_policy_add(struct xfrm_policy *xp, int result,
uid_t auid, u32 sessionid, u32 secid)
EXPORT_SYMBOL_GPL(xfrm_audit_policy_add);
void xfrm_audit_policy_delete(struct xfrm_policy *xp, int result,
uid_t auid, u32 sessionid, u32 secid)
EXPORT_SYMBOL_GPL(xfrm_audit_policy_delete);
static int xfrm_migrate_selector_match(const struct xfrm_selector *sel_cmp,
const struct xfrm_selector *sel_tgt)
static struct xfrm_policy * xfrm_migrate_policy_find(const struct xfrm_selector *sel,
u8 dir, u8 type)
static int migrate_tmpl_match(const struct xfrm_migrate *m, const struct xfrm_tmpl *t)
static int xfrm_policy_migrate(struct xfrm_policy *pol,
struct xfrm_migrate *m, int num_migrate)
static int xfrm_migrate_check(const struct xfrm_migrate *m, int num_migrate)
int xfrm_migrate(const struct xfrm_selector *sel, u8 dir, u8 type,
struct xfrm_migrate *m, int num_migrate,
struct xfrm_kmaddress *k)
EXPORT_SYMBOL(xfrm_migrate);
