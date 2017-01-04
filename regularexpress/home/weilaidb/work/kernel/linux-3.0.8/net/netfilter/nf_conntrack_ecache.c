static DEFINE_MUTEX(nf_ct_ecache_mutex);
struct nf_ct_event_notifier __rcu *nf_conntrack_event_cb __read_mostly;
EXPORT_SYMBOL_GPL(nf_conntrack_event_cb);
struct nf_exp_event_notifier __rcu *nf_expect_event_cb __read_mostly;
EXPORT_SYMBOL_GPL(nf_expect_event_cb);
void nf_ct_deliver_cached_events(struct nf_conn *ct)
EXPORT_SYMBOL_GPL(nf_ct_deliver_cached_events);
int nf_conntrack_register_notifier(struct nf_ct_event_notifier *new)
EXPORT_SYMBOL_GPL(nf_conntrack_register_notifier);
void nf_conntrack_unregister_notifier(struct nf_ct_event_notifier *new)
EXPORT_SYMBOL_GPL(nf_conntrack_unregister_notifier);
int nf_ct_expect_register_notifier(struct nf_exp_event_notifier *new)
EXPORT_SYMBOL_GPL(nf_ct_expect_register_notifier);
void nf_ct_expect_unregister_notifier(struct nf_exp_event_notifier *new)
EXPORT_SYMBOL_GPL(nf_ct_expect_unregister_notifier);
#define NF_CT_EVENTS_DEFAULT 1
static int nf_ct_events __read_mostly = NF_CT_EVENTS_DEFAULT;
static int nf_ct_events_retry_timeout __read_mostly = 15*HZ;
static struct ctl_table event_sysctl_table[] = ;
static struct nf_ct_ext_type event_extend __read_mostly = ;
static int nf_conntrack_event_init_sysctl(struct net *net)
static void nf_conntrack_event_fini_sysctl(struct net *net)
static int nf_conntrack_event_init_sysctl(struct net *net)
static void nf_conntrack_event_fini_sysctl(struct net *net)
int nf_conntrack_ecache_init(struct net *net)
void nf_conntrack_ecache_fini(struct net *net)
