#define DRV_NAME "defxx"
#define DRV_VERSION "v1.10"
#define DRV_RELDATE "2006/12/14"
static char version[] __devinitdata =
DRV_NAME ": " DRV_VERSION " " DRV_RELDATE
"  Lawrence V. Stefani and others\n";
#define DYNAMIC_BUFFERS 1
#define SKBUFF_RX_COPYBREAK 200
#define NEW_SKB_SIZE (PI_RCV_DATA_K_SIZE_MAX+128)
#define DFX_BUS_PCI(dev) (dev->bus == &pci_bus_type)
#define DFX_BUS_PCI(dev) 0
#define DFX_BUS_EISA(dev) (dev->bus == &eisa_bus_type)
#define DFX_BUS_EISA(dev) 0
#define DFX_BUS_TC(dev) (dev->bus == &tc_bus_type)
#define DFX_BUS_TC(dev) 0
#define DFX_MMIO 1
#define DFX_MMIO 0
static void		dfx_bus_init(struct net_device *dev);
static void		dfx_bus_uninit(struct net_device *dev);
static void		dfx_bus_config_check(DFX_board_t *bp);
static int		dfx_driver_init(struct net_device *dev,
const char *print_name,
resource_size_t bar_start);
static int		dfx_adap_init(DFX_board_t *bp, int get_buffers);
static int		dfx_open(struct net_device *dev);
static int		dfx_close(struct net_device *dev);
static void		dfx_int_pr_halt_id(DFX_board_t *bp);
static void		dfx_int_type_0_process(DFX_board_t *bp);
static void		dfx_int_common(struct net_device *dev);
static irqreturn_t	dfx_interrupt(int irq, void *dev_id);
static struct		net_device_stats *dfx_ctl_get_stats(struct net_device *dev);
static void		dfx_ctl_set_multicast_list(struct net_device *dev);
static int		dfx_ctl_set_mac_address(struct net_device *dev, void *addr);
static int		dfx_ctl_update_cam(DFX_board_t *bp);
static int		dfx_ctl_update_filters(DFX_board_t *bp);
static int		dfx_hw_dma_cmd_req(DFX_board_t *bp);
static int		dfx_hw_port_ctrl_req(DFX_board_t *bp, PI_UINT32	command, PI_UINT32 data_a, PI_UINT32 data_b, PI_UINT32 *host_data);
static void		dfx_hw_adap_reset(DFX_board_t *bp, PI_UINT32 type);
static int		dfx_hw_adap_state_rd(DFX_board_t *bp);
static int		dfx_hw_dma_uninit(DFX_board_t *bp, PI_UINT32 type);
static int		dfx_rcv_init(DFX_board_t *bp, int get_buffers);
static void		dfx_rcv_queue_process(DFX_board_t *bp);
static void		dfx_rcv_flush(DFX_board_t *bp);
static netdev_tx_t dfx_xmt_queue_pkt(struct sk_buff *skb,
struct net_device *dev);
static int		dfx_xmt_done(DFX_board_t *bp);
static void		dfx_xmt_flush(DFX_board_t *bp);
static struct pci_driver dfx_pci_driver;
static struct eisa_driver dfx_eisa_driver;
static struct tc_driver dfx_tc_driver;
static inline void dfx_writel(DFX_board_t *bp, int offset, u32 data)
static inline void dfx_outl(DFX_board_t *bp, int offset, u32 data)
static void dfx_port_write_long(DFX_board_t *bp, int offset, u32 data)
static inline void dfx_readl(DFX_board_t *bp, int offset, u32 *data)
static inline void dfx_inl(DFX_board_t *bp, int offset, u32 *data)
static void dfx_port_read_long(DFX_board_t *bp, int offset, u32 *data)
static void dfx_get_bars(struct device *bdev,
resource_size_t *bar_start, resource_size_t *bar_len)
static const struct net_device_ops dfx_netdev_ops = ;
static int __devinit dfx_register(struct device *bdev)
static void __devinit dfx_bus_init(struct net_device *dev)
static void __devexit dfx_bus_uninit(struct net_device *dev)
static void __devinit dfx_bus_config_check(DFX_board_t *bp)
static int __devinit dfx_driver_init(struct net_device *dev,
const char *print_name,
resource_size_t bar_start)
static int dfx_adap_init(DFX_board_t *bp, int get_buffers)
static int dfx_open(struct net_device *dev)
static int dfx_close(struct net_device *dev)
static void dfx_int_pr_halt_id(DFX_board_t	*bp)
static void dfx_int_type_0_process(DFX_board_t	*bp)
static void dfx_int_common(struct net_device *dev)
static irqreturn_t dfx_interrupt(int irq, void *dev_id)
static struct net_device_stats *dfx_ctl_get_stats(struct net_device *dev)
static void dfx_ctl_set_multicast_list(struct net_device *dev)
static int dfx_ctl_set_mac_address(struct net_device *dev, void *addr)
static int dfx_ctl_update_cam(DFX_board_t *bp)
static int dfx_ctl_update_filters(DFX_board_t *bp)
static int dfx_hw_dma_cmd_req(DFX_board_t *bp)
static int dfx_hw_port_ctrl_req(
DFX_board_t	*bp,
PI_UINT32	command,
PI_UINT32	data_a,
PI_UINT32	data_b,
PI_UINT32	*host_data
)
static void dfx_hw_adap_reset(
DFX_board_t	*bp,
PI_UINT32	type
)
static int dfx_hw_adap_state_rd(DFX_board_t *bp)
static int dfx_hw_dma_uninit(DFX_board_t *bp, PI_UINT32 type)
static void my_skb_align(struct sk_buff *skb, int n)
static int dfx_rcv_init(DFX_board_t *bp, int get_buffers)
static void dfx_rcv_queue_process(
DFX_board_t *bp
)
static netdev_tx_t dfx_xmt_queue_pkt(struct sk_buff *skb,
struct net_device *dev)
static int dfx_xmt_done(DFX_board_t *bp)
static void dfx_rcv_flush( DFX_board_t *bp )
static inline void dfx_rcv_flush( DFX_board_t *bp )
static void dfx_xmt_flush( DFX_board_t *bp )
static void __devexit dfx_unregister(struct device *bdev)
static int __devinit __maybe_unused dfx_dev_register(struct device *);
static int __devexit __maybe_unused dfx_dev_unregister(struct device *);
static int __devinit dfx_pci_register(struct pci_dev *,
const struct pci_device_id *);
static void __devexit dfx_pci_unregister(struct pci_dev *);
static DEFINE_PCI_DEVICE_TABLE(dfx_pci_table) = ;
MODULE_DEVICE_TABLE(pci, dfx_pci_table);
static struct pci_driver dfx_pci_driver = ;
static __devinit int dfx_pci_register(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit dfx_pci_unregister(struct pci_dev *pdev)
static struct eisa_device_id dfx_eisa_table[] = ;
MODULE_DEVICE_TABLE(eisa, dfx_eisa_table);
static struct eisa_driver dfx_eisa_driver = ;
static struct tc_device_id const dfx_tc_table[] = ;
MODULE_DEVICE_TABLE(tc, dfx_tc_table);
static struct tc_driver dfx_tc_driver = ;
static int __devinit __maybe_unused dfx_dev_register(struct device *dev)
static int __devexit __maybe_unused dfx_dev_unregister(struct device *dev)
static int __devinit dfx_init(void)
static void __devexit dfx_cleanup(void)
module_init(dfx_init);
module_exit(dfx_cleanup);
MODULE_AUTHOR("Lawrence V. Stefani");
MODULE_DESCRIPTION("DEC FDDIcontroller TC/EISA/PCI (DEFTA/DEFEA/DEFPA) driver "
DRV_VERSION " " DRV_RELDATE);
MODULE_LICENSE("GPL");
