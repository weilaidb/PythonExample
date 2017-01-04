static uint32_t dlm_nl_seqnum;
static uint32_t listener_nlpid;
static struct genl_family family = ;
static int prepare_data(u8 cmd, struct sk_buff **skbp, size_t size)
static struct dlm_lock_data *mk_data(struct sk_buff *skb)
static int send_data(struct sk_buff *skb)
static int user_cmd(struct sk_buff *skb, struct genl_info *info)
static struct genl_ops dlm_nl_ops = ;
int __init dlm_netlink_init(void)
void dlm_netlink_exit(void)
static void fill_data(struct dlm_lock_data *data, struct dlm_lkb *lkb)
void dlm_timeout_warn(struct dlm_lkb *lkb)
