#define _LINUX_SUNRPC_SVCAUTH_GSS_H
int gss_svc_init(void);
void gss_svc_shutdown(void);
int svcauth_gss_register_pseudoflavor(u32 pseudoflavor, char * name);
u32 svcauth_gss_flavor(struct auth_domain *dom);
char *svc_gss_principal(struct svc_rqst *);
