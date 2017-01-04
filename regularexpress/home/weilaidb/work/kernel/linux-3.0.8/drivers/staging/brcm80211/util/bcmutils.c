MODULE_AUTHOR("Broadcom Corporation");
MODULE_DESCRIPTION("Broadcom 802.11n wireless LAN driver utilities.");
MODULE_SUPPORTED_DEVICE("Broadcom 802.11n WLAN cards");
MODULE_LICENSE("Dual BSD/GPL");
struct sk_buff *bcm_pkt_buf_get_skb(uint len)
EXPORT_SYMBOL(bcm_pkt_buf_get_skb);
void bcm_pkt_buf_free_skb(struct sk_buff *skb)
EXPORT_SYMBOL(bcm_pkt_buf_free_skb);
uint bcm_pktfrombuf(struct sk_buff *p, uint offset, int len,
unsigned char *buf)
EXPORT_SYMBOL(bcm_pktfrombuf);
uint bcm_pkttotlen(struct sk_buff *p)
EXPORT_SYMBOL(bcm_pkttotlen);
struct sk_buff *bcm_pktq_penq(struct pktq *pq, int prec,
struct sk_buff *p)
EXPORT_SYMBOL(bcm_pktq_penq);
struct sk_buff *bcm_pktq_penq_head(struct pktq *pq, int prec,
struct sk_buff *p)
EXPORT_SYMBOL(bcm_pktq_penq_head);
struct sk_buff *bcm_pktq_pdeq(struct pktq *pq, int prec)
EXPORT_SYMBOL(bcm_pktq_pdeq);
struct sk_buff *bcm_pktq_pdeq_tail(struct pktq *pq, int prec)
EXPORT_SYMBOL(bcm_pktq_pdeq_tail);
void
bcm_pktq_pflush(struct pktq *pq, int prec, bool dir,
ifpkt_cb_t fn, void *arg)
EXPORT_SYMBOL(bcm_pktq_pflush);
void bcm_pktq_flush(struct pktq *pq, bool dir,
ifpkt_cb_t fn, void *arg)
EXPORT_SYMBOL(bcm_pktq_flush);
void bcm_pktq_init(struct pktq *pq, int num_prec, int max_len)
EXPORT_SYMBOL(bcm_pktq_init);
struct sk_buff *bcm_pktq_peek_tail(struct pktq *pq, int *prec_out)
EXPORT_SYMBOL(bcm_pktq_peek_tail);
int bcm_pktq_mlen(struct pktq *pq, uint prec_bmp)
EXPORT_SYMBOL(bcm_pktq_mlen);
struct sk_buff *bcm_pktq_mdeq(struct pktq *pq, uint prec_bmp,
int *prec_out)
EXPORT_SYMBOL(bcm_pktq_mdeq);
int bcm_ether_atoe(char *p, u8 *ea)
EXPORT_SYMBOL(bcm_ether_atoe);
#if defined(BCMDBG)
void bcm_prpkt(const char *msg, struct sk_buff *p0)
EXPORT_SYMBOL(bcm_prpkt);
const bcm_iovar_t *bcm_iovar_lookup(const bcm_iovar_t *table, const char *name)
EXPORT_SYMBOL(bcm_iovar_lookup);
int bcm_iovar_lencheck(const bcm_iovar_t *vi, void *arg, int len, bool set)
EXPORT_SYMBOL(bcm_iovar_lencheck);
static const u8 crc8_table[256] = ;
u8 bcm_crc8(u8 *pdata,
uint nbytes,
u8 crc
)
EXPORT_SYMBOL(bcm_crc8);
bcm_tlv_t *bcm_parse_tlvs(void *buf, int buflen, uint key)
EXPORT_SYMBOL(bcm_parse_tlvs);
#if defined(BCMDBG)
int
bcm_format_flags(const bcm_bit_desc_t *bd, u32 flags, char *buf, int len)
EXPORT_SYMBOL(bcm_format_flags);
int bcm_format_hex(char *str, const void *bytes, int len)
EXPORT_SYMBOL(bcm_format_hex);
char *bcm_chipname(uint chipid, char *buf, uint len)
EXPORT_SYMBOL(bcm_chipname);
uint bcm_mkiovar(char *name, char *data, uint datalen, char *buf, uint buflen)
EXPORT_SYMBOL(bcm_mkiovar);
#define QDBM_OFFSET 153
#define QDBM_TABLE_LEN 40
#define QDBM_TABLE_LOW_BOUND 6493
#define QDBM_TABLE_HIGH_BOUND 64938
static const u16 nqdBm_to_mW_map[QDBM_TABLE_LEN] = ;
u16 bcm_qdbm_to_mw(u8 qdbm)
EXPORT_SYMBOL(bcm_qdbm_to_mw);
u8 bcm_mw_to_qdbm(u16 mw)
EXPORT_SYMBOL(bcm_mw_to_qdbm);
uint bcm_bitcount(u8 *bitmap, uint length)
EXPORT_SYMBOL(bcm_bitcount);
void bcm_binit(struct bcmstrbuf *b, char *buf, uint size)
EXPORT_SYMBOL(bcm_binit);
int bcm_bprintf(struct bcmstrbuf *b, const char *fmt, ...)
EXPORT_SYMBOL(bcm_bprintf);
