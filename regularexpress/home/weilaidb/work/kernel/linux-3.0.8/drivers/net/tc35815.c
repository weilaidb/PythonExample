#define DRV_VERSION	"1.39"
static const char *version = "tc35815.c:v" DRV_VERSION "\n";
#define MODNAME			"tc35815"
enum tc35815_chiptype ;
static const struct  chip_info[] __devinitdata = ;
static DEFINE_PCI_DEVICE_TABLE(tc35815_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, tc35815_pci_tbl);
static struct tc35815_options  options;
struct tc35815_regs ;
#define DMA_RxAlign	       0x00c00000
#define DMA_RxAlign_1	       0x00400000
#define DMA_RxAlign_2	       0x00800000
#define DMA_RxAlign_3	       0x00c00000
#define DMA_M66EnStat	       0x00080000
#define DMA_IntMask	       0x00040000
#define DMA_SWIntReq	       0x00020000
#define DMA_TxWakeUp	       0x00010000
#define DMA_RxBigE	       0x00008000
#define DMA_TxBigE	       0x00004000
#define DMA_TestMode	       0x00002000
#define DMA_PowrMgmnt	       0x00001000
#define DMA_DmBurst_Mask       0x000001fc
#define RxFrag_EnPack	       0x00008000
#define RxFrag_MinFragMask     0x00000ffc
#define MAC_Link10	       0x00008000
#define MAC_EnMissRoll	       0x00002000
#define MAC_MissRoll	       0x00000400
#define MAC_Loop10	       0x00000080
#define MAC_Conn_Auto	       0x00000000
#define MAC_Conn_10M	       0x00000020
#define MAC_Conn_Mll	       0x00000040
#define MAC_MacLoop	       0x00000010
#define MAC_FullDup	       0x00000008
#define MAC_Reset	       0x00000004
#define MAC_HaltImm	       0x00000002
#define MAC_HaltReq	       0x00000001
#define PROM_Busy	       0x00008000
#define PROM_Read	       0x00004000
#define PROM_Write	       0x00002000
#define PROM_Erase	       0x00006000
#define PROM_Addr_Ena	       0x00000030
#define CAM_CompEn	       0x00000010
#define CAM_NegCAM	       0x00000008
#define CAM_BroadAcc	       0x00000004
#define CAM_GroupAcc	       0x00000002
#define CAM_StationAcc	       0x00000001
#define CAM_ENTRY_MAX		       21
#define CAM_Ena_Mask ((1<<CAM_ENTRY_MAX)-1)
#define CAM_Ena_Bit(index)	(1 << (index))
#define CAM_ENTRY_DESTINATION	0
#define CAM_ENTRY_SOURCE	1
#define CAM_ENTRY_MACCTL	20
#define Tx_En		       0x00000001
#define Tx_TxHalt	       0x00000002
#define Tx_NoPad	       0x00000004
#define Tx_NoCRC	       0x00000008
#define Tx_FBack	       0x00000010
#define Tx_EnUnder	       0x00000100
#define Tx_EnExDefer	       0x00000200
#define Tx_EnLCarr	       0x00000400
#define Tx_EnExColl	       0x00000800
#define Tx_EnLateColl	       0x00001000
#define Tx_EnTxPar	       0x00002000
#define Tx_EnComp	       0x00004000
#define Tx_TxColl_MASK	       0x0000000F
#define Tx_ExColl	       0x00000010
#define Tx_TXDefer	       0x00000020
#define Tx_Paused	       0x00000040
#define Tx_IntTx	       0x00000080
#define Tx_Under	       0x00000100
#define Tx_Defer	       0x00000200
#define Tx_NCarr	       0x00000400
#define Tx_10Stat	       0x00000800
#define Tx_LateColl	       0x00001000
#define Tx_TxPar	       0x00002000
#define Tx_Comp		       0x00004000
#define Tx_Halted	       0x00008000
#define Tx_SQErr	       0x00010000
#define Rx_EnGood	       0x00004000
#define Rx_EnRxPar	       0x00002000
#define Rx_EnLongErr	       0x00000800
#define Rx_EnOver	       0x00000400
#define Rx_EnCRCErr	       0x00000200
#define Rx_EnAlign	       0x00000100
#define Rx_IgnoreCRC	       0x00000040
#define Rx_StripCRC	       0x00000010
#define Rx_ShortEn	       0x00000008
#define Rx_LongEn	       0x00000004
#define Rx_RxHalt	       0x00000002
#define Rx_RxEn		       0x00000001
#define Rx_Halted	       0x00008000
#define Rx_Good		       0x00004000
#define Rx_RxPar	       0x00002000
#define Rx_TypePkt	       0x00001000
#define Rx_LongErr	       0x00000800
#define Rx_Over		       0x00000400
#define Rx_CRCErr	       0x00000200
#define Rx_Align	       0x00000100
#define Rx_10Stat	       0x00000080
#define Rx_IntRx	       0x00000040
#define Rx_CtlRecd	       0x00000020
#define Rx_InLenErr	       0x00000010
#define Rx_Stat_Mask	       0x0000FFF0
#define Int_NRAbtEn	       0x00000800
#define Int_TxCtlCmpEn	       0x00000400
#define Int_DmParErrEn	       0x00000200
#define Int_DParDEn	       0x00000100
#define Int_EarNotEn	       0x00000080
#define Int_DParErrEn	       0x00000040
#define Int_SSysErrEn	       0x00000020
#define Int_RMasAbtEn	       0x00000010
#define Int_RTargAbtEn	       0x00000008
#define Int_STargAbtEn	       0x00000004
#define Int_BLExEn	       0x00000002
#define Int_FDAExEn	       0x00000001
#define Int_NRabt	       0x00004000
#define Int_DmParErrStat       0x00002000
#define Int_BLEx	       0x00001000
#define Int_FDAEx	       0x00000800
#define Int_IntNRAbt	       0x00000400
#define Int_IntCmp	       0x00000200
#define Int_IntExBD	       0x00000100
#define Int_DmParErr	       0x00000080
#define Int_IntEarNot	       0x00000040
#define Int_SWInt	       0x00000020
#define Int_IntBLEx	       0x00000010
#define Int_IntFDAEx	       0x00000008
#define Int_IntPCI	       0x00000004
#define Int_IntMacRx	       0x00000002
#define Int_IntMacTx	       0x00000001
#define MD_CA_PreSup	       0x00001000
#define MD_CA_Busy	       0x00000800
#define MD_CA_Wr	       0x00000400
struct FDesc ;
struct BDesc ;
#define FD_ALIGN	16
#define FD_FDLength_MASK       0x0000FFFF
#define FD_BDCnt_MASK	       0x001F0000
#define FD_FrmOpt_MASK	       0x7C000000
#define FD_FrmOpt_BigEndian    0x40000000
#define FD_FrmOpt_IntTx	       0x20000000
#define FD_FrmOpt_NoCRC	       0x10000000
#define FD_FrmOpt_NoPadding    0x08000000
#define FD_FrmOpt_Packing      0x04000000
#define FD_CownsFD	       0x80000000
#define FD_Next_EOL	       0x00000001
#define FD_BDCnt_SHIFT	       16
#define BD_BuffLength_MASK     0x0000FFFF
#define BD_RxBDID_MASK	       0x00FF0000
#define BD_RxBDSeqN_MASK       0x7F000000
#define BD_CownsBD	       0x80000000
#define BD_RxBDID_SHIFT	       16
#define BD_RxBDSeqN_SHIFT      24
#define TX_CTL_CMD	(Tx_EnTxPar | Tx_EnLateColl | \
Tx_EnExColl | Tx_EnLCarr | Tx_EnExDefer | Tx_EnUnder | \
Tx_En)
#define RX_CTL_CMD	(Rx_EnGood | Rx_EnRxPar | Rx_EnLongErr | Rx_EnOver \
| Rx_EnCRCErr | Rx_EnAlign | Rx_RxEn)
#define INT_EN_CMD  (Int_NRAbtEn | \
Int_DmParErrEn | Int_DParDEn | Int_DParErrEn | \
Int_SSysErrEn  | Int_RMasAbtEn | Int_RTargAbtEn | \
Int_STargAbtEn | \
Int_BLExEn  | Int_FDAExEn)
#define DMA_CTL_CMD	DMA_BURST_SIZE
#define HAVE_DMA_RXALIGN(lp)	likely((lp)->chiptype != TC35815CF)
#define DMA_BURST_SIZE	32
#define TX_THRESHOLD	1024
#define TX_THRESHOLD_MAX 1536
#define TX_THRESHOLD_KEEP_LIMIT 10
#define FD_PAGE_NUM 4
#define RX_BUF_NUM	128
#define RX_FD_NUM	256
#define TX_FD_NUM	128
#if RX_CTL_CMD & Rx_LongEn
#define RX_BUF_SIZE	PAGE_SIZE
#elif RX_CTL_CMD & Rx_StripCRC
#define RX_BUF_SIZE	\
L1_CACHE_ALIGN(ETH_FRAME_LEN + VLAN_HLEN + NET_IP_ALIGN)
#define RX_BUF_SIZE	\
L1_CACHE_ALIGN(ETH_FRAME_LEN + VLAN_HLEN + ETH_FCS_LEN + NET_IP_ALIGN)
#define RX_FD_RESERVE	(2 / 2)
#define NAPI_WEIGHT	16
struct TxFD ;
struct RxFD ;
struct FrFD ;
#define tc_readl(addr)	ioread32(addr)
#define tc_writel(d, addr)	iowrite32(d, addr)
#define TC35815_TX_TIMEOUT  msecs_to_jiffies(400)
struct tc35815_local ;
static inline dma_addr_t fd_virt_to_bus(struct tc35815_local *lp, void *virt)
static inline void *fd_bus_to_virt(struct tc35815_local *lp, dma_addr_t bus)
static struct sk_buff *alloc_rxbuf_skb(struct net_device *dev,
struct pci_dev *hwdev,
dma_addr_t *dma_handle)
static void free_rxbuf_skb(struct pci_dev *hwdev, struct sk_buff *skb, dma_addr_t dma_handle)
static int	tc35815_open(struct net_device *dev);
static int	tc35815_send_packet(struct sk_buff *skb, struct net_device *dev);
static irqreturn_t	tc35815_interrupt(int irq, void *dev_id);
static int	tc35815_rx(struct net_device *dev, int limit);
static int	tc35815_poll(struct napi_struct *napi, int budget);
static void	tc35815_txdone(struct net_device *dev);
static int	tc35815_close(struct net_device *dev);
static struct	net_device_stats *tc35815_get_stats(struct net_device *dev);
static void	tc35815_set_multicast_list(struct net_device *dev);
static void	tc35815_tx_timeout(struct net_device *dev);
static int	tc35815_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static void	tc35815_poll_controller(struct net_device *dev);
static const struct ethtool_ops tc35815_ethtool_ops;
static void	tc35815_chip_reset(struct net_device *dev);
static void	tc35815_chip_init(struct net_device *dev);
static void	panic_queues(struct net_device *dev);
static void tc35815_restart_work(struct work_struct *work);
static int tc_mdio_read(struct mii_bus *bus, int mii_id, int regnum)
static int tc_mdio_write(struct mii_bus *bus, int mii_id, int regnum, u16 val)
static void tc_handle_link_change(struct net_device *dev)
static int tc_mii_probe(struct net_device *dev)
static int tc_mii_init(struct net_device *dev)
static int __devinit tc35815_mac_match(struct device *dev, void *data)
static int __devinit tc35815_read_plat_dev_addr(struct net_device *dev)
static int __devinit tc35815_read_plat_dev_addr(struct net_device *dev)
static int __devinit tc35815_init_dev_addr(struct net_device *dev)
static const struct net_device_ops tc35815_netdev_ops = ;
static int __devinit tc35815_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit tc35815_remove_one(struct pci_dev *pdev)
static int
tc35815_init_queues(struct net_device *dev)
static void
tc35815_clear_queues(struct net_device *dev)
static void
tc35815_free_queues(struct net_device *dev)
static void
dump_txfd(struct TxFD *fd)
static int
dump_rxfd(struct RxFD *fd)
static void
dump_frfd(struct FrFD *fd)
static void
panic_queues(struct net_device *dev)
static void print_eth(const u8 *add)
static int tc35815_tx_full(struct net_device *dev)
static void tc35815_restart(struct net_device *dev)
static void tc35815_restart_work(struct work_struct *work)
static void tc35815_schedule_restart(struct net_device *dev)
static void tc35815_tx_timeout(struct net_device *dev)
static int
tc35815_open(struct net_device *dev)
static int tc35815_send_packet(struct sk_buff *skb, struct net_device *dev)
#define FATAL_ERROR_INT \
(Int_IntPCI | Int_DmParErr | Int_IntNRAbt)
static void tc35815_fatal_error_interrupt(struct net_device *dev, u32 status)
static int tc35815_do_interrupt(struct net_device *dev, u32 status, int limit)
static irqreturn_t tc35815_interrupt(int irq, void *dev_id)
static void tc35815_poll_controller(struct net_device *dev)
static int
tc35815_rx(struct net_device *dev, int limit)
static int tc35815_poll(struct napi_struct *napi, int budget)
#define TX_STA_ERR	(Tx_ExColl|Tx_Under|Tx_Defer|Tx_NCarr|Tx_LateColl|Tx_TxPar|Tx_SQErr)
static void
tc35815_check_tx_stat(struct net_device *dev, int status)
static void
tc35815_txdone(struct net_device *dev)
static int
tc35815_close(struct net_device *dev)
static struct net_device_stats *tc35815_get_stats(struct net_device *dev)
static void tc35815_set_cam_entry(struct net_device *dev, int index, unsigned char *addr)
static void
tc35815_set_multicast_list(struct net_device *dev)
static void tc35815_get_drvinfo(struct net_device *dev, struct ethtool_drvinfo *info)
static int tc35815_get_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static int tc35815_set_settings(struct net_device *dev, struct ethtool_cmd *cmd)
static u32 tc35815_get_msglevel(struct net_device *dev)
static void tc35815_set_msglevel(struct net_device *dev, u32 datum)
static int tc35815_get_sset_count(struct net_device *dev, int sset)
static void tc35815_get_ethtool_stats(struct net_device *dev, struct ethtool_stats *stats, u64 *data)
static struct  ethtool_stats_keys[] = ;
static void tc35815_get_strings(struct net_device *dev, u32 stringset, u8 *data)
static const struct ethtool_ops tc35815_ethtool_ops = ;
static int tc35815_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void tc35815_chip_reset(struct net_device *dev)
static void tc35815_chip_init(struct net_device *dev)
static int tc35815_suspend(struct pci_dev *pdev, pm_message_t state)
static int tc35815_resume(struct pci_dev *pdev)
static struct pci_driver tc35815_pci_driver = ;
module_param_named(speed, options.speed, int, 0);
MODULE_PARM_DESC(speed, "0:auto, 10:10Mbps, 100:100Mbps");
module_param_named(duplex, options.duplex, int, 0);
MODULE_PARM_DESC(duplex, "0:auto, 1:half, 2:full");
static int __init tc35815_init_module(void)
static void __exit tc35815_cleanup_module(void)
module_init(tc35815_init_module);
module_exit(tc35815_cleanup_module);
MODULE_DESCRIPTION("TOSHIBA TC35815 PCI 10M/100M Ethernet driver");
MODULE_LICENSE("GPL");
