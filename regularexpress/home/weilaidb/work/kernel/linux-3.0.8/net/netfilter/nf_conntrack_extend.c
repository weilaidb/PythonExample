static struct nf_ct_ext_type __rcu *nf_ct_ext_types[NF_CT_EXT_NUM];
static DEFINE_MUTEX(nf_ct_ext_type_mutex);
void __nf_ct_ext_destroy(struct nf_conn *ct)
EXPORT_SYMBOL(__nf_ct_ext_destroy);
static void *
nf_ct_ext_create(struct nf_ct_ext **ext, enum nf_ct_ext_id id, gfp_t gfp)
void *__nf_ct_ext_add(struct nf_conn *ct, enum nf_ct_ext_id id, gfp_t gfp)
EXPORT_SYMBOL(__nf_ct_ext_add);
static void update_alloc_size(struct nf_ct_ext_type *type)
int nf_ct_extend_register(struct nf_ct_ext_type *type)
EXPORT_SYMBOL_GPL(nf_ct_extend_register);
void nf_ct_extend_unregister(struct nf_ct_ext_type *type)
EXPORT_SYMBOL_GPL(nf_ct_extend_unregister);
