#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define PCNET_CMD	0x00
#define PCNET_DATAPORT	0x10
#define PCNET_RESET	0x1f
#define PCNET_MISC	0x18
#define PCNET_START_PG	0x40
#define PCNET_STOP_PG	0x80
#define SOCKET_START_PG	0x01
#define SOCKET_STOP_PG	0xff
#define PCNET_RDC_TIMEOUT (2*HZ/100)
static const char *if_names[] = ;
MODULE_AUTHOR("David Hinds <dahinds@users.sourceforge.net>");
MODULE_DESCRIPTION("NE2000 compatible PCMCIA ethernet driver");
MODULE_LICENSE("GPL");
#define INT_MODULE_PARM(n, v) static int n = v; module_param(n, int, 0)
INT_MODULE_PARM(if_port,	1);
INT_MODULE_PARM(use_big_buf,	1);
INT_MODULE_PARM(mem_speed,	0);
INT_MODULE_PARM(delay_output,	0);
INT_MODULE_PARM(delay_time,	4);
INT_MODULE_PARM(use_shmem,	-1);
INT_MODULE_PARM(full_duplex,	0);
static int hw_addr[6] = ;
module_param_array(hw_addr, int, NULL, 0);
static void mii_phy_probe(struct net_device *dev);
static int pcnet_config(struct pcmcia_device *link);
static void pcnet_release(struct pcmcia_device *link);
static int pcnet_open(struct net_device *dev);
static int pcnet_close(struct net_device *dev);
static int ei_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static irqreturn_t ei_irq_wrapper(int irq, void *dev_id);
static void ei_watchdog(u_long arg);
static void pcnet_reset_8390(struct net_device *dev);
static int set_config(struct net_device *dev, struct ifmap *map);
static int setup_shmem_window(struct pcmcia_device *link, int start_pg,
int stop_pg, int cm_offset);
static int setup_dma_config(struct pcmcia_device *link, int start_pg,
int stop_pg);
static void pcnet_detach(struct pcmcia_device *p_dev);
typedef struct hw_info_t  hw_info_t;
#define DELAY_OUTPUT	0x01
#define HAS_MISC_REG	0x02
#define USE_BIG_BUF	0x04
#define HAS_IBM_MISC	0x08
#define IS_DL10019	0x10
#define IS_DL10022	0x20
#define HAS_MII		0x40
#define USE_SHMEM	0x80
#define AM79C9XX_HOME_PHY	0x00006B90
#define AM79C9XX_ETH_PHY	0x00006B70
#define MII_PHYID_REV_MASK	0xfffffff0
#define MII_PHYID_REG1		0x02
#define MII_PHYID_REG2		0x03
static hw_info_t hw_info[] = ;
#define NR_INFO		ARRAY_SIZE(hw_info)
static hw_info_t default_info = ;
static hw_info_t dl10019_info = ;
static hw_info_t dl10022_info = ;
typedef struct pcnet_dev_t  pcnet_dev_t;
static inline pcnet_dev_t *PRIV(struct net_device *dev)
static const struct net_device_ops pcnet_netdev_ops = ;
static int pcnet_probe(struct pcmcia_device *link)
static void pcnet_detach(struct pcmcia_device *link)
static hw_info_t *get_hwinfo(struct pcmcia_device *link)
static hw_info_t *get_prom(struct pcmcia_device *link)
static hw_info_t *get_dl10019(struct pcmcia_device *link)
static hw_info_t *get_ax88190(struct pcmcia_device *link)
static hw_info_t *get_hwired(struct pcmcia_device *link)
static int try_io_port(struct pcmcia_device *link)
static int pcnet_confcheck(struct pcmcia_device *p_dev, void *priv_data)
static hw_info_t *pcnet_try_config(struct pcmcia_device *link,
int *has_shmem, int try)
static int pcnet_config(struct pcmcia_device *link)
static void pcnet_release(struct pcmcia_device *link)
static int pcnet_suspend(struct pcmcia_device *link)
static int pcnet_resume(struct pcmcia_device *link)
#define DLINK_GPIO		0x1c
#define DLINK_DIAG		0x1d
#define DLINK_EEPROM		0x1e
#define MDIO_SHIFT_CLK		0x80
#define MDIO_DATA_OUT		0x40
#define MDIO_DIR_WRITE		0x30
#define MDIO_DATA_WRITE0	(MDIO_DIR_WRITE)
#define MDIO_DATA_WRITE1	(MDIO_DIR_WRITE | MDIO_DATA_OUT)
#define MDIO_DATA_READ		0x10
#define MDIO_MASK		0x0f
static void mdio_sync(unsigned int addr)
static int mdio_read(unsigned int addr, int phy_id, int loc)
static void mdio_write(unsigned int addr, int phy_id, int loc, int value)
#define EE_EEP		0x40
#define EE_ASIC		0x10
#define EE_CS		0x08
#define EE_CK		0x04
#define EE_DO		0x02
#define EE_DI		0x01
#define EE_ADOT		0x01
#define EE_READ_CMD	0x06
#define DL19FDUPLX	0x0400
static int read_eeprom(unsigned int ioaddr, int location)
static void write_asic(unsigned int ioaddr, int location, short asic_data)
static void set_misc_reg(struct net_device *dev)
static void mii_phy_probe(struct net_device *dev)
static int pcnet_open(struct net_device *dev)
static int pcnet_close(struct net_device *dev)
static void pcnet_reset_8390(struct net_device *dev)
static int set_config(struct net_device *dev, struct ifmap *map)
static irqreturn_t ei_irq_wrapper(int irq, void *dev_id)
static void ei_watchdog(u_long arg)
static int ei_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void dma_get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr,
int ring_page)
static void dma_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset)
static void dma_block_output(struct net_device *dev, int count,
const u_char *buf, const int start_page)
static int setup_dma_config(struct pcmcia_device *link, int start_pg,
int stop_pg)
static void copyin(void *dest, void __iomem *src, int c)
static void copyout(void __iomem *dest, const void *src, int c)
static void shmem_get_8390_hdr(struct net_device *dev,
struct e8390_pkt_hdr *hdr,
int ring_page)
static void shmem_block_input(struct net_device *dev, int count,
struct sk_buff *skb, int ring_offset)
static void shmem_block_output(struct net_device *dev, int count,
const u_char *buf, const int start_page)
static int setup_shmem_window(struct pcmcia_device *link, int start_pg,
int stop_pg, int cm_offset)
static const struct pcmcia_device_id pcnet_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, pcnet_ids);
MODULE_FIRMWARE("cis/PCMLM28.cis");
MODULE_FIRMWARE("cis/DP83903.cis");
MODULE_FIRMWARE("cis/LA-PCM.cis");
MODULE_FIRMWARE("cis/PE520.cis");
MODULE_FIRMWARE("cis/NE2K.cis");
MODULE_FIRMWARE("cis/PE-200.cis");
MODULE_FIRMWARE("cis/tamarack.cis");
static struct pcmcia_driver pcnet_driver = ;
static int __init init_pcnet_cs(void)
static void __exit exit_pcnet_cs(void)
module_init(init_pcnet_cs);
module_exit(exit_pcnet_cs);
