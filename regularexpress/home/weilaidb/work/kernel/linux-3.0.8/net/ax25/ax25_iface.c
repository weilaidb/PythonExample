static struct ax25_protocol *protocol_list;
static DEFINE_RWLOCK(protocol_list_lock);
static HLIST_HEAD(ax25_linkfail_list);
static DEFINE_SPINLOCK(linkfail_lock);
static struct listen_struct  *listen_list = NULL;
static DEFINE_SPINLOCK(listen_lock);
void ax25_register_pid(struct ax25_protocol *ap)
EXPORT_SYMBOL_GPL(ax25_register_pid);
void ax25_protocol_release(unsigned int pid)
EXPORT_SYMBOL(ax25_protocol_release);
void ax25_linkfail_register(struct ax25_linkfail *lf)
EXPORT_SYMBOL(ax25_linkfail_register);
void ax25_linkfail_release(struct ax25_linkfail *lf)
EXPORT_SYMBOL(ax25_linkfail_release);
int ax25_listen_register(ax25_address *callsign, struct net_device *dev)
EXPORT_SYMBOL(ax25_listen_register);
void ax25_listen_release(ax25_address *callsign, struct net_device *dev)
EXPORT_SYMBOL(ax25_listen_release);
int (*ax25_protocol_function(unsigned int pid))(struct sk_buff *, ax25_cb *)
int ax25_listen_mine(ax25_address *callsign, struct net_device *dev)
void ax25_link_failed(ax25_cb *ax25, int reason)
int ax25_protocol_is_registered(unsigned int pid)
