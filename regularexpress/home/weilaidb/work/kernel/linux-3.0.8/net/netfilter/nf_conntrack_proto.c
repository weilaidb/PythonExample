static struct nf_conntrack_l4proto __rcu **nf_ct_protos[PF_MAX] __read_mostly;
struct nf_conntrack_l3proto __rcu *nf_ct_l3protos[AF_MAX] __read_mostly;
EXPORT_SYMBOL_GPL(nf_ct_l3protos);
static DEFINE_MUTEX(nf_ct_proto_mutex);
static int
nf_ct_register_sysctl(struct ctl_table_header **header, struct ctl_path *path,
struct ctl_table *table, unsigned int *users)
static void
nf_ct_unregister_sysctl(struct ctl_table_header **header,
struct ctl_table *table, unsigned int *users)
struct nf_conntrack_l4proto *
__nf_ct_l4proto_find(u_int16_t l3proto, u_int8_t l4proto)
EXPORT_SYMBOL_GPL(__nf_ct_l4proto_find);
struct nf_conntrack_l3proto *
nf_ct_l3proto_find_get(u_int16_t l3proto)
EXPORT_SYMBOL_GPL(nf_ct_l3proto_find_get);
void nf_ct_l3proto_put(struct nf_conntrack_l3proto *p)
EXPORT_SYMBOL_GPL(nf_ct_l3proto_put);
int
nf_ct_l3proto_try_module_get(unsigned short l3proto)
EXPORT_SYMBOL_GPL(nf_ct_l3proto_try_module_get);
void nf_ct_l3proto_module_put(unsigned short l3proto)
EXPORT_SYMBOL_GPL(nf_ct_l3proto_module_put);
static int kill_l3proto(struct nf_conn *i, void *data)
static int kill_l4proto(struct nf_conn *i, void *data)
static int nf_ct_l3proto_register_sysctl(struct nf_conntrack_l3proto *l3proto)
static void nf_ct_l3proto_unregister_sysctl(struct nf_conntrack_l3proto *l3proto)
int nf_conntrack_l3proto_register(struct nf_conntrack_l3proto *proto)
EXPORT_SYMBOL_GPL(nf_conntrack_l3proto_register);
void nf_conntrack_l3proto_unregister(struct nf_conntrack_l3proto *proto)
EXPORT_SYMBOL_GPL(nf_conntrack_l3proto_unregister);
static int nf_ct_l4proto_register_sysctl(struct nf_conntrack_l4proto *l4proto)
static void nf_ct_l4proto_unregister_sysctl(struct nf_conntrack_l4proto *l4proto)
int nf_conntrack_l4proto_register(struct nf_conntrack_l4proto *l4proto)
EXPORT_SYMBOL_GPL(nf_conntrack_l4proto_register);
void nf_conntrack_l4proto_unregister(struct nf_conntrack_l4proto *l4proto)
EXPORT_SYMBOL_GPL(nf_conntrack_l4proto_unregister);
int nf_conntrack_proto_init(void)
void nf_conntrack_proto_fini(void)
