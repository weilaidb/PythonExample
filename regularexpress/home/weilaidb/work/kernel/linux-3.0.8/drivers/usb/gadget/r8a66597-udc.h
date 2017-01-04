#define __R8A66597_H__
#define R8A66597_MAX_SAMPLING	10
#define R8A66597_MAX_NUM_PIPE	8
#define R8A66597_MAX_NUM_BULK	3
#define R8A66597_MAX_NUM_ISOC	2
#define R8A66597_MAX_NUM_INT	2
#define R8A66597_BASE_PIPENUM_BULK	3
#define R8A66597_BASE_PIPENUM_ISOC	1
#define R8A66597_BASE_PIPENUM_INT	6
#define R8A66597_BASE_BUFNUM	6
#define R8A66597_MAX_BUFNUM	0x4F
#define is_bulk_pipe(pipenum)	\
((pipenum >= R8A66597_BASE_PIPENUM_BULK) && \
(pipenum < (R8A66597_BASE_PIPENUM_BULK + R8A66597_MAX_NUM_BULK)))
#define is_interrupt_pipe(pipenum)	\
((pipenum >= R8A66597_BASE_PIPENUM_INT) && \
(pipenum < (R8A66597_BASE_PIPENUM_INT + R8A66597_MAX_NUM_INT)))
#define is_isoc_pipe(pipenum)	\
((pipenum >= R8A66597_BASE_PIPENUM_ISOC) && \
(pipenum < (R8A66597_BASE_PIPENUM_ISOC + R8A66597_MAX_NUM_ISOC)))
struct r8a66597_pipe_info ;
struct r8a66597_request ;
struct r8a66597_ep ;
struct r8a66597 ;
#define gadget_to_r8a66597(_gadget)	\
container_of(_gadget, struct r8a66597, gadget)
#define r8a66597_to_gadget(r8a66597) (&r8a66597->gadget)
static inline u16 r8a66597_read(struct r8a66597 *r8a66597, unsigned long offset)
static inline void r8a66597_read_fifo(struct r8a66597 *r8a66597,
unsigned long offset,
unsigned char *buf,
int len)
static inline void r8a66597_write(struct r8a66597 *r8a66597, u16 val,
unsigned long offset)
static inline void r8a66597_write_fifo(struct r8a66597 *r8a66597,
unsigned long offset,
unsigned char *buf,
int len)
static inline void r8a66597_mdfy(struct r8a66597 *r8a66597,
u16 val, u16 pat, unsigned long offset)
static inline u16 get_xtal_from_pdata(struct r8a66597_platdata *pdata)
#define r8a66597_bclr(r8a66597, val, offset)	\
r8a66597_mdfy(r8a66597, 0, val, offset)
#define r8a66597_bset(r8a66597, val, offset)	\
r8a66597_mdfy(r8a66597, val, 0, offset)
#define get_pipectr_addr(pipenum)	(PIPE1CTR + (pipenum - 1) * 2)
#define enable_irq_ready(r8a66597, pipenum)	\
enable_pipe_irq(r8a66597, pipenum, BRDYENB)
#define disable_irq_ready(r8a66597, pipenum)	\
disable_pipe_irq(r8a66597, pipenum, BRDYENB)
#define enable_irq_empty(r8a66597, pipenum)	\
enable_pipe_irq(r8a66597, pipenum, BEMPENB)
#define disable_irq_empty(r8a66597, pipenum)	\
disable_pipe_irq(r8a66597, pipenum, BEMPENB)
#define enable_irq_nrdy(r8a66597, pipenum)	\
enable_pipe_irq(r8a66597, pipenum, NRDYENB)
#define disable_irq_nrdy(r8a66597, pipenum)	\
disable_pipe_irq(r8a66597, pipenum, NRDYENB)
