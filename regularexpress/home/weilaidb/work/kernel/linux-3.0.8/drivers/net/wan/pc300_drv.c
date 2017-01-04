#define	USE_PCI_CLOCK
static const char rcsid[] =
"Revision: 3.4.5 Date: 2002/03/07 ";
#define	CPC_LOCK(card,flags)		\
do  while (0)
#define CPC_UNLOCK(card,flags)			\
do  while (0)
#undef	PC300_DEBUG_PCI
#undef	PC300_DEBUG_INTR
#undef	PC300_DEBUG_TX
#undef	PC300_DEBUG_RX
#undef	PC300_DEBUG_OTHER
static DEFINE_PCI_DEVICE_TABLE(cpc_pci_dev_id) = ;
MODULE_DEVICE_TABLE(pci, cpc_pci_dev_id);
#define	cpc_min(a,b)	(((a)<(b))?(a):(b))
#define	cpc_max(a,b)	(((a)>(b))?(a):(b))
static void tx_dma_buf_pt_init(pc300_t *, int);
static void tx_dma_buf_init(pc300_t *, int);
static void rx_dma_buf_pt_init(pc300_t *, int);
static void rx_dma_buf_init(pc300_t *, int);
static void tx_dma_buf_check(pc300_t *, int);
static void rx_dma_buf_check(pc300_t *, int);
static irqreturn_t cpc_intr(int, void *);
static int clock_rate_calc(u32, u32, int *);
static u32 detect_ram(pc300_t *);
static void plx_init(pc300_t *);
static void cpc_trace(struct net_device *, struct sk_buff *, char);
static int cpc_attach(struct net_device *, unsigned short, unsigned short);
static int cpc_close(struct net_device *dev);
void cpc_tty_init(pc300dev_t * dev);
void cpc_tty_unregister_service(pc300dev_t * pc300dev);
void cpc_tty_receive(pc300dev_t * pc300dev);
void cpc_tty_trigger_poll(pc300dev_t * pc300dev);
void cpc_tty_reset_var(void);
static void tx_dma_buf_pt_init(pc300_t * card, int ch)
static void tx_dma_buf_init(pc300_t * card, int ch)
static void rx_dma_buf_pt_init(pc300_t * card, int ch)
static void rx_dma_buf_init(pc300_t * card, int ch)
static void tx_dma_buf_check(pc300_t * card, int ch)
static void tx1_dma_buf_check(pc300_t * card, int ch)
static void rx_dma_buf_check(pc300_t * card, int ch)
static int dma_get_rx_frame_size(pc300_t * card, int ch)
static int dma_buf_write(pc300_t *card, int ch, u8 *ptdata, int len)
static int dma_buf_read(pc300_t * card, int ch, struct sk_buff *skb)
static void tx_dma_stop(pc300_t * card, int ch)
static void rx_dma_stop(pc300_t * card, int ch)
static void rx_dma_start(pc300_t * card, int ch)
static void falc_issue_cmd(pc300_t *card, int ch, u8 cmd)
static void falc_intr_enable(pc300_t * card, int ch)
static void falc_open_timeslot(pc300_t * card, int ch, int timeslot)
static void falc_close_timeslot(pc300_t * card, int ch, int timeslot)
static void falc_close_all_timeslots(pc300_t * card, int ch)
static void falc_open_all_timeslots(pc300_t * card, int ch)
static void falc_init_timeslot(pc300_t * card, int ch)
static void falc_enable_comm(pc300_t * card, int ch)
static void falc_disable_comm(pc300_t * card, int ch)
static void falc_init_t1(pc300_t * card, int ch)
static void falc_init_e1(pc300_t * card, int ch)
static void falc_init_hdlc(pc300_t * card, int ch)
static void te_config(pc300_t * card, int ch)
static void falc_check_status(pc300_t * card, int ch, unsigned char frs0)
static void falc_update_stats(pc300_t * card, int ch)
static void falc_remote_loop(pc300_t * card, int ch, int loop_on)
static void falc_local_loop(pc300_t * card, int ch, int loop_on)
static void falc_payload_loop(pc300_t * card, int ch, int loop_on)
static void turn_off_xlu(pc300_t * card, int ch)
static void turn_off_xld(pc300_t * card, int ch)
static void falc_generate_loop_up_code(pc300_t * card, int ch)
static void falc_generate_loop_down_code(pc300_t * card, int ch)
static void falc_pattern_test(pc300_t * card, int ch, unsigned int activate)
static u16 falc_pattern_test_error(pc300_t * card, int ch)
static void
cpc_trace(struct net_device *dev, struct sk_buff *skb_main, char rx_tx)
static void cpc_tx_timeout(struct net_device *dev)
static int cpc_queue_xmit(struct sk_buff *skb, struct net_device *dev)
static void cpc_net_rx(struct net_device *dev)
static void sca_tx_intr(pc300dev_t *dev)
static void sca_intr(pc300_t * card)
static void falc_t1_loop_detection(pc300_t *card, int ch, u8 frs1)
static void falc_e1_loop_detection(pc300_t *card, int ch, u8 rsp)
static void falc_t1_intr(pc300_t * card, int ch)
static void falc_e1_intr(pc300_t * card, int ch)
static void falc_intr(pc300_t * card)
static irqreturn_t cpc_intr(int irq, void *dev_id)
static void cpc_sca_status(pc300_t * card, int ch)
static void cpc_falc_status(pc300_t * card, int ch)
static int cpc_change_mtu(struct net_device *dev, int new_mtu)
static int cpc_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static int clock_rate_calc(u32 rate, u32 clock, int *br_io)
static int ch_config(pc300dev_t * d)
static int rx_config(pc300dev_t * d)
static int tx_config(pc300dev_t * d)
static int cpc_attach(struct net_device *dev, unsigned short encoding,
unsigned short parity)
static int cpc_opench(pc300dev_t * d)
static void cpc_closech(pc300dev_t * d)
int cpc_open(struct net_device *dev)
static int cpc_close(struct net_device *dev)
static u32 detect_ram(pc300_t * card)
static void plx_init(pc300_t * card)
static inline void show_version(void)
static const struct net_device_ops cpc_netdev_ops = ;
static void cpc_init_card(pc300_t * card)
static int __devinit
cpc_init_one(struct pci_dev *pdev, const struct pci_device_id *ent)
static void __devexit cpc_remove_one(struct pci_dev *pdev)
static struct pci_driver cpc_driver = ;
static int __init cpc_init(void)
static void __exit cpc_cleanup_module(void)
module_init(cpc_init);
module_exit(cpc_cleanup_module);
MODULE_DESCRIPTION("Cyclades-PC300 cards driver");
MODULE_AUTHOR(  "Author: Ivan Passos <ivan@cyclades.com>\r\n"
"Maintainer: PC300 Maintainer <pc300@cyclades.com");
MODULE_LICENSE("GPL");
