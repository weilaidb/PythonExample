const struct net_protocol __rcu *inet_protos[MAX_INET_PROTOS] __read_mostly;
int inet_add_protocol(const struct net_protocol *prot, unsigned char protocol)
EXPORT_SYMBOL(inet_add_protocol);
int inet_del_protocol(const struct net_protocol *prot, unsigned char protocol)
EXPORT_SYMBOL(inet_del_protocol);
