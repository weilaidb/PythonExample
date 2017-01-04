static const struct pppox_proto *pppox_protos[PX_MAX_PROTO + 1];
int register_pppox_proto(int proto_num, const struct pppox_proto *pp)
void unregister_pppox_proto(int proto_num)
void pppox_unbind_sock(struct sock *sk)
EXPORT_SYMBOL(register_pppox_proto);
EXPORT_SYMBOL(unregister_pppox_proto);
EXPORT_SYMBOL(pppox_unbind_sock);
int pppox_ioctl(struct socket *sock, unsigned int cmd, unsigned long arg)
EXPORT_SYMBOL(pppox_ioctl);
static int pppox_create(struct net *net, struct socket *sock, int protocol,
int kern)
static const struct net_proto_family pppox_proto_family = ;
static int __init pppox_init(void)
static void __exit pppox_exit(void)
module_init(pppox_init);
module_exit(pppox_exit);
MODULE_AUTHOR("Michal Ostrowski <mostrows@speakeasy.net>");
MODULE_DESCRIPTION("PPP over Ethernet driver (generic socket layer)");
MODULE_LICENSE("GPL");
