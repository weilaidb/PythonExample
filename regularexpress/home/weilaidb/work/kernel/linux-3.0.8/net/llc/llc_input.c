static void (*llc_station_handler)(struct sk_buff *skb);
static void (*llc_type_handlers[2])(struct llc_sap *sap,
struct sk_buff *skb);
void llc_add_pack(int type, void (*handler)(struct llc_sap *sap,
struct sk_buff *skb))
void llc_remove_pack(int type)
void llc_set_station_handler(void (*handler)(struct sk_buff *skb))
static __inline__ int llc_pdu_type(struct sk_buff *skb)
static inline int llc_fixup_skb(struct sk_buff *skb)
int llc_rcv(struct sk_buff *skb, struct net_device *dev,
struct packet_type *pt, struct net_device *orig_dev)
EXPORT_SYMBOL(llc_add_pack);
EXPORT_SYMBOL(llc_remove_pack);
EXPORT_SYMBOL(llc_set_station_handler);
