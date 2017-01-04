static struct sk_buff_head loopback_queue;
static struct timer_list loopback_timer;
static void rose_set_loopback_timer(void);
void rose_loopback_init(void)
static int rose_loopback_running(void)
int rose_loopback_queue(struct sk_buff *skb, struct rose_neigh *neigh)
static void rose_loopback_timer(unsigned long);
static void rose_set_loopback_timer(void)
static void rose_loopback_timer(unsigned long param)
void __exit rose_loopback_clear(void)
