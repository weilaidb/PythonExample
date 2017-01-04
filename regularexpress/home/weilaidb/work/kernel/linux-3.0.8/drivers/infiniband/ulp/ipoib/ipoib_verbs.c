int ipoib_mcast_attach(struct net_device *dev, u16 mlid, union ib_gid *mgid, int set_qkey)
int ipoib_init_qp(struct net_device *dev)
int ipoib_transport_dev_init(struct net_device *dev, struct ib_device *ca)
void ipoib_transport_dev_cleanup(struct net_device *dev)
void ipoib_event(struct ib_event_handler *handler,
struct ib_event *record)
