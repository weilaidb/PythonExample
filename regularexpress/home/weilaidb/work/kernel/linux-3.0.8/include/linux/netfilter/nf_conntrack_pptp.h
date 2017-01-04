#define _NF_CONNTRACK_PPTP_H
extern const char *const pptp_msg_name[];
enum pptp_ctrlsess_state ;
enum pptp_ctrlcall_state ;
struct nf_ct_pptp_master ;
struct nf_nat_pptp ;
#define PPTP_CONTROL_PORT	1723
#define PPTP_PACKET_CONTROL	1
#define PPTP_PACKET_MGMT	2
#define PPTP_MAGIC_COOKIE	0x1a2b3c4d
struct pptp_pkt_hdr ;
#define PPTP_START_SESSION_REQUEST	1
#define PPTP_START_SESSION_REPLY	2
#define PPTP_STOP_SESSION_REQUEST	3
#define PPTP_STOP_SESSION_REPLY		4
#define PPTP_ECHO_REQUEST		5
#define PPTP_ECHO_REPLY			6
#define PPTP_OUT_CALL_REQUEST		7
#define PPTP_OUT_CALL_REPLY		8
#define PPTP_IN_CALL_REQUEST		9
#define PPTP_IN_CALL_REPLY		10
#define PPTP_IN_CALL_CONNECT		11
#define PPTP_CALL_CLEAR_REQUEST		12
#define PPTP_CALL_DISCONNECT_NOTIFY	13
#define PPTP_WAN_ERROR_NOTIFY		14
#define PPTP_SET_LINK_INFO		15
#define PPTP_MSG_MAX			15
#define PPTP_ERROR_CODE_NONE		0
#define PPTP_NOT_CONNECTED		1
#define PPTP_BAD_FORMAT			2
#define PPTP_BAD_VALUE			3
#define PPTP_NO_RESOURCE		4
#define PPTP_BAD_CALLID			5
#define PPTP_REMOVE_DEVICE_ERROR	6
struct PptpControlHeader ;
#define PPTP_FRAME_CAP_ASYNC		0x1
#define PPTP_FRAME_CAP_SYNC		0x2
#define PPTP_BEARER_CAP_ANALOG		0x1
#define PPTP_BEARER_CAP_DIGITAL		0x2
struct PptpStartSessionRequest ;
#define PPTP_START_OK			1
#define PPTP_START_GENERAL_ERROR	2
#define PPTP_START_ALREADY_CONNECTED	3
#define PPTP_START_NOT_AUTHORIZED	4
#define PPTP_START_UNKNOWN_PROTOCOL	5
struct PptpStartSessionReply ;
#define PPTP_STOP_NONE			1
#define PPTP_STOP_PROTOCOL		2
#define PPTP_STOP_LOCAL_SHUTDOWN	3
struct PptpStopSessionRequest ;
#define PPTP_STOP_OK			1
#define PPTP_STOP_GENERAL_ERROR		2
struct PptpStopSessionReply ;
struct PptpEchoRequest ;
#define PPTP_ECHO_OK			1
#define PPTP_ECHO_GENERAL_ERROR		2
struct PptpEchoReply ;
#define PPTP_ASYNC_FRAMING		1
#define PPTP_SYNC_FRAMING		2
#define PPTP_DONT_CARE_FRAMING		3
#define PPTP_ANALOG_TYPE		1
#define PPTP_DIGITAL_TYPE		2
#define PPTP_DONT_CARE_BEARER_TYPE	3
struct PptpOutCallRequest ;
#define PPTP_OUTCALL_CONNECT		1
#define PPTP_OUTCALL_GENERAL_ERROR	2
#define PPTP_OUTCALL_NO_CARRIER		3
#define PPTP_OUTCALL_BUSY		4
#define PPTP_OUTCALL_NO_DIAL_TONE	5
#define PPTP_OUTCALL_TIMEOUT		6
#define PPTP_OUTCALL_DONT_ACCEPT	7
struct PptpOutCallReply ;
struct PptpInCallRequest ;
#define PPTP_INCALL_ACCEPT		1
#define PPTP_INCALL_GENERAL_ERROR	2
#define PPTP_INCALL_DONT_ACCEPT		3
struct PptpInCallReply ;
struct PptpInCallConnected ;
struct PptpClearCallRequest ;
struct PptpCallDisconnectNotify ;
struct PptpWanErrorNotify ;
struct PptpSetLinkInfo ;
union pptp_ctrl_union ;
struct nf_conn;
struct nf_conntrack_expect;
extern int
(*nf_nat_pptp_hook_outbound)(struct sk_buff *skb,
struct nf_conn *ct, enum ip_conntrack_info ctinfo,
struct PptpControlHeader *ctlh,
union pptp_ctrl_union *pptpReq);
extern int
(*nf_nat_pptp_hook_inbound)(struct sk_buff *skb,
struct nf_conn *ct, enum ip_conntrack_info ctinfo,
struct PptpControlHeader *ctlh,
union pptp_ctrl_union *pptpReq);
extern void
(*nf_nat_pptp_hook_exp_gre)(struct nf_conntrack_expect *exp_orig,
struct nf_conntrack_expect *exp_reply);
extern void
(*nf_nat_pptp_hook_expectfn)(struct nf_conn *ct,
struct nf_conntrack_expect *exp);
