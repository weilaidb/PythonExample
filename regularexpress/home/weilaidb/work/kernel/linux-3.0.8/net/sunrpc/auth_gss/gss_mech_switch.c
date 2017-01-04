# define RPCDBG_FACILITY        RPCDBG_AUTH
static LIST_HEAD(registered_mechs);
static DEFINE_SPINLOCK(registered_mechs_lock);
static void
gss_mech_free(struct gss_api_mech *gm)
static inline char *
make_auth_domain_name(char *name)
static int
gss_mech_svc_setup(struct gss_api_mech *gm)
int
gss_mech_register(struct gss_api_mech *gm)
EXPORT_SYMBOL_GPL(gss_mech_register);
void
gss_mech_unregister(struct gss_api_mech *gm)
EXPORT_SYMBOL_GPL(gss_mech_unregister);
struct gss_api_mech *
gss_mech_get(struct gss_api_mech *gm)
EXPORT_SYMBOL_GPL(gss_mech_get);
struct gss_api_mech *
gss_mech_get_by_name(const char *name)
EXPORT_SYMBOL_GPL(gss_mech_get_by_name);
struct gss_api_mech *
gss_mech_get_by_OID(struct xdr_netobj *obj)
EXPORT_SYMBOL_GPL(gss_mech_get_by_OID);
static inline int
mech_supports_pseudoflavor(struct gss_api_mech *gm, u32 pseudoflavor)
struct gss_api_mech *
gss_mech_get_by_pseudoflavor(u32 pseudoflavor)
EXPORT_SYMBOL_GPL(gss_mech_get_by_pseudoflavor);
int gss_mech_list_pseudoflavors(rpc_authflavor_t *array_ptr)
EXPORT_SYMBOL_GPL(gss_mech_list_pseudoflavors);
u32
gss_svc_to_pseudoflavor(struct gss_api_mech *gm, u32 service)
EXPORT_SYMBOL_GPL(gss_svc_to_pseudoflavor);
u32
gss_pseudoflavor_to_service(struct gss_api_mech *gm, u32 pseudoflavor)
EXPORT_SYMBOL_GPL(gss_pseudoflavor_to_service);
char *
gss_service_to_auth_domain_name(struct gss_api_mech *gm, u32 service)
EXPORT_SYMBOL_GPL(gss_service_to_auth_domain_name);
void
gss_mech_put(struct gss_api_mech * gm)
EXPORT_SYMBOL_GPL(gss_mech_put);
int
gss_import_sec_context(const void *input_token, size_t bufsize,
struct gss_api_mech	*mech,
struct gss_ctx		**ctx_id,
gfp_t gfp_mask)
u32
gss_get_mic(struct gss_ctx	*context_handle,
struct xdr_buf	*message,
struct xdr_netobj	*mic_token)
u32
gss_verify_mic(struct gss_ctx		*context_handle,
struct xdr_buf		*message,
struct xdr_netobj	*mic_token)
u32
gss_wrap(struct gss_ctx	*ctx_id,
int		offset,
struct xdr_buf	*buf,
struct page	**inpages)
u32
gss_unwrap(struct gss_ctx	*ctx_id,
int			offset,
struct xdr_buf	*buf)
u32
gss_delete_sec_context(struct gss_ctx	**context_handle)
