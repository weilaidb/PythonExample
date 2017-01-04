#define AF_IRDA_H
struct irda_sock ;
static inline struct irda_sock *irda_sk(struct sock *sk)
