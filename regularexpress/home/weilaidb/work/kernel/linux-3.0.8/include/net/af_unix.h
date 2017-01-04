#define __LINUX_NET_AFUNIX_H
extern void unix_inflight(struct file *fp);
extern void unix_notinflight(struct file *fp);
extern void unix_gc(void);
extern void wait_for_unix_gc(void);
extern struct sock *unix_get_socket(struct file *filp);
#define UNIX_HASH_SIZE	256
extern unsigned int unix_tot_inflight;
struct unix_address ;
struct unix_skb_parms ;
#define UNIXCB(skb) 	(*(struct unix_skb_parms *)&((skb)->cb))
#define UNIXSID(skb)	(&UNIXCB((skb)).secid)
#define unix_state_lock(s)	spin_lock(&unix_sk(s)->lock)
#define unix_state_unlock(s)	spin_unlock(&unix_sk(s)->lock)
#define unix_state_lock_nested(s) \
spin_lock_nested(&unix_sk(s)->lock, \
SINGLE_DEPTH_NESTING)
struct unix_sock ;
#define unix_sk(__sk) ((struct unix_sock *)__sk)
#define peer_wait peer_wq.wait
extern int unix_sysctl_register(struct net *net);
extern void unix_sysctl_unregister(struct net *net);
static inline int unix_sysctl_register(struct net *net)
static inline void unix_sysctl_unregister(struct net *net)
