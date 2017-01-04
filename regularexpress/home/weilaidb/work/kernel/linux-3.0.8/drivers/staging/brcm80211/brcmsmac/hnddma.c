#if defined(__mips__)
#error "hnddma.c shouldn't be needed for FULLMAC"
#define	DMA_ERROR(args) \
do  while (0)
#define	DMA_TRACE(args) \
do  while (0)
#define	DMA_ERROR(args)
#define	DMA_TRACE(args)
#define	DMA_NONE(args)
#define d64txregs	dregs.d64_u.txregs_64
#define d64rxregs	dregs.d64_u.rxregs_64
#define txd64		dregs.d64_u.txd_64
#define rxd64		dregs.d64_u.rxd_64
static uint dma_msg_level;
#define	MAXNAMEL	8
#define	DI_INFO(dmah)	((dma_info_t *)dmah)
#define R_SM(r)		(*(r))
#define W_SM(r, v)	(*(r) = (v))
typedef struct dma_info  dma_info_t;
#define DMASGLIST_ENAB true
#define DMASGLIST_ENAB false
#define	XXD(x, n)	((x) & ((n) - 1))
#define	TXD(x)		XXD((x), di->ntxd)
#define	RXD(x)		XXD((x), di->nrxd)
#define	NEXTTXD(i)	TXD((i) + 1)
#define	PREVTXD(i)	TXD((i) - 1)
#define	NEXTRXD(i)	RXD((i) + 1)
#define	PREVRXD(i)	RXD((i) - 1)
#define	NTXDACTIVE(h, t)	TXD((t) - (h))
#define	NRXDACTIVE(h, t)	RXD((t) - (h))
#define	B2I(bytes, type)	((bytes) / sizeof(type))
#define	I2B(index, type)	((index) * sizeof(type))
#define	PCI32ADDR_HIGH		0xc0000000
#define	PCI32ADDR_HIGH_SHIFT	30
#define	PCI64ADDR_HIGH		0x80000000
#define	PCI64ADDR_HIGH_SHIFT	31
static bool _dma_isaddrext(dma_info_t *di);
static bool _dma_descriptor_align(dma_info_t *di);
static bool _dma_alloc(dma_info_t *di, uint direction);
static void _dma_detach(dma_info_t *di);
static void _dma_ddtable_init(dma_info_t *di, uint direction, dmaaddr_t pa);
static void _dma_rxinit(dma_info_t *di);
static void *_dma_rx(dma_info_t *di);
static bool _dma_rxfill(dma_info_t *di);
static void _dma_rxreclaim(dma_info_t *di);
static void _dma_rxenable(dma_info_t *di);
static void *_dma_getnextrxp(dma_info_t *di, bool forceall);
static void _dma_rx_param_get(dma_info_t *di, u16 *rxoffset,
u16 *rxbufsize);
static void _dma_txblock(dma_info_t *di);
static void _dma_txunblock(dma_info_t *di);
static uint _dma_txactive(dma_info_t *di);
static uint _dma_rxactive(dma_info_t *di);
static uint _dma_txpending(dma_info_t *di);
static uint _dma_txcommitted(dma_info_t *di);
static void *_dma_peeknexttxp(dma_info_t *di);
static void *_dma_peeknextrxp(dma_info_t *di);
static unsigned long _dma_getvar(dma_info_t *di, const char *name);
static void _dma_counterreset(dma_info_t *di);
static void _dma_fifoloopbackenable(dma_info_t *di);
static uint _dma_ctrlflags(dma_info_t *di, uint mask, uint flags);
static u8 dma_align_sizetobits(uint size);
static void *dma_ringalloc(dma_info_t *di, u32 boundary, uint size,
u16 *alignbits, uint *alloced,
dmaaddr_t *descpa);
static bool dma64_alloc(dma_info_t *di, uint direction);
static bool dma64_txreset(dma_info_t *di);
static bool dma64_rxreset(dma_info_t *di);
static bool dma64_txsuspendedidle(dma_info_t *di);
static int dma64_txfast(dma_info_t *di, struct sk_buff *p0, bool commit);
static int dma64_txunframed(dma_info_t *di, void *p0, uint len, bool commit);
static void *dma64_getpos(dma_info_t *di, bool direction);
static void *dma64_getnexttxp(dma_info_t *di, txd_range_t range);
static void *dma64_getnextrxp(dma_info_t *di, bool forceall);
static void dma64_txrotate(dma_info_t *di);
static bool dma64_rxidle(dma_info_t *di);
static void dma64_txinit(dma_info_t *di);
static bool dma64_txenabled(dma_info_t *di);
static void dma64_txsuspend(dma_info_t *di);
static void dma64_txresume(dma_info_t *di);
static bool dma64_txsuspended(dma_info_t *di);
static void dma64_txreclaim(dma_info_t *di, txd_range_t range);
static bool dma64_txstopped(dma_info_t *di);
static bool dma64_rxstopped(dma_info_t *di);
static bool dma64_rxenabled(dma_info_t *di);
static bool _dma64_addrext(dma64regs_t *dma64regs);
static inline u32 parity32(u32 data);
const di_fcn_t dma64proc = ;
struct hnddma_pub *dma_attach(char *name, si_t *sih,
void *dmaregstx, void *dmaregsrx, uint ntxd,
uint nrxd, uint rxbufsize, int rxextheadroom,
uint nrxpost, uint rxoffset, uint *msg_level)
static inline u32 parity32(u32 data)
#define DMA64_DD_PARITY(dd)  parity32((dd)->addrlow ^ (dd)->addrhigh ^ (dd)->ctrl1 ^ (dd)->ctrl2)
static inline void
dma64_dd_upd(dma_info_t *di, dma64dd_t *ddring, dmaaddr_t pa, uint outidx,
u32 *flags, u32 bufcount)
{
u32 ctrl2 = bufcount & D64_CTRL2_BC_MASK;
#if defined(__mips__) && defined(IL_BIGENDIAN)
if ((di->dataoffsetlow == SI_SDRAM_SWAPPED)
|| !(PHYSADDRLO(pa) & PCI32ADDR_HIGH))
static bool _dma_alloc(dma_info_t *di, uint direction)
void *dma_alloc_consistent(struct pci_dev *pdev, uint size, u16 align_bits,
uint *alloced, unsigned long *pap)
static void _dma_detach(dma_info_t *di)
static bool _dma_descriptor_align(dma_info_t *di)
static bool _dma_isaddrext(dma_info_t *di)
static void _dma_ddtable_init(dma_info_t *di, uint direction, dmaaddr_t pa)
static void _dma_fifoloopbackenable(dma_info_t *di)
static void _dma_rxinit(dma_info_t *di)
static void _dma_rxenable(dma_info_t *di)
static void
_dma_rx_param_get(dma_info_t *di, u16 *rxoffset, u16 *rxbufsize)
static void *_dma_rx(dma_info_t *di)
static bool _dma_rxfill(dma_info_t *di)
static void *_dma_peeknexttxp(dma_info_t *di)
static void *_dma_peeknextrxp(dma_info_t *di)
static void _dma_rxreclaim(dma_info_t *di)
static void *_dma_getnextrxp(dma_info_t *di, bool forceall)
static void _dma_txblock(dma_info_t *di)
static void _dma_txunblock(dma_info_t *di)
static uint _dma_txactive(dma_info_t *di)
static uint _dma_txpending(dma_info_t *di)
static uint _dma_txcommitted(dma_info_t *di)
static uint _dma_rxactive(dma_info_t *di)
static void _dma_counterreset(dma_info_t *di)
static uint _dma_ctrlflags(dma_info_t *di, uint mask, uint flags)
static unsigned long _dma_getvar(dma_info_t *di, const char *name)
static
u8 dma_align_sizetobits(uint size)
static void *dma_ringalloc(dma_info_t *di, u32 boundary, uint size,
u16 *alignbits, uint *alloced,
dmaaddr_t *descpa)
static void dma64_txinit(dma_info_t *di)
static bool dma64_txenabled(dma_info_t *di)
static void dma64_txsuspend(dma_info_t *di)
static void dma64_txresume(dma_info_t *di)
static bool dma64_txsuspended(dma_info_t *di)
static void dma64_txreclaim(dma_info_t *di, txd_range_t range)
static bool dma64_txstopped(dma_info_t *di)
static bool dma64_rxstopped(dma_info_t *di)
static bool dma64_alloc(dma_info_t *di, uint direction)
static bool dma64_txreset(dma_info_t *di)
static bool dma64_rxidle(dma_info_t *di)
static bool dma64_rxreset(dma_info_t *di)
static bool dma64_rxenabled(dma_info_t *di)
static bool dma64_txsuspendedidle(dma_info_t *di)
static void *dma64_getpos(dma_info_t *di, bool direction)
static int dma64_txunframed(dma_info_t *di, void *buf, uint len, bool commit)
static int dma64_txfast(dma_info_t *di, struct sk_buff *p0,
bool commit)
static void *dma64_getnexttxp(dma_info_t *di, txd_range_t range)
static void *dma64_getnextrxp(dma_info_t *di, bool forceall)
static bool _dma64_addrext(dma64regs_t *dma64regs)
static void dma64_txrotate(dma_info_t *di)
uint dma_addrwidth(si_t *sih, void *dmaregs)
void dma_walk_packets(struct hnddma_pub *dmah, void (*callback_fnc)
(void *pkt, void *arg_a), void *arg_a)
