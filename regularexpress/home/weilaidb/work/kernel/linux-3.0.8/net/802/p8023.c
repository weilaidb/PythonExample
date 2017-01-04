static int p8023_request(struct datalink_proto *dl,
struct sk_buff *skb, unsigned char *dest_node)
struct datalink_proto *make_8023_client(void)
void destroy_8023_client(struct datalink_proto *dl)
EXPORT_SYMBOL(destroy_8023_client);
EXPORT_SYMBOL(make_8023_client);
MODULE_LICENSE("GPL");
