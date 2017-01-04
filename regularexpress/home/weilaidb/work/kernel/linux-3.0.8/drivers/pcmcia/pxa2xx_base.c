#define PCMCIAPrtSp	0x04000000
#define PCMCIASp	(4*PCMCIAPrtSp)
#define PCMCIAIOSp	PCMCIAPrtSp
#define PCMCIAAttrSp	PCMCIAPrtSp
#define PCMCIAMemSp	PCMCIAPrtSp
#define PCMCIA0Sp	PCMCIASp
#define PCMCIA0IOSp	PCMCIAIOSp
#define PCMCIA0AttrSp	PCMCIAAttrSp
#define PCMCIA0MemSp	PCMCIAMemSp
#define PCMCIA1Sp	PCMCIASp
#define PCMCIA1IOSp	PCMCIAIOSp
#define PCMCIA1AttrSp	PCMCIAAttrSp
#define PCMCIA1MemSp	PCMCIAMemSp
#define _PCMCIA(Nb) \
(0x20000000 + (Nb) * PCMCIASp)
#define _PCMCIAIO(Nb)	_PCMCIA(Nb)
#define _PCMCIAAttr(Nb) \
(_PCMCIA(Nb) + 2 * PCMCIAPrtSp)
#define _PCMCIAMem(Nb) \
(_PCMCIA(Nb) + 3 * PCMCIAPrtSp)
#define _PCMCIA0	_PCMCIA(0)
#define _PCMCIA0IO	_PCMCIAIO(0)
#define _PCMCIA0Attr	_PCMCIAAttr(0)
#define _PCMCIA0Mem	_PCMCIAMem(0)
#define _PCMCIA1	_PCMCIA(1)
#define _PCMCIA1IO	_PCMCIAIO(1)
#define _PCMCIA1Attr	_PCMCIAAttr(1)
#define _PCMCIA1Mem	_PCMCIAMem(1)
#define MCXX_SETUP_MASK     (0x7f)
#define MCXX_ASST_MASK      (0x1f)
#define MCXX_HOLD_MASK      (0x3f)
#define MCXX_SETUP_SHIFT    (0)
#define MCXX_ASST_SHIFT     (7)
#define MCXX_HOLD_SHIFT     (14)
static inline u_int pxa2xx_mcxx_hold(u_int pcmcia_cycle_ns,
u_int mem_clk_10khz)
static inline u_int pxa2xx_mcxx_asst(u_int pcmcia_cycle_ns,
u_int mem_clk_10khz)
static inline u_int pxa2xx_mcxx_setup(u_int pcmcia_cycle_ns,
u_int mem_clk_10khz)
static inline u_int pxa2xx_pcmcia_cmd_time(u_int mem_clk_10khz,
u_int pcmcia_mcxx_asst)
static int pxa2xx_pcmcia_set_mcmem( int sock, int speed, int clock )
static int pxa2xx_pcmcia_set_mcio( int sock, int speed, int clock )
static int pxa2xx_pcmcia_set_mcatt( int sock, int speed, int clock )
static int pxa2xx_pcmcia_set_mcxx(struct soc_pcmcia_socket *skt, unsigned int clk)
static int pxa2xx_pcmcia_set_timing(struct soc_pcmcia_socket *skt)
static int
pxa2xx_pcmcia_frequency_change(struct soc_pcmcia_socket *skt,
unsigned long val,
struct cpufreq_freqs *freqs)
void pxa2xx_configure_sockets(struct device *dev)
static const char *skt_names[] = ;
#define SKT_DEV_INFO_SIZE(n) \
(sizeof(struct skt_dev_info) + (n)*sizeof(struct soc_pcmcia_socket))
int pxa2xx_drv_pcmcia_add_one(struct soc_pcmcia_socket *skt)
EXPORT_SYMBOL(pxa2xx_drv_pcmcia_add_one);
void pxa2xx_drv_pcmcia_ops(struct pcmcia_low_level *ops)
EXPORT_SYMBOL(pxa2xx_drv_pcmcia_ops);
static int pxa2xx_drv_pcmcia_probe(struct platform_device *dev)
static int pxa2xx_drv_pcmcia_remove(struct platform_device *dev)
static int pxa2xx_drv_pcmcia_resume(struct device *dev)
static const struct dev_pm_ops pxa2xx_drv_pcmcia_pm_ops = ;
static struct platform_driver pxa2xx_pcmcia_driver = ;
static int __init pxa2xx_pcmcia_init(void)
static void __exit pxa2xx_pcmcia_exit(void)
fs_initcall(pxa2xx_pcmcia_init);
module_exit(pxa2xx_pcmcia_exit);
MODULE_AUTHOR("Stefan Eletzhofer <stefan.eletzhofer@inquant.de> and Ian Molton <spyro@f2s.com>");
MODULE_DESCRIPTION("Linux PCMCIA Card Services: PXA2xx core socket driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pxa2xx-pcmcia");
