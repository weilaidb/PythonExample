static struct kmem_cache *skbuff_head_cache __read_mostly;
static struct kmem_cache *skbuff_fclone_cache __read_mostly;
static void sock_pipe_buf_release(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
static void sock_pipe_buf_get(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
static int sock_pipe_buf_steal(struct pipe_inode_info *pipe,
struct pipe_buffer *buf)
static const struct pipe_buf_operations sock_pipe_buf_ops = ;
static void skb_over_panic(struct sk_buff *skb, int sz, void *here)
static void skb_under_panic(struct sk_buff *skb, int sz, void *here)
struct sk_buff *__alloc_skb(unsigned int size, gfp_t gfp_mask,
int fclone, int node)
EXPORT_SYMBOL(__alloc_skb);
struct sk_buff *__netdev_alloc_skb(struct net_device *dev,
unsigned int length, gfp_t gfp_mask)
EXPORT_SYMBOL(__netdev_alloc_skb);
void skb_add_rx_frag(struct sk_buff *skb, int i, struct page *page, int off,
int size)
EXPORT_SYMBOL(skb_add_rx_frag);
struct sk_buff *dev_alloc_skb(unsigned int length)
EXPORT_SYMBOL(dev_alloc_skb);
static void skb_drop_list(struct sk_buff **listp)
static inline void skb_drop_fraglist(struct sk_buff *skb)
static void skb_clone_fraglist(struct sk_buff *skb)
static void skb_release_data(struct sk_buff *skb)
static void kfree_skbmem(struct sk_buff *skb)
static void skb_release_head_state(struct sk_buff *skb)
static void skb_release_all(struct sk_buff *skb)
void __kfree_skb(struct sk_buff *skb)
EXPORT_SYMBOL(__kfree_skb);
void kfree_skb(struct sk_buff *skb)
EXPORT_SYMBOL(kfree_skb);
void consume_skb(struct sk_buff *skb)
EXPORT_SYMBOL(consume_skb);
bool skb_recycle_check(struct sk_buff *skb, int skb_size)
EXPORT_SYMBOL(skb_recycle_check);
static void __copy_skb_header(struct sk_buff *new, const struct sk_buff *old)
static struct sk_buff *__skb_clone(struct sk_buff *n, struct sk_buff *skb)
struct sk_buff *skb_morph(struct sk_buff *dst, struct sk_buff *src)
EXPORT_SYMBOL_GPL(skb_morph);
struct sk_buff *skb_clone(struct sk_buff *skb, gfp_t gfp_mask)
EXPORT_SYMBOL(skb_clone);
static void copy_skb_header(struct sk_buff *new, const struct sk_buff *old)
struct sk_buff *skb_copy(const struct sk_buff *skb, gfp_t gfp_mask)
EXPORT_SYMBOL(skb_copy);
struct sk_buff *pskb_copy(struct sk_buff *skb, gfp_t gfp_mask)
EXPORT_SYMBOL(pskb_copy);
int pskb_expand_head(struct sk_buff *skb, int nhead, int ntail,
gfp_t gfp_mask)
EXPORT_SYMBOL(pskb_expand_head);
struct sk_buff *skb_realloc_headroom(struct sk_buff *skb, unsigned int headroom)
EXPORT_SYMBOL(skb_realloc_headroom);
struct sk_buff *skb_copy_expand(const struct sk_buff *skb,
int newheadroom, int newtailroom,
gfp_t gfp_mask)
EXPORT_SYMBOL(skb_copy_expand);
int skb_pad(struct sk_buff *skb, int pad)
EXPORT_SYMBOL(skb_pad);
unsigned char *skb_put(struct sk_buff *skb, unsigned int len)
EXPORT_SYMBOL(skb_put);
unsigned char *skb_push(struct sk_buff *skb, unsigned int len)
EXPORT_SYMBOL(skb_push);
unsigned char *skb_pull(struct sk_buff *skb, unsigned int len)
EXPORT_SYMBOL(skb_pull);
void skb_trim(struct sk_buff *skb, unsigned int len)
EXPORT_SYMBOL(skb_trim);
int ___pskb_trim(struct sk_buff *skb, unsigned int len)
EXPORT_SYMBOL(___pskb_trim);
unsigned char *__pskb_pull_tail(struct sk_buff *skb, int delta)
EXPORT_SYMBOL(__pskb_pull_tail);
int skb_copy_bits(const struct sk_buff *skb, int offset, void *to, int len)
EXPORT_SYMBOL(skb_copy_bits);
static void sock_spd_release(struct splice_pipe_desc *spd, unsigned int i)
static inline struct page *linear_to_page(struct page *page, unsigned int *len,
unsigned int *offset,
struct sk_buff *skb, struct sock *sk)
static inline int spd_fill_page(struct splice_pipe_desc *spd,
struct pipe_inode_info *pipe, struct page *page,
unsigned int *len, unsigned int offset,
struct sk_buff *skb, int linear,
struct sock *sk)
static inline void __segment_seek(struct page **page, unsigned int *poff,
unsigned int *plen, unsigned int off)
static inline int __splice_segment(struct page *page, unsigned int poff,
unsigned int plen, unsigned int *off,
unsigned int *len, struct sk_buff *skb,
struct splice_pipe_desc *spd, int linear,
struct sock *sk,
struct pipe_inode_info *pipe)
static int __skb_splice_bits(struct sk_buff *skb, struct pipe_inode_info *pipe,
unsigned int *offset, unsigned int *len,
struct splice_pipe_desc *spd, struct sock *sk)
int skb_splice_bits(struct sk_buff *skb, unsigned int offset,
struct pipe_inode_info *pipe, unsigned int tlen,
unsigned int flags)
int skb_store_bits(struct sk_buff *skb, int offset, const void *from, int len)
EXPORT_SYMBOL(skb_store_bits);
__wsum skb_checksum(const struct sk_buff *skb, int offset,
int len, __wsum csum)
EXPORT_SYMBOL(skb_checksum);
__wsum skb_copy_and_csum_bits(const struct sk_buff *skb, int offset,
u8 *to, int len, __wsum csum)
EXPORT_SYMBOL(skb_copy_and_csum_bits);
void skb_copy_and_csum_dev(const struct sk_buff *skb, u8 *to)
EXPORT_SYMBOL(skb_copy_and_csum_dev);
struct sk_buff *skb_dequeue(struct sk_buff_head *list)
EXPORT_SYMBOL(skb_dequeue);
struct sk_buff *skb_dequeue_tail(struct sk_buff_head *list)
EXPORT_SYMBOL(skb_dequeue_tail);
void skb_queue_purge(struct sk_buff_head *list)
EXPORT_SYMBOL(skb_queue_purge);
void skb_queue_head(struct sk_buff_head *list, struct sk_buff *newsk)
EXPORT_SYMBOL(skb_queue_head);
void skb_queue_tail(struct sk_buff_head *list, struct sk_buff *newsk)
EXPORT_SYMBOL(skb_queue_tail);
void skb_unlink(struct sk_buff *skb, struct sk_buff_head *list)
EXPORT_SYMBOL(skb_unlink);
void skb_append(struct sk_buff *old, struct sk_buff *newsk, struct sk_buff_head *list)
EXPORT_SYMBOL(skb_append);
void skb_insert(struct sk_buff *old, struct sk_buff *newsk, struct sk_buff_head *list)
EXPORT_SYMBOL(skb_insert);
static inline void skb_split_inside_header(struct sk_buff *skb,
struct sk_buff* skb1,
const u32 len, const int pos)
static inline void skb_split_no_header(struct sk_buff *skb,
struct sk_buff* skb1,
const u32 len, int pos)
void skb_split(struct sk_buff *skb, struct sk_buff *skb1, const u32 len)
EXPORT_SYMBOL(skb_split);
static int skb_prepare_for_shift(struct sk_buff *skb)
int skb_shift(struct sk_buff *tgt, struct sk_buff *skb, int shiftlen)
void skb_prepare_seq_read(struct sk_buff *skb, unsigned int from,
unsigned int to, struct skb_seq_state *st)
EXPORT_SYMBOL(skb_prepare_seq_read);
unsigned int skb_seq_read(unsigned int consumed, const u8 **data,
struct skb_seq_state *st)
EXPORT_SYMBOL(skb_seq_read);
void skb_abort_seq_read(struct skb_seq_state *st)
EXPORT_SYMBOL(skb_abort_seq_read);
#define TS_SKB_CB(state)	((struct skb_seq_state *) &((state)->cb))
static unsigned int skb_ts_get_next_block(unsigned int offset, const u8 **text,
struct ts_config *conf,
struct ts_state *state)
static void skb_ts_finish(struct ts_config *conf, struct ts_state *state)
unsigned int skb_find_text(struct sk_buff *skb, unsigned int from,
unsigned int to, struct ts_config *config,
struct ts_state *state)
EXPORT_SYMBOL(skb_find_text);
int skb_append_datato_frags(struct sock *sk, struct sk_buff *skb,
int (*getfrag)(void *from, char *to, int offset,
int len, int odd, struct sk_buff *skb),
void *from, int length)
EXPORT_SYMBOL(skb_append_datato_frags);
unsigned char *skb_pull_rcsum(struct sk_buff *skb, unsigned int len)
EXPORT_SYMBOL_GPL(skb_pull_rcsum);
struct sk_buff *skb_segment(struct sk_buff *skb, u32 features)
EXPORT_SYMBOL_GPL(skb_segment);
int skb_gro_receive(struct sk_buff **head, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(skb_gro_receive);
void __init skb_init(void)
static int
__skb_to_sgvec(struct sk_buff *skb, struct scatterlist *sg, int offset, int len)
int skb_to_sgvec(struct sk_buff *skb, struct scatterlist *sg, int offset, int len)
EXPORT_SYMBOL_GPL(skb_to_sgvec);
int skb_cow_data(struct sk_buff *skb, int tailbits, struct sk_buff **trailer)
EXPORT_SYMBOL_GPL(skb_cow_data);
static void sock_rmem_free(struct sk_buff *skb)
int sock_queue_err_skb(struct sock *sk, struct sk_buff *skb)
EXPORT_SYMBOL(sock_queue_err_skb);
void skb_tstamp_tx(struct sk_buff *orig_skb,
struct skb_shared_hwtstamps *hwtstamps)
EXPORT_SYMBOL_GPL(skb_tstamp_tx);
bool skb_partial_csum_set(struct sk_buff *skb, u16 start, u16 off)
EXPORT_SYMBOL_GPL(skb_partial_csum_set);
void __skb_warn_lro_forwarding(const struct sk_buff *skb)
EXPORT_SYMBOL(__skb_warn_lro_forwarding);
