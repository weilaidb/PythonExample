static int iwm_open(struct net_device *ndev)
static int iwm_stop(struct net_device *ndev)
static const u16 iwm_1d_to_queue[8] = ;
int iwm_tid_to_queue(u16 tid)
static u16 iwm_select_queue(struct net_device *dev, struct sk_buff *skb)
static const struct net_device_ops iwm_netdev_ops = ;
void *iwm_if_alloc(int sizeof_bus, struct device *dev,
struct iwm_if_ops *if_ops)
void iwm_if_free(struct iwm_priv *iwm)
int iwm_if_add(struct iwm_priv *iwm)
void iwm_if_remove(struct iwm_priv *iwm)
