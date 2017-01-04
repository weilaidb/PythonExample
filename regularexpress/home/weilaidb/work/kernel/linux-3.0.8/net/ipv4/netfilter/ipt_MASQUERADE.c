#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Netfilter Core Team <coreteam@netfilter.org>");
MODULE_DESCRIPTION("Xtables: automatic-address SNAT");
static int masquerade_tg_check(const struct xt_tgchk_param *par)
static unsigned int
masquerade_tg(struct sk_buff *skb, const struct xt_action_param *par)
static int
device_cmp(struct nf_conn *i, void *ifindex)
static int masq_device_event(struct notifier_block *this,
unsigned long event,
void *ptr)
static int masq_inet_event(struct notifier_block *this,
unsigned long event,
void *ptr)
static struct notifier_block masq_dev_notifier = ;
static struct notifier_block masq_inet_notifier = ;
static struct xt_target masquerade_tg_reg __read_mostly = ;
static int __init masquerade_tg_init(void)
static void __exit masquerade_tg_exit(void)
module_init(masquerade_tg_init);
module_exit(masquerade_tg_exit);
