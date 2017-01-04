#define STP_HZ		256
#define LLC_RESERVE sizeof(struct llc_pdu_un)
static void br_send_bpdu(struct net_bridge_port *p,
const unsigned char *data, int length)
static inline void br_set_ticks(unsigned char *dest, int j)
static inline int br_get_ticks(const unsigned char *src)
void br_send_config_bpdu(struct net_bridge_port *p, struct br_config_bpdu *bpdu)
void br_send_tcn_bpdu(struct net_bridge_port *p)
void br_stp_rcv(const struct stp_proto *proto, struct sk_buff *skb,
struct net_device *dev)
