#define IOC3_NAME	"ioc3-eth"
#define IOC3_VERSION	"2.6.3-4"
#define RX_BUFFS 64
#define ETCSR_FD	((17<<ETCSR_IPGR2_SHIFT) | (11<<ETCSR_IPGR1_SHIFT) | 21)
#define ETCSR_HD	((21<<ETCSR_IPGR2_SHIFT) | (21<<ETCSR_IPGR1_SHIFT) | 21)
struct ioc3_private ;
static inline struct net_device *priv_netdev(struct ioc3_private *dev)
static int ioc3_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static void ioc3_set_multicast_list(struct net_device *dev);
static int ioc3_start_xmit(struct sk_buff *skb, struct net_device *dev);
static void ioc3_timeout(struct net_device *dev);
static inline unsigned int ioc3_hash(const unsigned char *addr);
static inline void ioc3_stop(struct ioc3_private *ip);
static void ioc3_init(struct net_device *dev);
static const char ioc3_str[] = "IOC3 Ethernet";
static const struct ethtool_ops ioc3_ethtool_ops;
#define IOC3_CACHELINE	128UL
static inline unsigned long aligned_rx_skb_addr(unsigned long addr)
static inline struct sk_buff * ioc3_alloc_skb(unsigned long length,
unsigned int gfp_mask)
static inline unsigned long ioc3_map(void *ptr, unsigned long vdev)
#define RX_OFFSET		10
#define RX_BUF_ALLOC_SIZE	(1664 + RX_OFFSET + IOC3_CACHELINE)
#define BARRIER()							\
__asm__("sync" ::: "memory")
#define IOC3_SIZE 0x100000
#define ioc3_r_mcr()		be32_to_cpu(ioc3->mcr)
#define ioc3_w_mcr(v)		do  while (0)
#define ioc3_w_gpcr_s(v)	do  while (0)
#define ioc3_r_emcr()		be32_to_cpu(ioc3->emcr)
#define ioc3_w_emcr(v)		do  while (0)
#define ioc3_r_eisr()		be32_to_cpu(ioc3->eisr)
#define ioc3_w_eisr(v)		do  while (0)
#define ioc3_r_eier()		be32_to_cpu(ioc3->eier)
#define ioc3_w_eier(v)		do  while (0)
#define ioc3_r_ercsr()		be32_to_cpu(ioc3->ercsr)
#define ioc3_w_ercsr(v)		do  while (0)
#define ioc3_r_erbr_h()		be32_to_cpu(ioc3->erbr_h)
#define ioc3_w_erbr_h(v)	do  while (0)
#define ioc3_r_erbr_l()		be32_to_cpu(ioc3->erbr_l)
#define ioc3_w_erbr_l(v)	do  while (0)
#define ioc3_r_erbar()		be32_to_cpu(ioc3->erbar)
#define ioc3_w_erbar(v)		do  while (0)
#define ioc3_r_ercir()		be32_to_cpu(ioc3->ercir)
#define ioc3_w_ercir(v)		do  while (0)
#define ioc3_r_erpir()		be32_to_cpu(ioc3->erpir)
#define ioc3_w_erpir(v)		do  while (0)
#define ioc3_r_ertr()		be32_to_cpu(ioc3->ertr)
#define ioc3_w_ertr(v)		do  while (0)
#define ioc3_r_etcsr()		be32_to_cpu(ioc3->etcsr)
#define ioc3_w_etcsr(v)		do  while (0)
#define ioc3_r_ersr()		be32_to_cpu(ioc3->ersr)
#define ioc3_w_ersr(v)		do  while (0)
#define ioc3_r_etcdc()		be32_to_cpu(ioc3->etcdc)
#define ioc3_w_etcdc(v)		do  while (0)
#define ioc3_r_ebir()		be32_to_cpu(ioc3->ebir)
#define ioc3_w_ebir(v)		do  while (0)
#define ioc3_r_etbr_h()		be32_to_cpu(ioc3->etbr_h)
#define ioc3_w_etbr_h(v)	do  while (0)
#define ioc3_r_etbr_l()		be32_to_cpu(ioc3->etbr_l)
#define ioc3_w_etbr_l(v)	do  while (0)
#define ioc3_r_etcir()		be32_to_cpu(ioc3->etcir)
#define ioc3_w_etcir(v)		do  while (0)
#define ioc3_r_etpir()		be32_to_cpu(ioc3->etpir)
#define ioc3_w_etpir(v)		do  while (0)
#define ioc3_r_emar_h()		be32_to_cpu(ioc3->emar_h)
#define ioc3_w_emar_h(v)	do  while (0)
#define ioc3_r_emar_l()		be32_to_cpu(ioc3->emar_l)
#define ioc3_w_emar_l(v)	do  while (0)
#define ioc3_r_ehar_h()		be32_to_cpu(ioc3->ehar_h)
#define ioc3_w_ehar_h(v)	do  while (0)
#define ioc3_r_ehar_l()		be32_to_cpu(ioc3->ehar_l)
#define ioc3_w_ehar_l(v)	do  while (0)
#define ioc3_r_micr()		be32_to_cpu(ioc3->micr)
#define ioc3_w_micr(v)		do  while (0)
#define ioc3_r_midr_r()		be32_to_cpu(ioc3->midr_r)
#define ioc3_w_midr_r(v)	do  while (0)
#define ioc3_r_midr_w()		be32_to_cpu(ioc3->midr_w)
#define ioc3_w_midr_w(v)	do  while (0)
static inline u32 mcr_pack(u32 pulse, u32 sample)
static int nic_wait(struct ioc3 *ioc3)
static int nic_reset(struct ioc3 *ioc3)
static inline int nic_read_bit(struct ioc3 *ioc3)
static inline void nic_write_bit(struct ioc3 *ioc3, int bit)
static u32 nic_read_byte(struct ioc3 *ioc3)
static void nic_write_byte(struct ioc3 *ioc3, int byte)
static u64 nic_find(struct ioc3 *ioc3, int *last)
static int nic_init(struct ioc3 *ioc3)
static void ioc3_get_eaddr_nic(struct ioc3_private *ip)
static void ioc3_get_eaddr(struct ioc3_private *ip)
static void __ioc3_set_mac_address(struct net_device *dev)
static int ioc3_set_mac_address(struct net_device *dev, void *addr)
static int ioc3_mdio_read(struct net_device *dev, int phy, int reg)
static void ioc3_mdio_write(struct net_device *dev, int phy, int reg, int data)
static int ioc3_mii_init(struct ioc3_private *ip);
static struct net_device_stats *ioc3_get_stats(struct net_device *dev)
static void ioc3_tcpudp_checksum(struct sk_buff *skb, uint32_t hwsum, int len)
static inline void ioc3_rx(struct net_device *dev)
static inline void ioc3_tx(struct net_device *dev)
static void ioc3_error(struct net_device *dev, u32 eisr)
static irqreturn_t ioc3_interrupt(int irq, void *_dev)
static inline void ioc3_setup_duplex(struct ioc3_private *ip)
static void ioc3_timer(unsigned long data)
static int ioc3_mii_init(struct ioc3_private *ip)
static void ioc3_mii_start(struct ioc3_private *ip)
static inline void ioc3_clean_rx_ring(struct ioc3_private *ip)
static inline void ioc3_clean_tx_ring(struct ioc3_private *ip)
static void ioc3_free_rings(struct ioc3_private *ip)
static void ioc3_alloc_rings(struct net_device *dev)
static void ioc3_init_rings(struct net_device *dev)
static inline void ioc3_ssram_disc(struct ioc3_private *ip)
static void ioc3_init(struct net_device *dev)
static inline void ioc3_stop(struct ioc3_private *ip)
static int ioc3_open(struct net_device *dev)
static int ioc3_close(struct net_device *dev)
static int ioc3_adjacent_is_ioc3(struct pci_dev *pdev, int slot)
static int ioc3_is_menet(struct pci_dev *pdev)
static void __devinit ioc3_8250_register(struct ioc3_uartregs __iomem *uart)
static void __devinit ioc3_serial_probe(struct pci_dev *pdev, struct ioc3 *ioc3)
static const struct net_device_ops ioc3_netdev_ops = ;
static int __devinit ioc3_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit ioc3_remove_one (struct pci_dev *pdev)
static DEFINE_PCI_DEVICE_TABLE(ioc3_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, ioc3_pci_tbl);
static struct pci_driver ioc3_driver = ;
static int __init ioc3_init_module(void)
static void __exit ioc3_cleanup_module(void)
static int ioc3_start_xmit(struct sk_buff *skb, struct net_device *dev)
static void ioc3_timeout(struct net_device *dev)
static inline unsigned int ioc3_hash(const unsigned char *addr)
static void ioc3_get_drvinfo (struct net_device *dev,
struct ethtool_drvinfo *info)
static int ioc3_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int ioc3_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int ioc3_nway_reset(struct net_device *dev)
static u32 ioc3_get_link(struct net_device *dev)
static const struct ethtool_ops ioc3_ethtool_ops = ;
static int ioc3_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void ioc3_set_multicast_list(struct net_device *dev)
MODULE_AUTHOR("Ralf Baechle <ralf@linux-mips.org>");
MODULE_DESCRIPTION("SGI IOC3 Ethernet driver");
MODULE_LICENSE("GPL");
module_init(ioc3_init_module);
module_exit(ioc3_cleanup_module);
