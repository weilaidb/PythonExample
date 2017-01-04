static int pc_debug;
module_param(pc_debug, int, 0644);
void soc_pcmcia_debug(struct soc_pcmcia_socket *skt, const char *func,
int lvl, const char *fmt, ...)
EXPORT_SYMBOL(soc_pcmcia_debug);
#define to_soc_pcmcia_socket(x)	\
container_of(x, struct soc_pcmcia_socket, socket)
static unsigned short
calc_speed(unsigned short *spds, int num, unsigned short dflt)
void soc_common_pcmcia_get_timing(struct soc_pcmcia_socket *skt,
struct soc_pcmcia_timing *timing)
EXPORT_SYMBOL(soc_common_pcmcia_get_timing);
static unsigned int soc_common_pcmcia_skt_state(struct soc_pcmcia_socket *skt)
static int soc_common_pcmcia_config_skt(
struct soc_pcmcia_socket *skt, socket_state_t *state)
static int soc_common_pcmcia_sock_init(struct pcmcia_socket *sock)
static int soc_common_pcmcia_suspend(struct pcmcia_socket *sock)
static DEFINE_SPINLOCK(status_lock);
static void soc_common_check_status(struct soc_pcmcia_socket *skt)
static void soc_common_pcmcia_poll_event(unsigned long dummy)
static irqreturn_t soc_common_pcmcia_interrupt(int irq, void *dev)
static int
soc_common_pcmcia_get_status(struct pcmcia_socket *sock, unsigned int *status)
static int soc_common_pcmcia_set_socket(
struct pcmcia_socket *sock, socket_state_t *state)
static int soc_common_pcmcia_set_io_map(
struct pcmcia_socket *sock, struct pccard_io_map *map)
static int soc_common_pcmcia_set_mem_map(
struct pcmcia_socket *sock, struct pccard_mem_map *map)
struct bittbl ;
static struct bittbl status_bits[] = ;
static struct bittbl conf_bits[] = ;
static void dump_bits(char **p, const char *prefix,
unsigned int val, struct bittbl *bits, int sz)
static ssize_t show_status(
struct device *dev, struct device_attribute *attr, char *buf)
static DEVICE_ATTR(status, S_IRUGO, show_status, NULL);
static struct pccard_operations soc_common_pcmcia_operations = ;
int soc_pcmcia_request_irqs(struct soc_pcmcia_socket *skt,
struct pcmcia_irqs *irqs, int nr)
EXPORT_SYMBOL(soc_pcmcia_request_irqs);
void soc_pcmcia_free_irqs(struct soc_pcmcia_socket *skt,
struct pcmcia_irqs *irqs, int nr)
EXPORT_SYMBOL(soc_pcmcia_free_irqs);
void soc_pcmcia_disable_irqs(struct soc_pcmcia_socket *skt,
struct pcmcia_irqs *irqs, int nr)
EXPORT_SYMBOL(soc_pcmcia_disable_irqs);
void soc_pcmcia_enable_irqs(struct soc_pcmcia_socket *skt,
struct pcmcia_irqs *irqs, int nr)
EXPORT_SYMBOL(soc_pcmcia_enable_irqs);
static LIST_HEAD(soc_pcmcia_sockets);
static DEFINE_MUTEX(soc_pcmcia_sockets_lock);
static int
soc_pcmcia_notifier(struct notifier_block *nb, unsigned long val, void *data)
static struct notifier_block soc_pcmcia_notifier_block = ;
static int soc_pcmcia_cpufreq_register(void)
fs_initcall(soc_pcmcia_cpufreq_register);
static void soc_pcmcia_cpufreq_unregister(void)
module_exit(soc_pcmcia_cpufreq_unregister);
void soc_pcmcia_remove_one(struct soc_pcmcia_socket *skt)
EXPORT_SYMBOL(soc_pcmcia_remove_one);
int soc_pcmcia_add_one(struct soc_pcmcia_socket *skt)
EXPORT_SYMBOL(soc_pcmcia_add_one);
MODULE_AUTHOR("John Dorsey <john+@cs.cmu.edu>");
MODULE_DESCRIPTION("Linux PCMCIA Card Services: Common SoC support");
MODULE_LICENSE("Dual MPL/GPL");
