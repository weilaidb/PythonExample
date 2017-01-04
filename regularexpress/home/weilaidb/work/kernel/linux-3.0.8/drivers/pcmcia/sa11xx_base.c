static unsigned int
sa1100_pcmcia_default_mecr_timing(struct soc_pcmcia_socket *skt,
unsigned int cpu_speed,
unsigned int cmd_time)
static int
sa1100_pcmcia_set_mecr(struct soc_pcmcia_socket *skt, unsigned int cpu_clock)
static int
sa1100_pcmcia_frequency_change(struct soc_pcmcia_socket *skt,
unsigned long val,
struct cpufreq_freqs *freqs)
static int
sa1100_pcmcia_set_timing(struct soc_pcmcia_socket *skt)
static int
sa1100_pcmcia_show_timing(struct soc_pcmcia_socket *skt, char *buf)
static const char *skt_names[] = ;
#define SKT_DEV_INFO_SIZE(n) \
(sizeof(struct skt_dev_info) + (n)*sizeof(struct soc_pcmcia_socket))
int sa11xx_drv_pcmcia_add_one(struct soc_pcmcia_socket *skt)
EXPORT_SYMBOL(sa11xx_drv_pcmcia_add_one);
void sa11xx_drv_pcmcia_ops(struct pcmcia_low_level *ops)
EXPORT_SYMBOL(sa11xx_drv_pcmcia_ops);
int sa11xx_drv_pcmcia_probe(struct device *dev, struct pcmcia_low_level *ops,
int first, int nr)
EXPORT_SYMBOL(sa11xx_drv_pcmcia_probe);
static int __init sa11xx_pcmcia_init(void)
fs_initcall(sa11xx_pcmcia_init);
static void __exit sa11xx_pcmcia_exit(void)
module_exit(sa11xx_pcmcia_exit);
MODULE_AUTHOR("John Dorsey <john+@cs.cmu.edu>");
MODULE_DESCRIPTION("Linux PCMCIA Card Services: SA-11xx core socket driver");
MODULE_LICENSE("Dual MPL/GPL");
