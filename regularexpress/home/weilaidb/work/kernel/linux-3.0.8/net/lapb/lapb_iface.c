static LIST_HEAD(lapb_list);
static DEFINE_RWLOCK(lapb_list_lock);
static void lapb_free_cb(struct lapb_cb *lapb)
static __inline__ void lapb_hold(struct lapb_cb *lapb)
static __inline__ void lapb_put(struct lapb_cb *lapb)
static void __lapb_remove_cb(struct lapb_cb *lapb)
static void __lapb_insert_cb(struct lapb_cb *lapb)
static struct lapb_cb *__lapb_devtostruct(struct net_device *dev)
static struct lapb_cb *lapb_devtostruct(struct net_device *dev)
static struct lapb_cb *lapb_create_cb(void)
int lapb_register(struct net_device *dev, struct lapb_register_struct *callbacks)
int lapb_unregister(struct net_device *dev)
int lapb_getparms(struct net_device *dev, struct lapb_parms_struct *parms)
int lapb_setparms(struct net_device *dev, struct lapb_parms_struct *parms)
int lapb_connect_request(struct net_device *dev)
int lapb_disconnect_request(struct net_device *dev)
int lapb_data_request(struct net_device *dev, struct sk_buff *skb)
int lapb_data_received(struct net_device *dev, struct sk_buff *skb)
void lapb_connect_confirmation(struct lapb_cb *lapb, int reason)
void lapb_connect_indication(struct lapb_cb *lapb, int reason)
void lapb_disconnect_confirmation(struct lapb_cb *lapb, int reason)
void lapb_disconnect_indication(struct lapb_cb *lapb, int reason)
int lapb_data_indication(struct lapb_cb *lapb, struct sk_buff *skb)
int lapb_data_transmit(struct lapb_cb *lapb, struct sk_buff *skb)
EXPORT_SYMBOL(lapb_register);
EXPORT_SYMBOL(lapb_unregister);
EXPORT_SYMBOL(lapb_getparms);
EXPORT_SYMBOL(lapb_setparms);
EXPORT_SYMBOL(lapb_connect_request);
EXPORT_SYMBOL(lapb_disconnect_request);
EXPORT_SYMBOL(lapb_data_request);
EXPORT_SYMBOL(lapb_data_received);
static int __init lapb_init(void)
static void __exit lapb_exit(void)
MODULE_AUTHOR("Jonathan Naylor <g4klx@g4klx.demon.co.uk>");
MODULE_DESCRIPTION("The X.25 Link Access Procedure B link layer protocol");
MODULE_LICENSE("GPL");
module_init(lapb_init);
module_exit(lapb_exit);
