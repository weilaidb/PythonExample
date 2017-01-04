#define CVM_OCT_SKB_CB(skb)	((u64 *)((skb)->cb))
#define GET_SKBUFF_QOS(skb) 0
static void cvm_oct_tx_do_cleanup(unsigned long arg);
static DECLARE_TASKLET(cvm_oct_tx_cleanup_tasklet, cvm_oct_tx_do_cleanup, 0);
#define MAX_SKB_TO_FREE (MAX_OUT_QUEUE_DEPTH * 2)
static inline int32_t cvm_oct_adjust_skb_to_free(int32_t skb_to_free, int fau)
static void cvm_oct_kick_tx_poll_watchdog(void)
void cvm_oct_free_tx_skbs(struct net_device *dev)
int cvm_oct_xmit(struct sk_buff *skb, struct net_device *dev)
int cvm_oct_xmit_pow(struct sk_buff *skb, struct net_device *dev)
void cvm_oct_tx_shutdown_dev(struct net_device *dev)
static void cvm_oct_tx_do_cleanup(unsigned long arg)
static irqreturn_t cvm_oct_tx_cleanup_watchdog(int cpl, void *dev_id)
void cvm_oct_tx_initialize(void)
void cvm_oct_tx_shutdown(void)
