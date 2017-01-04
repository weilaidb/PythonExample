#define NLMDBG_FACILITY		NLMDBG_SVC
#define LOCKD_BUFSIZE		(1024 + NLMSVC_XDRSIZE)
#define ALLOWED_SIGS		(sigmask(SIGKILL))
static struct svc_program	nlmsvc_program;
struct nlmsvc_binding *		nlmsvc_ops;
EXPORT_SYMBOL_GPL(nlmsvc_ops);
static DEFINE_MUTEX(nlmsvc_mutex);
static unsigned int		nlmsvc_users;
static struct task_struct	*nlmsvc_task;
static struct svc_rqst		*nlmsvc_rqst;
unsigned long			nlmsvc_timeout;
static unsigned long		nlm_grace_period;
static unsigned long		nlm_timeout = LOCKD_DFLT_TIMEO;
static int			nlm_udpport, nlm_tcpport;
static unsigned int		nlm_max_connections = 1024;
static const unsigned long	nlm_grace_period_min = 0;
static const unsigned long	nlm_grace_period_max = 240;
static const unsigned long	nlm_timeout_min = 3;
static const unsigned long	nlm_timeout_max = 20;
static const int		nlm_port_min = 0, nlm_port_max = 65535;
static struct ctl_table_header * nlm_sysctl_table;
static unsigned long get_lockd_grace_period(void)
static struct lock_manager lockd_manager = ;
static void grace_ender(struct work_struct *not_used)
static DECLARE_DELAYED_WORK(grace_period_end, grace_ender);
static void set_grace_period(void)
static void restart_grace(void)
static int
lockd(void *vrqstp)
static int create_lockd_listener(struct svc_serv *serv, const char *name,
const int family, const unsigned short port)
static int create_lockd_family(struct svc_serv *serv, const int family)
static int make_socks(struct svc_serv *serv)
int lockd_up(void)
EXPORT_SYMBOL_GPL(lockd_up);
void
lockd_down(void)
EXPORT_SYMBOL_GPL(lockd_down);
static ctl_table nlm_sysctls[] = ;
static ctl_table nlm_sysctl_dir[] = ;
static ctl_table nlm_sysctl_root[] = ;
#define param_set_min_max(name, type, which_strtol, min, max)		\
static int param_set_##name(const char *val, struct kernel_param *kp)	\
static inline int is_callback(u32 proc)
static int lockd_authenticate(struct svc_rqst *rqstp)
param_set_min_max(port, int, simple_strtol, 0, 65535)
param_set_min_max(grace_period, unsigned long, simple_strtoul,
nlm_grace_period_min, nlm_grace_period_max)
param_set_min_max(timeout, unsigned long, simple_strtoul,
nlm_timeout_min, nlm_timeout_max)
MODULE_AUTHOR("Olaf Kirch <okir@monad.swb.de>");
MODULE_DESCRIPTION("NFS file locking service version " LOCKD_VERSION ".");
MODULE_LICENSE("GPL");
module_param_call(nlm_grace_period, param_set_grace_period, param_get_ulong,
&nlm_grace_period, 0644);
module_param_call(nlm_timeout, param_set_timeout, param_get_ulong,
&nlm_timeout, 0644);
module_param_call(nlm_udpport, param_set_port, param_get_int,
&nlm_udpport, 0644);
module_param_call(nlm_tcpport, param_set_port, param_get_int,
&nlm_tcpport, 0644);
module_param(nsm_use_hostnames, bool, 0644);
module_param(nlm_max_connections, uint, 0644);
static int __init init_nlm(void)
static void __exit exit_nlm(void)
module_init(init_nlm);
module_exit(exit_nlm);
static struct svc_version	nlmsvc_version1 = ;
static struct svc_version	nlmsvc_version3 = ;
static struct svc_version	nlmsvc_version4 = ;
static struct svc_version *	nlmsvc_version[] = ;
static struct svc_stat		nlmsvc_stats;
#define NLM_NRVERS	ARRAY_SIZE(nlmsvc_version)
static struct svc_program	nlmsvc_program = ;
