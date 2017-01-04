#define __net_sctp_h__
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
#define SCTP_DEBUG	1
#define SCTP_DEBUG      0
#define SCTP_PROTOSW_FLAG 0
#define SCTP_PROTOSW_FLAG INET_PROTOSW_PERMANENT
#define SCTP_STATIC static
extern struct sock *sctp_get_ctl_sock(void);
extern int sctp_copy_local_addr_list(struct sctp_bind_addr *,
sctp_scope_t, gfp_t gfp,
int flags);
extern struct sctp_pf *sctp_get_pf_specific(sa_family_t family);
extern int sctp_register_pf(struct sctp_pf *, sa_family_t);
int sctp_backlog_rcv(struct sock *sk, struct sk_buff *skb);
int sctp_inet_listen(struct socket *sock, int backlog);
void sctp_write_space(struct sock *sk);
void sctp_data_ready(struct sock *sk, int len);
unsigned int sctp_poll(struct file *file, struct socket *sock,
poll_table *wait);
void sctp_sock_rfree(struct sk_buff *skb);
void sctp_copy_sock(struct sock *newsk, struct sock *sk,
struct sctp_association *asoc);
extern struct percpu_counter sctp_sockets_allocated;
int sctp_primitive_ASSOCIATE(struct sctp_association *, void *arg);
int sctp_primitive_SHUTDOWN(struct sctp_association *, void *arg);
int sctp_primitive_ABORT(struct sctp_association *, void *arg);
int sctp_primitive_SEND(struct sctp_association *, void *arg);
int sctp_primitive_REQUESTHEARTBEAT(struct sctp_association *, void *arg);
int sctp_primitive_ASCONF(struct sctp_association *, void *arg);
int sctp_rcv(struct sk_buff *skb);
void sctp_v4_err(struct sk_buff *skb, u32 info);
void sctp_hash_established(struct sctp_association *);
void sctp_unhash_established(struct sctp_association *);
void sctp_hash_endpoint(struct sctp_endpoint *);
void sctp_unhash_endpoint(struct sctp_endpoint *);
struct sock *sctp_err_lookup(int family, struct sk_buff *,
struct sctphdr *, struct sctp_association **,
struct sctp_transport **);
void sctp_err_finish(struct sock *, struct sctp_association *);
void sctp_icmp_frag_needed(struct sock *, struct sctp_association *,
struct sctp_transport *t, __u32 pmtu);
void sctp_icmp_proto_unreachable(struct sock *sk,
struct sctp_association *asoc,
struct sctp_transport *t);
void sctp_backlog_migrate(struct sctp_association *assoc,
struct sock *oldsk, struct sock *newsk);
int sctp_snmp_proc_init(void);
void sctp_snmp_proc_exit(void);
int sctp_eps_proc_init(void);
void sctp_eps_proc_exit(void);
int sctp_assocs_proc_init(void);
void sctp_assocs_proc_exit(void);
int sctp_remaddr_proc_init(void);
void sctp_remaddr_proc_exit(void);
extern struct kmem_cache *sctp_chunk_cachep __read_mostly;
extern struct kmem_cache *sctp_bucket_cachep __read_mostly;
#define sctp_spin_lock_irqsave(lock, flags) spin_lock_irqsave(lock, flags)
#define sctp_spin_unlock_irqrestore(lock, flags)  \
spin_unlock_irqrestore(lock, flags)
#define sctp_local_bh_disable() local_bh_disable()
#define sctp_local_bh_enable()  local_bh_enable()
#define sctp_spin_lock(lock)    spin_lock(lock)
#define sctp_spin_unlock(lock)  spin_unlock(lock)
#define sctp_write_lock(lock)   write_lock(lock)
#define sctp_write_unlock(lock) write_unlock(lock)
#define sctp_read_lock(lock)    read_lock(lock)
#define sctp_read_unlock(lock)  read_unlock(lock)
#define sctp_lock_sock(sk)       lock_sock(sk)
#define sctp_release_sock(sk)    release_sock(sk)
#define sctp_bh_lock_sock(sk)    bh_lock_sock(sk)
#define sctp_bh_unlock_sock(sk)  bh_unlock_sock(sk)
DECLARE_SNMP_STAT(struct sctp_mib, sctp_statistics);
#define SCTP_INC_STATS(field)      SNMP_INC_STATS(sctp_statistics, field)
#define SCTP_INC_STATS_BH(field)   SNMP_INC_STATS_BH(sctp_statistics, field)
#define SCTP_INC_STATS_USER(field) SNMP_INC_STATS_USER(sctp_statistics, field)
#define SCTP_DEC_STATS(field)      SNMP_DEC_STATS(sctp_statistics, field)
enum ;
#define SCTP_MIB_MAX    __SCTP_MIB_MAX
struct sctp_mib ;
#if SCTP_DEBUG
extern int sctp_debug_flag;
#define SCTP_DEBUG_PRINTK(fmt, args...)			\
do  while (0)
#define SCTP_DEBUG_PRINTK_CONT(fmt, args...)		\
do  while (0)
#define SCTP_DEBUG_PRINTK_IPADDR(fmt_lead, fmt_trail,			\
args_lead, saddr, args_trail...)	\
do  while (0)
#define SCTP_ENABLE_DEBUG
#define SCTP_DISABLE_DEBUG
#define SCTP_ASSERT(expr, str, func) \
if (!(expr))
#define SCTP_DEBUG_PRINTK(whatever...)
#define SCTP_DEBUG_PRINTK_CONT(fmt, args...)
#define SCTP_DEBUG_PRINTK_IPADDR(whatever...)
#define SCTP_ENABLE_DEBUG
#define SCTP_DISABLE_DEBUG
#define SCTP_ASSERT(expr, str, func)
extern atomic_t sctp_dbg_objcnt_sock;
extern atomic_t sctp_dbg_objcnt_ep;
extern atomic_t sctp_dbg_objcnt_assoc;
extern atomic_t sctp_dbg_objcnt_transport;
extern atomic_t sctp_dbg_objcnt_chunk;
extern atomic_t sctp_dbg_objcnt_bind_addr;
extern atomic_t sctp_dbg_objcnt_bind_bucket;
extern atomic_t sctp_dbg_objcnt_addr;
extern atomic_t sctp_dbg_objcnt_ssnmap;
extern atomic_t sctp_dbg_objcnt_datamsg;
extern atomic_t sctp_dbg_objcnt_keys;
#define SCTP_DBG_OBJCNT_INC(name) \
atomic_inc(&sctp_dbg_objcnt_## name)
#define SCTP_DBG_OBJCNT_DEC(name) \
atomic_dec(&sctp_dbg_objcnt_## name)
#define SCTP_DBG_OBJCNT(name) \
atomic_t sctp_dbg_objcnt_## name = ATOMIC_INIT(0)
#define SCTP_DBG_OBJCNT_ENTRY(name) \
void sctp_dbg_objcnt_init(void);
void sctp_dbg_objcnt_exit(void);
#define SCTP_DBG_OBJCNT_INC(name)
#define SCTP_DBG_OBJCNT_DEC(name)
static inline void sctp_dbg_objcnt_init(void)
static inline void sctp_dbg_objcnt_exit(void)
#if defined CONFIG_SYSCTL
void sctp_sysctl_register(void);
void sctp_sysctl_unregister(void);
static inline void sctp_sysctl_register(void)
static inline void sctp_sysctl_unregister(void)
#define SCTP_SAT_LEN(x) (sizeof(struct sctp_paramhdr) + (x) * sizeof(__u16))
#if defined(CONFIG_IPV6) || defined(CONFIG_IPV6_MODULE)
void sctp_v6_pf_init(void);
void sctp_v6_pf_exit(void);
int sctp_v6_protosw_init(void);
void sctp_v6_protosw_exit(void);
int sctp_v6_add_protocol(void);
void sctp_v6_del_protocol(void);
static inline void sctp_v6_pf_init(void)
static inline void sctp_v6_pf_exit(void)
static inline int sctp_v6_protosw_init(void)
static inline void sctp_v6_protosw_exit(void)
static inline int sctp_v6_add_protocol(void)
static inline void sctp_v6_del_protocol(void)
static inline sctp_assoc_t sctp_assoc2id(const struct sctp_association *asoc)
struct sctp_association *sctp_id2assoc(struct sock *sk, sctp_assoc_t id);
#define sctp_skb_for_each(pos, head, tmp) \
skb_queue_walk_safe(head, pos, tmp)
static inline void sctp_skb_list_tail(struct sk_buff_head *list,
struct sk_buff_head *head)
static inline struct list_head *sctp_list_dequeue(struct list_head *list)
static inline void sctp_skb_set_owner_r(struct sk_buff *skb, struct sock *sk)
static inline int sctp_list_single_entry(struct list_head *head)
static inline __s32 sctp_jitter(__u32 rto)
static inline int sctp_frag_point(const struct sctp_association *asoc, int pmtu)
static inline void sctp_assoc_pending_pmtu(struct sctp_association *asoc)
#define sctp_walk_params(pos, chunk, member)\
_sctp_walk_params((pos), (chunk), ntohs((chunk)->chunk_hdr.length), member)
#define _sctp_walk_params(pos, chunk, end, member)\
for (pos.v = chunk->member;\
pos.v <= (void *)chunk + end - ntohs(pos.p->length) &&\
ntohs(pos.p->length) >= sizeof(sctp_paramhdr_t);\
pos.v += WORD_ROUND(ntohs(pos.p->length)))
#define sctp_walk_errors(err, chunk_hdr)\
_sctp_walk_errors((err), (chunk_hdr), ntohs((chunk_hdr)->length))
#define _sctp_walk_errors(err, chunk_hdr, end)\
for (err = (sctp_errhdr_t *)((void *)chunk_hdr + \
sizeof(sctp_chunkhdr_t));\
(void *)err <= (void *)chunk_hdr + end - ntohs(err->length) &&\
ntohs(err->length) >= sizeof(sctp_errhdr_t); \
err = (sctp_errhdr_t *)((void *)err + WORD_ROUND(ntohs(err->length))))
#define sctp_walk_fwdtsn(pos, chunk)\
_sctp_walk_fwdtsn((pos), (chunk), ntohs((chunk)->chunk_hdr->length) - sizeof(struct sctp_fwdtsn_chunk))
#define _sctp_walk_fwdtsn(pos, chunk, end)\
for (pos = chunk->subh.fwdtsn_hdr->skip;\
(void *)pos <= (void *)chunk->subh.fwdtsn_hdr->skip + end - sizeof(struct sctp_fwdtsn_skip);\
pos++)
#define WORD_ROUND(s) (((s)+3)&~3)
#define t_new(type, flags)	(type *)kzalloc(sizeof(type), flags)
#define tv_lt(s, t) \
(s.tv_sec < t.tv_sec || (s.tv_sec == t.tv_sec && s.tv_usec < t.tv_usec))
#define TIMEVAL_ADD(tv1, tv2) \
()
extern struct proto sctp_prot;
extern struct proto sctpv6_prot;
extern struct proc_dir_entry *proc_net_sctp;
void sctp_put_port(struct sock *sk);
extern struct idr sctp_assocs_id;
extern spinlock_t sctp_assocs_id_lock;
static inline int ipver2af(__u8 ipver)
static inline int param_type2af(__be16 type)
static inline int sctp_sanity_check(void)
static inline int sctp_phashfn(__u16 lport)
static inline int sctp_ep_hashfn(__u16 lport)
static inline int sctp_assoc_hashfn(__u16 lport, __u16 rport)
static inline int sctp_vtag_hashfn(__u16 lport, __u16 rport, __u32 vtag)
#define sctp_for_each_hentry(epb, node, head) \
hlist_for_each_entry(epb, node, head, node)
#define sctp_style(sk, style) __sctp_style((sk), (SCTP_SOCKET_##style))
static inline int __sctp_style(const struct sock *sk, sctp_socket_type_t style)
#define sctp_state(asoc, state) __sctp_state((asoc), (SCTP_STATE_##state))
static inline int __sctp_state(const struct sctp_association *asoc,
sctp_state_t state)
#define sctp_sstate(sk, state) __sctp_sstate((sk), (SCTP_SS_##state))
static inline int __sctp_sstate(const struct sock *sk, sctp_sock_state_t state)
static inline void sctp_v6_map_v4(union sctp_addr *addr)
static inline void sctp_v4_map_v6(union sctp_addr *addr)
