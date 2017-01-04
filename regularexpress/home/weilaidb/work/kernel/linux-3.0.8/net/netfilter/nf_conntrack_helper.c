static DEFINE_MUTEX(nf_ct_helper_mutex);
static struct hlist_head *nf_ct_helper_hash __read_mostly;
static unsigned int nf_ct_helper_hsize __read_mostly;
static unsigned int nf_ct_helper_count __read_mostly;
static unsigned int helper_hash(const struct nf_conntrack_tuple *tuple)
static struct nf_conntrack_helper *
__nf_ct_helper_find(const struct nf_conntrack_tuple *tuple)
struct nf_conntrack_helper *
__nf_conntrack_helper_find(const char *name, u16 l3num, u8 protonum)
EXPORT_SYMBOL_GPL(__nf_conntrack_helper_find);
struct nf_conntrack_helper *
nf_conntrack_helper_try_module_get(const char *name, u16 l3num, u8 protonum)
EXPORT_SYMBOL_GPL(nf_conntrack_helper_try_module_get);
struct nf_conn_help *nf_ct_helper_ext_add(struct nf_conn *ct, gfp_t gfp)
EXPORT_SYMBOL_GPL(nf_ct_helper_ext_add);
int __nf_ct_try_assign_helper(struct nf_conn *ct, struct nf_conn *tmpl,
gfp_t flags)
EXPORT_SYMBOL_GPL(__nf_ct_try_assign_helper);
static inline int unhelp(struct nf_conntrack_tuple_hash *i,
const struct nf_conntrack_helper *me)
void nf_ct_helper_destroy(struct nf_conn *ct)
int nf_conntrack_helper_register(struct nf_conntrack_helper *me)
EXPORT_SYMBOL_GPL(nf_conntrack_helper_register);
static void __nf_conntrack_helper_unregister(struct nf_conntrack_helper *me,
struct net *net)
void nf_conntrack_helper_unregister(struct nf_conntrack_helper *me)
EXPORT_SYMBOL_GPL(nf_conntrack_helper_unregister);
static struct nf_ct_ext_type helper_extend __read_mostly = ;
int nf_conntrack_helper_init(void)
void nf_conntrack_helper_fini(void)
