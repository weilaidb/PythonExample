#define _LINUX_SUNRPC_GSS_API_H
struct gss_ctx ;
#define GSS_C_NO_BUFFER		((struct xdr_netobj) 0)
#define GSS_C_NO_CONTEXT	((struct gss_ctx *) 0)
#define GSS_C_NULL_OID		((struct xdr_netobj) 0)
#define GSS_OID_MAX_LEN 32
int gss_import_sec_context(
const void*		input_token,
size_t			bufsize,
struct gss_api_mech	*mech,
struct gss_ctx		**ctx_id,
gfp_t			gfp_mask);
u32 gss_get_mic(
struct gss_ctx		*ctx_id,
struct xdr_buf		*message,
struct xdr_netobj	*mic_token);
u32 gss_verify_mic(
struct gss_ctx		*ctx_id,
struct xdr_buf		*message,
struct xdr_netobj	*mic_token);
u32 gss_wrap(
struct gss_ctx		*ctx_id,
int			offset,
struct xdr_buf		*outbuf,
struct page		**inpages);
u32 gss_unwrap(
struct gss_ctx		*ctx_id,
int			offset,
struct xdr_buf		*inbuf);
u32 gss_delete_sec_context(
struct gss_ctx		**ctx_id);
u32 gss_svc_to_pseudoflavor(struct gss_api_mech *, u32 service);
u32 gss_pseudoflavor_to_service(struct gss_api_mech *, u32 pseudoflavor);
char *gss_service_to_auth_domain_name(struct gss_api_mech *, u32 service);
struct pf_desc ;
struct gss_api_mech ;
struct gss_api_ops ;
int gss_mech_register(struct gss_api_mech *);
void gss_mech_unregister(struct gss_api_mech *);
struct gss_api_mech * gss_mech_get_by_OID(struct xdr_netobj *);
struct gss_api_mech *gss_mech_get_by_name(const char *);
struct gss_api_mech *gss_mech_get_by_pseudoflavor(u32);
int gss_mech_list_pseudoflavors(u32 *);
struct gss_api_mech * gss_mech_get(struct gss_api_mech *);
void gss_mech_put(struct gss_api_mech *);
