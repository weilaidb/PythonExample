#define __sctp_constants_h__
enum ;
enum ;
enum ;
#define SCTP_CID_BASE_MAX		SCTP_CID_SHUTDOWN_COMPLETE
#define SCTP_NUM_BASE_CHUNK_TYPES	(SCTP_CID_BASE_MAX + 1)
#define SCTP_NUM_ADDIP_CHUNK_TYPES	2
#define SCTP_NUM_PRSCTP_CHUNK_TYPES	1
#define SCTP_NUM_AUTH_CHUNK_TYPES	1
#define SCTP_NUM_CHUNK_TYPES		(SCTP_NUM_BASE_CHUNK_TYPES + \
SCTP_NUM_ADDIP_CHUNK_TYPES +\
SCTP_NUM_PRSCTP_CHUNK_TYPES +\
SCTP_NUM_AUTH_CHUNK_TYPES)
typedef enum  sctp_event_t;
typedef enum  sctp_event_timeout_t;
#define SCTP_EVENT_TIMEOUT_MAX		SCTP_EVENT_TIMEOUT_AUTOCLOSE
#define SCTP_NUM_TIMEOUT_TYPES		(SCTP_EVENT_TIMEOUT_MAX + 1)
typedef enum  sctp_event_other_t;
#define SCTP_EVENT_OTHER_MAX		SCTP_EVENT_ICMP_PROTO_UNREACH
#define SCTP_NUM_OTHER_TYPES		(SCTP_EVENT_OTHER_MAX + 1)
typedef enum  sctp_event_primitive_t;
#define SCTP_EVENT_PRIMITIVE_MAX	SCTP_PRIMITIVE_ASCONF
#define SCTP_NUM_PRIMITIVE_TYPES	(SCTP_EVENT_PRIMITIVE_MAX + 1)
typedef union  sctp_subtype_t;
#define SCTP_SUBTYPE_CONSTRUCTOR(_name, _type, _elt) \
static inline sctp_subtype_t	\
SCTP_ST_## _name (_type _arg)		\
SCTP_SUBTYPE_CONSTRUCTOR(CHUNK,		sctp_cid_t,		chunk)
SCTP_SUBTYPE_CONSTRUCTOR(TIMEOUT,	sctp_event_timeout_t,	timeout)
SCTP_SUBTYPE_CONSTRUCTOR(OTHER,		sctp_event_other_t,	other)
SCTP_SUBTYPE_CONSTRUCTOR(PRIMITIVE,	sctp_event_primitive_t,	primitive)
#define sctp_chunk_is_data(a) (a->chunk_hdr->type == SCTP_CID_DATA)
#define SCTP_DATA_SNDSIZE(c) ((int)((unsigned long)(c->chunk_end)\
- (unsigned long)(c->chunk_hdr)\
- sizeof(sctp_data_chunk_t)))
typedef enum  sctp_ierror_t;
typedef enum  sctp_state_t;
#define SCTP_STATE_MAX			SCTP_STATE_SHUTDOWN_ACK_SENT
#define SCTP_STATE_NUM_STATES		(SCTP_STATE_MAX + 1)
typedef enum  sctp_sock_state_t;
const char *sctp_cname(const sctp_subtype_t);
const char *sctp_oname(const sctp_subtype_t);
const char *sctp_tname(const sctp_subtype_t);
const char *sctp_pname(const sctp_subtype_t);
extern const char *const sctp_state_tbl[];
extern const char *const sctp_evttype_tbl[];
extern const char *const sctp_status_tbl[];
enum ;
enum ;
#define SCTP_TSN_MAP_INITIAL BITS_PER_LONG
#define SCTP_TSN_MAP_INCREMENT SCTP_TSN_MAP_INITIAL
#define SCTP_TSN_MAP_SIZE 4096
enum ;
enum ;
enum ;
#define SCTP_DEFAULT_TIMEOUT_HEARTBEAT	(30*1000)
#define SCTP_DEFAULT_TIMEOUT_SACK	(200)
#define SCTP_RTO_INITIAL	(3 * 1000)
#define SCTP_RTO_MIN		(1 * 1000)
#define SCTP_RTO_MAX		(60 * 1000)
#define SCTP_RTO_ALPHA          3
#define SCTP_RTO_BETA           2
#define SCTP_DEFAULT_MAX_BURST		4
#define SCTP_CLOCK_GRANULARITY	1
#define SCTP_DEFAULT_COOKIE_LIFE	(60 * 1000)
#define SCTP_DEFAULT_MINWINDOW	1500
#define SCTP_DEFAULT_MAXWINDOW	65535
#define SCTP_DEFAULT_RWND_SHIFT  4
#define SCTP_DEFAULT_MAXSEGMENT 1500
#define SCTP_DEFAULT_MINSEGMENT 512
#define SCTP_HOW_MANY_SECRETS 2
#define SCTP_SECRET_SIZE 32
#define SCTP_SIGNATURE_SIZE 20
#define SCTP_COOKIE_MULTIPLE 32
#if defined (CONFIG_SCTP_HMAC_MD5)
#define SCTP_COOKIE_HMAC_ALG "hmac(md5)"
#elif defined (CONFIG_SCTP_HMAC_SHA1)
#define SCTP_COOKIE_HMAC_ALG "hmac(sha1)"
#define SCTP_COOKIE_HMAC_ALG NULL
typedef enum  sctp_xmit_t;
typedef enum  sctp_transport_cmd_t;
typedef enum  sctp_scope_t;
typedef enum  sctp_scope_policy_t;
#define IS_IPV4_UNUSABLE_ADDRESS(a)	    \
((htonl(INADDR_BROADCAST) == a) ||  \
ipv4_is_multicast(a) ||	    \
ipv4_is_zeronet(a) ||		    \
ipv4_is_test_198(a) ||		    \
ipv4_is_anycast_6to4(a))
#define SCTP_ADDR6_ALLOWED	0x00000001
#define SCTP_ADDR4_PEERSUPP	0x00000002
#define SCTP_ADDR6_PEERSUPP	0x00000004
typedef enum  sctp_retransmit_reason_t;
typedef enum  sctp_lower_cwnd_t;
enum ;
#define SCTP_AUTH_HMAC_ID_MAX	__SCTP_AUTH_HMAC_MAX - 1
#define SCTP_AUTH_NUM_HMACS 	__SCTP_AUTH_HMAC_MAX
#define SCTP_SHA1_SIG_SIZE 20
#define SCTP_SHA256_SIG_SIZE 32
#define SCTP_NUM_NOAUTH_CHUNKS	4
#define SCTP_AUTH_MAX_CHUNKS	(SCTP_NUM_CHUNK_TYPES - SCTP_NUM_NOAUTH_CHUNKS)
#define SCTP_AUTH_RANDOM_LENGTH 32
