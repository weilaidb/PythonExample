#define _INET_TIMEWAIT_SOCK_
struct inet_hashinfo;
#define INET_TWDR_RECYCLE_SLOTS_LOG	5
#define INET_TWDR_RECYCLE_SLOTS		(1 << INET_TWDR_RECYCLE_SLOTS_LOG)
#if HZ <= 16 || HZ > 4096
# error Unsupported: HZ <= 16 or HZ > 4096
#elif HZ <= 32
# define INET_TWDR_RECYCLE_TICK (5 + 2 - INET_TWDR_RECYCLE_SLOTS_LOG)
#elif HZ <= 64
# define INET_TWDR_RECYCLE_TICK (6 + 2 - INET_TWDR_RECYCLE_SLOTS_LOG)
#elif HZ <= 128
# define INET_TWDR_RECYCLE_TICK (7 + 2 - INET_TWDR_RECYCLE_SLOTS_LOG)
#elif HZ <= 256
# define INET_TWDR_RECYCLE_TICK (8 + 2 - INET_TWDR_RECYCLE_SLOTS_LOG)
#elif HZ <= 512
# define INET_TWDR_RECYCLE_TICK (9 + 2 - INET_TWDR_RECYCLE_SLOTS_LOG)
#elif HZ <= 1024
# define INET_TWDR_RECYCLE_TICK (10 + 2 - INET_TWDR_RECYCLE_SLOTS_LOG)
#elif HZ <= 2048
# define INET_TWDR_RECYCLE_TICK (11 + 2 - INET_TWDR_RECYCLE_SLOTS_LOG)
# define INET_TWDR_RECYCLE_TICK (12 + 2 - INET_TWDR_RECYCLE_SLOTS_LOG)
#define INET_TWDR_TWKILL_SLOTS	8
#define INET_TWDR_TWKILL_QUOTA 100
struct inet_timewait_death_row ;
extern void inet_twdr_hangman(unsigned long data);
extern void inet_twdr_twkill_work(struct work_struct *work);
extern void inet_twdr_twcal_tick(unsigned long data);
struct inet_bind_bucket;
struct inet_timewait_sock ;
static inline void inet_twsk_add_node_rcu(struct inet_timewait_sock *tw,
struct hlist_nulls_head *list)
static inline void inet_twsk_add_bind_node(struct inet_timewait_sock *tw,
struct hlist_head *list)
static inline int inet_twsk_dead_hashed(const struct inet_timewait_sock *tw)
static inline void inet_twsk_dead_node_init(struct inet_timewait_sock *tw)
static inline void __inet_twsk_del_dead_node(struct inet_timewait_sock *tw)
static inline int inet_twsk_del_dead_node(struct inet_timewait_sock *tw)
#define inet_twsk_for_each(tw, node, head) \
hlist_nulls_for_each_entry(tw, node, head, tw_node)
#define inet_twsk_for_each_inmate(tw, node, jail) \
hlist_for_each_entry(tw, node, jail, tw_death_node)
#define inet_twsk_for_each_inmate_safe(tw, node, safe, jail) \
hlist_for_each_entry_safe(tw, node, safe, jail, tw_death_node)
static inline struct inet_timewait_sock *inet_twsk(const struct sock *sk)
static inline __be32 sk_rcv_saddr(const struct sock *sk)
extern void inet_twsk_put(struct inet_timewait_sock *tw);
extern int inet_twsk_unhash(struct inet_timewait_sock *tw);
extern int inet_twsk_bind_unhash(struct inet_timewait_sock *tw,
struct inet_hashinfo *hashinfo);
extern struct inet_timewait_sock *inet_twsk_alloc(const struct sock *sk,
const int state);
extern void __inet_twsk_hashdance(struct inet_timewait_sock *tw,
struct sock *sk,
struct inet_hashinfo *hashinfo);
extern void inet_twsk_schedule(struct inet_timewait_sock *tw,
struct inet_timewait_death_row *twdr,
const int timeo, const int timewait_len);
extern void inet_twsk_deschedule(struct inet_timewait_sock *tw,
struct inet_timewait_death_row *twdr);
extern void inet_twsk_purge(struct inet_hashinfo *hashinfo,
struct inet_timewait_death_row *twdr, int family);
static inline
struct net *twsk_net(const struct inet_timewait_sock *twsk)
static inline
void twsk_net_set(struct inet_timewait_sock *twsk, struct net *net)
