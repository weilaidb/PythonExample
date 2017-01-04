static inline void et131x_free_send_packet(struct et131x_adapter *etdev,
struct tcb *tcb);
static int et131x_send_packet(struct sk_buff *skb,
struct et131x_adapter *etdev);
static int nic_send_packet(struct et131x_adapter *etdev, struct tcb *tcb);
int et131x_tx_dma_memory_alloc(struct et131x_adapter *adapter)
void et131x_tx_dma_memory_free(struct et131x_adapter *adapter)
void ConfigTxDmaRegs(struct et131x_adapter *etdev)
void et131x_tx_dma_disable(struct et131x_adapter *etdev)
void et131x_tx_dma_enable(struct et131x_adapter *etdev)
void et131x_init_send(struct et131x_adapter *adapter)
int et131x_send_packets(struct sk_buff *skb, struct net_device *netdev)
static int et131x_send_packet(struct sk_buff *skb,
struct et131x_adapter *etdev)
static int nic_send_packet(struct et131x_adapter *etdev, struct tcb *tcb)
inline void et131x_free_send_packet(struct et131x_adapter *etdev,
struct tcb *tcb)
void et131x_free_busy_send_packets(struct et131x_adapter *etdev)
void et131x_handle_send_interrupt(struct et131x_adapter *etdev)
