#define _TIMEWAIT_SOCK_H
struct timewait_sock_ops ;
static inline int twsk_unique(struct sock *sk, struct sock *sktw, void *twp)
static inline void twsk_destructor(struct sock *sk)
static inline void *twsk_getpeer(struct sock *sk)
