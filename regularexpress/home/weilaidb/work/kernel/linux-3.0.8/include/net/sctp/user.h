#define __net_sctp_user_h__
typedef __s32 sctp_assoc_t;
#define SCTP_RTOINFO	0
#define SCTP_ASSOCINFO  1
#define SCTP_INITMSG	2
#define SCTP_NODELAY	3
#define SCTP_AUTOCLOSE	4
#define SCTP_SET_PEER_PRIMARY_ADDR 5
#define SCTP_PRIMARY_ADDR	6
#define SCTP_ADAPTATION_LAYER	7
#define SCTP_DISABLE_FRAGMENTS	8
#define SCTP_PEER_ADDR_PARAMS	9
#define SCTP_DEFAULT_SEND_PARAM	10
#define SCTP_EVENTS	11
#define SCTP_I_WANT_MAPPED_V4_ADDR 12
#define SCTP_MAXSEG	13
#define SCTP_STATUS	14
#define SCTP_GET_PEER_ADDR_INFO	15
#define SCTP_DELAYED_ACK_TIME	16
#define SCTP_DELAYED_ACK SCTP_DELAYED_ACK_TIME
#define SCTP_DELAYED_SACK SCTP_DELAYED_ACK_TIME
#define SCTP_CONTEXT	17
#define SCTP_FRAGMENT_INTERLEAVE	18
#define SCTP_PARTIAL_DELIVERY_POINT	19
#define SCTP_MAX_BURST	20
#define SCTP_AUTH_CHUNK	21
#define SCTP_HMAC_IDENT	22
#define SCTP_AUTH_KEY	23
#define SCTP_AUTH_ACTIVE_KEY	24
#define SCTP_AUTH_DELETE_KEY	25
#define SCTP_PEER_AUTH_CHUNKS	26
#define SCTP_LOCAL_AUTH_CHUNKS	27
#define SCTP_GET_ASSOC_NUMBER	28
#define SCTP_GET_ASSOC_ID_LIST	29
#define SCTP_SOCKOPT_BINDX_ADD	100
#define SCTP_SOCKOPT_BINDX_REM	101
#define SCTP_SOCKOPT_PEELOFF	102
#define SCTP_SOCKOPT_CONNECTX_OLD	107
#define SCTP_GET_PEER_ADDRS	108
#define SCTP_GET_LOCAL_ADDRS	109
#define SCTP_SOCKOPT_CONNECTX	110
#define SCTP_SOCKOPT_CONNECTX3	111
struct sctp_initmsg ;
struct sctp_sndrcvinfo ;
enum sctp_sinfo_flags ;
typedef enum sctp_cmsg_type  sctp_cmsg_t;
struct sctp_assoc_change ;
enum sctp_sac_state ;
struct sctp_paddr_change  __attribute__((packed, aligned(4)));
enum sctp_spc_state ;
struct sctp_remote_error ;
struct sctp_send_failed ;
enum sctp_ssf_flags ;
struct sctp_shutdown_event ;
struct sctp_adaptation_event ;
struct sctp_pdapi_event ;
enum ;
struct sctp_authkey_event ;
enum ;
struct sctp_sender_dry_event ;
struct sctp_event_subscribe ;
union sctp_notification ;
enum sctp_sn_type ;
typedef enum sctp_sn_error  sctp_sn_error_t;
struct sctp_rtoinfo ;
struct sctp_assocparams ;
struct sctp_setpeerprim  __attribute__((packed, aligned(4)));
struct sctp_prim  __attribute__((packed, aligned(4)));
struct sctp_setadaptation ;
enum  sctp_spp_flags ;
struct sctp_paddrparams  __attribute__((packed, aligned(4)));
struct sctp_authchunk ;
struct sctp_hmacalgo ;
struct sctp_authkey ;
struct sctp_authkeyid ;
struct sctp_sack_info ;
struct sctp_assoc_value ;
struct sctp_paddrinfo  __attribute__((packed, aligned(4)));
enum sctp_spinfo_state ;
struct sctp_status ;
struct sctp_authchunks ;
struct sctp_assoc_ids ;
struct sctp_getaddrs_old ;
struct sctp_getaddrs ;
enum sctp_msg_flags ;
#define SCTP_BINDX_ADD_ADDR 0x01
#define SCTP_BINDX_REM_ADDR 0x02
typedef struct  sctp_peeloff_arg_t;
