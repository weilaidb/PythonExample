static int p8022_request(struct datalink_proto *dl, struct sk_buff *skb,
unsigned char *dest)
struct datalink_proto *register_8022_client(unsigned char type,
int (*func)(struct sk_buff *skb,
struct net_device *dev,
struct packet_type *pt,
struct net_device *orig_dev))
void unregister_8022_client(struct datalink_proto *proto)
EXPORT_SYMBOL(register_8022_client);
EXPORT_SYMBOL(unregister_8022_client);
MODULE_LICENSE("GPL");
