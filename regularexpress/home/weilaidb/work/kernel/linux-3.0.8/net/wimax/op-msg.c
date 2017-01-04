#define D_SUBMODULE op_msg
struct sk_buff *wimax_msg_alloc(struct wimax_dev *wimax_dev,
const char *pipe_name,
const void *msg, size_t size,
gfp_t gfp_flags)
EXPORT_SYMBOL_GPL(wimax_msg_alloc);
const void *wimax_msg_data_len(struct sk_buff *msg, size_t *size)
EXPORT_SYMBOL_GPL(wimax_msg_data_len);
const void *wimax_msg_data(struct sk_buff *msg)
EXPORT_SYMBOL_GPL(wimax_msg_data);
ssize_t wimax_msg_len(struct sk_buff *msg)
EXPORT_SYMBOL_GPL(wimax_msg_len);
int wimax_msg_send(struct wimax_dev *wimax_dev, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(wimax_msg_send);
int wimax_msg(struct wimax_dev *wimax_dev, const char *pipe_name,
const void *buf, size_t size, gfp_t gfp_flags)
EXPORT_SYMBOL_GPL(wimax_msg);
static const struct nla_policy wimax_gnl_msg_policy[WIMAX_GNL_ATTR_MAX + 1] = ;
static
int wimax_gnl_doit_msg_from_user(struct sk_buff *skb, struct genl_info *info)
struct genl_ops wimax_gnl_msg_from_user = ;
