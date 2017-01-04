#undef PHY_LOOPBACK
#undef TX_DEBUG
#undef RX_DEBUG
#undef GENERAL_DEBUG
#undef EXTRA_DEBUG
#undef NS_USE_DESTRUCTORS
#define TXPRINTK(args...) printk(args)
#define TXPRINTK(args...)
#define RXPRINTK(args...) printk(args)
#define RXPRINTK(args...)
#define PRINTK(args...) printk(args)
#define PRINTK(args...)
#define XPRINTK(args...) printk(args)
#define XPRINTK(args...)
#define CMD_BUSY(card) (readl((card)->membase + STAT) & NS_STAT_CMDBZ)
#define NS_DELAY mdelay(1)
#define PTR_DIFF(a, b)	((u32)((unsigned long)(a) - (unsigned long)(b)))
#define ATM_SKB(s) (&(s)->atm)
#define scq_virt_to_bus(scq, p) \
(scq->dma + ((unsigned long)(p) - (unsigned long)(scq)->org))
static u32 ns_read_sram(ns_dev * card, u32 sram_address);
static void ns_write_sram(ns_dev * card, u32 sram_address, u32 * value,
int count);
static int __devinit ns_init_card(int i, struct pci_dev *pcidev);
static void __devinit ns_init_card_error(ns_dev * card, int error);
static scq_info *get_scq(ns_dev *card, int size, u32 scd);
static void free_scq(ns_dev *card, scq_info * scq, struct atm_vcc *vcc);
static void push_rxbufs(ns_dev *, struct sk_buff *);
static irqreturn_t ns_irq_handler(int irq, void *dev_id);
static int ns_open(struct atm_vcc *vcc);
static void ns_close(struct atm_vcc *vcc);
static void fill_tst(ns_dev * card, int n, vc_map * vc);
static int ns_send(struct atm_vcc *vcc, struct sk_buff *skb);
static int push_scqe(ns_dev * card, vc_map * vc, scq_info * scq, ns_scqe * tbd,
struct sk_buff *skb);
static void process_tsq(ns_dev * card);
static void drain_scq(ns_dev * card, scq_info * scq, int pos);
static void process_rsq(ns_dev * card);
static void dequeue_rx(ns_dev * card, ns_rsqe * rsqe);
static void ns_sb_destructor(struct sk_buff *sb);
static void ns_lb_destructor(struct sk_buff *lb);
static void ns_hb_destructor(struct sk_buff *hb);
static void recycle_rx_buf(ns_dev * card, struct sk_buff *skb);
static void recycle_iovec_rx_bufs(ns_dev * card, struct iovec *iov, int count);
static void recycle_iov_buf(ns_dev * card, struct sk_buff *iovb);
static void dequeue_sm_buf(ns_dev * card, struct sk_buff *sb);
static void dequeue_lg_buf(ns_dev * card, struct sk_buff *lb);
static int ns_proc_read(struct atm_dev *dev, loff_t * pos, char *page);
static int ns_ioctl(struct atm_dev *dev, unsigned int cmd, void __user * arg);
static void which_list(ns_dev * card, struct sk_buff *skb);
static void ns_poll(unsigned long arg);
static int ns_parse_mac(char *mac, unsigned char *esi);
static void ns_phy_put(struct atm_dev *dev, unsigned char value,
unsigned long addr);
static unsigned char ns_phy_get(struct atm_dev *dev, unsigned long addr);
static struct ns_dev *cards[NS_MAX_CARDS];
static unsigned num_cards;
static struct atmdev_ops atm_ops = ;
static struct timer_list ns_timer;
static char *mac[NS_MAX_CARDS];
module_param_array(mac, charp, NULL, 0);
MODULE_LICENSE("GPL");
static int __devinit nicstar_init_one(struct pci_dev *pcidev,
const struct pci_device_id *ent)
static void __devexit nicstar_remove_one(struct pci_dev *pcidev)
static struct pci_device_id nicstar_pci_tbl[] __devinitdata = ;
MODULE_DEVICE_TABLE(pci, nicstar_pci_tbl);
static struct pci_driver nicstar_driver = ;
static int __init nicstar_init(void)
static void __exit nicstar_cleanup(void)
static u32 ns_read_sram(ns_dev * card, u32 sram_address)
static void ns_write_sram(ns_dev * card, u32 sram_address, u32 * value,
int count)
static int __devinit ns_init_card(int i, struct pci_dev *pcidev)
static void __devinit ns_init_card_error(ns_dev * card, int error)
static scq_info *get_scq(ns_dev *card, int size, u32 scd)
static void free_scq(ns_dev *card, scq_info *scq, struct atm_vcc *vcc)
static void push_rxbufs(ns_dev * card, struct sk_buff *skb)
static irqreturn_t ns_irq_handler(int irq, void *dev_id)
static int ns_open(struct atm_vcc *vcc)
static void ns_close(struct atm_vcc *vcc)
static void fill_tst(ns_dev * card, int n, vc_map * vc)
static int ns_send(struct atm_vcc *vcc, struct sk_buff *skb)
static int push_scqe(ns_dev * card, vc_map * vc, scq_info * scq, ns_scqe * tbd,
struct sk_buff *skb)
static void process_tsq(ns_dev * card)
static void drain_scq(ns_dev * card, scq_info * scq, int pos)
static void process_rsq(ns_dev * card)
static void dequeue_rx(ns_dev * card, ns_rsqe * rsqe)
static void ns_sb_destructor(struct sk_buff *sb)
static void ns_lb_destructor(struct sk_buff *lb)
static void ns_hb_destructor(struct sk_buff *hb)
static void recycle_rx_buf(ns_dev * card, struct sk_buff *skb)
static void recycle_iovec_rx_bufs(ns_dev * card, struct iovec *iov, int count)
static void recycle_iov_buf(ns_dev * card, struct sk_buff *iovb)
static void dequeue_sm_buf(ns_dev * card, struct sk_buff *sb)
static void dequeue_lg_buf(ns_dev * card, struct sk_buff *lb)
static int ns_proc_read(struct atm_dev *dev, loff_t * pos, char *page)
static int ns_ioctl(struct atm_dev *dev, unsigned int cmd, void __user * arg)
static void which_list(ns_dev * card, struct sk_buff *skb)
static void ns_poll(unsigned long arg)
static int ns_parse_mac(char *mac, unsigned char *esi)
static void ns_phy_put(struct atm_dev *dev, unsigned char value,
unsigned long addr)
static unsigned char ns_phy_get(struct atm_dev *dev, unsigned long addr)
module_init(nicstar_init);
module_exit(nicstar_cleanup);
