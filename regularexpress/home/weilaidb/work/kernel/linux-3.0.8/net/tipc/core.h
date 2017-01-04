#define _TIPC_CORE_H
#define TIPC_MOD_VER "2.0.0"
struct tipc_msg;
struct print_buf;
#define assert(i)  BUG_ON(!(i))
extern struct print_buf *const TIPC_NULL;
extern struct print_buf *const TIPC_CONS;
extern struct print_buf *const TIPC_LOG;
void tipc_printf(struct print_buf *, const char *fmt, ...);
#define TIPC_OUTPUT TIPC_LOG
#define err(fmt, arg...)  tipc_printf(TIPC_OUTPUT, \
KERN_ERR "TIPC: " fmt, ## arg)
#define warn(fmt, arg...) tipc_printf(TIPC_OUTPUT, \
KERN_WARNING "TIPC: " fmt, ## arg)
#define info(fmt, arg...) tipc_printf(TIPC_OUTPUT, \
KERN_NOTICE "TIPC: " fmt, ## arg)
#define DBG_OUTPUT TIPC_LOG
#define dbg(fmt, arg...)  tipc_printf(DBG_OUTPUT, KERN_DEBUG fmt, ## arg);
#define msg_dbg(msg, txt) tipc_msg_dbg(DBG_OUTPUT, msg, txt);
void tipc_msg_dbg(struct print_buf *, struct tipc_msg *, const char *);
#define dbg(fmt, arg...)	do  while (0)
#define msg_dbg(msg, txt)	do  while (0)
#define tipc_msg_dbg(buf, msg, txt) do  while (0)
#define ELINKCONG EAGAIN
#define TIPC_NOT_RUNNING  0
#define TIPC_NODE_MODE    1
#define TIPC_NET_MODE     2
extern u32 tipc_own_addr;
extern int tipc_max_ports;
extern int tipc_max_subscriptions;
extern int tipc_max_publications;
extern int tipc_net_id;
extern int tipc_remote_management;
extern int tipc_mode;
extern int tipc_random;
extern const char tipc_alphabet[];
extern int tipc_core_start_net(unsigned long);
extern int  tipc_handler_start(void);
extern void tipc_handler_stop(void);
extern int  tipc_netlink_start(void);
extern void tipc_netlink_stop(void);
extern int  tipc_socket_init(void);
extern void tipc_socket_stop(void);
static inline int delimit(int val, int min, int max)
typedef void (*Handler) (unsigned long);
u32 tipc_k_signal(Handler routine, unsigned long argument);
static inline void k_init_timer(struct timer_list *timer, Handler routine,
unsigned long argument)
static inline void k_start_timer(struct timer_list *timer, unsigned long msec)
static inline void k_cancel_timer(struct timer_list *timer)
static inline void k_term_timer(struct timer_list *timer)
#define BUF_HEADROOM LL_MAX_HEADER
struct tipc_skb_cb ;
#define TIPC_SKB_CB(__skb) ((struct tipc_skb_cb *)&((__skb)->cb[0]))
static inline struct tipc_msg *buf_msg(struct sk_buff *skb)
extern struct sk_buff *tipc_buf_acquire(u32 size);
static inline void buf_discard(struct sk_buff *skb)
static inline int buf_linearize(struct sk_buff *skb)
