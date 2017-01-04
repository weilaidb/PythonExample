#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
EXPORT_SYMBOL(ip_vs_scheduler_err);
static LIST_HEAD(ip_vs_schedulers);
static DEFINE_SPINLOCK(ip_vs_sched_lock);
int ip_vs_bind_scheduler(struct ip_vs_service *svc,
struct ip_vs_scheduler *scheduler)
int ip_vs_unbind_scheduler(struct ip_vs_service *svc)
static struct ip_vs_scheduler *ip_vs_sched_getbyname(const char *sched_name)
struct ip_vs_scheduler *ip_vs_scheduler_get(const char *sched_name)
void ip_vs_scheduler_put(struct ip_vs_scheduler *scheduler)
void ip_vs_scheduler_err(struct ip_vs_service *svc, const char *msg)
int register_ip_vs_scheduler(struct ip_vs_scheduler *scheduler)
int unregister_ip_vs_scheduler(struct ip_vs_scheduler *scheduler)
