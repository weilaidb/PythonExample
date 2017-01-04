LIST_HEAD(x25_neigh_list);
DEFINE_RWLOCK(x25_neigh_list_lock);
static void x25_t20timer_expiry(unsigned long);
static void x25_transmit_restart_confirmation(struct x25_neigh *nb);
static void x25_transmit_restart_request(struct x25_neigh *nb);
static inline void x25_start_t20timer(struct x25_neigh *nb)
static void x25_t20timer_expiry(unsigned long param)
static inline void x25_stop_t20timer(struct x25_neigh *nb)
static inline int x25_t20timer_pending(struct x25_neigh *nb)
void x25_link_control(struct sk_buff *skb, struct x25_neigh *nb,
unsigned short frametype)
static void x25_transmit_restart_request(struct x25_neigh *nb)
static void x25_transmit_restart_confirmation(struct x25_neigh *nb)
void x25_transmit_clear_request(struct x25_neigh *nb, unsigned int lci,
unsigned char cause)
void x25_transmit_link(struct sk_buff *skb, struct x25_neigh *nb)
void x25_link_established(struct x25_neigh *nb)
void x25_link_terminated(struct x25_neigh *nb)
void x25_link_device_up(struct net_device *dev)
static void __x25_remove_neigh(struct x25_neigh *nb)
void x25_link_device_down(struct net_device *dev)
struct x25_neigh *x25_get_neigh(struct net_device *dev)
int x25_subscr_ioctl(unsigned int cmd, void __user *arg)
void __exit x25_link_free(void)
