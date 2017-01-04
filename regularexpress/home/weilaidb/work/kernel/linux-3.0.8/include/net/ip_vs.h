#define _NET_IP_VS_H
#if defined(CONFIG_NF_CONNTRACK) || defined(CONFIG_NF_CONNTRACK_MODULE)
static inline struct netns_ipvs *net_ipvs(struct net* net)
static inline struct net *skb_net(const struct sk_buff *skb)
static inline struct net *skb_sknet(const struct sk_buff *skb)
static inline struct net *seq_file_single_net(struct seq_file *seq)
extern int ip_vs_conn_tab_size;
struct ip_vs_iphdr ;
static inline void
ip_vs_fill_iphdr(int af, const void *nh, struct ip_vs_iphdr *iphdr)
static inline void ip_vs_addr_copy(int af, union nf_inet_addr *dst,
const union nf_inet_addr *src)
static inline int ip_vs_addr_equal(int af, const union nf_inet_addr *a,
const union nf_inet_addr *b)
extern int ip_vs_get_debug_level(void);
static inline const char *ip_vs_dbg_addr(int af, char *buf, size_t buf_len,
const union nf_inet_addr *addr,
int *idx)
#define IP_VS_DBG_BUF(level, msg, ...)					\
do  while (0)
#define IP_VS_ERR_BUF(msg...)						\
do  while (0)
#define IP_VS_DBG_ADDR(af, addr)					\
ip_vs_dbg_addr(af, ip_vs_dbg_buf,				\
sizeof(ip_vs_dbg_buf), addr,			\
&ip_vs_dbg_idx)
#define IP_VS_DBG(level, msg, ...)					\
do  while (0)
#define IP_VS_DBG_RL(msg, ...)						\
do  while (0)
#define IP_VS_DBG_PKT(level, af, pp, skb, ofs, msg)			\
do  while (0)
#define IP_VS_DBG_RL_PKT(level, af, pp, skb, ofs, msg)			\
do  while (0)
#define IP_VS_DBG_BUF(level, msg...)  do  while (0)
#define IP_VS_ERR_BUF(msg...)  do  while (0)
#define IP_VS_DBG(level, msg...)  do  while (0)
#define IP_VS_DBG_RL(msg...)  do  while (0)
#define IP_VS_DBG_PKT(level, af, pp, skb, ofs, msg)	do  while (0)
#define IP_VS_DBG_RL_PKT(level, af, pp, skb, ofs, msg)	do  while (0)
#define IP_VS_BUG() BUG()
#define IP_VS_ERR_RL(msg, ...)						\
do  while (0)
#define EnterFunction(level)						\
do  while (0)
#define LeaveFunction(level)						\
do  while (0)
#define EnterFunction(level)   do  while (0)
#define LeaveFunction(level)   do  while (0)
#define	IP_VS_WAIT_WHILE(expr)	while (expr)
#define FTPPORT  cpu_to_be16(21)
#define FTPDATA  cpu_to_be16(20)
enum ;
enum ;
enum ;
enum ip_vs_sctp_states ;
struct ip_vs_seq ;
struct ip_vs_counters ;
struct ip_vs_cpu_stats ;
struct ip_vs_estimator ;
struct ip_vs_stats ;
struct dst_entry;
struct iphdr;
struct ip_vs_conn;
struct ip_vs_app;
struct sk_buff;
struct ip_vs_proto_data;
struct ip_vs_protocol ;
struct ip_vs_proto_data ;
extern struct ip_vs_protocol   *ip_vs_proto_get(unsigned short proto);
extern struct ip_vs_proto_data *ip_vs_proto_data_get(struct net *net,
unsigned short proto);
struct ip_vs_conn_param ;
struct ip_vs_conn ;
static inline struct net *ip_vs_conn_net(const struct ip_vs_conn *cp)
static inline void ip_vs_conn_net_set(struct ip_vs_conn *cp, struct net *net)
static inline int ip_vs_conn_net_eq(const struct ip_vs_conn *cp,
struct net *net)
struct ip_vs_service_user_kern ;
struct ip_vs_dest_user_kern ;
struct ip_vs_service ;
struct ip_vs_dest ;
struct ip_vs_scheduler ;
struct ip_vs_pe ;
struct ip_vs_app ;
struct netns_ipvs ;
#define DEFAULT_SYNC_THRESHOLD	3
#define DEFAULT_SYNC_PERIOD	50
#define DEFAULT_SYNC_VER	1
static inline int sysctl_sync_threshold(struct netns_ipvs *ipvs)
static inline int sysctl_sync_period(struct netns_ipvs *ipvs)
static inline int sysctl_sync_ver(struct netns_ipvs *ipvs)
static inline int sysctl_sync_threshold(struct netns_ipvs *ipvs)
static inline int sysctl_sync_period(struct netns_ipvs *ipvs)
static inline int sysctl_sync_ver(struct netns_ipvs *ipvs)
extern const char *ip_vs_proto_name(unsigned proto);
extern void ip_vs_init_hash_table(struct list_head *table, int rows);
#define IP_VS_INIT_HASH_TABLE(t) ip_vs_init_hash_table((t), ARRAY_SIZE((t)))
#define IP_VS_APP_TYPE_FTP	1
enum ;
static inline void ip_vs_conn_fill_param(struct net *net, int af, int protocol,
const union nf_inet_addr *caddr,
__be16 cport,
const union nf_inet_addr *vaddr,
__be16 vport,
struct ip_vs_conn_param *p)
struct ip_vs_conn *ip_vs_conn_in_get(const struct ip_vs_conn_param *p);
struct ip_vs_conn *ip_vs_ct_in_get(const struct ip_vs_conn_param *p);
struct ip_vs_conn * ip_vs_conn_in_get_proto(int af, const struct sk_buff *skb,
const struct ip_vs_iphdr *iph,
unsigned int proto_off,
int inverse);
struct ip_vs_conn *ip_vs_conn_out_get(const struct ip_vs_conn_param *p);
struct ip_vs_conn * ip_vs_conn_out_get_proto(int af, const struct sk_buff *skb,
const struct ip_vs_iphdr *iph,
unsigned int proto_off,
int inverse);
static inline void __ip_vs_conn_put(struct ip_vs_conn *cp)
extern void ip_vs_conn_put(struct ip_vs_conn *cp);
extern void ip_vs_conn_fill_cport(struct ip_vs_conn *cp, __be16 cport);
struct ip_vs_conn *ip_vs_conn_new(const struct ip_vs_conn_param *p,
const union nf_inet_addr *daddr,
__be16 dport, unsigned flags,
struct ip_vs_dest *dest, __u32 fwmark);
extern void ip_vs_conn_expire_now(struct ip_vs_conn *cp);
extern const char * ip_vs_state_name(__u16 proto, int state);
extern void ip_vs_tcp_conn_listen(struct net *net, struct ip_vs_conn *cp);
extern int ip_vs_check_template(struct ip_vs_conn *ct);
extern void ip_vs_random_dropentry(struct net *net);
extern int ip_vs_conn_init(void);
extern void ip_vs_conn_cleanup(void);
static inline void ip_vs_control_del(struct ip_vs_conn *cp)
static inline void
ip_vs_control_add(struct ip_vs_conn *cp, struct ip_vs_conn *ctl_cp)
extern int __ip_vs_estimator_init(struct net *net);
extern int __ip_vs_control_init(struct net *net);
extern int __ip_vs_protocol_init(struct net *net);
extern int __ip_vs_app_init(struct net *net);
extern int __ip_vs_conn_init(struct net *net);
extern int __ip_vs_sync_init(struct net *net);
extern void __ip_vs_conn_cleanup(struct net *net);
extern void __ip_vs_app_cleanup(struct net *net);
extern void __ip_vs_protocol_cleanup(struct net *net);
extern void __ip_vs_control_cleanup(struct net *net);
extern void __ip_vs_estimator_cleanup(struct net *net);
extern void __ip_vs_sync_cleanup(struct net *net);
extern void __ip_vs_service_cleanup(struct net *net);
#define IP_VS_APP_MAX_PORTS  8
extern int register_ip_vs_app(struct net *net, struct ip_vs_app *app);
extern void unregister_ip_vs_app(struct net *net, struct ip_vs_app *app);
extern int ip_vs_bind_app(struct ip_vs_conn *cp, struct ip_vs_protocol *pp);
extern void ip_vs_unbind_app(struct ip_vs_conn *cp);
extern int register_ip_vs_app_inc(struct net *net, struct ip_vs_app *app,
__u16 proto, __u16 port);
extern int ip_vs_app_inc_get(struct ip_vs_app *inc);
extern void ip_vs_app_inc_put(struct ip_vs_app *inc);
extern int ip_vs_app_pkt_out(struct ip_vs_conn *, struct sk_buff *skb);
extern int ip_vs_app_pkt_in(struct ip_vs_conn *, struct sk_buff *skb);
extern int ip_vs_app_init(void);
extern void ip_vs_app_cleanup(void);
void ip_vs_bind_pe(struct ip_vs_service *svc, struct ip_vs_pe *pe);
void ip_vs_unbind_pe(struct ip_vs_service *svc);
int register_ip_vs_pe(struct ip_vs_pe *pe);
int unregister_ip_vs_pe(struct ip_vs_pe *pe);
struct ip_vs_pe *ip_vs_pe_getbyname(const char *name);
struct ip_vs_pe *__ip_vs_pe_getbyname(const char *pe_name);
static inline void ip_vs_pe_get(const struct ip_vs_pe *pe)
static inline void ip_vs_pe_put(const struct ip_vs_pe *pe)
extern int ip_vs_protocol_init(void);
extern void ip_vs_protocol_cleanup(void);
extern void ip_vs_protocol_timeout_change(struct netns_ipvs *ipvs, int flags);
extern int *ip_vs_create_timeout_table(int *table, int size);
extern int
ip_vs_set_state_timeout(int *table, int num, const char *const *names,
const char *name, int to);
extern void
ip_vs_tcpudp_debug_packet(int af, struct ip_vs_protocol *pp,
const struct sk_buff *skb,
int offset, const char *msg);
extern struct ip_vs_protocol ip_vs_protocol_tcp;
extern struct ip_vs_protocol ip_vs_protocol_udp;
extern struct ip_vs_protocol ip_vs_protocol_icmp;
extern struct ip_vs_protocol ip_vs_protocol_esp;
extern struct ip_vs_protocol ip_vs_protocol_ah;
extern struct ip_vs_protocol ip_vs_protocol_sctp;
extern int register_ip_vs_scheduler(struct ip_vs_scheduler *scheduler);
extern int unregister_ip_vs_scheduler(struct ip_vs_scheduler *scheduler);
extern int ip_vs_bind_scheduler(struct ip_vs_service *svc,
struct ip_vs_scheduler *scheduler);
extern int ip_vs_unbind_scheduler(struct ip_vs_service *svc);
extern struct ip_vs_scheduler *ip_vs_scheduler_get(const char *sched_name);
extern void ip_vs_scheduler_put(struct ip_vs_scheduler *scheduler);
extern struct ip_vs_conn *
ip_vs_schedule(struct ip_vs_service *svc, struct sk_buff *skb,
struct ip_vs_proto_data *pd, int *ignored);
extern int ip_vs_leave(struct ip_vs_service *svc, struct sk_buff *skb,
struct ip_vs_proto_data *pd);
extern void ip_vs_scheduler_err(struct ip_vs_service *svc, const char *msg);
extern struct ip_vs_stats ip_vs_stats;
extern const struct ctl_path net_vs_ctl_path[];
extern int sysctl_ip_vs_sync_ver;
extern void ip_vs_sync_switch_mode(struct net *net, int mode);
extern struct ip_vs_service *
ip_vs_service_get(struct net *net, int af, __u32 fwmark, __u16 protocol,
const union nf_inet_addr *vaddr, __be16 vport);
static inline void ip_vs_service_put(struct ip_vs_service *svc)
extern struct ip_vs_dest *
ip_vs_lookup_real_service(struct net *net, int af, __u16 protocol,
const union nf_inet_addr *daddr, __be16 dport);
extern int ip_vs_use_count_inc(void);
extern void ip_vs_use_count_dec(void);
extern int ip_vs_control_init(void);
extern void ip_vs_control_cleanup(void);
extern struct ip_vs_dest *
ip_vs_find_dest(struct net *net, int af, const union nf_inet_addr *daddr,
__be16 dport, const union nf_inet_addr *vaddr, __be16 vport,
__u16 protocol, __u32 fwmark);
extern struct ip_vs_dest *ip_vs_try_bind_dest(struct ip_vs_conn *cp);
extern int start_sync_thread(struct net *net, int state, char *mcast_ifn,
__u8 syncid);
extern int stop_sync_thread(struct net *net, int state);
extern void ip_vs_sync_conn(struct net *net, struct ip_vs_conn *cp);
extern int ip_vs_sync_init(void);
extern void ip_vs_sync_cleanup(void);
extern int ip_vs_estimator_init(void);
extern void ip_vs_estimator_cleanup(void);
extern void ip_vs_start_estimator(struct net *net, struct ip_vs_stats *stats);
extern void ip_vs_stop_estimator(struct net *net, struct ip_vs_stats *stats);
extern void ip_vs_zero_estimator(struct ip_vs_stats *stats);
extern void ip_vs_read_estimator(struct ip_vs_stats_user *dst,
struct ip_vs_stats *stats);
extern int ip_vs_null_xmit
(struct sk_buff *skb, struct ip_vs_conn *cp, struct ip_vs_protocol *pp);
extern int ip_vs_bypass_xmit
(struct sk_buff *skb, struct ip_vs_conn *cp, struct ip_vs_protocol *pp);
extern int ip_vs_nat_xmit
(struct sk_buff *skb, struct ip_vs_conn *cp, struct ip_vs_protocol *pp);
extern int ip_vs_tunnel_xmit
(struct sk_buff *skb, struct ip_vs_conn *cp, struct ip_vs_protocol *pp);
extern int ip_vs_dr_xmit
(struct sk_buff *skb, struct ip_vs_conn *cp, struct ip_vs_protocol *pp);
extern int ip_vs_icmp_xmit
(struct sk_buff *skb, struct ip_vs_conn *cp, struct ip_vs_protocol *pp,
int offset, unsigned int hooknum);
extern void ip_vs_dst_reset(struct ip_vs_dest *dest);
extern int ip_vs_bypass_xmit_v6
(struct sk_buff *skb, struct ip_vs_conn *cp, struct ip_vs_protocol *pp);
extern int ip_vs_nat_xmit_v6
(struct sk_buff *skb, struct ip_vs_conn *cp, struct ip_vs_protocol *pp);
extern int ip_vs_tunnel_xmit_v6
(struct sk_buff *skb, struct ip_vs_conn *cp, struct ip_vs_protocol *pp);
extern int ip_vs_dr_xmit_v6
(struct sk_buff *skb, struct ip_vs_conn *cp, struct ip_vs_protocol *pp);
extern int ip_vs_icmp_xmit_v6
(struct sk_buff *skb, struct ip_vs_conn *cp, struct ip_vs_protocol *pp,
int offset, unsigned int hooknum);
static inline int ip_vs_todrop(struct netns_ipvs *ipvs)
static inline int ip_vs_todrop(struct netns_ipvs *ipvs)
#define IP_VS_FWD_METHOD(cp)  (cp->flags & IP_VS_CONN_F_FWD_MASK)
static inline char ip_vs_fwd_tag(struct ip_vs_conn *cp)
extern void ip_vs_nat_icmp(struct sk_buff *skb, struct ip_vs_protocol *pp,
struct ip_vs_conn *cp, int dir);
extern void ip_vs_nat_icmp_v6(struct sk_buff *skb, struct ip_vs_protocol *pp,
struct ip_vs_conn *cp, int dir);
extern __sum16 ip_vs_checksum_complete(struct sk_buff *skb, int offset);
static inline __wsum ip_vs_check_diff4(__be32 old, __be32 new, __wsum oldsum)
static inline __wsum ip_vs_check_diff16(const __be32 *old, const __be32 *new,
__wsum oldsum)
static inline __wsum ip_vs_check_diff2(__be16 old, __be16 new, __wsum oldsum)
static inline void ip_vs_notrack(struct sk_buff *skb)
static inline int ip_vs_conntrack_enabled(struct netns_ipvs *ipvs)
extern void ip_vs_update_conntrack(struct sk_buff *skb, struct ip_vs_conn *cp,
int outin);
extern int ip_vs_confirm_conntrack(struct sk_buff *skb, struct ip_vs_conn *cp);
extern void ip_vs_nfct_expect_related(struct sk_buff *skb, struct nf_conn *ct,
struct ip_vs_conn *cp, u_int8_t proto,
const __be16 port, int from_rs);
extern void ip_vs_conn_drop_conntrack(struct ip_vs_conn *cp);
static inline int ip_vs_conntrack_enabled(struct netns_ipvs *ipvs)
static inline void ip_vs_update_conntrack(struct sk_buff *skb,
struct ip_vs_conn *cp, int outin)
static inline int ip_vs_confirm_conntrack(struct sk_buff *skb,
struct ip_vs_conn *cp)
static inline void ip_vs_conn_drop_conntrack(struct ip_vs_conn *cp)
static inline unsigned int
ip_vs_dest_conn_overhead(struct ip_vs_dest *dest)
