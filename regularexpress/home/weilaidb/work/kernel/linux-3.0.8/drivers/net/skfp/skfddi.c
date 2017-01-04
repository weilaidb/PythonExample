#define VERSION		"2.07"
static const char * const boot_msg =
"SysKonnect FDDI PCI Adapter driver v" VERSION " for\n"
"  SK-55xx/SK-58xx adapters (SK-NET FDDI-FP/UP/LP)";
#undef ADDR
static int skfp_driver_init(struct net_device *dev);
static int skfp_open(struct net_device *dev);
static int skfp_close(struct net_device *dev);
static irqreturn_t skfp_interrupt(int irq, void *dev_id);
static struct net_device_stats *skfp_ctl_get_stats(struct net_device *dev);
static void skfp_ctl_set_multicast_list(struct net_device *dev);
static void skfp_ctl_set_multicast_list_wo_lock(struct net_device *dev);
static int skfp_ctl_set_mac_address(struct net_device *dev, void *addr);
static int skfp_ioctl(struct net_device *dev, struct ifreq *rq, int cmd);
static netdev_tx_t skfp_send_pkt(struct sk_buff *skb,
struct net_device *dev);
static void send_queued_packets(struct s_smc *smc);
static void CheckSourceAddress(unsigned char *frame, unsigned char *hw_addr);
static void ResetAdapter(struct s_smc *smc);
void *mac_drv_get_space(struct s_smc *smc, u_int size);
void *mac_drv_get_desc_mem(struct s_smc *smc, u_int size);
unsigned long mac_drv_virt2phys(struct s_smc *smc, void *virt);
unsigned long dma_master(struct s_smc *smc, void *virt, int len, int flag);
void dma_complete(struct s_smc *smc, volatile union s_fp_descr *descr,
int flag);
void mac_drv_tx_complete(struct s_smc *smc, volatile struct s_smt_fp_txd *txd);
void llc_restart_tx(struct s_smc *smc);
void mac_drv_rx_complete(struct s_smc *smc, volatile struct s_smt_fp_rxd *rxd,
int frag_count, int len);
void mac_drv_requeue_rxd(struct s_smc *smc, volatile struct s_smt_fp_rxd *rxd,
int frag_count);
void mac_drv_fill_rxd(struct s_smc *smc);
void mac_drv_clear_rxd(struct s_smc *smc, volatile struct s_smt_fp_rxd *rxd,
int frag_count);
int mac_drv_rx_init(struct s_smc *smc, int len, int fc, char *look_ahead,
int la_len);
void dump_data(unsigned char *Data, int length);
extern u_int mac_drv_check_space(void);
extern int mac_drv_init(struct s_smc *smc);
extern void hwm_tx_frag(struct s_smc *smc, char far * virt, u_long phys,
int len, int frame_status);
extern int hwm_tx_init(struct s_smc *smc, u_char fc, int frag_count,
int frame_len, int frame_status);
extern void fddi_isr(struct s_smc *smc);
extern void hwm_rx_frag(struct s_smc *smc, char far * virt, u_long phys,
int len, int frame_status);
extern void mac_drv_rx_mode(struct s_smc *smc, int mode);
extern void mac_drv_clear_rx_queue(struct s_smc *smc);
extern void enable_tx_irq(struct s_smc *smc, u_short queue);
static DEFINE_PCI_DEVICE_TABLE(skfddi_pci_tbl) = ;
MODULE_DEVICE_TABLE(pci, skfddi_pci_tbl);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Mirko Lindner <mlindner@syskonnect.de>");
static int num_boards;
static const struct net_device_ops skfp_netdev_ops = ;
static int skfp_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit skfp_remove_one(struct pci_dev *pdev)
static  int skfp_driver_init(struct net_device *dev)
static int skfp_open(struct net_device *dev)
static int skfp_close(struct net_device *dev)
static irqreturn_t skfp_interrupt(int irq, void *dev_id)
static struct net_device_stats *skfp_ctl_get_stats(struct net_device *dev)
static void skfp_ctl_set_multicast_list(struct net_device *dev)
static void skfp_ctl_set_multicast_list_wo_lock(struct net_device *dev)
static int skfp_ctl_set_mac_address(struct net_device *dev, void *addr)
static int skfp_ioctl(struct net_device *dev, struct ifreq *rq, int cmd)
static netdev_tx_t skfp_send_pkt(struct sk_buff *skb,
struct net_device *dev)
static void send_queued_packets(struct s_smc *smc)
static void CheckSourceAddress(unsigned char *frame, unsigned char *hw_addr)
static void ResetAdapter(struct s_smc *smc)
void llc_restart_tx(struct s_smc *smc)
void *mac_drv_get_space(struct s_smc *smc, unsigned int size)
void *mac_drv_get_desc_mem(struct s_smc *smc, unsigned int size)
unsigned long mac_drv_virt2phys(struct s_smc *smc, void *virt)
u_long dma_master(struct s_smc * smc, void *virt, int len, int flag)
void dma_complete(struct s_smc *smc, volatile union s_fp_descr *descr, int flag)
void mac_drv_tx_complete(struct s_smc *smc, volatile struct s_smt_fp_txd *txd)
void dump_data(unsigned char *Data, int length)
#define dump_data(data,len)
void mac_drv_rx_complete(struct s_smc *smc, volatile struct s_smt_fp_rxd *rxd,
int frag_count, int len)
void mac_drv_requeue_rxd(struct s_smc *smc, volatile struct s_smt_fp_rxd *rxd,
int frag_count)
void mac_drv_fill_rxd(struct s_smc *smc)
void mac_drv_clear_rxd(struct s_smc *smc, volatile struct s_smt_fp_rxd *rxd,
int frag_count)
int mac_drv_rx_init(struct s_smc *smc, int len, int fc,
char *look_ahead, int la_len)
void smt_timer_poll(struct s_smc *smc)
void ring_status_indication(struct s_smc *smc, u_long status)
unsigned long smt_get_time(void)
void smt_stat_counter(struct s_smc *smc, int stat)
void cfm_state_change(struct s_smc *smc, int c_state)
void ecm_state_change(struct s_smc *smc, int e_state)
void rmt_state_change(struct s_smc *smc, int r_state)
void drv_reset_indication(struct s_smc *smc)
static struct pci_driver skfddi_pci_driver = ;
static int __init skfd_init(void)
static void __exit skfd_exit(void)
module_init(skfd_init);
module_exit(skfd_exit);
