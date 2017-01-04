#define _LINUX_SKBUFF_H
#define CHECKSUM_NONE 0
#define CHECKSUM_UNNECESSARY 1
#define CHECKSUM_COMPLETE 2
#define CHECKSUM_PARTIAL 3
#define SKB_DATA_ALIGN(X)	(((X) + (SMP_CACHE_BYTES - 1)) & \
~(SMP_CACHE_BYTES - 1))
#define SKB_WITH_OVERHEAD(X)	\
((X) - SKB_DATA_ALIGN(sizeof(struct skb_shared_info)))
#define SKB_MAX_ORDER(X, ORDER) \
SKB_WITH_OVERHEAD((PAGE_SIZE << (ORDER)) - (X))
#define SKB_MAX_HEAD(X)		(SKB_MAX_ORDER((X), 0))
#define SKB_MAX_ALLOC		(SKB_MAX_ORDER(0, 2))
struct net_device;
struct scatterlist;
struct pipe_inode_info;
#if defined(CONFIG_NF_CONNTRACK) || defined(CONFIG_NF_CONNTRACK_MODULE)
struct nf_conntrack ;
struct nf_bridge_info ;
struct sk_buff_head ;
struct sk_buff;
#if (65536/PAGE_SIZE + 2) < 16
#define MAX_SKB_FRAGS 16UL
#define MAX_SKB_FRAGS (65536/PAGE_SIZE + 2)
typedef struct skb_frag_struct skb_frag_t;
struct skb_frag_struct ;
#define HAVE_HW_TIME_STAMP
struct skb_shared_hwtstamps ;
enum ;
struct skb_shared_info ;
#define SKB_DATAREF_SHIFT 16
#define SKB_DATAREF_MASK ((1 << SKB_DATAREF_SHIFT) - 1)
enum ;
enum ;
#if BITS_PER_LONG > 32
#define NET_SKBUFF_DATA_USES_OFFSET 1
typedef unsigned int sk_buff_data_t;
typedef unsigned char *sk_buff_data_t;
#if defined(CONFIG_NF_DEFRAG_IPV4) || defined(CONFIG_NF_DEFRAG_IPV4_MODULE) || \
defined(CONFIG_NF_DEFRAG_IPV6) || defined(CONFIG_NF_DEFRAG_IPV6_MODULE)
#define NET_SKBUFF_NF_DEFRAG_NEEDED 1
struct sk_buff ;
#define SKB_DST_NOREF	1UL
#define SKB_DST_PTRMASK	~(SKB_DST_NOREF)
static inline struct dst_entry *skb_dst(const struct sk_buff *skb)
static inline void skb_dst_set(struct sk_buff *skb, struct dst_entry *dst)
extern void skb_dst_set_noref(struct sk_buff *skb, struct dst_entry *dst);
static inline bool skb_dst_is_noref(const struct sk_buff *skb)
static inline struct rtable *skb_rtable(const struct sk_buff *skb)
extern void kfree_skb(struct sk_buff *skb);
extern void consume_skb(struct sk_buff *skb);
extern void	       __kfree_skb(struct sk_buff *skb);
extern struct sk_buff *__alloc_skb(unsigned int size,
gfp_t priority, int fclone, int node);
static inline struct sk_buff *alloc_skb(unsigned int size,
gfp_t priority)
static inline struct sk_buff *alloc_skb_fclone(unsigned int size,
gfp_t priority)
extern bool skb_recycle_check(struct sk_buff *skb, int skb_size);
extern struct sk_buff *skb_morph(struct sk_buff *dst, struct sk_buff *src);
extern struct sk_buff *skb_clone(struct sk_buff *skb,
gfp_t priority);
extern struct sk_buff *skb_copy(const struct sk_buff *skb,
gfp_t priority);
extern struct sk_buff *pskb_copy(struct sk_buff *skb,
gfp_t gfp_mask);
extern int	       pskb_expand_head(struct sk_buff *skb,
int nhead, int ntail,
gfp_t gfp_mask);
extern struct sk_buff *skb_realloc_headroom(struct sk_buff *skb,
unsigned int headroom);
extern struct sk_buff *skb_copy_expand(const struct sk_buff *skb,
int newheadroom, int newtailroom,
gfp_t priority);
extern int	       skb_to_sgvec(struct sk_buff *skb,
struct scatterlist *sg, int offset,
int len);
extern int	       skb_cow_data(struct sk_buff *skb, int tailbits,
struct sk_buff **trailer);
extern int	       skb_pad(struct sk_buff *skb, int pad);
#define dev_kfree_skb(a)	consume_skb(a)
extern int skb_append_datato_frags(struct sock *sk, struct sk_buff *skb,
int getfrag(void *from, char *to, int offset,
int len,int odd, struct sk_buff *skb),
void *from, int length);
struct skb_seq_state ;
extern void	      skb_prepare_seq_read(struct sk_buff *skb,
unsigned int from, unsigned int to,
struct skb_seq_state *st);
extern unsigned int   skb_seq_read(unsigned int consumed, const u8 **data,
struct skb_seq_state *st);
extern void	      skb_abort_seq_read(struct skb_seq_state *st);
extern unsigned int   skb_find_text(struct sk_buff *skb, unsigned int from,
unsigned int to, struct ts_config *config,
struct ts_state *state);
extern __u32 __skb_get_rxhash(struct sk_buff *skb);
static inline __u32 skb_get_rxhash(struct sk_buff *skb)
static inline unsigned char *skb_end_pointer(const struct sk_buff *skb)
static inline unsigned char *skb_end_pointer(const struct sk_buff *skb)
#define skb_shinfo(SKB)	((struct skb_shared_info *)(skb_end_pointer(SKB)))
static inline struct skb_shared_hwtstamps *skb_hwtstamps(struct sk_buff *skb)
static inline int skb_queue_empty(const struct sk_buff_head *list)
static inline bool skb_queue_is_last(const struct sk_buff_head *list,
const struct sk_buff *skb)
static inline bool skb_queue_is_first(const struct sk_buff_head *list,
const struct sk_buff *skb)
static inline struct sk_buff *skb_queue_next(const struct sk_buff_head *list,
const struct sk_buff *skb)
static inline struct sk_buff *skb_queue_prev(const struct sk_buff_head *list,
const struct sk_buff *skb)
static inline struct sk_buff *skb_get(struct sk_buff *skb)
static inline int skb_cloned(const struct sk_buff *skb)
static inline int skb_header_cloned(const struct sk_buff *skb)
static inline void skb_header_release(struct sk_buff *skb)
static inline int skb_shared(const struct sk_buff *skb)
static inline struct sk_buff *skb_share_check(struct sk_buff *skb,
gfp_t pri)
static inline struct sk_buff *skb_unshare(struct sk_buff *skb,
gfp_t pri)
static inline struct sk_buff *skb_peek(struct sk_buff_head *list_)
static inline struct sk_buff *skb_peek_tail(struct sk_buff_head *list_)
static inline __u32 skb_queue_len(const struct sk_buff_head *list_)
static inline void __skb_queue_head_init(struct sk_buff_head *list)
static inline void skb_queue_head_init(struct sk_buff_head *list)
static inline void skb_queue_head_init_class(struct sk_buff_head *list,
struct lock_class_key *class)
extern void        skb_insert(struct sk_buff *old, struct sk_buff *newsk, struct sk_buff_head *list);
static inline void __skb_insert(struct sk_buff *newsk,
struct sk_buff *prev, struct sk_buff *next,
struct sk_buff_head *list)
static inline void __skb_queue_splice(const struct sk_buff_head *list,
struct sk_buff *prev,
struct sk_buff *next)
static inline void skb_queue_splice(const struct sk_buff_head *list,
struct sk_buff_head *head)
static inline void skb_queue_splice_init(struct sk_buff_head *list,
struct sk_buff_head *head)
static inline void skb_queue_splice_tail(const struct sk_buff_head *list,
struct sk_buff_head *head)
static inline void skb_queue_splice_tail_init(struct sk_buff_head *list,
struct sk_buff_head *head)
static inline void __skb_queue_after(struct sk_buff_head *list,
struct sk_buff *prev,
struct sk_buff *newsk)
extern void skb_append(struct sk_buff *old, struct sk_buff *newsk,
struct sk_buff_head *list);
static inline void __skb_queue_before(struct sk_buff_head *list,
struct sk_buff *next,
struct sk_buff *newsk)
extern void skb_queue_head(struct sk_buff_head *list, struct sk_buff *newsk);
static inline void __skb_queue_head(struct sk_buff_head *list,
struct sk_buff *newsk)
extern void skb_queue_tail(struct sk_buff_head *list, struct sk_buff *newsk);
static inline void __skb_queue_tail(struct sk_buff_head *list,
struct sk_buff *newsk)
extern void	   skb_unlink(struct sk_buff *skb, struct sk_buff_head *list);
static inline void __skb_unlink(struct sk_buff *skb, struct sk_buff_head *list)
extern struct sk_buff *skb_dequeue(struct sk_buff_head *list);
static inline struct sk_buff *__skb_dequeue(struct sk_buff_head *list)
extern struct sk_buff *skb_dequeue_tail(struct sk_buff_head *list);
static inline struct sk_buff *__skb_dequeue_tail(struct sk_buff_head *list)
static inline int skb_is_nonlinear(const struct sk_buff *skb)
static inline unsigned int skb_headlen(const struct sk_buff *skb)
static inline int skb_pagelen(const struct sk_buff *skb)
static inline void skb_fill_page_desc(struct sk_buff *skb, int i,
struct page *page, int off, int size)
extern void skb_add_rx_frag(struct sk_buff *skb, int i, struct page *page,
int off, int size);
#define SKB_PAGE_ASSERT(skb) 	BUG_ON(skb_shinfo(skb)->nr_frags)
#define SKB_FRAG_ASSERT(skb) 	BUG_ON(skb_has_frag_list(skb))
#define SKB_LINEAR_ASSERT(skb)  BUG_ON(skb_is_nonlinear(skb))
static inline unsigned char *skb_tail_pointer(const struct sk_buff *skb)
static inline void skb_reset_tail_pointer(struct sk_buff *skb)
static inline void skb_set_tail_pointer(struct sk_buff *skb, const int offset)
static inline unsigned char *skb_tail_pointer(const struct sk_buff *skb)
static inline void skb_reset_tail_pointer(struct sk_buff *skb)
static inline void skb_set_tail_pointer(struct sk_buff *skb, const int offset)
extern unsigned char *skb_put(struct sk_buff *skb, unsigned int len);
static inline unsigned char *__skb_put(struct sk_buff *skb, unsigned int len)
extern unsigned char *skb_push(struct sk_buff *skb, unsigned int len);
static inline unsigned char *__skb_push(struct sk_buff *skb, unsigned int len)
extern unsigned char *skb_pull(struct sk_buff *skb, unsigned int len);
static inline unsigned char *__skb_pull(struct sk_buff *skb, unsigned int len)
static inline unsigned char *skb_pull_inline(struct sk_buff *skb, unsigned int len)
extern unsigned char *__pskb_pull_tail(struct sk_buff *skb, int delta);
static inline unsigned char *__pskb_pull(struct sk_buff *skb, unsigned int len)
static inline unsigned char *pskb_pull(struct sk_buff *skb, unsigned int len)
static inline int pskb_may_pull(struct sk_buff *skb, unsigned int len)
static inline unsigned int skb_headroom(const struct sk_buff *skb)
static inline int skb_tailroom(const struct sk_buff *skb)
static inline void skb_reserve(struct sk_buff *skb, int len)
static inline void skb_reset_mac_len(struct sk_buff *skb)
static inline unsigned char *skb_transport_header(const struct sk_buff *skb)
static inline void skb_reset_transport_header(struct sk_buff *skb)
static inline void skb_set_transport_header(struct sk_buff *skb,
const int offset)
static inline unsigned char *skb_network_header(const struct sk_buff *skb)
static inline void skb_reset_network_header(struct sk_buff *skb)
static inline void skb_set_network_header(struct sk_buff *skb, const int offset)
static inline unsigned char *skb_mac_header(const struct sk_buff *skb)
static inline int skb_mac_header_was_set(const struct sk_buff *skb)
static inline void skb_reset_mac_header(struct sk_buff *skb)
static inline void skb_set_mac_header(struct sk_buff *skb, const int offset)
static inline unsigned char *skb_transport_header(const struct sk_buff *skb)
static inline void skb_reset_transport_header(struct sk_buff *skb)
static inline void skb_set_transport_header(struct sk_buff *skb,
const int offset)
static inline unsigned char *skb_network_header(const struct sk_buff *skb)
static inline void skb_reset_network_header(struct sk_buff *skb)
static inline void skb_set_network_header(struct sk_buff *skb, const int offset)
static inline unsigned char *skb_mac_header(const struct sk_buff *skb)
static inline int skb_mac_header_was_set(const struct sk_buff *skb)
static inline void skb_reset_mac_header(struct sk_buff *skb)
static inline void skb_set_mac_header(struct sk_buff *skb, const int offset)
static inline int skb_checksum_start_offset(const struct sk_buff *skb)
static inline int skb_transport_offset(const struct sk_buff *skb)
static inline u32 skb_network_header_len(const struct sk_buff *skb)
static inline int skb_network_offset(const struct sk_buff *skb)
static inline int pskb_network_may_pull(struct sk_buff *skb, unsigned int len)
#define NET_IP_ALIGN	2
#define NET_SKB_PAD	max(32, L1_CACHE_BYTES)
extern int ___pskb_trim(struct sk_buff *skb, unsigned int len);
static inline void __skb_trim(struct sk_buff *skb, unsigned int len)
extern void skb_trim(struct sk_buff *skb, unsigned int len);
static inline int __pskb_trim(struct sk_buff *skb, unsigned int len)
static inline int pskb_trim(struct sk_buff *skb, unsigned int len)
static inline void pskb_trim_unique(struct sk_buff *skb, unsigned int len)
static inline void skb_orphan(struct sk_buff *skb)
extern void skb_queue_purge(struct sk_buff_head *list);
static inline void __skb_queue_purge(struct sk_buff_head *list)
static inline struct sk_buff *__dev_alloc_skb(unsigned int length,
gfp_t gfp_mask)
extern struct sk_buff *dev_alloc_skb(unsigned int length);
extern struct sk_buff *__netdev_alloc_skb(struct net_device *dev,
unsigned int length, gfp_t gfp_mask);
static inline struct sk_buff *netdev_alloc_skb(struct net_device *dev,
unsigned int length)
static inline struct sk_buff *netdev_alloc_skb_ip_align(struct net_device *dev,
unsigned int length)
static inline struct page *__netdev_alloc_page(struct net_device *dev, gfp_t gfp_mask)
static inline struct page *netdev_alloc_page(struct net_device *dev)
static inline void netdev_free_page(struct net_device *dev, struct page *page)
static inline int skb_clone_writable(struct sk_buff *skb, unsigned int len)
static inline int __skb_cow(struct sk_buff *skb, unsigned int headroom,
int cloned)
static inline int skb_cow(struct sk_buff *skb, unsigned int headroom)
static inline int skb_cow_head(struct sk_buff *skb, unsigned int headroom)
static inline int skb_padto(struct sk_buff *skb, unsigned int len)
static inline int skb_add_data(struct sk_buff *skb,
char __user *from, int copy)
static inline int skb_can_coalesce(struct sk_buff *skb, int i,
struct page *page, int off)
static inline int __skb_linearize(struct sk_buff *skb)
static inline int skb_linearize(struct sk_buff *skb)
static inline int skb_linearize_cow(struct sk_buff *skb)
static inline void skb_postpull_rcsum(struct sk_buff *skb,
const void *start, unsigned int len)
unsigned char *skb_pull_rcsum(struct sk_buff *skb, unsigned int len);
static inline int pskb_trim_rcsum(struct sk_buff *skb, unsigned int len)
#define skb_queue_walk(queue, skb) \
for (skb = (queue)->next;					\
skb != (struct sk_buff *)(queue);				\
skb = skb->next)
#define skb_queue_walk_safe(queue, skb, tmp)					\
for (skb = (queue)->next, tmp = skb->next;			\
skb != (struct sk_buff *)(queue);				\
skb = tmp, tmp = skb->next)
#define skb_queue_walk_from(queue, skb)						\
for (; skb != (struct sk_buff *)(queue);			\
skb = skb->next)
#define skb_queue_walk_from_safe(queue, skb, tmp)				\
for (tmp = skb->next;						\
skb != (struct sk_buff *)(queue);				\
skb = tmp, tmp = skb->next)
#define skb_queue_reverse_walk(queue, skb) \
for (skb = (queue)->prev;					\
skb != (struct sk_buff *)(queue);				\
skb = skb->prev)
#define skb_queue_reverse_walk_safe(queue, skb, tmp)				\
for (skb = (queue)->prev, tmp = skb->prev;			\
skb != (struct sk_buff *)(queue);				\
skb = tmp, tmp = skb->prev)
#define skb_queue_reverse_walk_from_safe(queue, skb, tmp)			\
for (tmp = skb->prev;						\
skb != (struct sk_buff *)(queue);				\
skb = tmp, tmp = skb->prev)
static inline bool skb_has_frag_list(const struct sk_buff *skb)
static inline void skb_frag_list_init(struct sk_buff *skb)
static inline void skb_frag_add_head(struct sk_buff *skb, struct sk_buff *frag)
#define skb_walk_frags(skb, iter)	\
for (iter = skb_shinfo(skb)->frag_list; iter; iter = iter->next)
extern struct sk_buff *__skb_recv_datagram(struct sock *sk, unsigned flags,
int *peeked, int *err);
extern struct sk_buff *skb_recv_datagram(struct sock *sk, unsigned flags,
int noblock, int *err);
extern unsigned int    datagram_poll(struct file *file, struct socket *sock,
struct poll_table_struct *wait);
extern int	       skb_copy_datagram_iovec(const struct sk_buff *from,
int offset, struct iovec *to,
int size);
extern int	       skb_copy_and_csum_datagram_iovec(struct sk_buff *skb,
int hlen,
struct iovec *iov);
extern int	       skb_copy_datagram_from_iovec(struct sk_buff *skb,
int offset,
const struct iovec *from,
int from_offset,
int len);
extern int	       skb_copy_datagram_const_iovec(const struct sk_buff *from,
int offset,
const struct iovec *to,
int to_offset,
int size);
extern void	       skb_free_datagram(struct sock *sk, struct sk_buff *skb);
extern void	       skb_free_datagram_locked(struct sock *sk,
struct sk_buff *skb);
extern int	       skb_kill_datagram(struct sock *sk, struct sk_buff *skb,
unsigned int flags);
extern __wsum	       skb_checksum(const struct sk_buff *skb, int offset,
int len, __wsum csum);
extern int	       skb_copy_bits(const struct sk_buff *skb, int offset,
void *to, int len);
extern int	       skb_store_bits(struct sk_buff *skb, int offset,
const void *from, int len);
extern __wsum	       skb_copy_and_csum_bits(const struct sk_buff *skb,
int offset, u8 *to, int len,
__wsum csum);
extern int             skb_splice_bits(struct sk_buff *skb,
unsigned int offset,
struct pipe_inode_info *pipe,
unsigned int len,
unsigned int flags);
extern void	       skb_copy_and_csum_dev(const struct sk_buff *skb, u8 *to);
extern void	       skb_split(struct sk_buff *skb,
struct sk_buff *skb1, const u32 len);
extern int	       skb_shift(struct sk_buff *tgt, struct sk_buff *skb,
int shiftlen);
extern struct sk_buff *skb_segment(struct sk_buff *skb, u32 features);
static inline void *skb_header_pointer(const struct sk_buff *skb, int offset,
int len, void *buffer)
static inline void skb_copy_from_linear_data(const struct sk_buff *skb,
void *to,
const unsigned int len)
static inline void skb_copy_from_linear_data_offset(const struct sk_buff *skb,
const int offset, void *to,
const unsigned int len)
static inline void skb_copy_to_linear_data(struct sk_buff *skb,
const void *from,
const unsigned int len)
static inline void skb_copy_to_linear_data_offset(struct sk_buff *skb,
const int offset,
const void *from,
const unsigned int len)
extern void skb_init(void);
static inline ktime_t skb_get_ktime(const struct sk_buff *skb)
static inline void skb_get_timestamp(const struct sk_buff *skb,
struct timeval *stamp)
static inline void skb_get_timestampns(const struct sk_buff *skb,
struct timespec *stamp)
static inline void __net_timestamp(struct sk_buff *skb)
static inline ktime_t net_timedelta(ktime_t t)
static inline ktime_t net_invalid_timestamp(void)
extern void skb_timestamping_init(void);
extern void skb_clone_tx_timestamp(struct sk_buff *skb);
extern bool skb_defer_rx_timestamp(struct sk_buff *skb);
static inline void skb_clone_tx_timestamp(struct sk_buff *skb)
static inline bool skb_defer_rx_timestamp(struct sk_buff *skb)
void skb_complete_tx_timestamp(struct sk_buff *skb,
struct skb_shared_hwtstamps *hwtstamps);
extern void skb_tstamp_tx(struct sk_buff *orig_skb,
struct skb_shared_hwtstamps *hwtstamps);
static inline void sw_tx_timestamp(struct sk_buff *skb)
static inline void skb_tx_timestamp(struct sk_buff *skb)
extern __sum16 __skb_checksum_complete_head(struct sk_buff *skb, int len);
extern __sum16 __skb_checksum_complete(struct sk_buff *skb);
static inline int skb_csum_unnecessary(const struct sk_buff *skb)
static inline __sum16 skb_checksum_complete(struct sk_buff *skb)
#if defined(CONFIG_NF_CONNTRACK) || defined(CONFIG_NF_CONNTRACK_MODULE)
extern void nf_conntrack_destroy(struct nf_conntrack *nfct);
static inline void nf_conntrack_put(struct nf_conntrack *nfct)
static inline void nf_conntrack_get(struct nf_conntrack *nfct)
static inline void nf_conntrack_get_reasm(struct sk_buff *skb)
static inline void nf_conntrack_put_reasm(struct sk_buff *skb)
static inline void nf_bridge_put(struct nf_bridge_info *nf_bridge)
static inline void nf_bridge_get(struct nf_bridge_info *nf_bridge)
static inline void nf_reset(struct sk_buff *skb)
static inline void __nf_copy(struct sk_buff *dst, const struct sk_buff *src)
static inline void nf_copy(struct sk_buff *dst, const struct sk_buff *src)
static inline void skb_copy_secmark(struct sk_buff *to, const struct sk_buff *from)
static inline void skb_init_secmark(struct sk_buff *skb)
static inline void skb_copy_secmark(struct sk_buff *to, const struct sk_buff *from)
static inline void skb_init_secmark(struct sk_buff *skb)
static inline void skb_set_queue_mapping(struct sk_buff *skb, u16 queue_mapping)
static inline u16 skb_get_queue_mapping(const struct sk_buff *skb)
static inline void skb_copy_queue_mapping(struct sk_buff *to, const struct sk_buff *from)
static inline void skb_record_rx_queue(struct sk_buff *skb, u16 rx_queue)
static inline u16 skb_get_rx_queue(const struct sk_buff *skb)
static inline bool skb_rx_queue_recorded(const struct sk_buff *skb)
extern u16 __skb_tx_hash(const struct net_device *dev,
const struct sk_buff *skb,
unsigned int num_tx_queues);
static inline struct sec_path *skb_sec_path(struct sk_buff *skb)
static inline struct sec_path *skb_sec_path(struct sk_buff *skb)
static inline int skb_is_gso(const struct sk_buff *skb)
static inline int skb_is_gso_v6(const struct sk_buff *skb)
extern void __skb_warn_lro_forwarding(const struct sk_buff *skb);
static inline bool skb_warn_if_lro(const struct sk_buff *skb)
static inline void skb_forward_csum(struct sk_buff *skb)
static inline void skb_checksum_none_assert(struct sk_buff *skb)
bool skb_partial_csum_set(struct sk_buff *skb, u16 start, u16 off);
