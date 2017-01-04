#define __LINUX_BRIDGE_EBT_802_3_H
#define EBT_802_3_SAP 0x01
#define EBT_802_3_TYPE 0x02
#define EBT_802_3_MATCH "802_3"
#define CHECK_TYPE 0xaa
#define IS_UI 0x03
#define EBT_802_3_MASK (EBT_802_3_SAP | EBT_802_3_TYPE | EBT_802_3)
struct hdr_ui ;
struct hdr_ni ;
struct ebt_802_3_hdr ;
static inline struct ebt_802_3_hdr *ebt_802_3_hdr(const struct sk_buff *skb)
struct ebt_802_3_info ;
