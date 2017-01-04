const u8 br_group_address[ETH_ALEN] = ;
br_should_route_hook_t __rcu *br_should_route_hook __read_mostly;
EXPORT_SYMBOL(br_should_route_hook);
static int br_pass_frame_up(struct sk_buff *skb)
int br_handle_frame_finish(struct sk_buff *skb)
static int br_handle_local_finish(struct sk_buff *skb)
static inline int is_link_local(const unsigned char *dest)
rx_handler_result_t br_handle_frame(struct sk_buff **pskb)
