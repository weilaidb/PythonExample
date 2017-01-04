MODULE_LICENSE("GPL");
MODULE_AUTHOR("Evgeniy Polyakov <zbr@ioremap.net>");
MODULE_DESCRIPTION("Generic userspace <-> kernelspace connector.");
MODULE_ALIAS_NET_PF_PROTO(PF_NETLINK, NETLINK_CONNECTOR);
static struct cn_dev cdev;
static int cn_already_initialized;
int cn_netlink_send(struct cn_msg *msg, u32 __group, gfp_t gfp_mask)
EXPORT_SYMBOL_GPL(cn_netlink_send);
static int cn_call_callback(struct sk_buff *skb)
static void cn_rx_skb(struct sk_buff *__skb)
int cn_add_callback(struct cb_id *id, const char *name,
void (*callback)(struct cn_msg *, struct netlink_skb_parms *))
EXPORT_SYMBOL_GPL(cn_add_callback);
void cn_del_callback(struct cb_id *id)
EXPORT_SYMBOL_GPL(cn_del_callback);
static int cn_proc_show(struct seq_file *m, void *v)
static int cn_proc_open(struct inode *inode, struct file *file)
static const struct file_operations cn_file_ops = ;
static int __devinit cn_init(void)
static void __devexit cn_fini(void)
subsys_initcall(cn_init);
module_exit(cn_fini);
