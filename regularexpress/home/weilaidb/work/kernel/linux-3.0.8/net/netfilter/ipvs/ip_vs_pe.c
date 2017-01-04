#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static LIST_HEAD(ip_vs_pe);
static DEFINE_SPINLOCK(ip_vs_pe_lock);
void ip_vs_bind_pe(struct ip_vs_service *svc, struct ip_vs_pe *pe)
void ip_vs_unbind_pe(struct ip_vs_service *svc)
struct ip_vs_pe *__ip_vs_pe_getbyname(const char *pe_name)
struct ip_vs_pe *ip_vs_pe_getbyname(const char *name)
int register_ip_vs_pe(struct ip_vs_pe *pe)
EXPORT_SYMBOL_GPL(register_ip_vs_pe);
int unregister_ip_vs_pe(struct ip_vs_pe *pe)
EXPORT_SYMBOL_GPL(unregister_ip_vs_pe);
