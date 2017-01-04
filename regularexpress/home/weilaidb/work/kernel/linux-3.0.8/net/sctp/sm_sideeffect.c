#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static int sctp_cmd_interpreter(sctp_event_t event_type,
sctp_subtype_t subtype,
sctp_state_t state,
struct sctp_endpoint *ep,
struct sctp_association *asoc,
void *event_arg,
sctp_disposition_t status,
sctp_cmd_seq_t *commands,
gfp_t gfp);
static int sctp_side_effects(sctp_event_t event_type, sctp_subtype_t subtype,
sctp_state_t state,
struct sctp_endpoint *ep,
struct sctp_association *asoc,
void *event_arg,
sctp_disposition_t status,
sctp_cmd_seq_t *commands,
gfp_t gfp);
static void sctp_do_ecn_ce_work(struct sctp_association *asoc,
__u32 lowest_tsn)
static struct sctp_chunk *sctp_do_ecn_ecne_work(struct sctp_association *asoc,
__u32 lowest_tsn,
struct sctp_chunk *chunk)
static void sctp_do_ecn_cwr_work(struct sctp_association *asoc,
__u32 lowest_tsn)
static int sctp_gen_sack(struct sctp_association *asoc, int force,
sctp_cmd_seq_t *commands)
void sctp_generate_t3_rtx_event(unsigned long peer)
static void sctp_generate_timeout_event(struct sctp_association *asoc,
sctp_event_timeout_t timeout_type)
static void sctp_generate_t1_cookie_event(unsigned long data)
static void sctp_generate_t1_init_event(unsigned long data)
static void sctp_generate_t2_shutdown_event(unsigned long data)
static void sctp_generate_t4_rto_event(unsigned long data)
static void sctp_generate_t5_shutdown_guard_event(unsigned long data)
static void sctp_generate_autoclose_event(unsigned long data)
void sctp_generate_heartbeat_event(unsigned long data)
void sctp_generate_proto_unreach_event(unsigned long data)
static void sctp_generate_sack_event(unsigned long data)
sctp_timer_event_t *sctp_timer_events[SCTP_NUM_TIMEOUT_TYPES] = ;
static void sctp_do_8_2_transport_strike(struct sctp_association *asoc,
struct sctp_transport *transport,
int is_hb)
static void sctp_cmd_init_failed(sctp_cmd_seq_t *commands,
struct sctp_association *asoc,
unsigned error)
static void sctp_cmd_assoc_failed(sctp_cmd_seq_t *commands,
struct sctp_association *asoc,
sctp_event_t event_type,
sctp_subtype_t subtype,
struct sctp_chunk *chunk,
unsigned error)
static int sctp_cmd_process_init(sctp_cmd_seq_t *commands,
struct sctp_association *asoc,
struct sctp_chunk *chunk,
sctp_init_chunk_t *peer_init,
gfp_t gfp)
static void sctp_cmd_hb_timers_start(sctp_cmd_seq_t *cmds,
struct sctp_association *asoc)
static void sctp_cmd_hb_timers_stop(sctp_cmd_seq_t *cmds,
struct sctp_association *asoc)
static void sctp_cmd_t3_rtx_timers_stop(sctp_cmd_seq_t *cmds,
struct sctp_association *asoc)
static void sctp_cmd_hb_timer_update(sctp_cmd_seq_t *cmds,
struct sctp_transport *t)
static void sctp_cmd_transport_on(sctp_cmd_seq_t *cmds,
struct sctp_association *asoc,
struct sctp_transport *t,
struct sctp_chunk *chunk)
static int sctp_cmd_process_sack(sctp_cmd_seq_t *cmds,
struct sctp_association *asoc,
struct sctp_sackhdr *sackh)
static void sctp_cmd_setup_t2(sctp_cmd_seq_t *cmds,
struct sctp_association *asoc,
struct sctp_chunk *chunk)
static void sctp_cmd_new_state(sctp_cmd_seq_t *cmds,
struct sctp_association *asoc,
sctp_state_t state)
static void sctp_cmd_delete_tcb(sctp_cmd_seq_t *cmds,
struct sctp_association *asoc)
static void sctp_cmd_setup_t4(sctp_cmd_seq_t *cmds,
struct sctp_association *asoc,
struct sctp_chunk *chunk)
static void sctp_cmd_process_operr(sctp_cmd_seq_t *cmds,
struct sctp_association *asoc,
struct sctp_chunk *chunk)
static void sctp_cmd_process_fwdtsn(struct sctp_ulpq *ulpq,
struct sctp_chunk *chunk)
static void sctp_cmd_del_non_primary(struct sctp_association *asoc)
static void sctp_cmd_set_sk_err(struct sctp_association *asoc, int error)
static void sctp_cmd_assoc_change(sctp_cmd_seq_t *commands,
struct sctp_association *asoc,
u8 state)
static void sctp_cmd_adaptation_ind(sctp_cmd_seq_t *commands,
struct sctp_association *asoc)
static void sctp_cmd_t1_timer_update(struct sctp_association *asoc,
sctp_event_timeout_t timer,
char *name)
static int sctp_cmd_send_msg(struct sctp_association *asoc,
struct sctp_datamsg *msg)
static void sctp_cmd_send_asconf(struct sctp_association *asoc)
#define DEBUG_PRE \
SCTP_DEBUG_PRINTK("sctp_do_sm prefn: " \
"ep %p, %s, %s, asoc %p[%s], %s\n", \
ep, sctp_evttype_tbl[event_type], \
(*debug_fn)(subtype), asoc, \
sctp_state_tbl[state], state_fn->name)
#define DEBUG_POST \
SCTP_DEBUG_PRINTK("sctp_do_sm postfn: " \
"asoc %p, status: %s\n", \
asoc, sctp_status_tbl[status])
#define DEBUG_POST_SFX \
SCTP_DEBUG_PRINTK("sctp_do_sm post sfx: error %d, asoc %p[%s]\n", \
error, asoc, \
sctp_state_tbl[(asoc && sctp_id2assoc(ep->base.sk, \
sctp_assoc2id(asoc)))?asoc->state:SCTP_STATE_CLOSED])
int sctp_do_sm(sctp_event_t event_type, sctp_subtype_t subtype,
sctp_state_t state,
struct sctp_endpoint *ep,
struct sctp_association *asoc,
void *event_arg,
gfp_t gfp)
#undef DEBUG_PRE
#undef DEBUG_POST
static int sctp_side_effects(sctp_event_t event_type, sctp_subtype_t subtype,
sctp_state_t state,
struct sctp_endpoint *ep,
struct sctp_association *asoc,
void *event_arg,
sctp_disposition_t status,
sctp_cmd_seq_t *commands,
gfp_t gfp)
static int sctp_cmd_interpreter(sctp_event_t event_type,
sctp_subtype_t subtype,
sctp_state_t state,
struct sctp_endpoint *ep,
struct sctp_association *asoc,
void *event_arg,
sctp_disposition_t status,
sctp_cmd_seq_t *commands,
gfp_t gfp)
