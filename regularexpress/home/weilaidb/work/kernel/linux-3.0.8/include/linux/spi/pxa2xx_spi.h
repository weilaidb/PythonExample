#define __linux_pxa2xx_spi_h
#define PXA2XX_CS_ASSERT (0x01)
#define PXA2XX_CS_DEASSERT (0x02)
struct pxa2xx_spi_master ;
struct pxa2xx_spi_chip ;
extern void pxa2xx_set_spi_info(unsigned id, struct pxa2xx_spi_master *info);
#define DCSR(n)         (n)
#define DSADR(n)        (n)
#define DTADR(n)        (n)
#define DCMD(n)         (n)
#define DRCMR(n)        (n)
#define DCSR_RUN	(1 << 31)
#define DCSR_NODESC	(1 << 30)
#define DCSR_STOPIRQEN	(1 << 29)
#define DCSR_REQPEND	(1 << 8)
#define DCSR_STOPSTATE	(1 << 3)
#define DCSR_ENDINTR	(1 << 2)
#define DCSR_STARTINTR	(1 << 1)
#define DCSR_BUSERR	(1 << 0)
#define DCSR_EORIRQEN	(1 << 28)
#define DCSR_EORJMPEN	(1 << 27)
#define DCSR_EORSTOPEN	(1 << 26)
#define DCSR_SETCMPST	(1 << 25)
#define DCSR_CLRCMPST	(1 << 24)
#define DCSR_CMPST	(1 << 10)
#define DCSR_EORINTR	(1 << 9)
#define DRCMR_MAPVLD	(1 << 7)
#define DRCMR_CHLNUM	0x1f
#define DDADR_DESCADDR	0xfffffff0
#define DDADR_STOP	(1 << 0)
#define DCMD_INCSRCADDR	(1 << 31)
#define DCMD_INCTRGADDR	(1 << 30)
#define DCMD_FLOWSRC	(1 << 29)
#define DCMD_FLOWTRG	(1 << 28)
#define DCMD_STARTIRQEN	(1 << 22)
#define DCMD_ENDIRQEN	(1 << 21)
#define DCMD_ENDIAN	(1 << 18)
#define DCMD_BURST8	(1 << 16)
#define DCMD_BURST16	(2 << 16)
#define DCMD_BURST32	(3 << 16)
#define DCMD_WIDTH1	(1 << 14)
#define DCMD_WIDTH2	(2 << 14)
#define DCMD_WIDTH4	(3 << 14)
#define DCMD_LENGTH	0x01fff
typedef enum  pxa_dma_prio;
static inline int pxa_request_dma(char *name,
pxa_dma_prio prio,
void (*irq_handler)(int, void *),
void *data)
static inline void pxa_free_dma(int dma_ch)
static inline void clk_disable(struct clk *clk)
static inline int clk_enable(struct clk *clk)
static inline unsigned long clk_get_rate(struct clk *clk)
