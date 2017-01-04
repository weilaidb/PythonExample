#define _ASM_ARCH_PCMCIA
struct device;
struct pcmcia_low_level;
struct soc_pcmcia_socket ;
struct skt_dev_info ;
struct pcmcia_state ;
struct pcmcia_low_level ;
struct pcmcia_irqs ;
struct soc_pcmcia_timing ;
extern int soc_pcmcia_request_irqs(struct soc_pcmcia_socket *skt, struct pcmcia_irqs *irqs, int nr);
extern void soc_pcmcia_free_irqs(struct soc_pcmcia_socket *skt, struct pcmcia_irqs *irqs, int nr);
extern void soc_pcmcia_disable_irqs(struct soc_pcmcia_socket *skt, struct pcmcia_irqs *irqs, int nr);
extern void soc_pcmcia_enable_irqs(struct soc_pcmcia_socket *skt, struct pcmcia_irqs *irqs, int nr);
extern void soc_common_pcmcia_get_timing(struct soc_pcmcia_socket *, struct soc_pcmcia_timing *);
void soc_pcmcia_remove_one(struct soc_pcmcia_socket *skt);
int soc_pcmcia_add_one(struct soc_pcmcia_socket *skt);
extern void soc_pcmcia_debug(struct soc_pcmcia_socket *skt, const char *func,
int lvl, const char *fmt, ...);
#define debug(skt, lvl, fmt, arg...) \
soc_pcmcia_debug(skt, __func__, lvl, fmt , ## arg)
#define debug(skt, lvl, fmt, arg...) do  while (0)
#define SOC_PCMCIA_IO_ACCESS		(165)
#define SOC_PCMCIA_5V_MEM_ACCESS	(150)
#define SOC_PCMCIA_3V_MEM_ACCESS	(300)
#define SOC_PCMCIA_ATTR_MEM_ACCESS	(300)
#define SOC_PCMCIA_POLL_PERIOD    (2*HZ)
#define iostschg bvd1
#define iospkr   bvd2
