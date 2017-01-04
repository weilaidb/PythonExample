#define swap_byte_order(x) (((x & 0xff) << 8) | ((x & 0xff00) >> 8))
#define PRIV(dev) ((struct suni_priv *) dev->phy_data)
static unsigned char ia_phy_get(struct atm_dev *dev, unsigned long addr);
static void desc_dbg(IADEV *iadev);
static IADEV *ia_dev[8];
static struct atm_dev *_ia_dev[8];
static int iadev_count;
static void ia_led_timer(unsigned long arg);
static DEFINE_TIMER(ia_timer, ia_led_timer, 0, 0);
static int IA_TX_BUF = DFL_TX_BUFFERS, IA_TX_BUF_SZ = DFL_TX_BUF_SZ;
static int IA_RX_BUF = DFL_RX_BUFFERS, IA_RX_BUF_SZ = DFL_RX_BUF_SZ;
static uint IADebugFlag = 0;
module_param(IA_TX_BUF, int, 0);
module_param(IA_TX_BUF_SZ, int, 0);
module_param(IA_RX_BUF, int, 0);
module_param(IA_RX_BUF_SZ, int, 0);
module_param(IADebugFlag, uint, 0644);
MODULE_LICENSE("GPL");
static void ia_init_rtn_q (IARTN_Q *que)
static void ia_enque_head_rtn_q (IARTN_Q *que, IARTN_Q * data)
static int ia_enque_rtn_q (IARTN_Q *que, struct desc_tbl_t data)
static IARTN_Q * ia_deque_rtn_q (IARTN_Q *que)
static void ia_hack_tcq(IADEV *dev)
static u16 get_desc (IADEV *dev, struct ia_vcc *iavcc)
static void clear_lockup (struct atm_vcc *vcc, IADEV *dev)
static u16
cellrate_to_float(u32 cr)
static void init_abr_vc (IADEV *dev, srv_cls_param_t *srv_p)
static int
ia_open_abr_vc(IADEV *dev, srv_cls_param_t *srv_p,
struct atm_vcc *vcc, u8 flag)
static int ia_cbr_setup (IADEV *dev, struct atm_vcc *vcc)
static void ia_cbrVc_close (struct atm_vcc *vcc)
static int ia_avail_descs(IADEV *iadev)
static int ia_pkt_tx (struct atm_vcc *vcc, struct sk_buff *skb);
static int ia_que_tx (IADEV *iadev)
static void ia_tx_poll (IADEV *iadev)
static u16 ia_eeprom_get (IADEV *iadev, u32 addr)
static void ia_hw_type(IADEV *iadev)
static void IaFrontEndIntr(IADEV *iadev)
static void ia_mb25_init (IADEV *iadev)
static void ia_suni_pm7345_init (IADEV *iadev)
static int tcnter = 0;
static void xdump( u_char*  cp, int  length, char*  prefix )
static struct atm_dev *ia_boards = NULL;
#define ACTUAL_RAM_BASE \
RAM_BASE*((iadev->mem)/(128 * 1024))
#define ACTUAL_SEG_RAM_BASE \
IPHASE5575_FRAG_CONTROL_RAM_BASE*((iadev->mem)/(128 * 1024))
#define ACTUAL_REASS_RAM_BASE \
IPHASE5575_REASS_CONTROL_RAM_BASE*((iadev->mem)/(128 * 1024))
static void desc_dbg(IADEV *iadev)
static void rx_excp_rcvd(struct atm_dev *dev)
static void free_desc(struct atm_dev *dev, int desc)
static int rx_pkt(struct atm_dev *dev)
static void rx_intr(struct atm_dev *dev)
static void rx_dle_intr(struct atm_dev *dev)
static int open_rx(struct atm_vcc *vcc)
static int rx_init(struct atm_dev *dev)
static void tx_intr(struct atm_dev *dev)
static void tx_dle_intr(struct atm_dev *dev)
static int open_tx(struct atm_vcc *vcc)
static int tx_init(struct atm_dev *dev)
static irqreturn_t ia_int(int irq, void *dev_id)
static int get_esi(struct atm_dev *dev)
static int reset_sar(struct atm_dev *dev)
static int __devinit ia_init(struct atm_dev *dev)
static void ia_update_stats(IADEV *iadev)
static void ia_led_timer(unsigned long arg)
static void ia_phy_put(struct atm_dev *dev, unsigned char value,
unsigned long addr)
static unsigned char ia_phy_get(struct atm_dev *dev, unsigned long addr)
static void ia_free_tx(IADEV *iadev)
static void ia_free_rx(IADEV *iadev)
static int __devinit ia_start(struct atm_dev *dev)
static void ia_close(struct atm_vcc *vcc)
static int ia_open(struct atm_vcc *vcc)
static int ia_change_qos(struct atm_vcc *vcc, struct atm_qos *qos, int flags)
static int ia_ioctl(struct atm_dev *dev, unsigned int cmd, void __user *arg)
static int ia_getsockopt(struct atm_vcc *vcc, int level, int optname,
void __user *optval, int optlen)
static int ia_setsockopt(struct atm_vcc *vcc, int level, int optname,
void __user *optval, unsigned int optlen)
static int ia_pkt_tx (struct atm_vcc *vcc, struct sk_buff *skb)
static int ia_send(struct atm_vcc *vcc, struct sk_buff *skb)
static int ia_proc_read(struct atm_dev *dev,loff_t *pos,char *page)
static const struct atmdev_ops ops = ;
static int __devinit ia_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit ia_remove_one(struct pci_dev *pdev)
static struct pci_device_id ia_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, ia_pci_tbl);
static struct pci_driver ia_driver = ;
static int __init ia_module_init(void)
static void __exit ia_module_exit(void)
module_init(ia_module_init);
module_exit(ia_module_exit);
