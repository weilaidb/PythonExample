int llc_mac_hdr_init(struct sk_buff *skb,
const unsigned char *sa, const unsigned char *da)
int llc_build_and_send_ui_pkt(struct llc_sap *sap, struct sk_buff *skb,
unsigned char *dmac, unsigned char dsap)
EXPORT_SYMBOL(llc_mac_hdr_init);
EXPORT_SYMBOL(llc_build_and_send_ui_pkt);
