#define _LINUX_CONCAP_H
struct concap_proto_ops;
struct concap_device_ops;
struct concap_proto;
struct concap_device_ops;
struct concap_proto_ops;
extern int concap_nop(struct concap_proto *cprot);
extern int concap_drop_skb(struct concap_proto *cprot, struct sk_buff *skb);
