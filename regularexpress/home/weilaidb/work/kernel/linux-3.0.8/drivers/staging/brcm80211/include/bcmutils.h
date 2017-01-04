#define	_bcmutils_h_
struct bcmstrbuf ;
#define GPIO_PIN_NOTDEFINED 	0x20
#define SPINWAIT(exp, us)
#define PKTQ_LEN_DEFAULT        128
#define PKTQ_MAX_PREC           16
struct pktq_prec ;
struct pktq ;
#define PKTQ_PREC_ITER(pq, prec)        for (prec = (pq)->num_prec - 1; prec >= 0; prec--)
typedef bool(*ifpkt_cb_t) (struct sk_buff *, void *);
#define pktq_psetmax(pq, prec, _max)    ((pq)->q[prec].max = (_max))
#define pktq_plen(pq, prec)             ((pq)->q[prec].len)
#define pktq_pavail(pq, prec)           ((pq)->q[prec].max - (pq)->q[prec].len)
#define pktq_pfull(pq, prec)            ((pq)->q[prec].len >= (pq)->q[prec].max)
#define pktq_pempty(pq, prec)           ((pq)->q[prec].len == 0)
#define pktq_ppeek(pq, prec)            ((pq)->q[prec].head)
#define pktq_ppeek_tail(pq, prec)       ((pq)->q[prec].tail)
extern struct sk_buff *bcm_pktq_penq(struct pktq *pq, int prec,
struct sk_buff *p);
extern struct sk_buff *bcm_pktq_penq_head(struct pktq *pq, int prec,
struct sk_buff *p);
extern struct sk_buff *bcm_pktq_pdeq(struct pktq *pq, int prec);
extern struct sk_buff *bcm_pktq_pdeq_tail(struct pktq *pq, int prec);
extern struct sk_buff *bcm_pkt_buf_get_skb(uint len);
extern void bcm_pkt_buf_free_skb(struct sk_buff *skb);
extern void bcm_pktq_pflush(struct pktq *pq, int prec,
bool dir, ifpkt_cb_t fn, void *arg);
extern int bcm_pktq_mlen(struct pktq *pq, uint prec_bmp);
extern struct sk_buff *bcm_pktq_mdeq(struct pktq *pq, uint prec_bmp,
int *prec_out);
#define pktq_len(pq)                    ((int)(pq)->len)
#define pktq_max(pq)                    ((int)(pq)->max)
#define pktq_avail(pq)                  ((int)((pq)->max - (pq)->len))
#define pktq_full(pq)                   ((pq)->len >= (pq)->max)
#define pktq_empty(pq)                  ((pq)->len == 0)
#define pktenq(pq, p)		bcm_pktq_penq(((struct pktq *)pq), 0, (p))
#define pktenq_head(pq, p)	bcm_pktq_penq_head(((struct pktq *)pq), 0, (p))
#define pktdeq(pq)		bcm_pktq_pdeq(((struct pktq *)pq), 0)
#define pktdeq_tail(pq)		bcm_pktq_pdeq_tail(((struct pktq *)pq), 0)
#define pktqinit(pq, len)	bcm_pktq_init(((struct pktq *)pq), 1, len)
extern void bcm_pktq_init(struct pktq *pq, int num_prec, int max_len);
extern struct sk_buff *bcm_pktq_peek_tail(struct pktq *pq, int *prec_out);
extern void bcm_pktq_flush(struct pktq *pq, bool dir,
ifpkt_cb_t fn, void *arg);
extern uint bcm_pktfrombuf(struct sk_buff *p,
uint offset, int len, unsigned char *buf);
extern uint bcm_pkttotlen(struct sk_buff *p);
extern int bcm_ether_atoe(char *p, u8 *ea);
struct ipv4_addr;
extern char *bcm_ip_ntoa(struct ipv4_addr *ia, char *buf);
extern void bcm_prpkt(const char *msg, struct sk_buff *p0);
#define bcm_prpkt(a, b)
#define bcm_perf_enable()
#define	bcmlog(fmt, a1, a2)
#define	bcmdumplog(buf, size)	(*buf = '\0')
#define	bcmdumplogent(buf, idx)	-1
#define bcmtslog(tstamp, fmt, a1, a2)
#define bcmprinttslogs()
#define bcmprinttstamp(us)
typedef struct bcm_iovar  bcm_iovar_t;
#define IOV_GET 0
#define IOV_SET 1
#define IOV_GVAL(id)		((id)*2)
#define IOV_SVAL(id)		(((id)*2)+IOV_SET)
#define IOV_ISSET(actionid)	((actionid & IOV_SET) == IOV_SET)
#define IOV_ID(actionid)	(actionid >> 1)
extern const bcm_iovar_t *bcm_iovar_lookup(const bcm_iovar_t *table,
const char *name);
extern int bcm_iovar_lencheck(const bcm_iovar_t *table, void *arg,
int len, bool set);
#define IOVT_VOID	0
#define IOVT_BOOL	1
#define IOVT_INT8	2
#define IOVT_UINT8	3
#define IOVT_INT16	4
#define IOVT_UINT16	5
#define IOVT_INT32	6
#define IOVT_UINT32	7
#define IOVT_BUFFER	8
#define BCM_IOVT_VALID(type) (((unsigned int)(type)) <= IOVT_BUFFER)
#define BCM_IOV_TYPE_INIT
#define BCM_IOVT_IS_INT(type) (\
(type == IOVT_BOOL) || \
(type == IOVT_INT8) || \
(type == IOVT_UINT8) || \
(type == IOVT_INT16) || \
(type == IOVT_UINT16) || \
(type == IOVT_INT32) || \
(type == IOVT_UINT32))
#define BCME_STRLEN 		64
#define	ABS(a)			(((a) < 0) ? -(a) : (a))
#define CEIL(x, y)		(((x) + ((y)-1)) / (y))
#define	ISPOWEROF2(x)		((((x)-1)&(x)) == 0)
#if !defined(CONFIG_MMC_MSM7X00A)
#define REG_MAP(pa, size)       ioremap_nocache((unsigned long)(pa), \
(unsigned long)(size))
#define REG_MAP(pa, size)       (void *)(0)
#if defined(BCMSDIO)
#define OSL_WRITE_REG(r, v) \
(bcmsdh_reg_write(NULL, (unsigned long)(r), sizeof(*(r)), (v)))
#define OSL_READ_REG(r) \
(bcmsdh_reg_read(NULL, (unsigned long)(r), sizeof(*(r))))
#if defined(BCMSDIO)
#define SELECT_BUS_WRITE(mmap_op, bus_op) bus_op
#define SELECT_BUS_READ(mmap_op, bus_op) bus_op
#define SELECT_BUS_WRITE(mmap_op, bus_op) mmap_op
#define SELECT_BUS_READ(mmap_op, bus_op) mmap_op
#define	PKTBUFSZ	2048
#define OSL_SYSUPTIME()		((u32)jiffies * (1000 / HZ))
#define	bcopy(src, dst, len)	memcpy((dst), (src), (len))
#define R_REG(r) (\
SELECT_BUS_READ(sizeof(*(r)) == sizeof(u8) ? \
readb((volatile u8*)(r)) : \
sizeof(*(r)) == sizeof(u16) ? readw((volatile u16*)(r)) : \
readl((volatile u32*)(r)), OSL_READ_REG(r)) \
)
#define R_REG(r) (\
SELECT_BUS_READ( \
(), \
()) \
)
#define W_REG(r, v) do  while (0)
#define R_REG(r) (\
SELECT_BUS_READ( \
(), \
OSL_READ_REG(r)) \
)
#define W_REG(r, v) do  while (0)
#define AND_REG(r, v)	W_REG((r), R_REG(r) & (v))
#define OR_REG(r, v)	W_REG((r), R_REG(r) | (v))
#define SET_REG(r, mask, val) \
W_REG((r), ((R_REG(r) & ~(mask)) | (val)))
#define	NBBY	8
#define	setbit(a, i)	(((u8 *)a)[(i)/NBBY] |= 1<<((i)%NBBY))
#define	clrbit(a, i)	(((u8 *)a)[(i)/NBBY] &= ~(1<<((i)%NBBY)))
#define	isset(a, i)	(((const u8 *)a)[(i)/NBBY] & (1<<((i)%NBBY)))
#define	isclr(a, i)	((((const u8 *)a)[(i)/NBBY] & (1<<((i)%NBBY))) == 0)
#define	NBITS(type)	(sizeof(type) * 8)
#define NBITVAL(nbits)	(1 << (nbits))
#define MAXBITVAL(nbits)	((1 << (nbits)) - 1)
#define	NBITMASK(nbits)	MAXBITVAL(nbits)
#define MAXNBVAL(nbyte)	MAXBITVAL((nbyte) * 8)
#define MUX(pred, true, false) ((pred) ? (true) : (false))
#define MODDEC(x, bound) MUX((x) == 0, (bound) - 1, (x) - 1)
#define MODINC(x, bound) MUX((x) == (bound) - 1, 0, (x) + 1)
#define MODDEC_POW2(x, bound) (((x) - 1) & ((bound) - 1))
#define MODINC_POW2(x, bound) (((x) + 1) & ((bound) - 1))
#define MODADD(x, y, bound) \
MUX((x) + (y) >= (bound), (x) + (y) - (bound), (x) + (y))
#define MODSUB(x, y, bound) \
MUX(((int)(x)) - ((int)(y)) < 0, (x) - (y) + (bound), (x) - (y))
#define MODADD_POW2(x, y, bound) (((x) + (y)) & ((bound) - 1))
#define MODSUB_POW2(x, y, bound) (((x) - (y)) & ((bound) - 1))
#define CRC8_INIT_VALUE  0xff
#define CRC8_GOOD_VALUE  0x9f
#define CRC16_INIT_VALUE 0xffff
#define CRC16_GOOD_VALUE 0xf0b8
typedef struct bcm_bit_desc  bcm_bit_desc_t;
typedef struct bcm_tlv  bcm_tlv_t;
#define bcm_valid_tlv(elt, buflen) ((buflen) >= 2 && (int)(buflen) >= (int)(2 + (elt)->len))
#define ETHER_ADDR_STR_LEN	18
static inline void
xor_128bit_block(const u8 *src1, const u8 *src2, u8 *dst)
extern u8 bcm_crc8(u8 *p, uint nbytes, u8 crc);
#if defined(BCMDBG)
extern int bcm_format_flags(const bcm_bit_desc_t *bd, u32 flags,
char *buf, int len);
extern int bcm_format_hex(char *str, const void *bytes, int len);
extern char *bcm_chipname(uint chipid, char *buf, uint len);
extern bcm_tlv_t *bcm_parse_tlvs(void *buf, int buflen,
uint key);
typedef u32 mbool;
#define mboolset(mb, bit)		((mb) |= (bit))
#define mboolclr(mb, bit)		((mb) &= ~(bit))
#define mboolisset(mb, bit)		(((mb) & (bit)) != 0)
#define	mboolmaskset(mb, mask, val)	((mb) = (((mb) & ~(mask)) | (val)))
extern u16 bcm_qdbm_to_mw(u8 qdbm);
extern u8 bcm_mw_to_qdbm(u16 mw);
extern void bcm_binit(struct bcmstrbuf *b, char *buf, uint size);
extern int bcm_bprintf(struct bcmstrbuf *b, const char *fmt, ...);
extern uint bcm_mkiovar(char *name, char *data, uint datalen, char *buf,
uint len);
extern uint bcm_bitcount(u8 *bitmap, uint bytelength);
