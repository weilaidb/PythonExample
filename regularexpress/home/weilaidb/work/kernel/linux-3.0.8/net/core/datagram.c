static inline int connection_based(struct sock *sk)
static int receiver_wake_function(wait_queue_t *wait, unsigned mode, int sync,
void *key)
static int wait_for_packet(struct sock *sk, int *err, long *timeo_p)
struct sk_buff *__skb_recv_datagram(struct sock *sk, unsigned flags,
int *peeked, int *err)
EXPORT_SYMBOL(__skb_recv_datagram);
struct sk_buff *skb_recv_datagram(struct sock *sk, unsigned flags,
int noblock, int *err)
EXPORT_SYMBOL(skb_recv_datagram);
void skb_free_datagram(struct sock *sk, struct sk_buff *skb)
EXPORT_SYMBOL(skb_free_datagram);
void skb_free_datagram_locked(struct sock *sk, struct sk_buff *skb)
EXPORT_SYMBOL(skb_free_datagram_locked);
int skb_kill_datagram(struct sock *sk, struct sk_buff *skb, unsigned int flags)
EXPORT_SYMBOL(skb_kill_datagram);
int skb_copy_datagram_iovec(const struct sk_buff *skb, int offset,
struct iovec *to, int len)
EXPORT_SYMBOL(skb_copy_datagram_iovec);
int skb_copy_datagram_const_iovec(const struct sk_buff *skb, int offset,
const struct iovec *to, int to_offset,
int len)
EXPORT_SYMBOL(skb_copy_datagram_const_iovec);
int skb_copy_datagram_from_iovec(struct sk_buff *skb, int offset,
const struct iovec *from, int from_offset,
int len)
EXPORT_SYMBOL(skb_copy_datagram_from_iovec);
static int skb_copy_and_csum_datagram(const struct sk_buff *skb, int offset,
u8 __user *to, int len,
__wsum *csump)
__sum16 __skb_checksum_complete_head(struct sk_buff *skb, int len)
EXPORT_SYMBOL(__skb_checksum_complete_head);
__sum16 __skb_checksum_complete(struct sk_buff *skb)
EXPORT_SYMBOL(__skb_checksum_complete);
int skb_copy_and_csum_datagram_iovec(struct sk_buff *skb,
int hlen, struct iovec *iov)
EXPORT_SYMBOL(skb_copy_and_csum_datagram_iovec);
unsigned int datagram_poll(struct file *file, struct socket *sock,
poll_table *wait)
EXPORT_SYMBOL(datagram_poll);
