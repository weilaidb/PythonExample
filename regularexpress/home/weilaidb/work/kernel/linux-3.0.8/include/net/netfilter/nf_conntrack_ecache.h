#define _NF_CONNTRACK_ECACHE_H
struct nf_conntrack_ecache ;
static inline struct nf_conntrack_ecache *
nf_ct_ecache_find(const struct nf_conn *ct)
static inline struct nf_conntrack_ecache *
nf_ct_ecache_ext_add(struct nf_conn *ct, u16 ctmask, u16 expmask, gfp_t gfp)
;
struct nf_ct_event ;
struct nf_ct_event_notifier ;
extern struct nf_ct_event_notifier __rcu *nf_conntrack_event_cb;
extern int nf_conntrack_register_notifier(struct nf_ct_event_notifier *nb);
extern void nf_conntrack_unregister_notifier(struct nf_ct_event_notifier *nb);
extern void nf_ct_deliver_cached_events(struct nf_conn *ct);
static inline void
nf_conntrack_event_cache(enum ip_conntrack_events event, struct nf_conn *ct)
static inline int
nf_conntrack_eventmask_report(unsigned int eventmask,
struct nf_conn *ct,
u32 pid,
int report)
static inline int
nf_conntrack_event_report(enum ip_conntrack_events event, struct nf_conn *ct,
u32 pid, int report)
static inline int
nf_conntrack_event(enum ip_conntrack_events event, struct nf_conn *ct)
struct nf_exp_event ;
struct nf_exp_event_notifier ;
extern struct nf_exp_event_notifier __rcu *nf_expect_event_cb;
extern int nf_ct_expect_register_notifier(struct nf_exp_event_notifier *nb);
extern void nf_ct_expect_unregister_notifier(struct nf_exp_event_notifier *nb);
static inline void
nf_ct_expect_event_report(enum ip_conntrack_expect_events event,
struct nf_conntrack_expect *exp,
u32 pid,
int report)
static inline void
nf_ct_expect_event(enum ip_conntrack_expect_events event,
struct nf_conntrack_expect *exp)
extern int nf_conntrack_ecache_init(struct net *net);
extern void nf_conntrack_ecache_fini(struct net *net);
static inline void nf_conntrack_event_cache(enum ip_conntrack_events event,
struct nf_conn *ct)
static inline int nf_conntrack_eventmask_report(unsigned int eventmask,
struct nf_conn *ct,
u32 pid,
int report)
static inline int nf_conntrack_event(enum ip_conntrack_events event,
struct nf_conn *ct)
static inline int nf_conntrack_event_report(enum ip_conntrack_events event,
struct nf_conn *ct,
u32 pid,
int report)
static inline void nf_ct_deliver_cached_events(const struct nf_conn *ct)
static inline void nf_ct_expect_event(enum ip_conntrack_expect_events event,
struct nf_conntrack_expect *exp)
static inline void nf_ct_expect_event_report(enum ip_conntrack_expect_events e,
struct nf_conntrack_expect *exp,
u32 pid,
int report)
static inline int nf_conntrack_ecache_init(struct net *net)
static inline void nf_conntrack_ecache_fini(struct net *net)
