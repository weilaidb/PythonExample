#define TXX9DMAC_H
static inline bool txx9_dma_have_SMPCHN(void)
#define TXX9_DMA_USE_SIMPLE_CHAIN
static inline bool txx9_dma_have_SMPCHN(void)
#define CCR_LE	TXX9_DMA_CCR_LE
#define MCR_LE	0
#define CCR_LE	0
#define MCR_LE	TXX9_DMA_MCR_LE
#define CCR_LE	0
#define MCR_LE	0
#define TXX9_DMA_REG32(name)		u32 __pad_##name; u32 name
#define TXX9_DMA_REG32(name)		u32 name; u32 __pad_##name
struct txx9dmac_cregs ;
struct txx9dmac_cregs32 ;
struct txx9dmac_regs ;
struct txx9dmac_regs32 ;
#define TXX9_DMA_MCR_EIS(ch)	(0x10000000<<(ch))
#define TXX9_DMA_MCR_DIS(ch)	(0x01000000<<(ch))
#define TXX9_DMA_MCR_RSFIF	0x00000080
#define TXX9_DMA_MCR_FIFUM(ch)	(0x00000008<<(ch))
#define TXX9_DMA_MCR_LE		0x00000004
#define TXX9_DMA_MCR_RPRT	0x00000002
#define TXX9_DMA_MCR_MSTEN	0x00000001
#define TXX9_DMA_CCR_IMMCHN	0x20000000
#define TXX9_DMA_CCR_USEXFSZ	0x10000000
#define TXX9_DMA_CCR_LE		0x08000000
#define TXX9_DMA_CCR_DBINH	0x04000000
#define TXX9_DMA_CCR_SBINH	0x02000000
#define TXX9_DMA_CCR_CHRST	0x01000000
#define TXX9_DMA_CCR_RVBYTE	0x00800000
#define TXX9_DMA_CCR_ACKPOL	0x00400000
#define TXX9_DMA_CCR_REQPL	0x00200000
#define TXX9_DMA_CCR_EGREQ	0x00100000
#define TXX9_DMA_CCR_CHDN	0x00080000
#define TXX9_DMA_CCR_DNCTL	0x00060000
#define TXX9_DMA_CCR_EXTRQ	0x00010000
#define TXX9_DMA_CCR_INTRQD	0x0000e000
#define TXX9_DMA_CCR_INTENE	0x00001000
#define TXX9_DMA_CCR_INTENC	0x00000800
#define TXX9_DMA_CCR_INTENT	0x00000400
#define TXX9_DMA_CCR_CHNEN	0x00000200
#define TXX9_DMA_CCR_XFACT	0x00000100
#define TXX9_DMA_CCR_SMPCHN	0x00000020
#define TXX9_DMA_CCR_XFSZ(order)	(((order) << 2) & 0x0000001c)
#define TXX9_DMA_CCR_XFSZ_1	TXX9_DMA_CCR_XFSZ(0)
#define TXX9_DMA_CCR_XFSZ_2	TXX9_DMA_CCR_XFSZ(1)
#define TXX9_DMA_CCR_XFSZ_4	TXX9_DMA_CCR_XFSZ(2)
#define TXX9_DMA_CCR_XFSZ_8	TXX9_DMA_CCR_XFSZ(3)
#define TXX9_DMA_CCR_XFSZ_X4	TXX9_DMA_CCR_XFSZ(4)
#define TXX9_DMA_CCR_XFSZ_X8	TXX9_DMA_CCR_XFSZ(5)
#define TXX9_DMA_CCR_XFSZ_X16	TXX9_DMA_CCR_XFSZ(6)
#define TXX9_DMA_CCR_XFSZ_X32	TXX9_DMA_CCR_XFSZ(7)
#define TXX9_DMA_CCR_MEMIO	0x00000002
#define TXX9_DMA_CCR_SNGAD	0x00000001
#define TXX9_DMA_CSR_CHNEN	0x00000400
#define TXX9_DMA_CSR_STLXFER	0x00000200
#define TXX9_DMA_CSR_XFACT	0x00000100
#define TXX9_DMA_CSR_ABCHC	0x00000080
#define TXX9_DMA_CSR_NCHNC	0x00000040
#define TXX9_DMA_CSR_NTRNFC	0x00000020
#define TXX9_DMA_CSR_EXTDN	0x00000010
#define TXX9_DMA_CSR_CFERR	0x00000008
#define TXX9_DMA_CSR_CHERR	0x00000004
#define TXX9_DMA_CSR_DESERR	0x00000002
#define TXX9_DMA_CSR_SORERR	0x00000001
struct txx9dmac_chan ;
struct txx9dmac_dev ;
static inline bool __is_dmac64(const struct txx9dmac_dev *ddev)
static inline bool is_dmac64(const struct txx9dmac_chan *dc)
struct txx9dmac_hwdesc ;
struct txx9dmac_hwdesc32 ;
#define txx9dmac_hwdesc txx9dmac_cregs
#define txx9dmac_hwdesc32 txx9dmac_cregs32
struct txx9dmac_desc ;
static inline bool txx9dmac_chan_INTENT(struct txx9dmac_chan *dc)
static inline void txx9dmac_chan_set_INTENT(struct txx9dmac_chan *dc)
static inline void txx9dmac_desc_set_INTENT(struct txx9dmac_dev *ddev,
struct txx9dmac_desc *desc)
static inline void txx9dmac_chan_set_SMPCHN(struct txx9dmac_chan *dc)
static inline void txx9dmac_desc_set_nosimple(struct txx9dmac_dev *ddev,
struct txx9dmac_desc *desc,
u32 sair, u32 dair, u32 ccr)
static inline bool txx9dmac_chan_INTENT(struct txx9dmac_chan *dc)
static void txx9dmac_chan_set_INTENT(struct txx9dmac_chan *dc)
static inline void txx9dmac_desc_set_INTENT(struct txx9dmac_dev *ddev,
struct txx9dmac_desc *desc)
static inline void txx9dmac_chan_set_SMPCHN(struct txx9dmac_chan *dc)
static inline void txx9dmac_desc_set_nosimple(struct txx9dmac_dev *ddev,
struct txx9dmac_desc *desc,
u32 sai, u32 dai, u32 ccr)
