#define LLC_SAP_H
struct llc_sap;
struct net_device;
struct sk_buff;
struct sock;
extern void llc_sap_rtn_pdu(struct llc_sap *sap, struct sk_buff *skb);
extern void llc_save_primitive(struct sock *sk, struct sk_buff* skb,
unsigned char prim);
extern struct sk_buff *llc_alloc_frame(struct sock *sk, struct net_device *dev,
u8 type, u32 data_size);
extern void llc_build_and_send_test_pkt(struct llc_sap *sap,
struct sk_buff *skb,
unsigned char *dmac,
unsigned char dsap);
extern void llc_build_and_send_xid_pkt(struct llc_sap *sap,
struct sk_buff *skb,
unsigned char *dmac,
unsigned char dsap);
