static int pEII_request(struct datalink_proto *dl,
struct sk_buff *skb, unsigned char *dest_node)
struct datalink_proto *make_EII_client(void)
EXPORT_SYMBOL(make_EII_client);
void destroy_EII_client(struct datalink_proto *dl)
EXPORT_SYMBOL(destroy_EII_client);
