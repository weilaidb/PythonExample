void sk_stream_write_space(struct sock *sk)
EXPORT_SYMBOL(sk_stream_write_space);
int sk_stream_wait_connect(struct sock *sk, long *timeo_p)
EXPORT_SYMBOL(sk_stream_wait_connect);
static inline int sk_stream_closing(struct sock *sk)
void sk_stream_wait_close(struct sock *sk, long timeout)
EXPORT_SYMBOL(sk_stream_wait_close);
int sk_stream_wait_memory(struct sock *sk, long *timeo_p)
EXPORT_SYMBOL(sk_stream_wait_memory);
int sk_stream_error(struct sock *sk, int flags, int err)
EXPORT_SYMBOL(sk_stream_error);
void sk_stream_kill_queues(struct sock *sk)
EXPORT_SYMBOL(sk_stream_kill_queues);
