#undef DEBUG_FRAG
static void pcbit_transmit(struct pcbit_dev *dev);
static void pcbit_recv_ack(struct pcbit_dev *dev, unsigned char ack);
static void pcbit_l2_error(struct pcbit_dev *dev);
static void pcbit_l2_active_conf(struct pcbit_dev *dev, u_char info);
static void pcbit_l2_err_recover(unsigned long data);
static void pcbit_firmware_bug(struct pcbit_dev *dev);
static __inline__ void
pcbit_sched_delivery(struct pcbit_dev *dev)
int
pcbit_l2_write(struct pcbit_dev *dev, ulong msg, ushort refnum,
struct sk_buff *skb, unsigned short hdr_len)
static __inline__ void
pcbit_tx_update(struct pcbit_dev *dev, ushort len)
static void
pcbit_transmit(struct pcbit_dev *dev)
void
pcbit_deliver(struct work_struct *work)
static void
pcbit_receive(struct pcbit_dev *dev)
static __inline__ void
pcbit_fake_conf(struct pcbit_dev *dev, struct pcbit_chan *chan)
static void
pcbit_firmware_bug(struct pcbit_dev *dev)
irqreturn_t
pcbit_irq_handler(int interrupt, void *devptr)
static void
pcbit_l2_active_conf(struct pcbit_dev *dev, u_char info)
static void
pcbit_l2_err_recover(unsigned long data)
static void
pcbit_l2_error(struct pcbit_dev *dev)
static void
pcbit_recv_ack(struct pcbit_dev *dev, unsigned char ack)
