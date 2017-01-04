#define pr_fmt(fmt) "%s:%s: " fmt, KBUILD_MODNAME, __func__
struct ibnl_client ;
static DEFINE_MUTEX(ibnl_mutex);
static struct sock *nls;
static LIST_HEAD(client_list);
int ibnl_add_client(int index, int nops,
const struct ibnl_client_cbs cb_table[])
EXPORT_SYMBOL(ibnl_add_client);
int ibnl_remove_client(int index)
EXPORT_SYMBOL(ibnl_remove_client);
void *ibnl_put_msg(struct sk_buff *skb, struct nlmsghdr **nlh, int seq,
int len, int client, int op)
EXPORT_SYMBOL(ibnl_put_msg);
int ibnl_put_attr(struct sk_buff *skb, struct nlmsghdr *nlh,
int len, void *data, int type)
EXPORT_SYMBOL(ibnl_put_attr);
static int ibnl_rcv_msg(struct sk_buff *skb, struct nlmsghdr *nlh)
static void ibnl_rcv(struct sk_buff *skb)
int __init ibnl_init(void)
void ibnl_cleanup(void)
