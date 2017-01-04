#define _NET_XFRM_H
#define XFRM_PROTO_ESP		50
#define XFRM_PROTO_AH		51
#define XFRM_PROTO_COMP		108
#define XFRM_PROTO_IPIP		4
#define XFRM_PROTO_IPV6		41
#define XFRM_PROTO_ROUTING	IPPROTO_ROUTING
#define XFRM_PROTO_DSTOPTS	IPPROTO_DSTOPTS
#define XFRM_ALIGN4(len)	(((len) + 3) & ~3)
#define XFRM_ALIGN8(len)	(((len) + 7) & ~7)
#define MODULE_ALIAS_XFRM_MODE(family, encap) \
MODULE_ALIAS("xfrm-mode-" __stringify(family) "-" __stringify(encap))
#define MODULE_ALIAS_XFRM_TYPE(family, proto) \
MODULE_ALIAS("xfrm-type-" __stringify(family) "-" __stringify(proto))
#define XFRM_INC_STATS(net, field)	SNMP_INC_STATS((net)->mib.xfrm_statistics, field)
#define XFRM_INC_STATS_BH(net, field)	SNMP_INC_STATS_BH((net)->mib.xfrm_statistics, field)
#define XFRM_INC_STATS_USER(net, field)	SNMP_INC_STATS_USER((net)-mib.xfrm_statistics, field)
#define XFRM_INC_STATS(net, field)	((void)(net))
#define XFRM_INC_STATS_BH(net, field)	((void)(net))
#define XFRM_INC_STATS_USER(net, field)	((void)(net))
extern struct mutex xfrm_cfg_mutex;
struct xfrm_state_walk ;
struct xfrm_state ;
static inline struct net *xs_net(struct xfrm_state *x)
#define XFRM_TIME_DEFER	1
enum ;
struct km_event ;
struct xfrm_replay ;
struct net_device;
struct xfrm_type;
struct xfrm_dst;
struct xfrm_policy_afinfo ;
extern int xfrm_policy_register_afinfo(struct xfrm_policy_afinfo *afinfo);
extern int xfrm_policy_unregister_afinfo(struct xfrm_policy_afinfo *afinfo);
extern void km_policy_notify(struct xfrm_policy *xp, int dir, const struct km_event *c);
extern void km_state_notify(struct xfrm_state *x, const struct km_event *c);
struct xfrm_tmpl;
extern int km_query(struct xfrm_state *x, struct xfrm_tmpl *t, struct xfrm_policy *pol);
extern void km_state_expired(struct xfrm_state *x, int hard, u32 pid);
extern int __xfrm_state_delete(struct xfrm_state *x);
struct xfrm_state_afinfo ;
extern int xfrm_state_register_afinfo(struct xfrm_state_afinfo *afinfo);
extern int xfrm_state_unregister_afinfo(struct xfrm_state_afinfo *afinfo);
extern void xfrm_state_delete_tunnel(struct xfrm_state *x);
struct xfrm_type ;
extern int xfrm_register_type(const struct xfrm_type *type, unsigned short family);
extern int xfrm_unregister_type(const struct xfrm_type *type, unsigned short family);
struct xfrm_mode ;
enum ;
extern int xfrm_register_mode(struct xfrm_mode *mode, int family);
extern int xfrm_unregister_mode(struct xfrm_mode *mode, int family);
static inline int xfrm_af2proto(unsigned int family)
static inline struct xfrm_mode *xfrm_ip2inner_mode(struct xfrm_state *x, int ipproto)
struct xfrm_tmpl ;
#define XFRM_MAX_DEPTH		6
struct xfrm_policy_walk_entry ;
struct xfrm_policy_walk ;
struct xfrm_policy ;
static inline struct net *xp_net(const struct xfrm_policy *xp)
struct xfrm_kmaddress ;
struct xfrm_migrate ;
#define XFRM_KM_TIMEOUT                30
#define XFRM_REPLAY_SEQ		1
#define XFRM_REPLAY_OSEQ	2
#define XFRM_REPLAY_SEQ_MASK	3
#define XFRM_REPLAY_UPDATE	XFRM_AE_CR
#define XFRM_REPLAY_TIMEOUT	XFRM_AE_CE
#define XFRM_AE_ETIME			10
#define XFRM_AE_ETH_M			10
#define XFRM_AE_SEQT_SIZE		2
struct xfrm_mgr ;
extern int xfrm_register_km(struct xfrm_mgr *km);
extern int xfrm_unregister_km(struct xfrm_mgr *km);
struct xfrm_skb_cb ;
#define XFRM_SKB_CB(__skb) ((struct xfrm_skb_cb *)&((__skb)->cb[0]))
struct xfrm_mode_skb_cb ;
#define XFRM_MODE_SKB_CB(__skb) ((struct xfrm_mode_skb_cb *)&((__skb)->cb[0]))
struct xfrm_spi_skb_cb ;
#define XFRM_SPI_SKB_CB(__skb) ((struct xfrm_spi_skb_cb *)&((__skb)->cb[0]))
struct xfrm_audit ;
static inline struct audit_buffer *xfrm_audit_start(const char *op)
static inline void xfrm_audit_helper_usrinfo(uid_t auid, u32 ses, u32 secid,
struct audit_buffer *audit_buf)
extern void xfrm_audit_policy_add(struct xfrm_policy *xp, int result,
u32 auid, u32 ses, u32 secid);
extern void xfrm_audit_policy_delete(struct xfrm_policy *xp, int result,
u32 auid, u32 ses, u32 secid);
extern void xfrm_audit_state_add(struct xfrm_state *x, int result,
u32 auid, u32 ses, u32 secid);
extern void xfrm_audit_state_delete(struct xfrm_state *x, int result,
u32 auid, u32 ses, u32 secid);
extern void xfrm_audit_state_replay_overflow(struct xfrm_state *x,
struct sk_buff *skb);
extern void xfrm_audit_state_replay(struct xfrm_state *x,
struct sk_buff *skb, __be32 net_seq);
extern void xfrm_audit_state_notfound_simple(struct sk_buff *skb, u16 family);
extern void xfrm_audit_state_notfound(struct sk_buff *skb, u16 family,
__be32 net_spi, __be32 net_seq);
extern void xfrm_audit_state_icvfail(struct xfrm_state *x,
struct sk_buff *skb, u8 proto);
static inline void xfrm_audit_policy_add(struct xfrm_policy *xp, int result,
u32 auid, u32 ses, u32 secid)
static inline void xfrm_audit_policy_delete(struct xfrm_policy *xp, int result,
u32 auid, u32 ses, u32 secid)
static inline void xfrm_audit_state_add(struct xfrm_state *x, int result,
u32 auid, u32 ses, u32 secid)
static inline void xfrm_audit_state_delete(struct xfrm_state *x, int result,
u32 auid, u32 ses, u32 secid)
static inline void xfrm_audit_state_replay_overflow(struct xfrm_state *x,
struct sk_buff *skb)
static inline void xfrm_audit_state_replay(struct xfrm_state *x,
struct sk_buff *skb, __be32 net_seq)
static inline void xfrm_audit_state_notfound_simple(struct sk_buff *skb,
u16 family)
static inline void xfrm_audit_state_notfound(struct sk_buff *skb, u16 family,
__be32 net_spi, __be32 net_seq)
static inline void xfrm_audit_state_icvfail(struct xfrm_state *x,
struct sk_buff *skb, u8 proto)
static inline void xfrm_pol_hold(struct xfrm_policy *policy)
extern void xfrm_policy_destroy(struct xfrm_policy *policy);
static inline void xfrm_pol_put(struct xfrm_policy *policy)
static inline void xfrm_pols_put(struct xfrm_policy **pols, int npols)
extern void __xfrm_state_destroy(struct xfrm_state *);
static inline void __xfrm_state_put(struct xfrm_state *x)
static inline void xfrm_state_put(struct xfrm_state *x)
static inline void xfrm_state_hold(struct xfrm_state *x)
static inline bool addr_match(const void *token1, const void *token2,
int prefixlen)
static __inline__
__be16 xfrm_flowi_sport(const struct flowi *fl, const union flowi_uli *uli)
static __inline__
__be16 xfrm_flowi_dport(const struct flowi *fl, const union flowi_uli *uli)
extern int xfrm_selector_match(const struct xfrm_selector *sel,
const struct flowi *fl,
unsigned short family);
static inline int xfrm_sec_ctx_match(struct xfrm_sec_ctx *s1, struct xfrm_sec_ctx *s2)
static inline int xfrm_sec_ctx_match(struct xfrm_sec_ctx *s1, struct xfrm_sec_ctx *s2)
struct xfrm_dst ;
static inline void xfrm_dst_destroy(struct xfrm_dst *xdst)
extern void xfrm_dst_ifdown(struct dst_entry *dst, struct net_device *dev);
struct sec_path ;
static inline int secpath_exists(struct sk_buff *skb)
static inline struct sec_path *
secpath_get(struct sec_path *sp)
extern void __secpath_destroy(struct sec_path *sp);
static inline void
secpath_put(struct sec_path *sp)
extern struct sec_path *secpath_dup(struct sec_path *src);
static inline void
secpath_reset(struct sk_buff *skb)
static inline int
xfrm_addr_any(const xfrm_address_t *addr, unsigned short family)
static inline int
__xfrm4_state_addr_cmp(const struct xfrm_tmpl *tmpl, const struct xfrm_state *x)
static inline int
__xfrm6_state_addr_cmp(const struct xfrm_tmpl *tmpl, const struct xfrm_state *x)
static inline int
xfrm_state_addr_cmp(const struct xfrm_tmpl *tmpl, const struct xfrm_state *x, unsigned short family)
extern int __xfrm_policy_check(struct sock *, int dir, struct sk_buff *skb, unsigned short family);
static inline int __xfrm_policy_check2(struct sock *sk, int dir,
struct sk_buff *skb,
unsigned int family, int reverse)
static inline int xfrm_policy_check(struct sock *sk, int dir, struct sk_buff *skb, unsigned short family)
static inline int xfrm4_policy_check(struct sock *sk, int dir, struct sk_buff *skb)
static inline int xfrm6_policy_check(struct sock *sk, int dir, struct sk_buff *skb)
static inline int xfrm4_policy_check_reverse(struct sock *sk, int dir,
struct sk_buff *skb)
static inline int xfrm6_policy_check_reverse(struct sock *sk, int dir,
struct sk_buff *skb)
extern int __xfrm_decode_session(struct sk_buff *skb, struct flowi *fl,
unsigned int family, int reverse);
static inline int xfrm_decode_session(struct sk_buff *skb, struct flowi *fl,
unsigned int family)
static inline int xfrm_decode_session_reverse(struct sk_buff *skb,
struct flowi *fl,
unsigned int family)
extern int __xfrm_route_forward(struct sk_buff *skb, unsigned short family);
static inline int xfrm_route_forward(struct sk_buff *skb, unsigned short family)
static inline int xfrm4_route_forward(struct sk_buff *skb)
static inline int xfrm6_route_forward(struct sk_buff *skb)
extern int __xfrm_sk_clone_policy(struct sock *sk);
static inline int xfrm_sk_clone_policy(struct sock *sk)
extern int xfrm_policy_delete(struct xfrm_policy *pol, int dir);
static inline void xfrm_sk_free_policy(struct sock *sk)
static inline void xfrm_sk_free_policy(struct sock *sk)
static inline int xfrm_sk_clone_policy(struct sock *sk)
static inline int xfrm6_route_forward(struct sk_buff *skb)
static inline int xfrm4_route_forward(struct sk_buff *skb)
static inline int xfrm6_policy_check(struct sock *sk, int dir, struct sk_buff *skb)
static inline int xfrm4_policy_check(struct sock *sk, int dir, struct sk_buff *skb)
static inline int xfrm_policy_check(struct sock *sk, int dir, struct sk_buff *skb, unsigned short family)
static inline int xfrm_decode_session_reverse(struct sk_buff *skb,
struct flowi *fl,
unsigned int family)
static inline int xfrm4_policy_check_reverse(struct sock *sk, int dir,
struct sk_buff *skb)
static inline int xfrm6_policy_check_reverse(struct sock *sk, int dir,
struct sk_buff *skb)
static __inline__
xfrm_address_t *xfrm_flowi_daddr(const struct flowi *fl, unsigned short family)
static __inline__
xfrm_address_t *xfrm_flowi_saddr(const struct flowi *fl, unsigned short family)
static __inline__
void xfrm_flowi_addr_get(const struct flowi *fl,
xfrm_address_t *saddr, xfrm_address_t *daddr,
unsigned short family)
static __inline__ int
__xfrm4_state_addr_check(const struct xfrm_state *x,
const xfrm_address_t *daddr, const xfrm_address_t *saddr)
static __inline__ int
__xfrm6_state_addr_check(const struct xfrm_state *x,
const xfrm_address_t *daddr, const xfrm_address_t *saddr)
static __inline__ int
xfrm_state_addr_check(const struct xfrm_state *x,
const xfrm_address_t *daddr, const xfrm_address_t *saddr,
unsigned short family)
static __inline__ int
xfrm_state_addr_flow_check(const struct xfrm_state *x, const struct flowi *fl,
unsigned short family)
static inline int xfrm_state_kern(const struct xfrm_state *x)
static inline int xfrm_id_proto_match(u8 proto, u8 userproto)
struct xfrm_algo_aead_info ;
struct xfrm_algo_auth_info ;
struct xfrm_algo_encr_info ;
struct xfrm_algo_comp_info ;
struct xfrm_algo_desc ;
struct xfrm_tunnel ;
struct xfrm6_tunnel ;
extern void xfrm_init(void);
extern void xfrm4_init(int rt_hash_size);
extern int xfrm_state_init(struct net *net);
extern void xfrm_state_fini(struct net *net);
extern void xfrm4_state_init(void);
extern int xfrm6_init(void);
extern void xfrm6_fini(void);
extern int xfrm6_state_init(void);
extern void xfrm6_state_fini(void);
static inline int xfrm6_init(void)
static inline void xfrm6_fini(void)
extern int xfrm_proc_init(struct net *net);
extern void xfrm_proc_fini(struct net *net);
extern int xfrm_sysctl_init(struct net *net);
extern void xfrm_sysctl_fini(struct net *net);
static inline void xfrm_sysctl_fini(struct net *net)
extern void xfrm_state_walk_init(struct xfrm_state_walk *walk, u8 proto);
extern int xfrm_state_walk(struct net *net, struct xfrm_state_walk *walk,
int (*func)(struct xfrm_state *, int, void*), void *);
extern void xfrm_state_walk_done(struct xfrm_state_walk *walk);
extern struct xfrm_state *xfrm_state_alloc(struct net *net);
extern struct xfrm_state *xfrm_state_find(const xfrm_address_t *daddr,
const xfrm_address_t *saddr,
const struct flowi *fl,
struct xfrm_tmpl *tmpl,
struct xfrm_policy *pol, int *err,
unsigned short family);
extern struct xfrm_state *xfrm_stateonly_find(struct net *net, u32 mark,
xfrm_address_t *daddr,
xfrm_address_t *saddr,
unsigned short family,
u8 mode, u8 proto, u32 reqid);
extern int xfrm_state_check_expire(struct xfrm_state *x);
extern void xfrm_state_insert(struct xfrm_state *x);
extern int xfrm_state_add(struct xfrm_state *x);
extern int xfrm_state_update(struct xfrm_state *x);
extern struct xfrm_state *xfrm_state_lookup(struct net *net, u32 mark,
const xfrm_address_t *daddr, __be32 spi,
u8 proto, unsigned short family);
extern struct xfrm_state *xfrm_state_lookup_byaddr(struct net *net, u32 mark,
const xfrm_address_t *daddr,
const xfrm_address_t *saddr,
u8 proto,
unsigned short family);
extern int xfrm_tmpl_sort(struct xfrm_tmpl **dst, struct xfrm_tmpl **src,
int n, unsigned short family);
extern int xfrm_state_sort(struct xfrm_state **dst, struct xfrm_state **src,
int n, unsigned short family);
static inline int xfrm_tmpl_sort(struct xfrm_tmpl **dst, struct xfrm_tmpl **src,
int n, unsigned short family)
static inline int xfrm_state_sort(struct xfrm_state **dst, struct xfrm_state **src,
int n, unsigned short family)
struct xfrmk_sadinfo ;
struct xfrmk_spdinfo ;
extern struct xfrm_state *xfrm_find_acq_byseq(struct net *net, u32 mark,
u32 seq);
extern int xfrm_state_delete(struct xfrm_state *x);
extern int xfrm_state_flush(struct net *net, u8 proto, struct xfrm_audit *audit_info);
extern void xfrm_sad_getinfo(struct net *net, struct xfrmk_sadinfo *si);
extern void xfrm_spd_getinfo(struct net *net, struct xfrmk_spdinfo *si);
extern u32 xfrm_replay_seqhi(struct xfrm_state *x, __be32 net_seq);
extern int xfrm_init_replay(struct xfrm_state *x);
extern int xfrm_state_mtu(struct xfrm_state *x, int mtu);
extern int __xfrm_init_state(struct xfrm_state *x, bool init_replay);
extern int xfrm_init_state(struct xfrm_state *x);
extern int xfrm_prepare_input(struct xfrm_state *x, struct sk_buff *skb);
extern int xfrm_input(struct sk_buff *skb, int nexthdr, __be32 spi,
int encap_type);
extern int xfrm_input_resume(struct sk_buff *skb, int nexthdr);
extern int xfrm_output_resume(struct sk_buff *skb, int err);
extern int xfrm_output(struct sk_buff *skb);
extern int xfrm_inner_extract_output(struct xfrm_state *x, struct sk_buff *skb);
extern int xfrm4_extract_header(struct sk_buff *skb);
extern int xfrm4_extract_input(struct xfrm_state *x, struct sk_buff *skb);
extern int xfrm4_rcv_encap(struct sk_buff *skb, int nexthdr, __be32 spi,
int encap_type);
extern int xfrm4_transport_finish(struct sk_buff *skb, int async);
extern int xfrm4_rcv(struct sk_buff *skb);
static inline int xfrm4_rcv_spi(struct sk_buff *skb, int nexthdr, __be32 spi)
extern int xfrm4_extract_output(struct xfrm_state *x, struct sk_buff *skb);
extern int xfrm4_prepare_output(struct xfrm_state *x, struct sk_buff *skb);
extern int xfrm4_output(struct sk_buff *skb);
extern int xfrm4_output_finish(struct sk_buff *skb);
extern int xfrm4_tunnel_register(struct xfrm_tunnel *handler, unsigned short family);
extern int xfrm4_tunnel_deregister(struct xfrm_tunnel *handler, unsigned short family);
extern int xfrm6_extract_header(struct sk_buff *skb);
extern int xfrm6_extract_input(struct xfrm_state *x, struct sk_buff *skb);
extern int xfrm6_rcv_spi(struct sk_buff *skb, int nexthdr, __be32 spi);
extern int xfrm6_transport_finish(struct sk_buff *skb, int async);
extern int xfrm6_rcv(struct sk_buff *skb);
extern int xfrm6_input_addr(struct sk_buff *skb, xfrm_address_t *daddr,
xfrm_address_t *saddr, u8 proto);
extern int xfrm6_tunnel_register(struct xfrm6_tunnel *handler, unsigned short family);
extern int xfrm6_tunnel_deregister(struct xfrm6_tunnel *handler, unsigned short family);
extern __be32 xfrm6_tunnel_alloc_spi(struct net *net, xfrm_address_t *saddr);
extern __be32 xfrm6_tunnel_spi_lookup(struct net *net, const xfrm_address_t *saddr);
extern int xfrm6_extract_output(struct xfrm_state *x, struct sk_buff *skb);
extern int xfrm6_prepare_output(struct xfrm_state *x, struct sk_buff *skb);
extern int xfrm6_output(struct sk_buff *skb);
extern int xfrm6_output_finish(struct sk_buff *skb);
extern int xfrm6_find_1stfragopt(struct xfrm_state *x, struct sk_buff *skb,
u8 **prevhdr);
extern int xfrm4_udp_encap_rcv(struct sock *sk, struct sk_buff *skb);
extern int xfrm_user_policy(struct sock *sk, int optname, u8 __user *optval, int optlen);
static inline int xfrm_user_policy(struct sock *sk, int optname, u8 __user *optval, int optlen)
static inline int xfrm4_udp_encap_rcv(struct sock *sk, struct sk_buff *skb)
struct xfrm_policy *xfrm_policy_alloc(struct net *net, gfp_t gfp);
extern void xfrm_policy_walk_init(struct xfrm_policy_walk *walk, u8 type);
extern int xfrm_policy_walk(struct net *net, struct xfrm_policy_walk *walk,
int (*func)(struct xfrm_policy *, int, int, void*), void *);
extern void xfrm_policy_walk_done(struct xfrm_policy_walk *walk);
int xfrm_policy_insert(int dir, struct xfrm_policy *policy, int excl);
struct xfrm_policy *xfrm_policy_bysel_ctx(struct net *net, u32 mark,
u8 type, int dir,
struct xfrm_selector *sel,
struct xfrm_sec_ctx *ctx, int delete,
int *err);
struct xfrm_policy *xfrm_policy_byid(struct net *net, u32 mark, u8, int dir, u32 id, int delete, int *err);
int xfrm_policy_flush(struct net *net, u8 type, struct xfrm_audit *audit_info);
u32 xfrm_get_acqseq(void);
extern int xfrm_alloc_spi(struct xfrm_state *x, u32 minspi, u32 maxspi);
struct xfrm_state *xfrm_find_acq(struct net *net, struct xfrm_mark *mark,
u8 mode, u32 reqid, u8 proto,
const xfrm_address_t *daddr,
const xfrm_address_t *saddr, int create,
unsigned short family);
extern int xfrm_sk_policy_insert(struct sock *sk, int dir, struct xfrm_policy *pol);
extern int km_migrate(const struct xfrm_selector *sel, u8 dir, u8 type,
const struct xfrm_migrate *m, int num_bundles,
const struct xfrm_kmaddress *k);
extern struct xfrm_state * xfrm_migrate_state_find(struct xfrm_migrate *m);
extern struct xfrm_state * xfrm_state_migrate(struct xfrm_state *x,
struct xfrm_migrate *m);
extern int xfrm_migrate(const struct xfrm_selector *sel, u8 dir, u8 type,
struct xfrm_migrate *m, int num_bundles,
struct xfrm_kmaddress *k);
extern int km_new_mapping(struct xfrm_state *x, xfrm_address_t *ipaddr, __be16 sport);
extern void km_policy_expired(struct xfrm_policy *pol, int dir, int hard, u32 pid);
extern int km_report(struct net *net, u8 proto, struct xfrm_selector *sel, xfrm_address_t *addr);
extern void xfrm_input_init(void);
extern int xfrm_parse_spi(struct sk_buff *skb, u8 nexthdr, __be32 *spi, __be32 *seq);
extern void xfrm_probe_algs(void);
extern int xfrm_count_auth_supported(void);
extern int xfrm_count_enc_supported(void);
extern struct xfrm_algo_desc *xfrm_aalg_get_byidx(unsigned int idx);
extern struct xfrm_algo_desc *xfrm_ealg_get_byidx(unsigned int idx);
extern struct xfrm_algo_desc *xfrm_aalg_get_byid(int alg_id);
extern struct xfrm_algo_desc *xfrm_ealg_get_byid(int alg_id);
extern struct xfrm_algo_desc *xfrm_calg_get_byid(int alg_id);
extern struct xfrm_algo_desc *xfrm_aalg_get_byname(const char *name, int probe);
extern struct xfrm_algo_desc *xfrm_ealg_get_byname(const char *name, int probe);
extern struct xfrm_algo_desc *xfrm_calg_get_byname(const char *name, int probe);
extern struct xfrm_algo_desc *xfrm_aead_get_byname(const char *name, int icv_len,
int probe);
struct hash_desc;
struct scatterlist;
typedef int (icv_update_fn_t)(struct hash_desc *, struct scatterlist *,
unsigned int);
static inline int xfrm_addr_cmp(const xfrm_address_t *a,
const xfrm_address_t *b,
int family)
static inline int xfrm_policy_id2dir(u32 index)
static inline int xfrm_aevent_is_on(struct net *net)
static inline int xfrm_alg_len(const struct xfrm_algo *alg)
static inline int xfrm_alg_auth_len(const struct xfrm_algo_auth *alg)
static inline int xfrm_replay_state_esn_len(struct xfrm_replay_state_esn *replay_esn)
static inline int xfrm_replay_clone(struct xfrm_state *x,
struct xfrm_state *orig)
static inline struct xfrm_algo *xfrm_algo_clone(struct xfrm_algo *orig)
static inline struct xfrm_algo_auth *xfrm_algo_auth_clone(struct xfrm_algo_auth *orig)
static inline void xfrm_states_put(struct xfrm_state **states, int n)
static inline void xfrm_states_delete(struct xfrm_state **states, int n)
static inline struct xfrm_state *xfrm_input_state(struct sk_buff *skb)
static inline int xfrm_mark_get(struct nlattr **attrs, struct xfrm_mark *m)
static inline int xfrm_mark_put(struct sk_buff *skb, const struct xfrm_mark *m)
