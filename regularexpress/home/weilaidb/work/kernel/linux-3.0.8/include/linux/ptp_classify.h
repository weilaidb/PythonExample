#define _PTP_CLASSIFY_H_
#define PTP_CLASS_NONE  0x00
#define PTP_CLASS_V1    0x01
#define PTP_CLASS_V2    0x02
#define PTP_CLASS_VMASK 0x0f
#define PTP_CLASS_IPV4  0x10
#define PTP_CLASS_IPV6  0x20
#define PTP_CLASS_L2    0x30
#define PTP_CLASS_VLAN  0x40
#define PTP_CLASS_PMASK 0xf0
#define PTP_CLASS_V1_IPV4 (PTP_CLASS_V1 | PTP_CLASS_IPV4)
#define PTP_CLASS_V1_IPV6 (PTP_CLASS_V1 | PTP_CLASS_IPV6)
#define PTP_CLASS_V2_IPV4 (PTP_CLASS_V2 | PTP_CLASS_IPV4)
#define PTP_CLASS_V2_IPV6 (PTP_CLASS_V2 | PTP_CLASS_IPV6)
#define PTP_CLASS_V2_L2   (PTP_CLASS_V2 | PTP_CLASS_L2)
#define PTP_CLASS_V2_VLAN (PTP_CLASS_V2 | PTP_CLASS_VLAN)
#define PTP_EV_PORT 319
#define PTP_GEN_BIT 0x08
#define OFF_ETYPE	12
#define OFF_IHL		14
#define OFF_FRAG	20
#define OFF_PROTO4	23
#define OFF_NEXT	6
#define OFF_UDP_DST	2
#define OFF_PTP_SOURCE_UUID	22
#define OFF_PTP_SEQUENCE_ID	30
#define OFF_PTP_CONTROL		32
#define IPV4_HLEN(data) (((struct iphdr *)(data + OFF_IHL))->ihl << 2)
#define IP6_HLEN	40
#define UDP_HLEN	8
#define RELOFF_DST4	(ETH_HLEN + OFF_UDP_DST)
#define OFF_DST6	(ETH_HLEN + IP6_HLEN + OFF_UDP_DST)
#define OFF_PTP6	(ETH_HLEN + IP6_HLEN + UDP_HLEN)
#define OP_AND	(BPF_ALU | BPF_AND  | BPF_K)
#define OP_JEQ	(BPF_JMP | BPF_JEQ  | BPF_K)
#define OP_JSET	(BPF_JMP | BPF_JSET | BPF_K)
#define OP_LDB	(BPF_LD  | BPF_B    | BPF_ABS)
#define OP_LDH	(BPF_LD  | BPF_H    | BPF_ABS)
#define OP_LDHI	(BPF_LD  | BPF_H    | BPF_IND)
#define OP_LDX	(BPF_LDX | BPF_B    | BPF_MSH)
#define OP_OR	(BPF_ALU | BPF_OR   | BPF_K)
#define OP_RETA	(BPF_RET | BPF_A)
#define OP_RETK	(BPF_RET | BPF_K)
static inline int ptp_filter_init(struct sock_filter *f, int len)
#define PTP_FILTER \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \
, \	, \	, \
, \
, \
, \
, \
, \
, \
, \
, \	, \	, \
, \
, \
, \
, \
, \
, \
, \
, \
, \	, \
, \
, \
, \
, \
, \
, \
, \	,
