#define NF_NAT_PPTP_VERSION "3.0"
#define REQ_CID(req, off)		(*(__be16 *)((char *)(req) + (off)))
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Harald Welte <laforge@gnumonks.org>");
MODULE_DESCRIPTION("Netfilter NAT helper module for PPTP");
MODULE_ALIAS("ip_nat_pptp");
static void pptp_nat_expected(struct nf_conn *ct,
struct nf_conntrack_expect *exp)
static int
pptp_outbound_pkt(struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
struct PptpControlHeader *ctlh,
union pptp_ctrl_union *pptpReq)
static void
pptp_exp_gre(struct nf_conntrack_expect *expect_orig,
struct nf_conntrack_expect *expect_reply)
static int
pptp_inbound_pkt(struct sk_buff *skb,
struct nf_conn *ct,
enum ip_conntrack_info ctinfo,
struct PptpControlHeader *ctlh,
union pptp_ctrl_union *pptpReq)
static int __init nf_nat_helper_pptp_init(void)
static void __exit nf_nat_helper_pptp_fini(void)
module_init(nf_nat_helper_pptp_init);
module_exit(nf_nat_helper_pptp_fini);
