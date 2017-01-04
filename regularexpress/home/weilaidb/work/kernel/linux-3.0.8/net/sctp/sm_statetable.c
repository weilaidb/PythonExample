#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static const sctp_sm_table_entry_t
primitive_event_table[SCTP_NUM_PRIMITIVE_TYPES][SCTP_STATE_NUM_STATES];
static const sctp_sm_table_entry_t
other_event_table[SCTP_NUM_OTHER_TYPES][SCTP_STATE_NUM_STATES];
static const sctp_sm_table_entry_t
timeout_event_table[SCTP_NUM_TIMEOUT_TYPES][SCTP_STATE_NUM_STATES];
static const sctp_sm_table_entry_t *sctp_chunk_event_lookup(sctp_cid_t cid,
sctp_state_t state);
static const sctp_sm_table_entry_t bug = ;
#define DO_LOOKUP(_max, _type, _table)					\
()
const sctp_sm_table_entry_t *sctp_sm_lookup_event(sctp_event_t event_type,
sctp_state_t state,
sctp_subtype_t event_subtype)
#define TYPE_SCTP_FUNC(func)
#define TYPE_SCTP_DATA
#define TYPE_SCTP_INIT
#define TYPE_SCTP_INIT_ACK
#define TYPE_SCTP_SACK
#define TYPE_SCTP_HEARTBEAT
#define TYPE_SCTP_HEARTBEAT_ACK
#define TYPE_SCTP_ABORT
#define TYPE_SCTP_SHUTDOWN
#define TYPE_SCTP_SHUTDOWN_ACK
#define TYPE_SCTP_ERROR
#define TYPE_SCTP_COOKIE_ECHO
#define TYPE_SCTP_COOKIE_ACK
#define TYPE_SCTP_ECN_ECNE
#define TYPE_SCTP_ECN_CWR
#define TYPE_SCTP_SHUTDOWN_COMPLETE
static const sctp_sm_table_entry_t chunk_event_table[SCTP_NUM_BASE_CHUNK_TYPES][SCTP_STATE_NUM_STATES] = ;
#define TYPE_SCTP_ASCONF
#define TYPE_SCTP_ASCONF_ACK
static const sctp_sm_table_entry_t addip_chunk_event_table[SCTP_NUM_ADDIP_CHUNK_TYPES][SCTP_STATE_NUM_STATES] = ;
#define TYPE_SCTP_FWD_TSN
static const sctp_sm_table_entry_t prsctp_chunk_event_table[SCTP_NUM_PRSCTP_CHUNK_TYPES][SCTP_STATE_NUM_STATES] = ;
#define TYPE_SCTP_AUTH
static const sctp_sm_table_entry_t auth_chunk_event_table[SCTP_NUM_AUTH_CHUNK_TYPES][SCTP_STATE_NUM_STATES] = ;
static const sctp_sm_table_entry_t
chunk_event_table_unknown[SCTP_STATE_NUM_STATES] = ;
#define TYPE_SCTP_PRIMITIVE_ASSOCIATE
#define TYPE_SCTP_PRIMITIVE_SHUTDOWN
#define TYPE_SCTP_PRIMITIVE_ABORT
#define TYPE_SCTP_PRIMITIVE_SEND
#define TYPE_SCTP_PRIMITIVE_REQUESTHEARTBEAT
#define TYPE_SCTP_PRIMITIVE_ASCONF
static const sctp_sm_table_entry_t primitive_event_table[SCTP_NUM_PRIMITIVE_TYPES][SCTP_STATE_NUM_STATES] = ;
#define TYPE_SCTP_OTHER_NO_PENDING_TSN
#define TYPE_SCTP_OTHER_ICMP_PROTO_UNREACH
static const sctp_sm_table_entry_t other_event_table[SCTP_NUM_OTHER_TYPES][SCTP_STATE_NUM_STATES] = ;
#define TYPE_SCTP_EVENT_TIMEOUT_NONE
#define TYPE_SCTP_EVENT_TIMEOUT_T1_COOKIE
#define TYPE_SCTP_EVENT_TIMEOUT_T1_INIT
#define TYPE_SCTP_EVENT_TIMEOUT_T2_SHUTDOWN
#define TYPE_SCTP_EVENT_TIMEOUT_T3_RTX
#define TYPE_SCTP_EVENT_TIMEOUT_T4_RTO
#define TYPE_SCTP_EVENT_TIMEOUT_T5_SHUTDOWN_GUARD
#define TYPE_SCTP_EVENT_TIMEOUT_HEARTBEAT
#define TYPE_SCTP_EVENT_TIMEOUT_SACK
#define TYPE_SCTP_EVENT_TIMEOUT_AUTOCLOSE
static const sctp_sm_table_entry_t timeout_event_table[SCTP_NUM_TIMEOUT_TYPES][SCTP_STATE_NUM_STATES] = ;
static const sctp_sm_table_entry_t *sctp_chunk_event_lookup(sctp_cid_t cid,
sctp_state_t state)
