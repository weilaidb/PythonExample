static DEFINE_SPINLOCK(xfrm_state_lock);
static unsigned int xfrm_state_hashmax __read_mostly = 1 * 1024 * 1024;
static struct xfrm_state_afinfo *xfrm_state_get_afinfo(unsigned int family);
static void xfrm_state_put_afinfo(struct xfrm_state_afinfo *afinfo);
static inline unsigned int xfrm_dst_hash(struct net *net,
const xfrm_address_t *daddr,
const xfrm_address_t *saddr,
u32 reqid,
unsigned short family)
static inline unsigned int xfrm_src_hash(struct net *net,
const xfrm_address_t *daddr,
const xfrm_address_t *saddr,
unsigned short family)
static inline unsigned int
xfrm_spi_hash(struct net *net, const xfrm_address_t *daddr,
__be32 spi, u8 proto, unsigned short family)
static void xfrm_hash_transfer(struct hlist_head *list,
struct hlist_head *ndsttable,
struct hlist_head *nsrctable,
struct hlist_head *nspitable,
unsigned int nhashmask)
static unsigned long xfrm_hash_new_size(unsigned int state_hmask)
static DEFINE_MUTEX(hash_resize_mutex);
static void xfrm_hash_resize(struct work_struct *work)
static DEFINE_RWLOCK(xfrm_state_afinfo_lock);
static struct xfrm_state_afinfo *xfrm_state_afinfo[NPROTO];
static DEFINE_SPINLOCK(xfrm_state_gc_lock);
int __xfrm_state_delete(struct xfrm_state *x);
int km_query(struct xfrm_state *x, struct xfrm_tmpl *t, struct xfrm_policy *pol);
void km_state_expired(struct xfrm_state *x, int hard, u32 pid);
static struct xfrm_state_afinfo *xfrm_state_lock_afinfo(unsigned int family)
static void xfrm_state_unlock_afinfo(struct xfrm_state_afinfo *afinfo)
__releases(xfrm_state_afinfo_lock)
int xfrm_register_type(const struct xfrm_type *type, unsigned short family)
EXPORT_SYMBOL(xfrm_register_type);
int xfrm_unregister_type(const struct xfrm_type *type, unsigned short family)
EXPORT_SYMBOL(xfrm_unregister_type);
static const struct xfrm_type *xfrm_get_type(u8 proto, unsigned short family)
static void xfrm_put_type(const struct xfrm_type *type)
int xfrm_register_mode(struct xfrm_mode *mode, int family)
EXPORT_SYMBOL(xfrm_register_mode);
int xfrm_unregister_mode(struct xfrm_mode *mode, int family)
EXPORT_SYMBOL(xfrm_unregister_mode);
static struct xfrm_mode *xfrm_get_mode(unsigned int encap, int family)
static void xfrm_put_mode(struct xfrm_mode *mode)
static void xfrm_state_gc_destroy(struct xfrm_state *x)
static void xfrm_state_gc_task(struct work_struct *work)
static inline unsigned long make_jiffies(long secs)
static enum hrtimer_restart xfrm_timer_handler(struct hrtimer * me)
static void xfrm_replay_timer_handler(unsigned long data);
struct xfrm_state *xfrm_state_alloc(struct net *net)
EXPORT_SYMBOL(xfrm_state_alloc);
void __xfrm_state_destroy(struct xfrm_state *x)
EXPORT_SYMBOL(__xfrm_state_destroy);
int __xfrm_state_delete(struct xfrm_state *x)
EXPORT_SYMBOL(__xfrm_state_delete);
int xfrm_state_delete(struct xfrm_state *x)
EXPORT_SYMBOL(xfrm_state_delete);
static inline int
xfrm_state_flush_secctx_check(struct net *net, u8 proto, struct xfrm_audit *audit_info)
static inline int
xfrm_state_flush_secctx_check(struct net *net, u8 proto, struct xfrm_audit *audit_info)
int xfrm_state_flush(struct net *net, u8 proto, struct xfrm_audit *audit_info)
EXPORT_SYMBOL(xfrm_state_flush);
void xfrm_sad_getinfo(struct net *net, struct xfrmk_sadinfo *si)
EXPORT_SYMBOL(xfrm_sad_getinfo);
static int
xfrm_init_tempstate(struct xfrm_state *x, const struct flowi *fl,
const struct xfrm_tmpl *tmpl,
const xfrm_address_t *daddr, const xfrm_address_t *saddr,
unsigned short family)
static struct xfrm_state *__xfrm_state_lookup(struct net *net, u32 mark,
const xfrm_address_t *daddr,
__be32 spi, u8 proto,
unsigned short family)
static struct xfrm_state *__xfrm_state_lookup_byaddr(struct net *net, u32 mark,
const xfrm_address_t *daddr,
const xfrm_address_t *saddr,
u8 proto, unsigned short family)
static inline struct xfrm_state *
__xfrm_state_locate(struct xfrm_state *x, int use_spi, int family)
static void xfrm_hash_grow_check(struct net *net, int have_hash_collision)
static void xfrm_state_look_at(struct xfrm_policy *pol, struct xfrm_state *x,
const struct flowi *fl, unsigned short family,
struct xfrm_state **best, int *acq_in_progress,
int *error)
struct xfrm_state *
xfrm_state_find(const xfrm_address_t *daddr, const xfrm_address_t *saddr,
const struct flowi *fl, struct xfrm_tmpl *tmpl,
struct xfrm_policy *pol, int *err,
unsigned short family)
struct xfrm_state *
xfrm_stateonly_find(struct net *net, u32 mark,
xfrm_address_t *daddr, xfrm_address_t *saddr,
unsigned short family, u8 mode, u8 proto, u32 reqid)
EXPORT_SYMBOL(xfrm_stateonly_find);
static void __xfrm_state_insert(struct xfrm_state *x)
static void __xfrm_state_bump_genids(struct xfrm_state *xnew)
void xfrm_state_insert(struct xfrm_state *x)
EXPORT_SYMBOL(xfrm_state_insert);
static struct xfrm_state *__find_acq_core(struct net *net, struct xfrm_mark *m,
unsigned short family, u8 mode,
u32 reqid, u8 proto,
const xfrm_address_t *daddr,
const xfrm_address_t *saddr, int create)
static struct xfrm_state *__xfrm_find_acq_byseq(struct net *net, u32 mark, u32 seq);
int xfrm_state_add(struct xfrm_state *x)
EXPORT_SYMBOL(xfrm_state_add);
static struct xfrm_state *xfrm_state_clone(struct xfrm_state *orig, int *errp)
struct xfrm_state * xfrm_migrate_state_find(struct xfrm_migrate *m)
EXPORT_SYMBOL(xfrm_migrate_state_find);
struct xfrm_state * xfrm_state_migrate(struct xfrm_state *x,
struct xfrm_migrate *m)
EXPORT_SYMBOL(xfrm_state_migrate);
int xfrm_state_update(struct xfrm_state *x)
EXPORT_SYMBOL(xfrm_state_update);
int xfrm_state_check_expire(struct xfrm_state *x)
EXPORT_SYMBOL(xfrm_state_check_expire);
struct xfrm_state *
xfrm_state_lookup(struct net *net, u32 mark, const xfrm_address_t *daddr, __be32 spi,
u8 proto, unsigned short family)
EXPORT_SYMBOL(xfrm_state_lookup);
struct xfrm_state *
xfrm_state_lookup_byaddr(struct net *net, u32 mark,
const xfrm_address_t *daddr, const xfrm_address_t *saddr,
u8 proto, unsigned short family)
EXPORT_SYMBOL(xfrm_state_lookup_byaddr);
struct xfrm_state *
xfrm_find_acq(struct net *net, struct xfrm_mark *mark, u8 mode, u32 reqid, u8 proto,
const xfrm_address_t *daddr, const xfrm_address_t *saddr,
int create, unsigned short family)
EXPORT_SYMBOL(xfrm_find_acq);
int
xfrm_tmpl_sort(struct xfrm_tmpl **dst, struct xfrm_tmpl **src, int n,
unsigned short family)
EXPORT_SYMBOL(xfrm_tmpl_sort);
int
xfrm_state_sort(struct xfrm_state **dst, struct xfrm_state **src, int n,
unsigned short family)
EXPORT_SYMBOL(xfrm_state_sort);
static struct xfrm_state *__xfrm_find_acq_byseq(struct net *net, u32 mark, u32 seq)
struct xfrm_state *xfrm_find_acq_byseq(struct net *net, u32 mark, u32 seq)
EXPORT_SYMBOL(xfrm_find_acq_byseq);
u32 xfrm_get_acqseq(void)
EXPORT_SYMBOL(xfrm_get_acqseq);
int xfrm_alloc_spi(struct xfrm_state *x, u32 low, u32 high)
EXPORT_SYMBOL(xfrm_alloc_spi);
int xfrm_state_walk(struct net *net, struct xfrm_state_walk *walk,
int (*func)(struct xfrm_state *, int, void*),
void *data)
EXPORT_SYMBOL(xfrm_state_walk);
void xfrm_state_walk_init(struct xfrm_state_walk *walk, u8 proto)
EXPORT_SYMBOL(xfrm_state_walk_init);
void xfrm_state_walk_done(struct xfrm_state_walk *walk)
EXPORT_SYMBOL(xfrm_state_walk_done);
static void xfrm_replay_timer_handler(unsigned long data)
static LIST_HEAD(xfrm_km_list);
static DEFINE_RWLOCK(xfrm_km_lock);
void km_policy_notify(struct xfrm_policy *xp, int dir, const struct km_event *c)
void km_state_notify(struct xfrm_state *x, const struct km_event *c)
EXPORT_SYMBOL(km_policy_notify);
EXPORT_SYMBOL(km_state_notify);
void km_state_expired(struct xfrm_state *x, int hard, u32 pid)
EXPORT_SYMBOL(km_state_expired);
int km_query(struct xfrm_state *x, struct xfrm_tmpl *t, struct xfrm_policy *pol)
EXPORT_SYMBOL(km_query);
int km_new_mapping(struct xfrm_state *x, xfrm_address_t *ipaddr, __be16 sport)
EXPORT_SYMBOL(km_new_mapping);
void km_policy_expired(struct xfrm_policy *pol, int dir, int hard, u32 pid)
EXPORT_SYMBOL(km_policy_expired);
int km_migrate(const struct xfrm_selector *sel, u8 dir, u8 type,
const struct xfrm_migrate *m, int num_migrate,
const struct xfrm_kmaddress *k)
EXPORT_SYMBOL(km_migrate);
int km_report(struct net *net, u8 proto, struct xfrm_selector *sel, xfrm_address_t *addr)
EXPORT_SYMBOL(km_report);
int xfrm_user_policy(struct sock *sk, int optname, u8 __user *optval, int optlen)
EXPORT_SYMBOL(xfrm_user_policy);
int xfrm_register_km(struct xfrm_mgr *km)
EXPORT_SYMBOL(xfrm_register_km);
int xfrm_unregister_km(struct xfrm_mgr *km)
EXPORT_SYMBOL(xfrm_unregister_km);
int xfrm_state_register_afinfo(struct xfrm_state_afinfo *afinfo)
EXPORT_SYMBOL(xfrm_state_register_afinfo);
int xfrm_state_unregister_afinfo(struct xfrm_state_afinfo *afinfo)
EXPORT_SYMBOL(xfrm_state_unregister_afinfo);
static struct xfrm_state_afinfo *xfrm_state_get_afinfo(unsigned int family)
static void xfrm_state_put_afinfo(struct xfrm_state_afinfo *afinfo)
__releases(xfrm_state_afinfo_lock)
void xfrm_state_delete_tunnel(struct xfrm_state *x)
EXPORT_SYMBOL(xfrm_state_delete_tunnel);
int xfrm_state_mtu(struct xfrm_state *x, int mtu)
int __xfrm_init_state(struct xfrm_state *x, bool init_replay)
EXPORT_SYMBOL(__xfrm_init_state);
int xfrm_init_state(struct xfrm_state *x)
EXPORT_SYMBOL(xfrm_init_state);
int __net_init xfrm_state_init(struct net *net)
void xfrm_state_fini(struct net *net)
static void xfrm_audit_helper_sainfo(struct xfrm_state *x,
struct audit_buffer *audit_buf)
static void xfrm_audit_helper_pktinfo(struct sk_buff *skb, u16 family,
struct audit_buffer *audit_buf)
void xfrm_audit_state_add(struct xfrm_state *x, int result,
uid_t auid, u32 sessionid, u32 secid)
EXPORT_SYMBOL_GPL(xfrm_audit_state_add);
void xfrm_audit_state_delete(struct xfrm_state *x, int result,
uid_t auid, u32 sessionid, u32 secid)
EXPORT_SYMBOL_GPL(xfrm_audit_state_delete);
void xfrm_audit_state_replay_overflow(struct xfrm_state *x,
struct sk_buff *skb)
EXPORT_SYMBOL_GPL(xfrm_audit_state_replay_overflow);
void xfrm_audit_state_replay(struct xfrm_state *x,
struct sk_buff *skb, __be32 net_seq)
EXPORT_SYMBOL_GPL(xfrm_audit_state_replay);
void xfrm_audit_state_notfound_simple(struct sk_buff *skb, u16 family)
EXPORT_SYMBOL_GPL(xfrm_audit_state_notfound_simple);
void xfrm_audit_state_notfound(struct sk_buff *skb, u16 family,
__be32 net_spi, __be32 net_seq)
EXPORT_SYMBOL_GPL(xfrm_audit_state_notfound);
void xfrm_audit_state_icvfail(struct xfrm_state *x,
struct sk_buff *skb, u8 proto)
EXPORT_SYMBOL_GPL(xfrm_audit_state_icvfail);
