#define __LINUX_USB_MUSB_H
enum musb_mode ;
struct clk;
enum musb_fifo_style  __attribute__ ((packed));
enum musb_buf_mode  __attribute__ ((packed));
struct musb_fifo_cfg ;
#define MUSB_EP_FIFO(ep, st, m, pkt)		\
#define MUSB_EP_FIFO_SINGLE(ep, st, pkt)	\
MUSB_EP_FIFO(ep, st, BUF_SINGLE, pkt)
#define MUSB_EP_FIFO_DOUBLE(ep, st, pkt)	\
MUSB_EP_FIFO(ep, st, BUF_DOUBLE, pkt)
struct musb_hdrc_eps_bits ;
struct musb_hdrc_config ;
struct musb_hdrc_platform_data ;
#define	TUSB6010_OSCCLK_60	16667
#define	TUSB6010_REFCLK_24	41667
#define	TUSB6010_REFCLK_19	52083
extern int __init tusb6010_setup_interface(
struct musb_hdrc_platform_data *data,
unsigned ps_refclk, unsigned waitpin,
unsigned async_cs, unsigned sync_cs,
unsigned irq, unsigned dmachan);
extern int tusb6010_platform_retime(unsigned is_refclk);
