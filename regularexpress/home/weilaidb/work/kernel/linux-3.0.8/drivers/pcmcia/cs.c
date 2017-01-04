MODULE_AUTHOR("David Hinds <dahinds@users.sourceforge.net>");
MODULE_DESCRIPTION("Linux Kernel Card Services");
MODULE_LICENSE("GPL");
#define INT_MODULE_PARM(n, v) static int n = v; module_param(n, int, 0444)
INT_MODULE_PARM(setup_delay,	10);
INT_MODULE_PARM(resume_delay,	20);
INT_MODULE_PARM(shutdown_delay,	3);
INT_MODULE_PARM(vcc_settle,	40);
INT_MODULE_PARM(reset_time,	10);
INT_MODULE_PARM(unreset_delay,	10);
INT_MODULE_PARM(unreset_check,	10);
INT_MODULE_PARM(unreset_limit,	30);
INT_MODULE_PARM(cis_speed,	300);
socket_state_t dead_socket = ;
EXPORT_SYMBOL(dead_socket);
LIST_HEAD(pcmcia_socket_list);
EXPORT_SYMBOL(pcmcia_socket_list);
DECLARE_RWSEM(pcmcia_socket_list_rwsem);
EXPORT_SYMBOL(pcmcia_socket_list_rwsem);
struct pcmcia_socket *pcmcia_get_socket(struct pcmcia_socket *skt)
EXPORT_SYMBOL(pcmcia_get_socket);
void pcmcia_put_socket(struct pcmcia_socket *skt)
EXPORT_SYMBOL(pcmcia_put_socket);
static void pcmcia_release_socket(struct device *dev)
static int pccardd(void *__skt);
int pcmcia_register_socket(struct pcmcia_socket *socket)
EXPORT_SYMBOL(pcmcia_register_socket);
void pcmcia_unregister_socket(struct pcmcia_socket *socket)
EXPORT_SYMBOL(pcmcia_unregister_socket);
struct pcmcia_socket *pcmcia_get_socket_by_nr(unsigned int nr)
EXPORT_SYMBOL(pcmcia_get_socket_by_nr);
static int socket_reset(struct pcmcia_socket *skt)
static void socket_shutdown(struct pcmcia_socket *s)
static int socket_setup(struct pcmcia_socket *skt, int initial_delay)
static int socket_insert(struct pcmcia_socket *skt)
static int socket_suspend(struct pcmcia_socket *skt)
static int socket_early_resume(struct pcmcia_socket *skt)
static int socket_late_resume(struct pcmcia_socket *skt)
static int socket_resume(struct pcmcia_socket *skt)
static void socket_remove(struct pcmcia_socket *skt)
static void socket_detect_change(struct pcmcia_socket *skt)
static int pccardd(void *__skt)
void pcmcia_parse_events(struct pcmcia_socket *s, u_int events)
EXPORT_SYMBOL(pcmcia_parse_events);
void pcmcia_parse_uevents(struct pcmcia_socket *s, u_int events)
EXPORT_SYMBOL(pcmcia_parse_uevents);
int pccard_register_pcmcia(struct pcmcia_socket *s, struct pcmcia_callback *c)
EXPORT_SYMBOL(pccard_register_pcmcia);
int pcmcia_reset_card(struct pcmcia_socket *skt)
EXPORT_SYMBOL(pcmcia_reset_card);
static int pcmcia_socket_uevent(struct device *dev,
struct kobj_uevent_env *env)
static struct completion pcmcia_unload;
static void pcmcia_release_socket_class(struct class *data)
static int __pcmcia_pm_op(struct device *dev,
int (*callback) (struct pcmcia_socket *skt))
static int pcmcia_socket_dev_suspend_noirq(struct device *dev)
static int pcmcia_socket_dev_resume_noirq(struct device *dev)
static int __used pcmcia_socket_dev_resume(struct device *dev)
static const struct dev_pm_ops pcmcia_socket_pm_ops = ;
#define PCMCIA_SOCKET_CLASS_PM_OPS (&pcmcia_socket_pm_ops)
#define PCMCIA_SOCKET_CLASS_PM_OPS NULL
struct class pcmcia_socket_class = ;
EXPORT_SYMBOL(pcmcia_socket_class);
static int __init init_pcmcia_cs(void)
static void __exit exit_pcmcia_cs(void)
subsys_initcall(init_pcmcia_cs);
module_exit(exit_pcmcia_cs);
