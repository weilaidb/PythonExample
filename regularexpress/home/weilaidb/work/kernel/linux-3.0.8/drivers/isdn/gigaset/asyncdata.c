static inline int muststuff(unsigned char c)
static unsigned cmd_loop(unsigned numbytes, struct inbuf_t *inbuf)
static unsigned lock_loop(unsigned numbytes, struct inbuf_t *inbuf)
static unsigned hdlc_loop(unsigned numbytes, struct inbuf_t *inbuf)
static unsigned iraw_loop(unsigned numbytes, struct inbuf_t *inbuf)
static void handle_dle(struct inbuf_t *inbuf)
void gigaset_m10x_input(struct inbuf_t *inbuf)
EXPORT_SYMBOL_GPL(gigaset_m10x_input);
static struct sk_buff *HDLC_Encode(struct sk_buff *skb)
static struct sk_buff *iraw_encode(struct sk_buff *skb)
int gigaset_m10x_send_skb(struct bc_state *bcs, struct sk_buff *skb)
EXPORT_SYMBOL_GPL(gigaset_m10x_send_skb);
