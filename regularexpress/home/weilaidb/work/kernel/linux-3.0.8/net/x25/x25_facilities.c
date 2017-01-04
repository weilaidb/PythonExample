int x25_parse_facilities(struct sk_buff *skb, struct x25_facilities *facilities,
struct x25_dte_facilities *dte_facs, unsigned long *vc_fac_mask)
int x25_create_facilities(unsigned char *buffer,
struct x25_facilities *facilities,
struct x25_dte_facilities *dte_facs, unsigned long facil_mask)
int x25_negotiate_facilities(struct sk_buff *skb, struct sock *sk,
struct x25_facilities *new, struct x25_dte_facilities *dte)
void x25_limit_facilities(struct x25_facilities *facilities,
struct x25_neigh *nb)
