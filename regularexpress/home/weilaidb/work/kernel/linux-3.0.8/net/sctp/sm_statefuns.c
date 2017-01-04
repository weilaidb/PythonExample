#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
static struct sctp_packet *sctp_abort_pkt_new(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
struct sctp_chunk *chunk,
const void *payload,
size_t paylen);
static int sctp_eat_data(const struct sctp_association *asoc,
struct sctp_chunk *chunk,
sctp_cmd_seq_t *commands);
static struct sctp_packet *sctp_ootb_pkt_new(const struct sctp_association *asoc,
const struct sctp_chunk *chunk);
static void sctp_send_stale_cookie_err(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const struct sctp_chunk *chunk,
sctp_cmd_seq_t *commands,
struct sctp_chunk *err_chunk);
static sctp_disposition_t sctp_sf_do_5_2_6_stale(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands);
static sctp_disposition_t sctp_sf_shut_8_4_5(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands);
static sctp_disposition_t sctp_sf_tabort_8_4_8(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands);
static struct sctp_sackhdr *sctp_sm_pull_sack(struct sctp_chunk *chunk);
static sctp_disposition_t sctp_stop_t1_and_abort(sctp_cmd_seq_t *commands,
__be16 error, int sk_err,
const struct sctp_association *asoc,
struct sctp_transport *transport);
static sctp_disposition_t sctp_sf_abort_violation(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
void *arg,
sctp_cmd_seq_t *commands,
const __u8 *payload,
const size_t paylen);
static sctp_disposition_t sctp_sf_violation_chunklen(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands);
static sctp_disposition_t sctp_sf_violation_paramlen(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg, void *ext,
sctp_cmd_seq_t *commands);
static sctp_disposition_t sctp_sf_violation_ctsn(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands);
static sctp_disposition_t sctp_sf_violation_chunk(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands);
static sctp_ierror_t sctp_sf_authenticate(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
struct sctp_chunk *chunk);
static sctp_disposition_t __sctp_sf_do_9_1_abort(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands);
static inline int
sctp_chunk_length_valid(struct sctp_chunk *chunk,
__u16 required_length)
sctp_disposition_t sctp_sf_do_4_C(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_5_1B_init(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_5_1C_ack(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_5_1D_ce(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type, void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_5_1E_ca(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type, void *arg,
sctp_cmd_seq_t *commands)
static sctp_disposition_t sctp_sf_heartbeat(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_sendbeat_8_3(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_beat_8_3(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_backbeat_8_3(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
static int sctp_sf_send_restart_abort(union sctp_addr *ssa,
struct sctp_chunk *init,
sctp_cmd_seq_t *commands)
static bool list_has_sctp_addr(const struct list_head *list,
union sctp_addr *ipaddr)
static int sctp_sf_check_restart_addrs(const struct sctp_association *new_asoc,
const struct sctp_association *asoc,
struct sctp_chunk *init,
sctp_cmd_seq_t *commands)
static void sctp_tietags_populate(struct sctp_association *new_asoc,
const struct sctp_association *asoc)
static char sctp_tietags_compare(struct sctp_association *new_asoc,
const struct sctp_association *asoc)
static sctp_disposition_t sctp_sf_do_unexpected_init(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg, sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_5_2_1_siminit(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_5_2_2_dupinit(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_5_2_3_initack(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg, sctp_cmd_seq_t *commands)
static sctp_disposition_t sctp_sf_do_dupcook_a(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
struct sctp_chunk *chunk,
sctp_cmd_seq_t *commands,
struct sctp_association *new_asoc)
static sctp_disposition_t sctp_sf_do_dupcook_b(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
struct sctp_chunk *chunk,
sctp_cmd_seq_t *commands,
struct sctp_association *new_asoc)
static sctp_disposition_t sctp_sf_do_dupcook_c(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
struct sctp_chunk *chunk,
sctp_cmd_seq_t *commands,
struct sctp_association *new_asoc)
static sctp_disposition_t sctp_sf_do_dupcook_d(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
struct sctp_chunk *chunk,
sctp_cmd_seq_t *commands,
struct sctp_association *new_asoc)
sctp_disposition_t sctp_sf_do_5_2_4_dupcook(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_shutdown_pending_abort(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_shutdown_sent_abort(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_shutdown_ack_sent_abort(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_cookie_echoed_err(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
static sctp_disposition_t sctp_sf_do_5_2_6_stale(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_9_1_abort(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
static sctp_disposition_t __sctp_sf_do_9_1_abort(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_cookie_wait_abort(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_cookie_wait_icmp_abort(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_cookie_echoed_abort(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
static sctp_disposition_t sctp_stop_t1_and_abort(sctp_cmd_seq_t *commands,
__be16 error, int sk_err,
const struct sctp_association *asoc,
struct sctp_transport *transport)
sctp_disposition_t sctp_sf_do_9_2_shutdown(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_9_2_shut_ctsn(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_9_2_reshutack(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_ecn_cwr(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_ecne(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_eat_data_6_2(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_eat_data_fast_4_4(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_eat_sack_6_2(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
static sctp_disposition_t sctp_sf_tabort_8_4_8(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_operr_notify(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_9_2_final(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_ootb(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
static sctp_disposition_t sctp_sf_shut_8_4_5(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_8_5_1_E_sa(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_asconf(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type, void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_asconf_ack(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type, void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_eat_fwd_tsn(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_eat_fwd_tsn_fast(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
static sctp_ierror_t sctp_sf_authenticate(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
struct sctp_chunk *chunk)
sctp_disposition_t sctp_sf_eat_auth(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_unk_chunk(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_discard_chunk(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_pdiscard(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_violation(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
static sctp_disposition_t sctp_sf_abort_violation(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
void *arg,
sctp_cmd_seq_t *commands,
const __u8 *payload,
const size_t paylen)
static sctp_disposition_t sctp_sf_violation_chunklen(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
static sctp_disposition_t sctp_sf_violation_paramlen(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg, void *ext,
sctp_cmd_seq_t *commands)
static sctp_disposition_t sctp_sf_violation_ctsn(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
static sctp_disposition_t sctp_sf_violation_chunk(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_prm_asoc(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_prm_send(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_9_2_prm_shutdown(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_9_1_prm_abort(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_error_closed(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_error_shutdown(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_cookie_wait_prm_shutdown(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_cookie_echoed_prm_shutdown(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg, sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_cookie_wait_prm_abort(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_cookie_echoed_prm_abort(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_shutdown_pending_prm_abort(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_shutdown_sent_prm_abort(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_shutdown_ack_sent_prm_abort(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_prm_requestheartbeat(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_prm_asconf(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_ignore_primitive(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_no_pending_tsn(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_9_2_start_shutdown(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_9_2_shutdown_ack(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_ignore_other(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_6_3_3_rtx(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_do_6_2_sack(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_t1_init_timer_expire(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_t1_cookie_timer_expire(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_t2_timer_expire(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_t4_timer_expire(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_t5_timer_expire(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_autoclose_timer_expire(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_not_impl(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_bug(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
sctp_disposition_t sctp_sf_timer_ignore(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const sctp_subtype_t type,
void *arg,
sctp_cmd_seq_t *commands)
static struct sctp_sackhdr *sctp_sm_pull_sack(struct sctp_chunk *chunk)
static struct sctp_packet *sctp_abort_pkt_new(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
struct sctp_chunk *chunk,
const void *payload,
size_t paylen)
static struct sctp_packet *sctp_ootb_pkt_new(const struct sctp_association *asoc,
const struct sctp_chunk *chunk)
void sctp_ootb_pkt_free(struct sctp_packet *packet)
static void sctp_send_stale_cookie_err(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const struct sctp_chunk *chunk,
sctp_cmd_seq_t *commands,
struct sctp_chunk *err_chunk)
static int sctp_eat_data(const struct sctp_association *asoc,
struct sctp_chunk *chunk,
sctp_cmd_seq_t *commands)
