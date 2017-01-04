#define __R8A66597_H__
#define R8A66597_MAX_NUM_PIPE		10
#define R8A66597_BUF_BSIZE		8
#define R8A66597_MAX_DEVICE		10
#define R8A66597_MAX_ROOT_HUB		2
#define R8A66597_MAX_SAMPLING		5
#define R8A66597_RH_POLL_TIME		10
#define R8A66597_MAX_DMA_CHANNEL	2
#define R8A66597_PIPE_NO_DMA		R8A66597_MAX_DMA_CHANNEL
#define check_bulk_or_isoc(pipenum)	((pipenum >= 1 && pipenum <= 5))
#define check_interrupt(pipenum)	((pipenum >= 6 && pipenum <= 9))
#define make_devsel(addr)		(addr << 12)
struct r8a66597_pipe_info ;
struct r8a66597_pipe ;
struct r8a66597_td ;
struct r8a66597_device ;
struct r8a66597_root_hub ;
struct r8a66597 ;
static inline struct r8a66597 *hcd_to_r8a66597(struct usb_hcd *hcd)
static inline struct usb_hcd *r8a66597_to_hcd(struct r8a66597 *r8a66597)
static inline struct r8a66597_td *r8a66597_get_td(struct r8a66597 *r8a66597,
u16 pipenum)
static inline struct urb *r8a66597_get_urb(struct r8a66597 *r8a66597,
u16 pipenum)
static inline u16 r8a66597_read(struct r8a66597 *r8a66597, unsigned long offset)
static inline void r8a66597_read_fifo(struct r8a66597 *r8a66597,
unsigned long offset, u16 *buf,
int len)
static inline void r8a66597_write(struct r8a66597 *r8a66597, u16 val,
unsigned long offset)
static inline void r8a66597_write_fifo(struct r8a66597 *r8a66597,
unsigned long offset, u16 *buf,
int len)
static inline void r8a66597_mdfy(struct r8a66597 *r8a66597,
u16 val, u16 pat, unsigned long offset)
#define r8a66597_bclr(r8a66597, val, offset)	\
r8a66597_mdfy(r8a66597, 0, val, offset)
#define r8a66597_bset(r8a66597, val, offset)	\
r8a66597_mdfy(r8a66597, val, 0, offset)
static inline unsigned long get_syscfg_reg(int port)
static inline unsigned long get_syssts_reg(int port)
static inline unsigned long get_dvstctr_reg(int port)
static inline unsigned long get_dmacfg_reg(int port)
static inline unsigned long get_intenb_reg(int port)
static inline unsigned long get_intsts_reg(int port)
static inline u16 get_rh_usb_speed(struct r8a66597 *r8a66597, int port)
static inline void r8a66597_port_power(struct r8a66597 *r8a66597, int port,
int power)
static inline u16 get_xtal_from_pdata(struct r8a66597_platdata *pdata)
#define get_pipectr_addr(pipenum)	(PIPE1CTR + (pipenum - 1) * 2)
#define get_pipetre_addr(pipenum)	(PIPE1TRE + (pipenum - 1) * 4)
#define get_pipetrn_addr(pipenum)	(PIPE1TRN + (pipenum - 1) * 4)
#define get_devadd_addr(address)	(DEVADD0 + address * 2)
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
