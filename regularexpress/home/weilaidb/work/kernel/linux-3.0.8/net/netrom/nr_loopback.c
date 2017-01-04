static void nr_loopback_timer(unsigned long);
static struct sk_buff_head loopback_queue;
static DEFINE_TIMER(loopback_timer, nr_loopback_timer, 0, 0);
void __init nr_loopback_init(void)
static inline int nr_loopback_running(void)
int nr_loopback_queue(struct sk_buff *skb)
static void nr_loopback_timer(unsigned long param)
void __exit nr_loopback_clear(void)
