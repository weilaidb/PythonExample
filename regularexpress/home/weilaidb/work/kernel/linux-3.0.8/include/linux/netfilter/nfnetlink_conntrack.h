#define _IPCONNTRACK_NETLINK_H
enum cntl_msg_types ;
enum ctnl_exp_msg_types ;
enum ctattr_type ;
#define CTA_MAX (__CTA_MAX - 1)
enum ctattr_tuple ;
#define CTA_TUPLE_MAX (__CTA_TUPLE_MAX - 1)
enum ctattr_ip ;
#define CTA_IP_MAX (__CTA_IP_MAX - 1)
enum ctattr_l4proto ;
#define CTA_PROTO_MAX (__CTA_PROTO_MAX - 1)
enum ctattr_protoinfo ;
#define CTA_PROTOINFO_MAX (__CTA_PROTOINFO_MAX - 1)
enum ctattr_protoinfo_tcp ;
#define CTA_PROTOINFO_TCP_MAX (__CTA_PROTOINFO_TCP_MAX - 1)
enum ctattr_protoinfo_dccp ;
#define CTA_PROTOINFO_DCCP_MAX (__CTA_PROTOINFO_DCCP_MAX - 1)
enum ctattr_protoinfo_sctp ;
#define CTA_PROTOINFO_SCTP_MAX (__CTA_PROTOINFO_SCTP_MAX - 1)
enum ctattr_counters ;
#define CTA_COUNTERS_MAX (__CTA_COUNTERS_MAX - 1)
enum ctattr_tstamp ;
#define CTA_TIMESTAMP_MAX (__CTA_TIMESTAMP_MAX - 1)
enum ctattr_nat ;
#define CTA_NAT_MAX (__CTA_NAT_MAX - 1)
enum ctattr_protonat ;
#define CTA_PROTONAT_MAX (__CTA_PROTONAT_MAX - 1)
enum ctattr_natseq ;
#define CTA_NAT_SEQ_MAX (__CTA_NAT_SEQ_MAX - 1)
enum ctattr_expect ;
#define CTA_EXPECT_MAX (__CTA_EXPECT_MAX - 1)
enum ctattr_help ;
#define CTA_HELP_MAX (__CTA_HELP_MAX - 1)
enum ctattr_secctx ;
#define CTA_SECCTX_MAX (__CTA_SECCTX_MAX - 1)
