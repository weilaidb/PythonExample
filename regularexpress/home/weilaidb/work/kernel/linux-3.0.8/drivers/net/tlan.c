#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static	struct net_device	*tlan_eisa_devices;
static	int		tlan_devices_installed;
static  int aui[MAX_TLAN_BOARDS];
static  int duplex[MAX_TLAN_BOARDS];
static  int speed[MAX_TLAN_BOARDS];
static  int boards_found;
module_param_array(aui, int, NULL, 0);
module_param_array(duplex, int, NULL, 0);
module_param_array(speed, int, NULL, 0);
MODULE_PARM_DESC(aui, "ThunderLAN use AUI port(s) (0-1)");
MODULE_PARM_DESC(duplex,
"ThunderLAN duplex setting(s) (0-default, 1-half, 2-full)");
MODULE_PARM_DESC(speed, "ThunderLAN port speed setting(s) (0,10,100)");
MODULE_AUTHOR("Maintainer: Samuel Chessman <chessman@tux.org>");
MODULE_DESCRIPTION("Driver for TI ThunderLAN based ethernet PCI adapters");
MODULE_LICENSE("GPL");
#undef MONITOR
static  int		debug;
module_param(debug, int, 0);
MODULE_PARM_DESC(debug, "ThunderLAN debug mask");
static	const char tlan_signature[] = "TLAN";
static  const char tlan_banner[] = "ThunderLAN driver v1.17\n";
static  int tlan_have_pci;
static  int tlan_have_eisa;
static const char * const media[] = ;
static struct board  board_info[] = ;
static DEFINE_PCI_DEVICE_TABLE(tlan_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, tlan_pci_tbl);
static void	tlan_eisa_probe(void);
static void	tlan_eisa_cleanup(void);
static int      tlan_init(struct net_device *);
static int	tlan_open(struct net_device *dev);
static netdev_tx_t tlan_start_tx(struct sk_buff *, struct net_device *);
static irqreturn_t tlan_handle_interrupt(int, void *);
static int	tlan_close(struct net_device *);
static struct	net_device_stats *tlan_get_stats(struct net_device *);
static void	tlan_set_multicast_list(struct net_device *);
static int	tlan_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static int      tlan_probe1(struct pci_dev *pdev, long ioaddr,
int irq, int rev, const struct pci_device_id *ent);
static void	tlan_tx_timeout(struct net_device *dev);
static void	tlan_tx_timeout_work(struct work_struct *work);
static int	tlan_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent);
static u32	tlan_handle_tx_eof(struct net_device *, u16);
static u32	tlan_handle_stat_overflow(struct net_device *, u16);
static u32	tlan_handle_rx_eof(struct net_device *, u16);
static u32	tlan_handle_dummy(struct net_device *, u16);
static u32	tlan_handle_tx_eoc(struct net_device *, u16);
static u32	tlan_handle_status_check(struct net_device *, u16);
static u32	tlan_handle_rx_eoc(struct net_device *, u16);
static void	tlan_timer(unsigned long);
static void	tlan_reset_lists(struct net_device *);
static void	tlan_free_lists(struct net_device *);
static void	tlan_print_dio(u16);
static void	tlan_print_list(struct tlan_list *, char *, int);
static void	tlan_read_and_clear_stats(struct net_device *, int);
static void	tlan_reset_adapter(struct net_device *);
static void	tlan_finish_reset(struct net_device *);
static void	tlan_set_mac(struct net_device *, int areg, char *mac);
static void	tlan_phy_print(struct net_device *);
static void	tlan_phy_detect(struct net_device *);
static void	tlan_phy_power_down(struct net_device *);
static void	tlan_phy_power_up(struct net_device *);
static void	tlan_phy_reset(struct net_device *);
static void	tlan_phy_start_link(struct net_device *);
static void	tlan_phy_finish_auto_neg(struct net_device *);
static void     tlan_phy_monitor(struct net_device *);
static bool	tlan_mii_read_reg(struct net_device *, u16, u16, u16 *);
static void	tlan_mii_send_data(u16, u32, unsigned);
static void	tlan_mii_sync(u16);
static void	tlan_mii_write_reg(struct net_device *, u16, u16, u16);
static void	tlan_ee_send_start(u16);
static int	tlan_ee_send_byte(u16, u8, int);
static void	tlan_ee_receive_byte(u16, u8 *, int);
static int	tlan_ee_read_byte(struct net_device *, u8, u8 *);
static inline void
tlan_store_skb(struct tlan_list *tag, struct sk_buff *skb)
static inline struct sk_buff *
tlan_get_skb(const struct tlan_list *tag)
static u32
(*tlan_int_vector[TLAN_INT_NUMBER_OF_INTS])(struct net_device *, u16) = ;
static inline void
tlan_set_timer(struct net_device *dev, u32 ticks, u32 type)
static void __devexit tlan_remove_one(struct pci_dev *pdev)
static void tlan_start(struct net_device *dev)
static void tlan_stop(struct net_device *dev)
static int tlan_suspend(struct pci_dev *pdev, pm_message_t state)
static int tlan_resume(struct pci_dev *pdev)
#define tlan_suspend   NULL
#define tlan_resume    NULL
static struct pci_driver tlan_driver = ;
static int __init tlan_probe(void)
static int __devinit tlan_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static int __devinit tlan_probe1(struct pci_dev *pdev,
long ioaddr, int irq, int rev,
const struct pci_device_id *ent)
static void tlan_eisa_cleanup(void)
static void __exit tlan_exit(void)
module_init(tlan_probe);
module_exit(tlan_exit);
static void  __init tlan_eisa_probe(void)
static void tlan_poll(struct net_device *dev)
static const struct net_device_ops tlan_netdev_ops = ;
static int tlan_init(struct net_device *dev)
static int tlan_open(struct net_device *dev)
static int tlan_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static void tlan_tx_timeout(struct net_device *dev)
static void tlan_tx_timeout_work(struct work_struct *work)
static netdev_tx_t tlan_start_tx(struct sk_buff *skb, struct net_device *dev)
static irqreturn_t tlan_handle_interrupt(int irq, void *dev_id)
static int tlan_close(struct net_device *dev)
static struct net_device_stats *tlan_get_stats(struct net_device *dev)
static void tlan_set_multicast_list(struct net_device *dev)
static u32 tlan_handle_tx_eof(struct net_device *dev, u16 host_int)
static u32 tlan_handle_stat_overflow(struct net_device *dev, u16 host_int)
static u32 tlan_handle_rx_eof(struct net_device *dev, u16 host_int)
static u32 tlan_handle_dummy(struct net_device *dev, u16 host_int)
static u32 tlan_handle_tx_eoc(struct net_device *dev, u16 host_int)
static u32 tlan_handle_status_check(struct net_device *dev, u16 host_int)
static u32 tlan_handle_rx_eoc(struct net_device *dev, u16 host_int)
static void tlan_timer(unsigned long data)
static void tlan_reset_lists(struct net_device *dev)
static void tlan_free_lists(struct net_device *dev)
static void tlan_print_dio(u16 io_base)
static void tlan_print_list(struct tlan_list *list, char *type, int num)
static void tlan_read_and_clear_stats(struct net_device *dev, int record)
static void
tlan_reset_adapter(struct net_device *dev)
static void
tlan_finish_reset(struct net_device *dev)
static void tlan_set_mac(struct net_device *dev, int areg, char *mac)
static void tlan_phy_print(struct net_device *dev)
static void tlan_phy_detect(struct net_device *dev)
static void tlan_phy_power_down(struct net_device *dev)
static void tlan_phy_power_up(struct net_device *dev)
static void tlan_phy_reset(struct net_device *dev)
static void tlan_phy_start_link(struct net_device *dev)
static void tlan_phy_finish_auto_neg(struct net_device *dev)
void tlan_phy_monitor(struct net_device *dev)
static bool
tlan_mii_read_reg(struct net_device *dev, u16 phy, u16 reg, u16 *val)
static void tlan_mii_send_data(u16 base_port, u32 data, unsigned num_bits)
static void tlan_mii_sync(u16 base_port)
static void
tlan_mii_write_reg(struct net_device *dev, u16 phy, u16 reg, u16 val)
static void tlan_ee_send_start(u16 io_base)
static int tlan_ee_send_byte(u16 io_base, u8 data, int stop)
static void tlan_ee_receive_byte(u16 io_base, u8 *data, int stop)
static int tlan_ee_read_byte(struct net_device *dev, u8 ee_addr, u8 *data)
