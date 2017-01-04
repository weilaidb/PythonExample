#if defined(CONFIG_SERIAL_IMX_CONSOLE) && defined(CONFIG_MAGIC_SYSRQ)
#define SUPPORT_SYSRQ
#define URXD0 0x0
#define URTX0 0x40
#define UCR1  0x80
#define UCR2  0x84
#define UCR3  0x88
#define UCR4  0x8c
#define UFCR  0x90
#define USR1  0x94
#define USR2  0x98
#define UESC  0x9c
#define UTIM  0xa0
#define UBIR  0xa4
#define UBMR  0xa8
#define UBRC  0xac
#define MX2_ONEMS 0xb0
#define UTS (cpu_is_mx1() ? 0xd0 : 0xb4)
#define  URXD_CHARRDY    (1<<15)
#define  URXD_ERR        (1<<14)
#define  URXD_OVRRUN     (1<<13)
#define  URXD_FRMERR     (1<<12)
#define  URXD_BRK        (1<<11)
#define  URXD_PRERR      (1<<10)
#define  UCR1_ADEN       (1<<15)
#define  UCR1_ADBR       (1<<14)
#define  UCR1_TRDYEN     (1<<13)
#define  UCR1_IDEN       (1<<12)
#define  UCR1_RRDYEN     (1<<9)
#define  UCR1_RDMAEN     (1<<8)
#define  UCR1_IREN       (1<<7)
#define  UCR1_TXMPTYEN   (1<<6)
#define  UCR1_RTSDEN     (1<<5)
#define  UCR1_SNDBRK     (1<<4)
#define  UCR1_TDMAEN     (1<<3)
#define  MX1_UCR1_UARTCLKEN  (1<<2)
#define  UCR1_DOZE       (1<<1)
#define  UCR1_UARTEN     (1<<0)
#define  UCR2_ESCI     	 (1<<15)
#define  UCR2_IRTS  	 (1<<14)
#define  UCR2_CTSC  	 (1<<13)
#define  UCR2_CTS        (1<<12)
#define  UCR2_ESCEN      (1<<11)
#define  UCR2_PREN       (1<<8)
#define  UCR2_PROE       (1<<7)
#define  UCR2_STPB       (1<<6)
#define  UCR2_WS         (1<<5)
#define  UCR2_RTSEN      (1<<4)
#define  UCR2_TXEN       (1<<2)
#define  UCR2_RXEN       (1<<1)
#define  UCR2_SRST 	 (1<<0)
#define  UCR3_DTREN 	 (1<<13)
#define  UCR3_PARERREN   (1<<12)
#define  UCR3_FRAERREN   (1<<11)
#define  UCR3_DSR        (1<<10)
#define  UCR3_DCD        (1<<9)
#define  UCR3_RI         (1<<8)
#define  UCR3_TIMEOUTEN  (1<<7)
#define  UCR3_RXDSEN	 (1<<6)
#define  UCR3_AIRINTEN   (1<<5)
#define  UCR3_AWAKEN	 (1<<4)
#define  MX1_UCR3_REF25 	 (1<<3)
#define  MX1_UCR3_REF30 	 (1<<2)
#define  MX2_UCR3_RXDMUXSEL	 (1<<2)
#define  UCR3_INVT  	 (1<<1)
#define  UCR3_BPEN  	 (1<<0)
#define  UCR4_CTSTL_SHF  10
#define  UCR4_CTSTL_MASK 0x3F
#define  UCR4_INVR  	 (1<<9)
#define  UCR4_ENIRI 	 (1<<8)
#define  UCR4_WKEN  	 (1<<7)
#define  UCR4_REF16 	 (1<<6)
#define  UCR4_IRSC  	 (1<<5)
#define  UCR4_TCEN  	 (1<<3)
#define  UCR4_BKEN  	 (1<<2)
#define  UCR4_OREN  	 (1<<1)
#define  UCR4_DREN  	 (1<<0)
#define  UFCR_RXTL_SHF   0
#define  UFCR_RFDIV      (7<<7)
#define  UFCR_RFDIV_REG(x)	(((x) < 7 ? 6 - (x) : 6) << 7)
#define  UFCR_TXTL_SHF   10
#define  USR1_PARITYERR  (1<<15)
#define  USR1_RTSS  	 (1<<14)
#define  USR1_TRDY  	 (1<<13)
#define  USR1_RTSD  	 (1<<12)
#define  USR1_ESCF  	 (1<<11)
#define  USR1_FRAMERR    (1<<10)
#define  USR1_RRDY       (1<<9)
#define  USR1_TIMEOUT    (1<<7)
#define  USR1_RXDS  	 (1<<6)
#define  USR1_AIRINT	 (1<<5)
#define  USR1_AWAKE 	 (1<<4)
#define  USR2_ADET  	 (1<<15)
#define  USR2_TXFE  	 (1<<14)
#define  USR2_DTRF  	 (1<<13)
#define  USR2_IDLE  	 (1<<12)
#define  USR2_IRINT 	 (1<<8)
#define  USR2_WAKE  	 (1<<7)
#define  USR2_RTSF  	 (1<<4)
#define  USR2_TXDC  	 (1<<3)
#define  USR2_BRCD  	 (1<<2)
#define  USR2_ORE        (1<<1)
#define  USR2_RDR        (1<<0)
#define  UTS_FRCPERR	 (1<<13)
#define  UTS_LOOP        (1<<12)
#define  UTS_TXEMPTY	 (1<<6)
#define  UTS_RXEMPTY	 (1<<5)
#define  UTS_TXFULL 	 (1<<4)
#define  UTS_RXFULL 	 (1<<3)
#define  UTS_SOFTRST	 (1<<0)
#define SERIAL_IMX_MAJOR        207
#define MINOR_START	        16
#define DEV_NAME		"ttymxc"
#define MAX_INTERNAL_IRQ	MXC_INTERNAL_IRQS
#define MCTRL_TIMEOUT	(250*HZ/1000)
#define DRIVER_NAME "IMX-uart"
#define UART_NR 8
struct imx_port ;
#define USE_IRDA(sport)	((sport)->use_irda)
#define USE_IRDA(sport)	(0)
static void imx_mctrl_check(struct imx_port *sport)
static void imx_timeout(unsigned long data)
static void imx_stop_tx(struct uart_port *port)
static void imx_stop_rx(struct uart_port *port)
static void imx_enable_ms(struct uart_port *port)
static inline void imx_transmit_buffer(struct imx_port *sport)
static void imx_start_tx(struct uart_port *port)
static irqreturn_t imx_rtsint(int irq, void *dev_id)
static irqreturn_t imx_txint(int irq, void *dev_id)
static irqreturn_t imx_rxint(int irq, void *dev_id)
static irqreturn_t imx_int(int irq, void *dev_id)
static unsigned int imx_tx_empty(struct uart_port *port)
static unsigned int imx_get_mctrl(struct uart_port *port)
static void imx_set_mctrl(struct uart_port *port, unsigned int mctrl)
static void imx_break_ctl(struct uart_port *port, int break_state)
#define TXTL 2
#define RXTL 1
static int imx_setup_ufcr(struct imx_port *sport, unsigned int mode)
#define CTSTL 16
static int imx_startup(struct uart_port *port)
static void imx_shutdown(struct uart_port *port)
static void
imx_set_termios(struct uart_port *port, struct ktermios *termios,
struct ktermios *old)
static const char *imx_type(struct uart_port *port)
static void imx_release_port(struct uart_port *port)
static int imx_request_port(struct uart_port *port)
static void imx_config_port(struct uart_port *port, int flags)
static int
imx_verify_port(struct uart_port *port, struct serial_struct *ser)
static struct uart_ops imx_pops = ;
static struct imx_port *imx_ports[UART_NR];
static void imx_console_putchar(struct uart_port *port, int ch)
static void
imx_console_write(struct console *co, const char *s, unsigned int count)
static void __init
imx_console_get_options(struct imx_port *sport, int *baud,
int *parity, int *bits)
static int __init
imx_console_setup(struct console *co, char *options)
static struct uart_driver imx_reg;
static struct console imx_console = ;
#define IMX_CONSOLE	&imx_console
#define IMX_CONSOLE	NULL
static struct uart_driver imx_reg = ;
static int serial_imx_suspend(struct platform_device *dev, pm_message_t state)
static int serial_imx_resume(struct platform_device *dev)
static int serial_imx_probe(struct platform_device *pdev)
static int serial_imx_remove(struct platform_device *pdev)
static struct platform_driver serial_imx_driver = ;
static int __init imx_serial_init(void)
static void __exit imx_serial_exit(void)
module_init(imx_serial_init);
module_exit(imx_serial_exit);
MODULE_AUTHOR("Sascha Hauer");
MODULE_DESCRIPTION("IMX generic serial port driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:imx-uart");
