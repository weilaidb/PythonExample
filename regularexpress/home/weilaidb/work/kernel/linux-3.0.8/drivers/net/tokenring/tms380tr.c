static const char version[] = "tms380tr.c: v1.10 30/12/2002 by Christoph Goos, Adam Fritzler\n";
#define TMS380TR_DEBUG 0
static unsigned int tms380tr_debug = TMS380TR_DEBUG;
static int      tms380tr_bringup_diags(struct net_device *dev);
static void	tms380tr_cancel_tx_queue(struct net_local* tp);
static int 	tms380tr_chipset_init(struct net_device *dev);
static void 	tms380tr_chk_irq(struct net_device *dev);
static void 	tms380tr_chk_outstanding_cmds(struct net_device *dev);
static void 	tms380tr_chk_src_addr(unsigned char *frame, unsigned char *hw_addr);
static unsigned char tms380tr_chk_ssb(struct net_local *tp, unsigned short IrqType);
int	 	tms380tr_close(struct net_device *dev);
static void 	tms380tr_cmd_status_irq(struct net_device *dev);
static void 	tms380tr_disable_interrupts(struct net_device *dev);
#if TMS380TR_DEBUG > 0
static void 	tms380tr_dump(unsigned char *Data, int length);
static void 	tms380tr_enable_interrupts(struct net_device *dev);
static void 	tms380tr_exec_cmd(struct net_device *dev, unsigned short Command);
static void 	tms380tr_exec_sifcmd(struct net_device *dev, unsigned int WriteValue);
static struct net_device_stats *tms380tr_get_stats(struct net_device *dev);
static netdev_tx_t tms380tr_hardware_send_packet(struct sk_buff *skb,
struct net_device *dev);
static int 	tms380tr_init_adapter(struct net_device *dev);
static void 	tms380tr_init_ipb(struct net_local *tp);
static void 	tms380tr_init_net_local(struct net_device *dev);
static void 	tms380tr_init_opb(struct net_device *dev);
int		tms380tr_open(struct net_device *dev);
static void	tms380tr_open_adapter(struct net_device *dev);
static void 	tms380tr_rcv_status_irq(struct net_device *dev);
static int 	tms380tr_read_ptr(struct net_device *dev);
static void 	tms380tr_read_ram(struct net_device *dev, unsigned char *Data,
unsigned short Address, int Length);
static int 	tms380tr_reset_adapter(struct net_device *dev);
static void 	tms380tr_reset_interrupt(struct net_device *dev);
static void 	tms380tr_ring_status_irq(struct net_device *dev);
static netdev_tx_t tms380tr_send_packet(struct sk_buff *skb,
struct net_device *dev);
static void 	tms380tr_set_multicast_list(struct net_device *dev);
static int	tms380tr_set_mac_address(struct net_device *dev, void *addr);
static void 	tms380tr_timer_chk(unsigned long data);
static void 	tms380tr_timer_end_wait(unsigned long data);
static void 	tms380tr_tx_status_irq(struct net_device *dev);
static void 	tms380tr_update_rcv_stats(struct net_local *tp,
unsigned char DataPtr[], unsigned int Length);
void	 	tms380tr_wait(unsigned long time);
static void 	tms380tr_write_rpl_status(RPL *rpl, unsigned int Status);
static void 	tms380tr_write_tpl_status(TPL *tpl, unsigned int Status);
#define SIFREADB(reg) \
(((struct net_local *)netdev_priv(dev))->sifreadb(dev, reg))
#define SIFWRITEB(val, reg) \
(((struct net_local *)netdev_priv(dev))->sifwriteb(dev, val, reg))
#define SIFREADW(reg) \
(((struct net_local *)netdev_priv(dev))->sifreadw(dev, reg))
#define SIFWRITEW(val, reg) \
(((struct net_local *)netdev_priv(dev))->sifwritew(dev, val, reg))
int tms380tr_open(struct net_device *dev)
static void tms380tr_timer_end_wait(unsigned long data)
static int tms380tr_chipset_init(struct net_device *dev)
static void tms380tr_init_net_local(struct net_device *dev)
static void tms380tr_init_ipb(struct net_local *tp)
static void tms380tr_init_opb(struct net_device *dev)
static void tms380tr_open_adapter(struct net_device *dev)
static void tms380tr_disable_interrupts(struct net_device *dev)
static void tms380tr_enable_interrupts(struct net_device *dev)
static void tms380tr_exec_cmd(struct net_device *dev, unsigned short Command)
static void tms380tr_timeout(struct net_device *dev)
static netdev_tx_t tms380tr_send_packet(struct sk_buff *skb,
struct net_device *dev)
static netdev_tx_t tms380tr_hardware_send_packet(struct sk_buff *skb,
struct net_device *dev)
static void tms380tr_write_tpl_status(TPL *tpl, unsigned int Status)
static void tms380tr_chk_src_addr(unsigned char *frame, unsigned char *hw_addr)
static void tms380tr_timer_chk(unsigned long data)
irqreturn_t tms380tr_interrupt(int irq, void *dev_id)
static void tms380tr_reset_interrupt(struct net_device *dev)
static unsigned char tms380tr_chk_ssb(struct net_local *tp, unsigned short IrqType)
static void tms380tr_cmd_status_irq(struct net_device *dev)
int tms380tr_close(struct net_device *dev)
static struct net_device_stats *tms380tr_get_stats(struct net_device *dev)
static void tms380tr_set_multicast_list(struct net_device *dev)
void tms380tr_wait(unsigned long time)
static void tms380tr_exec_sifcmd(struct net_device *dev, unsigned int WriteValue)
static int tms380tr_reset_adapter(struct net_device *dev)
MODULE_FIRMWARE("tms380tr.bin");
static int tms380tr_bringup_diags(struct net_device *dev)
static int tms380tr_init_adapter(struct net_device *dev)
static void tms380tr_chk_outstanding_cmds(struct net_device *dev)
static void tms380tr_ring_status_irq(struct net_device *dev)
static void tms380tr_chk_irq(struct net_device *dev)
static int tms380tr_read_ptr(struct net_device *dev)
static void tms380tr_read_ram(struct net_device *dev, unsigned char *Data,
unsigned short Address, int Length)
static void tms380tr_cancel_tx_queue(struct net_local* tp)
static void tms380tr_tx_status_irq(struct net_device *dev)
static void tms380tr_rcv_status_irq(struct net_device *dev)
static void tms380tr_write_rpl_status(RPL *rpl, unsigned int Status)
static void tms380tr_update_rcv_stats(struct net_local *tp, unsigned char DataPtr[],
unsigned int Length)
static int tms380tr_set_mac_address(struct net_device *dev, void *addr)
#if TMS380TR_DEBUG > 0
static void tms380tr_dump(unsigned char *Data, int length)
void tmsdev_term(struct net_device *dev)
const struct net_device_ops tms380tr_netdev_ops = ;
EXPORT_SYMBOL(tms380tr_netdev_ops);
int tmsdev_init(struct net_device *dev, struct device *pdev)
EXPORT_SYMBOL(tms380tr_open);
EXPORT_SYMBOL(tms380tr_close);
EXPORT_SYMBOL(tms380tr_interrupt);
EXPORT_SYMBOL(tmsdev_init);
EXPORT_SYMBOL(tmsdev_term);
EXPORT_SYMBOL(tms380tr_wait);
static struct module *TMS380_module = NULL;
int init_module(void)
void cleanup_module(void)
MODULE_LICENSE("GPL");
