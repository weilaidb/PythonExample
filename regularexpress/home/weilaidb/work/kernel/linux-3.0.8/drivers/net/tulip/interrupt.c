int tulip_rx_copybreak;
unsigned int tulip_max_interrupt_work;
#define MIT_SIZE 15
#define MIT_TABLE 15
static unsigned int mit_table[MIT_SIZE+1] =
;
int tulip_refill_rx(struct net_device *dev)
void oom_timer(unsigned long data)
int tulip_poll(struct napi_struct *napi, int budget)
static int tulip_rx(struct net_device *dev)
static inline unsigned int phy_interrupt (struct net_device *dev)
irqreturn_t tulip_interrupt(int irq, void *dev_instance)
while ((csr5 & (NormalIntr|AbnormalIntr)) != 0);
tulip_refill_rx(dev);
entry = tp->dirty_rx % RX_RING_SIZE;
if (tp->rx_buffers[entry].skb == NULL)
if ((missed = ioread32(ioaddr + CSR8) & 0x1ffff))
if (tulip_debug > 4)
netdev_dbg(dev, "exiting interrupt, csr5=%#04x\n",
ioread32(ioaddr + CSR5));
return IRQ_HANDLED;
}
