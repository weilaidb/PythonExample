#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
SCTP_STATIC
struct sctp_chunk *sctp_make_chunk(const struct sctp_association *asoc,
__u8 type, __u8 flags, int paylen);
static sctp_cookie_param_t *sctp_pack_cookie(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const struct sctp_chunk *init_chunk,
int *cookie_len,
const __u8 *raw_addrs, int addrs_len);
static int sctp_process_param(struct sctp_association *asoc,
union sctp_params param,
const union sctp_addr *peer_addr,
gfp_t gfp);
static void *sctp_addto_param(struct sctp_chunk *chunk, int len,
const void *data);
int sctp_chunk_iif(const struct sctp_chunk *chunk)
static const struct sctp_paramhdr ecap_param = ;
static const struct sctp_paramhdr prsctp_param = ;
void  sctp_init_cause(struct sctp_chunk *chunk, __be16 cause_code,
size_t paylen)
int sctp_init_cause_fixed(struct sctp_chunk *chunk, __be16 cause_code,
size_t paylen)
struct sctp_chunk *sctp_make_init(const struct sctp_association *asoc,
const struct sctp_bind_addr *bp,
gfp_t gfp, int vparam_len)
struct sctp_chunk *sctp_make_init_ack(const struct sctp_association *asoc,
const struct sctp_chunk *chunk,
gfp_t gfp, int unkparam_len)
struct sctp_chunk *sctp_make_cookie_echo(const struct sctp_association *asoc,
const struct sctp_chunk *chunk)
struct sctp_chunk *sctp_make_cookie_ack(const struct sctp_association *asoc,
const struct sctp_chunk *chunk)
struct sctp_chunk *sctp_make_cwr(const struct sctp_association *asoc,
const __u32 lowest_tsn,
const struct sctp_chunk *chunk)
struct sctp_chunk *sctp_make_ecne(const struct sctp_association *asoc,
const __u32 lowest_tsn)
struct sctp_chunk *sctp_make_datafrag_empty(struct sctp_association *asoc,
const struct sctp_sndrcvinfo *sinfo,
int data_len, __u8 flags, __u16 ssn)
struct sctp_chunk *sctp_make_sack(const struct sctp_association *asoc)
struct sctp_chunk *sctp_make_shutdown(const struct sctp_association *asoc,
const struct sctp_chunk *chunk)
struct sctp_chunk *sctp_make_shutdown_ack(const struct sctp_association *asoc,
const struct sctp_chunk *chunk)
struct sctp_chunk *sctp_make_shutdown_complete(
const struct sctp_association *asoc,
const struct sctp_chunk *chunk)
struct sctp_chunk *sctp_make_abort(const struct sctp_association *asoc,
const struct sctp_chunk *chunk,
const size_t hint)
struct sctp_chunk *sctp_make_abort_no_data(
const struct sctp_association *asoc,
const struct sctp_chunk *chunk, __u32 tsn)
struct sctp_chunk *sctp_make_abort_user(const struct sctp_association *asoc,
const struct msghdr *msg,
size_t paylen)
static void *sctp_addto_param(struct sctp_chunk *chunk, int len,
const void *data)
struct sctp_chunk *sctp_make_abort_violation(
const struct sctp_association *asoc,
const struct sctp_chunk *chunk,
const __u8   *payload,
const size_t paylen)
struct sctp_chunk *sctp_make_violation_paramlen(
const struct sctp_association *asoc,
const struct sctp_chunk *chunk,
struct sctp_paramhdr *param)
struct sctp_chunk *sctp_make_heartbeat(const struct sctp_association *asoc,
const struct sctp_transport *transport)
struct sctp_chunk *sctp_make_heartbeat_ack(const struct sctp_association *asoc,
const struct sctp_chunk *chunk,
const void *payload, const size_t paylen)
static struct sctp_chunk *sctp_make_op_error_space(
const struct sctp_association *asoc,
const struct sctp_chunk *chunk,
size_t size)
static inline struct sctp_chunk *sctp_make_op_error_fixed(
const struct sctp_association *asoc,
const struct sctp_chunk *chunk)
struct sctp_chunk *sctp_make_op_error(const struct sctp_association *asoc,
const struct sctp_chunk *chunk,
__be16 cause_code, const void *payload,
size_t paylen, size_t reserve_tail)
struct sctp_chunk *sctp_make_auth(const struct sctp_association *asoc)
struct sctp_chunk *sctp_chunkify(struct sk_buff *skb,
const struct sctp_association *asoc,
struct sock *sk)
void sctp_init_addrs(struct sctp_chunk *chunk, union sctp_addr *src,
union sctp_addr *dest)
const union sctp_addr *sctp_source(const struct sctp_chunk *chunk)
SCTP_STATIC
struct sctp_chunk *sctp_make_chunk(const struct sctp_association *asoc,
__u8 type, __u8 flags, int paylen)
static void sctp_chunk_destroy(struct sctp_chunk *chunk)
void sctp_chunk_free(struct sctp_chunk *chunk)
void sctp_chunk_hold(struct sctp_chunk *ch)
void sctp_chunk_put(struct sctp_chunk *ch)
void *sctp_addto_chunk(struct sctp_chunk *chunk, int len, const void *data)
void *sctp_addto_chunk_fixed(struct sctp_chunk *chunk,
int len, const void *data)
int sctp_user_addto_chunk(struct sctp_chunk *chunk, int off, int len,
struct iovec *data)
void sctp_chunk_assign_ssn(struct sctp_chunk *chunk)
void sctp_chunk_assign_tsn(struct sctp_chunk *chunk)
struct sctp_association *sctp_make_temp_asoc(const struct sctp_endpoint *ep,
struct sctp_chunk *chunk,
gfp_t gfp)
static sctp_cookie_param_t *sctp_pack_cookie(const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
const struct sctp_chunk *init_chunk,
int *cookie_len,
const __u8 *raw_addrs, int addrs_len)
struct sctp_association *sctp_unpack_cookie(
const struct sctp_endpoint *ep,
const struct sctp_association *asoc,
struct sctp_chunk *chunk, gfp_t gfp,
int *error, struct sctp_chunk **errp)
struct __sctp_missing   __packed;
static int sctp_process_missing_param(const struct sctp_association *asoc,
sctp_param_t paramtype,
struct sctp_chunk *chunk,
struct sctp_chunk **errp)
static int sctp_process_inv_mandatory(const struct sctp_association *asoc,
struct sctp_chunk *chunk,
struct sctp_chunk **errp)
static int sctp_process_inv_paramlength(const struct sctp_association *asoc,
struct sctp_paramhdr *param,
const struct sctp_chunk *chunk,
struct sctp_chunk **errp)
static int sctp_process_hn_param(const struct sctp_association *asoc,
union sctp_params param,
struct sctp_chunk *chunk,
struct sctp_chunk **errp)
static int sctp_verify_ext_param(union sctp_params param)
static void sctp_process_ext_param(struct sctp_association *asoc,
union sctp_params param)
static sctp_ierror_t sctp_process_unk_param(const struct sctp_association *asoc,
union sctp_params param,
struct sctp_chunk *chunk,
struct sctp_chunk **errp)
static sctp_ierror_t sctp_verify_param(const struct sctp_association *asoc,
union sctp_params param,
sctp_cid_t cid,
struct sctp_chunk *chunk,
struct sctp_chunk **err_chunk)
int sctp_verify_init(const struct sctp_association *asoc,
sctp_cid_t cid,
sctp_init_chunk_t *peer_init,
struct sctp_chunk *chunk,
struct sctp_chunk **errp)
int sctp_process_init(struct sctp_association *asoc, struct sctp_chunk *chunk,
const union sctp_addr *peer_addr,
sctp_init_chunk_t *peer_init, gfp_t gfp)
static int sctp_process_param(struct sctp_association *asoc,
union sctp_params param,
const union sctp_addr *peer_addr,
gfp_t gfp)
__u32 sctp_generate_tag(const struct sctp_endpoint *ep)
__u32 sctp_generate_tsn(const struct sctp_endpoint *ep)
static struct sctp_chunk *sctp_make_asconf(struct sctp_association *asoc,
union sctp_addr *addr,
int vparam_len)
struct sctp_chunk *sctp_make_asconf_update_ip(struct sctp_association *asoc,
union sctp_addr	      *laddr,
struct sockaddr	      *addrs,
int		      addrcnt,
__be16		      flags)
struct sctp_chunk *sctp_make_asconf_set_prim(struct sctp_association *asoc,
union sctp_addr *addr)
static struct sctp_chunk *sctp_make_asconf_ack(const struct sctp_association *asoc,
__u32 serial, int vparam_len)
static void sctp_add_asconf_response(struct sctp_chunk *chunk, __be32 crr_id,
__be16 err_code, sctp_addip_param_t *asconf_param)
static __be16 sctp_process_asconf_param(struct sctp_association *asoc,
struct sctp_chunk *asconf,
sctp_addip_param_t *asconf_param)
int sctp_verify_asconf(const struct sctp_association *asoc,
struct sctp_paramhdr *param_hdr, void *chunk_end,
struct sctp_paramhdr **errp)
struct sctp_chunk *sctp_process_asconf(struct sctp_association *asoc,
struct sctp_chunk *asconf)
static void sctp_asconf_param_success(struct sctp_association *asoc,
sctp_addip_param_t *asconf_param)
static __be16 sctp_get_asconf_response(struct sctp_chunk *asconf_ack,
sctp_addip_param_t *asconf_param,
int no_err)
int sctp_process_asconf_ack(struct sctp_association *asoc,
struct sctp_chunk *asconf_ack)
struct sctp_chunk *sctp_make_fwdtsn(const struct sctp_association *asoc,
__u32 new_cum_tsn, size_t nstreams,
struct sctp_fwdtsn_skip *skiplist)
