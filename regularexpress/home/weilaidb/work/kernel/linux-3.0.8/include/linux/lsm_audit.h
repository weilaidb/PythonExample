#define _LSM_COMMON_LOGGING_
struct common_audit_data ;
#define v4info fam.v4
#define v6info fam.v6
int ipv4_skb_to_auditdata(struct sk_buff *skb,
struct common_audit_data *ad, u8 *proto);
int ipv6_skb_to_auditdata(struct sk_buff *skb,
struct common_audit_data *ad, u8 *proto);
#define COMMON_AUDIT_DATA_INIT(_d, _t) \
void common_lsm_audit(struct common_audit_data *a);
