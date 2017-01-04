#define __net_sctp_command_h__
typedef enum  sctp_verb_t;
#define SCTP_MAX_NUM_COMMANDS 14
typedef union  sctp_arg_t;
static inline sctp_arg_t SCTP_NULL(void)
static inline sctp_arg_t SCTP_NOFORCE(void)
static inline sctp_arg_t SCTP_FORCE(void)
#define SCTP_ARG_CONSTRUCTOR(name, type, elt) \
static inline sctp_arg_t	\
SCTP_## name (type arg)		\
SCTP_ARG_CONSTRUCTOR(I32,	__s32, i32)
SCTP_ARG_CONSTRUCTOR(U32,	__u32, u32)
SCTP_ARG_CONSTRUCTOR(BE32,	__be32, be32)
SCTP_ARG_CONSTRUCTOR(U16,	__u16, u16)
SCTP_ARG_CONSTRUCTOR(U8,	__u8, u8)
SCTP_ARG_CONSTRUCTOR(ERROR,     int, error)
SCTP_ARG_CONSTRUCTOR(PERR,      __be16, err)
SCTP_ARG_CONSTRUCTOR(STATE,	sctp_state_t, state)
SCTP_ARG_CONSTRUCTOR(TO,	sctp_event_timeout_t, to)
SCTP_ARG_CONSTRUCTOR(PTR,	void *, ptr)
SCTP_ARG_CONSTRUCTOR(CHUNK,	struct sctp_chunk *, chunk)
SCTP_ARG_CONSTRUCTOR(ASOC,	struct sctp_association *, asoc)
SCTP_ARG_CONSTRUCTOR(TRANSPORT,	struct sctp_transport *, transport)
SCTP_ARG_CONSTRUCTOR(BA,	struct sctp_bind_addr *, bp)
SCTP_ARG_CONSTRUCTOR(PEER_INIT,	sctp_init_chunk_t *, init)
SCTP_ARG_CONSTRUCTOR(ULPEVENT,  struct sctp_ulpevent *, ulpevent)
SCTP_ARG_CONSTRUCTOR(PACKET,	struct sctp_packet *, packet)
SCTP_ARG_CONSTRUCTOR(SACKH,	sctp_sackhdr_t *, sackh)
SCTP_ARG_CONSTRUCTOR(DATAMSG,	struct sctp_datamsg *, msg)
typedef struct  sctp_cmd_t;
typedef struct  sctp_cmd_seq_t;
int sctp_init_cmd_seq(sctp_cmd_seq_t *seq);
void sctp_add_cmd_sf(sctp_cmd_seq_t *seq, sctp_verb_t verb, sctp_arg_t obj);
sctp_cmd_t *sctp_next_cmd(sctp_cmd_seq_t *seq);
