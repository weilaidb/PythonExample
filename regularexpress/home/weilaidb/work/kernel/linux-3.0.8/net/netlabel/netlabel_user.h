#define _NETLABEL_USER_H
static inline void netlbl_netlink_auditinfo(struct sk_buff *skb,
struct netlbl_audit *audit_info)
int netlbl_netlink_init(void);
struct audit_buffer *netlbl_audit_start_common(int type,
struct netlbl_audit *audit_info);
