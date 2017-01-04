#define pr_fmt(fmt) KBUILD_MODNAME ":%s(): " fmt, __func__
#define PKT_PREFIX  48
#define PKT_POSTFIX 2
#define PKT_LEN_WHEN_EXTENDING 128
#define PKT_ERROR(pkt, errmsg)		   \
do  while (0)
struct cfpktq ;
struct cfpkt ;
struct cfpkt_priv_data ;
static inline struct cfpkt_priv_data *cfpkt_priv(struct cfpkt *pkt)
static inline bool is_erronous(struct cfpkt *pkt)
static inline struct sk_buff *pkt_to_skb(struct cfpkt *pkt)
static inline struct cfpkt *skb_to_pkt(struct sk_buff *skb)
struct cfpkt *cfpkt_fromnative(enum caif_direction dir, void *nativepkt)
EXPORT_SYMBOL(cfpkt_fromnative);
void *cfpkt_tonative(struct cfpkt *pkt)
EXPORT_SYMBOL(cfpkt_tonative);
static struct cfpkt *cfpkt_create_pfx(u16 len, u16 pfx)
inline struct cfpkt *cfpkt_create(u16 len)
void cfpkt_destroy(struct cfpkt *pkt)
inline bool cfpkt_more(struct cfpkt *pkt)
int cfpkt_peek_head(struct cfpkt *pkt, void *data, u16 len)
int cfpkt_extr_head(struct cfpkt *pkt, void *data, u16 len)
int cfpkt_extr_trail(struct cfpkt *pkt, void *dta, u16 len)
int cfpkt_pad_trail(struct cfpkt *pkt, u16 len)
int cfpkt_add_body(struct cfpkt *pkt, const void *data, u16 len)
inline int cfpkt_addbdy(struct cfpkt *pkt, u8 data)
int cfpkt_add_head(struct cfpkt *pkt, const void *data2, u16 len)
inline int cfpkt_add_trail(struct cfpkt *pkt, const void *data, u16 len)
inline u16 cfpkt_getlen(struct cfpkt *pkt)
inline u16 cfpkt_iterate(struct cfpkt *pkt,
u16 (*iter_func)(u16, void *, u16),
u16 data)
int cfpkt_setlen(struct cfpkt *pkt, u16 len)
struct cfpkt *cfpkt_append(struct cfpkt *dstpkt,
struct cfpkt *addpkt,
u16 expectlen)
struct cfpkt *cfpkt_split(struct cfpkt *pkt, u16 pos)
bool cfpkt_erroneous(struct cfpkt *pkt)
struct caif_payload_info *cfpkt_info(struct cfpkt *pkt)
