#define _IPT_ECN_H
#define IPT_ECN_IP_MASK	(~XT_DSCP_MASK)
#define IPT_ECN_OP_MATCH_IP	0x01
#define IPT_ECN_OP_MATCH_ECE	0x10
#define IPT_ECN_OP_MATCH_CWR	0x20
#define IPT_ECN_OP_MATCH_MASK	0xce
struct ipt_ecn_info ;
