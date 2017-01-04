#define	_hnddma_h_
#define _hnddma_pub_
struct hnddma_pub;
#define	DMA_TX	1
#define	DMA_RX	2
#define BUS_SWAP32(v)		(v)
typedef enum txd_range  txd_range_t;
typedef void (*di_detach_t) (struct hnddma_pub *dmah);
typedef bool(*di_txreset_t) (struct hnddma_pub *dmah);
typedef bool(*di_rxreset_t) (struct hnddma_pub *dmah);
typedef bool(*di_rxidle_t) (struct hnddma_pub *dmah);
typedef void (*di_txinit_t) (struct hnddma_pub *dmah);
typedef bool(*di_txenabled_t) (struct hnddma_pub *dmah);
typedef void (*di_rxinit_t) (struct hnddma_pub *dmah);
typedef void (*di_txsuspend_t) (struct hnddma_pub *dmah);
typedef void (*di_txresume_t) (struct hnddma_pub *dmah);
typedef bool(*di_txsuspended_t) (struct hnddma_pub *dmah);
typedef bool(*di_txsuspendedidle_t) (struct hnddma_pub *dmah);
typedef int (*di_txfast_t) (struct hnddma_pub *dmah, struct sk_buff *p,
bool commit);
typedef int (*di_txunframed_t) (struct hnddma_pub *dmah, void *p, uint len,
bool commit);
typedef void *(*di_getpos_t) (struct hnddma_pub *di, bool direction);
typedef void (*di_fifoloopbackenable_t) (struct hnddma_pub *dmah);
typedef bool(*di_txstopped_t) (struct hnddma_pub *dmah);
typedef bool(*di_rxstopped_t) (struct hnddma_pub *dmah);
typedef bool(*di_rxenable_t) (struct hnddma_pub *dmah);
typedef bool(*di_rxenabled_t) (struct hnddma_pub *dmah);
typedef void *(*di_rx_t) (struct hnddma_pub *dmah);
typedef bool(*di_rxfill_t) (struct hnddma_pub *dmah);
typedef void (*di_txreclaim_t) (struct hnddma_pub *dmah, txd_range_t range);
typedef void (*di_rxreclaim_t) (struct hnddma_pub *dmah);
typedef unsigned long (*di_getvar_t) (struct hnddma_pub *dmah,
const char *name);
typedef void *(*di_getnexttxp_t) (struct hnddma_pub *dmah, txd_range_t range);
typedef void *(*di_getnextrxp_t) (struct hnddma_pub *dmah, bool forceall);
typedef void *(*di_peeknexttxp_t) (struct hnddma_pub *dmah);
typedef void *(*di_peeknextrxp_t) (struct hnddma_pub *dmah);
typedef void (*di_rxparam_get_t) (struct hnddma_pub *dmah, u16 *rxoffset,
u16 *rxbufsize);
typedef void (*di_txblock_t) (struct hnddma_pub *dmah);
typedef void (*di_txunblock_t) (struct hnddma_pub *dmah);
typedef uint(*di_txactive_t) (struct hnddma_pub *dmah);
typedef void (*di_txrotate_t) (struct hnddma_pub *dmah);
typedef void (*di_counterreset_t) (struct hnddma_pub *dmah);
typedef uint(*di_ctrlflags_t) (struct hnddma_pub *dmah, uint mask, uint flags);
typedef char *(*di_dump_t) (struct hnddma_pub *dmah, struct bcmstrbuf *b,
bool dumpring);
typedef char *(*di_dumptx_t) (struct hnddma_pub *dmah, struct bcmstrbuf *b,
bool dumpring);
typedef char *(*di_dumprx_t) (struct hnddma_pub *dmah, struct bcmstrbuf *b,
bool dumpring);
typedef uint(*di_rxactive_t) (struct hnddma_pub *dmah);
typedef uint(*di_txpending_t) (struct hnddma_pub *dmah);
typedef uint(*di_txcommitted_t) (struct hnddma_pub *dmah);
typedef struct di_fcn_s  di_fcn_t;
struct hnddma_pub ;
extern struct hnddma_pub *dma_attach(char *name, si_t *sih,
void *dmaregstx, void *dmaregsrx, uint ntxd,
uint nrxd, uint rxbufsize, int rxextheadroom,
uint nrxpost, uint rxoffset, uint *msg_level);
extern const di_fcn_t dma64proc;
#define dma_detach(di)			(dma64proc.detach(di))
#define dma_txreset(di)			(dma64proc.txreset(di))
#define dma_rxreset(di)			(dma64proc.rxreset(di))
#define dma_rxidle(di)			(dma64proc.rxidle(di))
#define dma_txinit(di)                  (dma64proc.txinit(di))
#define dma_txenabled(di)               (dma64proc.txenabled(di))
#define dma_rxinit(di)                  (dma64proc.rxinit(di))
#define dma_txsuspend(di)               (dma64proc.txsuspend(di))
#define dma_txresume(di)                (dma64proc.txresume(di))
#define dma_txsuspended(di)             (dma64proc.txsuspended(di))
#define dma_txsuspendedidle(di)         (dma64proc.txsuspendedidle(di))
#define dma_txfast(di, p, commit)	(dma64proc.txfast(di, p, commit))
#define dma_txunframed(di, p, l, commit)(dma64proc.txunframed(di, p, l, commit))
#define dma_getpos(di, dir)		(dma64proc.getpos(di, dir))
#define dma_fifoloopbackenable(di)      (dma64proc.fifoloopbackenable(di))
#define dma_txstopped(di)               (dma64proc.txstopped(di))
#define dma_rxstopped(di)               (dma64proc.rxstopped(di))
#define dma_rxenable(di)                (dma64proc.rxenable(di))
#define dma_rxenabled(di)               (dma64proc.rxenabled(di))
#define dma_rx(di)                      (dma64proc.rx(di))
#define dma_rxfill(di)                  (dma64proc.rxfill(di))
#define dma_txreclaim(di, range)	(dma64proc.txreclaim(di, range))
#define dma_rxreclaim(di)               (dma64proc.rxreclaim(di))
#define dma_getvar(di, name)		(dma64proc.d_getvar(di, name))
#define dma_getnexttxp(di, range)	(dma64proc.getnexttxp(di, range))
#define dma_getnextrxp(di, forceall)    (dma64proc.getnextrxp(di, forceall))
#define dma_peeknexttxp(di)             (dma64proc.peeknexttxp(di))
#define dma_peeknextrxp(di)             (dma64proc.peeknextrxp(di))
#define dma_rxparam_get(di, off, bufs)	(dma64proc.rxparam_get(di, off, bufs))
#define dma_txblock(di)                 (dma64proc.txblock(di))
#define dma_txunblock(di)               (dma64proc.txunblock(di))
#define dma_txactive(di)                (dma64proc.txactive(di))
#define dma_rxactive(di)                (dma64proc.rxactive(di))
#define dma_txrotate(di)                (dma64proc.txrotate(di))
#define dma_counterreset(di)            (dma64proc.counterreset(di))
#define dma_ctrlflags(di, mask, flags)  (dma64proc.ctrlflags((di), (mask), (flags)))
#define dma_txpending(di)		(dma64proc.txpending(di))
#define dma_txcommitted(di)		(dma64proc.txcommitted(di))
extern uint dma_addrwidth(si_t *sih, void *dmaregs);
void dma_walk_packets(struct hnddma_pub *dmah, void (*callback_fnc)
(void *pkt, void *arg_a), void *arg_a);
static inline void dma_spin_for_len(uint len, struct sk_buff *head)
