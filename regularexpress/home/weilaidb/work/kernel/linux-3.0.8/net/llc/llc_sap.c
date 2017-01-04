static int llc_mac_header_len(unsigned short devtype)
struct sk_buff *llc_alloc_frame(struct sock *sk, struct net_device *dev,
u8 type, u32 data_size)
void llc_save_primitive(struct sock *sk, struct sk_buff* skb, u8 prim)
void llc_sap_rtn_pdu(struct llc_sap *sap, struct sk_buff *skb)
static struct llc_sap_state_trans *llc_find_sap_trans(struct llc_sap *sap,
struct sk_buff* skb)
static int llc_exec_sap_trans_actions(struct llc_sap *sap,
struct llc_sap_state_trans *trans,
struct sk_buff *skb)
static int llc_sap_next_state(struct llc_sap *sap, struct sk_buff *skb)
static void llc_sap_state_process(struct llc_sap *sap, struct sk_buff *skb)
void llc_build_and_send_test_pkt(struct llc_sap *sap,
struct sk_buff *skb, u8 *dmac, u8 dsap)
void llc_build_and_send_xid_pkt(struct llc_sap *sap, struct sk_buff *skb,
u8 *dmac, u8 dsap)
static void llc_sap_rcv(struct llc_sap *sap, struct sk_buff *skb,
struct sock *sk)
static inline bool llc_dgram_match(const struct llc_sap *sap,
const struct llc_addr *laddr,
const struct sock *sk)
static struct sock *llc_lookup_dgram(struct llc_sap *sap,
const struct llc_addr *laddr)
static inline bool llc_mcast_match(const struct llc_sap *sap,
const struct llc_addr *laddr,
const struct sk_buff *skb,
const struct sock *sk)
static void llc_do_mcast(struct llc_sap *sap, struct sk_buff *skb,
struct sock **stack, int count)
static void llc_sap_mcast(struct llc_sap *sap,
const struct llc_addr *laddr,
struct sk_buff *skb)
void llc_sap_handler(struct llc_sap *sap, struct sk_buff *skb)
