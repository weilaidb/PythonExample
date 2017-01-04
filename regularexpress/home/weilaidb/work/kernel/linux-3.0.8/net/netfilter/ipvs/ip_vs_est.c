#define KMSG_COMPONENT "IPVS"
#define pr_fmt(fmt) KMSG_COMPONENT ": " fmt
static void ip_vs_read_cpu_stats(struct ip_vs_stats_user *sum,
struct ip_vs_cpu_stats *stats)
static void estimation_timer(unsigned long arg)
void ip_vs_start_estimator(struct net *net, struct ip_vs_stats *stats)
void ip_vs_stop_estimator(struct net *net, struct ip_vs_stats *stats)
void ip_vs_zero_estimator(struct ip_vs_stats *stats)
void ip_vs_read_estimator(struct ip_vs_stats_user *dst,
struct ip_vs_stats *stats)
int __net_init __ip_vs_estimator_init(struct net *net)
void __net_exit __ip_vs_estimator_cleanup(struct net *net)
int __init ip_vs_estimator_init(void)
void ip_vs_estimator_cleanup(void)
