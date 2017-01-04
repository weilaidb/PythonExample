#define __sctp_structs_h__
union sctp_addr ;
struct sctp_globals;
struct sctp_endpoint;
struct sctp_association;
struct sctp_transport;
struct sctp_packet;
struct sctp_chunk;
struct sctp_inq;
struct sctp_outq;
struct sctp_bind_addr;
struct sctp_ulpq;
struct sctp_ep_common;
struct sctp_ssnmap;
struct crypto_hash;
struct sctp_bind_bucket ;
struct sctp_bind_hashbucket ;
struct sctp_hashbucket  __attribute__((__aligned__(8)));
extern struct sctp_globals  sctp_globals;
#define sctp_rto_initial		(sctp_globals.rto_initial)
#define sctp_rto_min			(sctp_globals.rto_min)
#define sctp_rto_max			(sctp_globals.rto_max)
#define sctp_rto_alpha			(sctp_globals.rto_alpha)
#define sctp_rto_beta			(sctp_globals.rto_beta)
#define sctp_max_burst			(sctp_globals.max_burst)
#define sctp_valid_cookie_life		(sctp_globals.valid_cookie_life)
#define sctp_cookie_preserve_enable	(sctp_globals.cookie_preserve_enable)
#define sctp_max_retrans_association	(sctp_globals.max_retrans_association)
#define sctp_sndbuf_policy	 	(sctp_globals.sndbuf_policy)
#define sctp_rcvbuf_policy	 	(sctp_globals.rcvbuf_policy)
#define sctp_max_retrans_path		(sctp_globals.max_retrans_path)
#define sctp_max_retrans_init		(sctp_globals.max_retrans_init)
#define sctp_sack_timeout		(sctp_globals.sack_timeout)
#define sctp_hb_interval		(sctp_globals.hb_interval)
#define sctp_max_instreams		(sctp_globals.max_instreams)
#define sctp_max_outstreams		(sctp_globals.max_outstreams)
#define sctp_address_families		(sctp_globals.address_families)
#define sctp_ep_hashsize		(sctp_globals.ep_hashsize)
#define sctp_ep_hashtable		(sctp_globals.ep_hashtable)
#define sctp_assoc_hashsize		(sctp_globals.assoc_hashsize)
#define sctp_assoc_hashtable		(sctp_globals.assoc_hashtable)
#define sctp_port_hashsize		(sctp_globals.port_hashsize)
#define sctp_port_hashtable		(sctp_globals.port_hashtable)
#define sctp_local_addr_list		(sctp_globals.local_addr_list)
#define sctp_local_addr_lock		(sctp_globals.addr_list_lock)
#define sctp_scope_policy		(sctp_globals.ipv4_scope_policy)
#define sctp_addip_enable		(sctp_globals.addip_enable)
#define sctp_addip_noauth		(sctp_globals.addip_noauth_enable)
#define sctp_prsctp_enable		(sctp_globals.prsctp_enable)
#define sctp_auth_enable		(sctp_globals.auth_enable)
#define sctp_checksum_disable		(sctp_globals.checksum_disable)
#define sctp_rwnd_upd_shift		(sctp_globals.rwnd_update_shift)
typedef enum  sctp_socket_type_t;
struct sctp_sock ;
static inline struct sctp_sock *sctp_sk(const struct sock *sk)
static inline struct sock *sctp_opt2sk(const struct sctp_sock *sp)
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
struct sctp6_sock ;
struct sctp_cookie ;
struct sctp_signed_cookie  __packed;
union sctp_addr_param ;
union sctp_params ;
typedef struct sctp_sender_hb_info  __packed sctp_sender_hb_info_t;
struct sctp_stream ;
struct sctp_ssnmap ;
struct sctp_ssnmap *sctp_ssnmap_new(__u16 in, __u16 out,
gfp_t gfp);
void sctp_ssnmap_free(struct sctp_ssnmap *map);
void sctp_ssnmap_clear(struct sctp_ssnmap *map);
static inline __u16 sctp_ssn_peek(struct sctp_stream *stream, __u16 id)
static inline __u16 sctp_ssn_next(struct sctp_stream *stream, __u16 id)
static inline void sctp_ssn_skip(struct sctp_stream *stream, __u16 id,
__u16 ssn)
struct sctp_af ;
struct sctp_af *sctp_get_af_specific(sa_family_t);
int sctp_register_af(struct sctp_af *);
struct sctp_pf ;
struct sctp_datamsg ;
struct sctp_datamsg *sctp_datamsg_from_user(struct sctp_association *,
struct sctp_sndrcvinfo *,
struct msghdr *, int len);
void sctp_datamsg_free(struct sctp_datamsg *);
void sctp_datamsg_put(struct sctp_datamsg *);
void sctp_chunk_fail(struct sctp_chunk *, int error);
int sctp_chunk_abandoned(struct sctp_chunk *);
struct sctp_chunk ;
void sctp_chunk_hold(struct sctp_chunk *);
void sctp_chunk_put(struct sctp_chunk *);
int sctp_user_addto_chunk(struct sctp_chunk *chunk, int off, int len,
struct iovec *data);
void sctp_chunk_free(struct sctp_chunk *);
void  *sctp_addto_chunk(struct sctp_chunk *, int len, const void *data);
void  *sctp_addto_chunk_fixed(struct sctp_chunk *, int len, const void *data);
struct sctp_chunk *sctp_chunkify(struct sk_buff *,
const struct sctp_association *,
struct sock *);
void sctp_init_addrs(struct sctp_chunk *, union sctp_addr *,
union sctp_addr *);
const union sctp_addr *sctp_source(const struct sctp_chunk *chunk);
enum ;
struct sctp_sockaddr_entry ;
typedef struct sctp_chunk *(sctp_packet_phandler_t)(struct sctp_association *);
struct sctp_packet ;
struct sctp_packet *sctp_packet_init(struct sctp_packet *,
struct sctp_transport *,
__u16 sport, __u16 dport);
struct sctp_packet *sctp_packet_config(struct sctp_packet *, __u32 vtag, int);
sctp_xmit_t sctp_packet_transmit_chunk(struct sctp_packet *,
struct sctp_chunk *, int);
sctp_xmit_t sctp_packet_append_chunk(struct sctp_packet *,
struct sctp_chunk *);
int sctp_packet_transmit(struct sctp_packet *);
void sctp_packet_free(struct sctp_packet *);
static inline int sctp_packet_empty(struct sctp_packet *packet)
struct sctp_transport ;
struct sctp_transport *sctp_transport_new(const union sctp_addr *,
gfp_t);
void sctp_transport_set_owner(struct sctp_transport *,
struct sctp_association *);
void sctp_transport_route(struct sctp_transport *, union sctp_addr *,
struct sctp_sock *);
void sctp_transport_pmtu(struct sctp_transport *, struct sock *sk);
void sctp_transport_free(struct sctp_transport *);
void sctp_transport_reset_timers(struct sctp_transport *);
void sctp_transport_hold(struct sctp_transport *);
void sctp_transport_put(struct sctp_transport *);
void sctp_transport_update_rto(struct sctp_transport *, __u32);
void sctp_transport_raise_cwnd(struct sctp_transport *, __u32, __u32);
void sctp_transport_lower_cwnd(struct sctp_transport *, sctp_lower_cwnd_t);
void sctp_transport_burst_limited(struct sctp_transport *);
void sctp_transport_burst_reset(struct sctp_transport *);
unsigned long sctp_transport_timeout(struct sctp_transport *);
void sctp_transport_reset(struct sctp_transport *);
void sctp_transport_update_pmtu(struct sctp_transport *, u32);
struct sctp_inq ;
void sctp_inq_init(struct sctp_inq *);
void sctp_inq_free(struct sctp_inq *);
void sctp_inq_push(struct sctp_inq *, struct sctp_chunk *packet);
struct sctp_chunk *sctp_inq_pop(struct sctp_inq *);
struct sctp_chunkhdr *sctp_inq_peek(struct sctp_inq *);
void sctp_inq_set_th_handler(struct sctp_inq *, work_func_t);
struct sctp_outq ;
void sctp_outq_init(struct sctp_association *, struct sctp_outq *);
void sctp_outq_teardown(struct sctp_outq *);
void sctp_outq_free(struct sctp_outq*);
int sctp_outq_tail(struct sctp_outq *, struct sctp_chunk *chunk);
int sctp_outq_sack(struct sctp_outq *, struct sctp_sackhdr *);
int sctp_outq_is_empty(const struct sctp_outq *);
void sctp_outq_restart(struct sctp_outq *);
void sctp_retransmit(struct sctp_outq *, struct sctp_transport *,
sctp_retransmit_reason_t);
void sctp_retransmit_mark(struct sctp_outq *, struct sctp_transport *, __u8);
int sctp_outq_uncork(struct sctp_outq *);
static inline void sctp_outq_cork(struct sctp_outq *q)
struct sctp_bind_addr ;
void sctp_bind_addr_init(struct sctp_bind_addr *, __u16 port);
void sctp_bind_addr_free(struct sctp_bind_addr *);
int sctp_bind_addr_copy(struct sctp_bind_addr *dest,
const struct sctp_bind_addr *src,
sctp_scope_t scope, gfp_t gfp,
int flags);
int sctp_bind_addr_dup(struct sctp_bind_addr *dest,
const struct sctp_bind_addr *src,
gfp_t gfp);
int sctp_add_bind_addr(struct sctp_bind_addr *, union sctp_addr *,
__u8 addr_state, gfp_t gfp);
int sctp_del_bind_addr(struct sctp_bind_addr *, union sctp_addr *);
int sctp_bind_addr_match(struct sctp_bind_addr *, const union sctp_addr *,
struct sctp_sock *);
int sctp_bind_addr_conflict(struct sctp_bind_addr *, const union sctp_addr *,
struct sctp_sock *, struct sctp_sock *);
int sctp_bind_addr_state(const struct sctp_bind_addr *bp,
const union sctp_addr *addr);
union sctp_addr *sctp_find_unmatch_addr(struct sctp_bind_addr	*bp,
const union sctp_addr	*addrs,
int			addrcnt,
struct sctp_sock	*opt);
union sctp_params sctp_bind_addrs_to_raw(const struct sctp_bind_addr *bp,
int *addrs_len,
gfp_t gfp);
int sctp_raw_to_bind_addrs(struct sctp_bind_addr *bp, __u8 *raw, int len,
__u16 port, gfp_t gfp);
sctp_scope_t sctp_scope(const union sctp_addr *);
int sctp_in_scope(const union sctp_addr *addr, const sctp_scope_t scope);
int sctp_is_any(struct sock *sk, const union sctp_addr *addr);
int sctp_addr_is_valid(const union sctp_addr *addr);
typedef enum  sctp_endpoint_type_t;
struct sctp_ep_common ;
struct sctp_endpoint ;
static inline struct sctp_endpoint *sctp_ep(struct sctp_ep_common *base)
struct sctp_endpoint *sctp_endpoint_new(struct sock *, gfp_t);
void sctp_endpoint_free(struct sctp_endpoint *);
void sctp_endpoint_put(struct sctp_endpoint *);
void sctp_endpoint_hold(struct sctp_endpoint *);
void sctp_endpoint_add_asoc(struct sctp_endpoint *, struct sctp_association *);
struct sctp_association *sctp_endpoint_lookup_assoc(
const struct sctp_endpoint *ep,
const union sctp_addr *paddr,
struct sctp_transport **);
int sctp_endpoint_is_peeled_off(struct sctp_endpoint *,
const union sctp_addr *);
struct sctp_endpoint *sctp_endpoint_is_match(struct sctp_endpoint *,
const union sctp_addr *);
int sctp_has_association(const union sctp_addr *laddr,
const union sctp_addr *paddr);
int sctp_verify_init(const struct sctp_association *asoc, sctp_cid_t,
sctp_init_chunk_t *peer_init, struct sctp_chunk *chunk,
struct sctp_chunk **err_chunk);
int sctp_process_init(struct sctp_association *, struct sctp_chunk *chunk,
const union sctp_addr *peer,
sctp_init_chunk_t *init, gfp_t gfp);
__u32 sctp_generate_tag(const struct sctp_endpoint *);
__u32 sctp_generate_tsn(const struct sctp_endpoint *);
struct sctp_inithdr_host ;
struct sctp_association ;
enum ;
static inline struct sctp_association *sctp_assoc(struct sctp_ep_common *base)
struct sctp_association *
sctp_association_new(const struct sctp_endpoint *, const struct sock *,
sctp_scope_t scope, gfp_t gfp);
void sctp_association_free(struct sctp_association *);
void sctp_association_put(struct sctp_association *);
void sctp_association_hold(struct sctp_association *);
struct sctp_transport *sctp_assoc_choose_alter_transport(
struct sctp_association *, struct sctp_transport *);
void sctp_assoc_update_retran_path(struct sctp_association *);
struct sctp_transport *sctp_assoc_lookup_paddr(const struct sctp_association *,
const union sctp_addr *);
int sctp_assoc_lookup_laddr(struct sctp_association *asoc,
const union sctp_addr *laddr);
struct sctp_transport *sctp_assoc_add_peer(struct sctp_association *,
const union sctp_addr *address,
const gfp_t gfp,
const int peer_state);
void sctp_assoc_del_peer(struct sctp_association *asoc,
const union sctp_addr *addr);
void sctp_assoc_rm_peer(struct sctp_association *asoc,
struct sctp_transport *peer);
void sctp_assoc_control_transport(struct sctp_association *,
struct sctp_transport *,
sctp_transport_cmd_t, sctp_sn_error_t);
struct sctp_transport *sctp_assoc_lookup_tsn(struct sctp_association *, __u32);
struct sctp_transport *sctp_assoc_is_match(struct sctp_association *,
const union sctp_addr *,
const union sctp_addr *);
void sctp_assoc_migrate(struct sctp_association *, struct sock *);
void sctp_assoc_update(struct sctp_association *old,
struct sctp_association *new);
__u32 sctp_association_get_next_tsn(struct sctp_association *);
void sctp_assoc_sync_pmtu(struct sctp_association *);
void sctp_assoc_rwnd_increase(struct sctp_association *, unsigned);
void sctp_assoc_rwnd_decrease(struct sctp_association *, unsigned);
void sctp_assoc_set_primary(struct sctp_association *,
struct sctp_transport *);
void sctp_assoc_del_nonprimary_peers(struct sctp_association *,
struct sctp_transport *);
int sctp_assoc_set_bind_addr_from_ep(struct sctp_association *,
sctp_scope_t, gfp_t);
int sctp_assoc_set_bind_addr_from_cookie(struct sctp_association *,
struct sctp_cookie*,
gfp_t gfp);
int sctp_assoc_set_id(struct sctp_association *, gfp_t);
void sctp_assoc_clean_asconf_ack_cache(const struct sctp_association *asoc);
struct sctp_chunk *sctp_assoc_lookup_asconf_ack(
const struct sctp_association *asoc,
__be32 serial);
void sctp_asconf_queue_teardown(struct sctp_association *asoc);
int sctp_cmp_addr_exact(const union sctp_addr *ss1,
const union sctp_addr *ss2);
struct sctp_chunk *sctp_get_ecne_prepend(struct sctp_association *asoc);
typedef struct sctp_cmsgs  sctp_cmsgs_t;
typedef struct  sctp_dbg_objcnt_entry_t;
