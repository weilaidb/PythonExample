const struct inet6_protocol __rcu *inet6_protos[MAX_INET_PROTOS] __read_mostly;
int inet6_add_protocol(const struct inet6_protocol *prot, unsigned char protocol)
EXPORT_SYMBOL(inet6_add_protocol);
int inet6_del_protocol(const struct inet6_protocol *prot, unsigned char protocol)
EXPORT_SYMBOL(inet6_del_protocol);
