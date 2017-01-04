#define __NET_GENERIC_NETLINK_H
struct genl_multicast_group ;
struct genl_ops;
struct genl_info;
struct genl_family ;
struct genl_info ;
static inline struct net *genl_info_net(struct genl_info *info)
static inline void genl_info_net_set(struct genl_info *info, struct net *net)
struct genl_ops ;
extern int genl_register_family(struct genl_family *family);
extern int genl_register_family_with_ops(struct genl_family *family,
struct genl_ops *ops, size_t n_ops);
extern int genl_unregister_family(struct genl_family *family);
extern int genl_register_ops(struct genl_family *, struct genl_ops *ops);
extern int genl_unregister_ops(struct genl_family *, struct genl_ops *ops);
extern int genl_register_mc_group(struct genl_family *family,
struct genl_multicast_group *grp);
extern void genl_unregister_mc_group(struct genl_family *family,
struct genl_multicast_group *grp);
static inline void *genlmsg_put(struct sk_buff *skb, u32 pid, u32 seq,
struct genl_family *family, int flags, u8 cmd)
static inline void *genlmsg_put_reply(struct sk_buff *skb,
struct genl_info *info,
struct genl_family *family,
int flags, u8 cmd)
static inline int genlmsg_end(struct sk_buff *skb, void *hdr)
static inline void genlmsg_cancel(struct sk_buff *skb, void *hdr)
static inline int genlmsg_multicast_netns(struct net *net, struct sk_buff *skb,
u32 pid, unsigned int group, gfp_t flags)
static inline int genlmsg_multicast(struct sk_buff *skb, u32 pid,
unsigned int group, gfp_t flags)
int genlmsg_multicast_allns(struct sk_buff *skb, u32 pid,
unsigned int group, gfp_t flags);
static inline int genlmsg_unicast(struct net *net, struct sk_buff *skb, u32 pid)
static inline int genlmsg_reply(struct sk_buff *skb, struct genl_info *info)
static inline void *genlmsg_data(const struct genlmsghdr *gnlh)
static inline int genlmsg_len(const struct genlmsghdr *gnlh)
static inline int genlmsg_msg_size(int payload)
static inline int genlmsg_total_size(int payload)
static inline struct sk_buff *genlmsg_new(size_t payload, gfp_t flags)
