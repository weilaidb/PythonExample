void gigaset_isowbuf_init(struct isowbuf_t *iwb, unsigned char idle)
static inline int isowbuf_freebytes(struct isowbuf_t *iwb)
static inline int isowbuf_startwrite(struct isowbuf_t *iwb)
static inline int isowbuf_donewrite(struct isowbuf_t *iwb)
static inline void isowbuf_putbits(struct isowbuf_t *iwb, u32 data, int nbits)
static inline void isowbuf_putflag(struct isowbuf_t *iwb)
int gigaset_isowbuf_getbytes(struct isowbuf_t *iwb, int size)
static inline void dump_bytes(enum debuglevel level, const char *tag,
unsigned char *bytes, int count)
static const u16 stufftab[5 * 256] = ;
static inline int hdlc_bitstuff_byte(struct isowbuf_t *iwb, unsigned char cin,
int ones)
static inline int hdlc_buildframe(struct isowbuf_t *iwb,
unsigned char *in, int count)
static inline int trans_buildframe(struct isowbuf_t *iwb,
unsigned char *in, int count)
int gigaset_isoc_buildframe(struct bc_state *bcs, unsigned char *in, int len)
static inline void hdlc_putbyte(unsigned char c, struct bc_state *bcs)
static inline void hdlc_flush(struct bc_state *bcs)
static inline void hdlc_done(struct bc_state *bcs)
static inline void hdlc_frag(struct bc_state *bcs, unsigned inbits)
static const unsigned char bitcounts[256] = ;
static inline void hdlc_unpack(unsigned char *src, unsigned count,
struct bc_state *bcs)
static inline void trans_receive(unsigned char *src, unsigned count,
struct bc_state *bcs)
void gigaset_isoc_receive(unsigned char *src, unsigned count,
struct bc_state *bcs)
static void cmd_loop(unsigned char *src, int numbytes, struct inbuf_t *inbuf)
void gigaset_isoc_input(struct inbuf_t *inbuf)
int gigaset_isoc_send_skb(struct bc_state *bcs, struct sk_buff *skb)
