void x25_clear_queues(struct sock *sk)
void x25_frames_acked(struct sock *sk, unsigned short nr)
void x25_requeue_frames(struct sock *sk)
int x25_validate_nr(struct sock *sk, unsigned short nr)
void x25_write_internal(struct sock *sk, int frametype)
int x25_decode(struct sock *sk, struct sk_buff *skb, int *ns, int *nr, int *q,
int *d, int *m)
void x25_disconnect(struct sock *sk, int reason, unsigned char cause,
unsigned char diagnostic)
void x25_check_rbuf(struct sock *sk)
