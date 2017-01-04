#define VERSION(ver,rel,seq) (((ver)<<16) | ((rel)<<8) | (seq))
#if defined(__i386__)
#  define BREAKPOINT() asm("   int $3");
#  define BREAKPOINT()
#define MAX_DEVICES 12
#if defined(CONFIG_HDLC) || (defined(CONFIG_HDLC_MODULE) && defined(CONFIG_SYNCLINKMP_MODULE))
#define SYNCLINK_GENERIC_HDLC 1
#define SYNCLINK_GENERIC_HDLC 0
#define GET_USER(error,value,addr) error = get_user(value,addr)
#define COPY_FROM_USER(error,dest,src,size) error = copy_from_user(dest,src,size) ? -EFAULT : 0
#define PUT_USER(error,value,addr) error = put_user(value,addr)
#define COPY_TO_USER(error,dest,src,size) error = copy_to_user(dest,src,size) ? -EFAULT : 0
static MGSL_PARAMS default_params = ;
#define SCABUFSIZE 	1024
#define SCA_MEM_SIZE	0x40000
#define SCA_BASE_SIZE   512
#define SCA_REG_SIZE    16
#define SCA_MAX_PORTS   4
#define SCAMAXDESC 	128
#define	BUFFERLISTSIZE	4096
typedef struct _SCADESC
SCADESC, *PSCADESC;
typedef struct _SCADESC_EX
SCADESC_EX, *PSCADESC_EX;
#define BH_RECEIVE  1
#define BH_TRANSMIT 2
#define BH_STATUS   4
#define IO_PIN_SHUTDOWN_LIMIT 100
struct	_input_signal_events ;
typedef struct _synclinkmp_info  SLMP_INFO;
#define MGSL_MAGIC 0x5401
#define	MISCSTATUS_DCD_LATCHED	(SerialSignal_DCD<<8)
#define MISCSTATUS_RI_LATCHED	(SerialSignal_RI<<8)
#define MISCSTATUS_CTS_LATCHED	(SerialSignal_CTS<<8)
#define MISCSTATUS_DSR_LATCHED	(SerialSignal_DSR<<8)
#define LPR	0x00
#define PABR0	0x02
#define PABR1	0x03
#define WCRL	0x04
#define WCRM	0x05
#define WCRH	0x06
#define DPCR	0x08
#define DMER	0x09
#define ISR0	0x10
#define ISR1	0x11
#define ISR2	0x12
#define IER0	0x14
#define IER1	0x15
#define IER2	0x16
#define ITCR	0x18
#define INTVR 	0x1a
#define IMVR	0x1c
#define TRB	0x20
#define TRBL	0x20
#define TRBH	0x21
#define SR0	0x22
#define SR1	0x23
#define SR2	0x24
#define SR3	0x25
#define FST	0x26
#define IE0	0x28
#define IE1	0x29
#define IE2	0x2a
#define FIE	0x2b
#define CMD	0x2c
#define MD0	0x2e
#define MD1	0x2f
#define MD2	0x30
#define CTL	0x31
#define SA0	0x32
#define SA1	0x33
#define IDL	0x34
#define TMC	0x35
#define RXS	0x36
#define TXS	0x37
#define TRC0	0x38
#define TRC1	0x39
#define RRC	0x3a
#define CST0	0x3c
#define CST1	0x3d
#define TCNT	0x60
#define TCNTL	0x60
#define TCNTH	0x61
#define TCONR	0x62
#define TCONRL	0x62
#define TCONRH	0x63
#define TMCS	0x64
#define TEPR	0x65
#define DARL	0x80
#define DARH	0x81
#define DARB	0x82
#define BAR	0x80
#define BARL	0x80
#define BARH	0x81
#define BARB	0x82
#define SAR	0x84
#define SARL	0x84
#define SARH	0x85
#define SARB	0x86
#define CPB	0x86
#define CDA	0x88
#define CDAL	0x88
#define CDAH	0x89
#define EDA	0x8a
#define EDAL	0x8a
#define EDAH	0x8b
#define BFL	0x8c
#define BFLL	0x8c
#define BFLH	0x8d
#define BCR	0x8e
#define BCRL	0x8e
#define BCRH	0x8f
#define DSR	0x90
#define DMR	0x91
#define FCT	0x93
#define DIR	0x94
#define DCMD	0x95
#define TIMER0	0x00
#define TIMER1	0x08
#define TIMER2	0x10
#define TIMER3	0x18
#define RXDMA 	0x00
#define TXDMA 	0x20
#define NOOP		0x00
#define TXRESET		0x01
#define TXENABLE	0x02
#define TXDISABLE	0x03
#define TXCRCINIT	0x04
#define TXCRCEXCL	0x05
#define TXEOM		0x06
#define TXABORT		0x07
#define MPON		0x08
#define TXBUFCLR	0x09
#define RXRESET		0x11
#define RXENABLE	0x12
#define RXDISABLE	0x13
#define RXCRCINIT	0x14
#define RXREJECT	0x15
#define SEARCHMP	0x16
#define RXCRCEXCL	0x17
#define RXCRCCALC	0x18
#define CHRESET		0x21
#define HUNT		0x31
#define SWABORT		0x01
#define FEICLEAR	0x02
#define TXINTE 		BIT7
#define RXINTE 		BIT6
#define TXRDYE 		BIT1
#define RXRDYE 		BIT0
#define UDRN   	BIT7
#define IDLE   	BIT6
#define SYNCD  	BIT4
#define FLGD   	BIT4
#define CCTS   	BIT3
#define CDCD   	BIT2
#define BRKD   	BIT1
#define ABTD   	BIT1
#define GAPD   	BIT1
#define BRKE   	BIT0
#define IDLD	BIT0
#define EOM	BIT7
#define PMP	BIT6
#define SHRT	BIT6
#define PE	BIT5
#define ABT	BIT5
#define FRME	BIT4
#define RBIT	BIT4
#define OVRN	BIT3
#define CRCE	BIT2
static SLMP_INFO *synclinkmp_device_list = NULL;
static int synclinkmp_adapter_count = -1;
static int synclinkmp_device_count = 0;
static int break_on_load = 0;
static int ttymajor = 0;
static int debug_level = 0;
static int maxframe[MAX_DEVICES] = ;
module_param(break_on_load, bool, 0);
module_param(ttymajor, int, 0);
module_param(debug_level, int, 0);
module_param_array(maxframe, int, NULL, 0);
static char *driver_name = "SyncLink MultiPort driver";
static char *driver_version = "$Revision: 4.38 $";
static int synclinkmp_init_one(struct pci_dev *dev,const struct pci_device_id *ent);
static void synclinkmp_remove_one(struct pci_dev *dev);
static struct pci_device_id synclinkmp_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, synclinkmp_pci_tbl);
MODULE_LICENSE("GPL");
static struct pci_driver synclinkmp_pci_driver = ;
static struct tty_driver *serial_driver;
#define WAKEUP_CHARS 256
static int  open(struct tty_struct *tty, struct file * filp);
static void close(struct tty_struct *tty, struct file * filp);
static void hangup(struct tty_struct *tty);
static void set_termios(struct tty_struct *tty, struct ktermios *old_termios);
static int  write(struct tty_struct *tty, const unsigned char *buf, int count);
static int put_char(struct tty_struct *tty, unsigned char ch);
static void send_xchar(struct tty_struct *tty, char ch);
static void wait_until_sent(struct tty_struct *tty, int timeout);
static int  write_room(struct tty_struct *tty);
static void flush_chars(struct tty_struct *tty);
static void flush_buffer(struct tty_struct *tty);
static void tx_hold(struct tty_struct *tty);
static void tx_release(struct tty_struct *tty);
static int  ioctl(struct tty_struct *tty, unsigned int cmd, unsigned long arg);
static int  chars_in_buffer(struct tty_struct *tty);
static void throttle(struct tty_struct * tty);
static void unthrottle(struct tty_struct * tty);
static int set_break(struct tty_struct *tty, int break_state);
#if SYNCLINK_GENERIC_HDLC
#define dev_to_port(D) (dev_to_hdlc(D)->priv)
static void hdlcdev_tx_done(SLMP_INFO *info);
static void hdlcdev_rx(SLMP_INFO *info, char *buf, int size);
static int  hdlcdev_init(SLMP_INFO *info);
static void hdlcdev_exit(SLMP_INFO *info);
static int  get_stats(SLMP_INFO *info, struct mgsl_icount __user *user_icount);
static int  get_params(SLMP_INFO *info, MGSL_PARAMS __user *params);
static int  set_params(SLMP_INFO *info, MGSL_PARAMS __user *params);
static int  get_txidle(SLMP_INFO *info, int __user *idle_mode);
static int  set_txidle(SLMP_INFO *info, int idle_mode);
static int  tx_enable(SLMP_INFO *info, int enable);
static int  tx_abort(SLMP_INFO *info);
static int  rx_enable(SLMP_INFO *info, int enable);
static int  modem_input_wait(SLMP_INFO *info,int arg);
static int  wait_mgsl_event(SLMP_INFO *info, int __user *mask_ptr);
static int  tiocmget(struct tty_struct *tty);
static int  tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static int  set_break(struct tty_struct *tty, int break_state);
static void add_device(SLMP_INFO *info);
static void device_init(int adapter_num, struct pci_dev *pdev);
static int  claim_resources(SLMP_INFO *info);
static void release_resources(SLMP_INFO *info);
static int  startup(SLMP_INFO *info);
static int  block_til_ready(struct tty_struct *tty, struct file * filp,SLMP_INFO *info);
static int carrier_raised(struct tty_port *port);
static void shutdown(SLMP_INFO *info);
static void program_hw(SLMP_INFO *info);
static void change_params(SLMP_INFO *info);
static bool init_adapter(SLMP_INFO *info);
static bool register_test(SLMP_INFO *info);
static bool irq_test(SLMP_INFO *info);
static bool loopback_test(SLMP_INFO *info);
static int  adapter_test(SLMP_INFO *info);
static bool memory_test(SLMP_INFO *info);
static void reset_adapter(SLMP_INFO *info);
static void reset_port(SLMP_INFO *info);
static void async_mode(SLMP_INFO *info);
static void hdlc_mode(SLMP_INFO *info);
static void rx_stop(SLMP_INFO *info);
static void rx_start(SLMP_INFO *info);
static void rx_reset_buffers(SLMP_INFO *info);
static void rx_free_frame_buffers(SLMP_INFO *info, unsigned int first, unsigned int last);
static bool rx_get_frame(SLMP_INFO *info);
static void tx_start(SLMP_INFO *info);
static void tx_stop(SLMP_INFO *info);
static void tx_load_fifo(SLMP_INFO *info);
static void tx_set_idle(SLMP_INFO *info);
static void tx_load_dma_buffer(SLMP_INFO *info, const char *buf, unsigned int count);
static void get_signals(SLMP_INFO *info);
static void set_signals(SLMP_INFO *info);
static void enable_loopback(SLMP_INFO *info, int enable);
static void set_rate(SLMP_INFO *info, u32 data_rate);
static int  bh_action(SLMP_INFO *info);
static void bh_handler(struct work_struct *work);
static void bh_receive(SLMP_INFO *info);
static void bh_transmit(SLMP_INFO *info);
static void bh_status(SLMP_INFO *info);
static void isr_timer(SLMP_INFO *info);
static void isr_rxint(SLMP_INFO *info);
static void isr_rxrdy(SLMP_INFO *info);
static void isr_txint(SLMP_INFO *info);
static void isr_txrdy(SLMP_INFO *info);
static void isr_rxdmaok(SLMP_INFO *info);
static void isr_rxdmaerror(SLMP_INFO *info);
static void isr_txdmaok(SLMP_INFO *info);
static void isr_txdmaerror(SLMP_INFO *info);
static void isr_io_pin(SLMP_INFO *info, u16 status);
static int  alloc_dma_bufs(SLMP_INFO *info);
static void free_dma_bufs(SLMP_INFO *info);
static int  alloc_buf_list(SLMP_INFO *info);
static int  alloc_frame_bufs(SLMP_INFO *info, SCADESC *list, SCADESC_EX *list_ex,int count);
static int  alloc_tmp_rx_buf(SLMP_INFO *info);
static void free_tmp_rx_buf(SLMP_INFO *info);
static void load_pci_memory(SLMP_INFO *info, char* dest, const char* src, unsigned short count);
static void trace_block(SLMP_INFO *info, const char* data, int count, int xmit);
static void tx_timeout(unsigned long context);
static void status_timeout(unsigned long context);
static unsigned char read_reg(SLMP_INFO *info, unsigned char addr);
static void write_reg(SLMP_INFO *info, unsigned char addr, unsigned char val);
static u16 read_reg16(SLMP_INFO *info, unsigned char addr);
static void write_reg16(SLMP_INFO *info, unsigned char addr, u16 val);
static unsigned char read_status_reg(SLMP_INFO * info);
static void write_control_reg(SLMP_INFO * info);
static unsigned char rx_active_fifo_level = 16;
static unsigned char tx_active_fifo_level = 16;
static unsigned char tx_negate_fifo_level = 32;
static u32 misc_ctrl_value = 0x007e4040;
static u32 lcr1_brdr_value = 0x00800028;
static u32 read_ahead_count = 8;
static unsigned char dma_priority = 0x04;
static u32 sca_pci_load_interval = 64;
static void* synclinkmp_get_text_ptr(void);
static void* synclinkmp_get_text_ptr(void)
static inline int sanity_check(SLMP_INFO *info,
char *name, const char *routine)
static void ldisc_receive_buf(struct tty_struct *tty,
const __u8 *data, char *flags, int count)
static int open(struct tty_struct *tty, struct file *filp)
static void close(struct tty_struct *tty, struct file *filp)
static void hangup(struct tty_struct *tty)
static void set_termios(struct tty_struct *tty, struct ktermios *old_termios)
static int write(struct tty_struct *tty,
const unsigned char *buf, int count)
static int put_char(struct tty_struct *tty, unsigned char ch)
static void send_xchar(struct tty_struct *tty, char ch)
static void wait_until_sent(struct tty_struct *tty, int timeout)
static int write_room(struct tty_struct *tty)
static void flush_chars(struct tty_struct *tty)
static void flush_buffer(struct tty_struct *tty)
static void tx_hold(struct tty_struct *tty)
static void tx_release(struct tty_struct *tty)
static int ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static inline void line_info(struct seq_file *m, SLMP_INFO *info)
static int synclinkmp_proc_show(struct seq_file *m, void *v)
static int synclinkmp_proc_open(struct inode *inode, struct file *file)
static const struct file_operations synclinkmp_proc_fops = ;
static int chars_in_buffer(struct tty_struct *tty)
static void throttle(struct tty_struct * tty)
static void unthrottle(struct tty_struct * tty)
static int set_break(struct tty_struct *tty, int break_state)
#if SYNCLINK_GENERIC_HDLC
static int hdlcdev_attach(struct net_device *dev, unsigned short encoding,
unsigned short parity)
static netdev_tx_t hdlcdev_xmit(struct sk_buff *skb,
struct net_device *dev)
static int hdlcdev_open(struct net_device *dev)
static int hdlcdev_close(struct net_device *dev)
static int hdlcdev_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void hdlcdev_tx_timeout(struct net_device *dev)
static void hdlcdev_tx_done(SLMP_INFO *info)
static void hdlcdev_rx(SLMP_INFO *info, char *buf, int size)
static const struct net_device_ops hdlcdev_ops = ;
static int hdlcdev_init(SLMP_INFO *info)
static void hdlcdev_exit(SLMP_INFO *info)
static int bh_action(SLMP_INFO *info)
static void bh_handler(struct work_struct *work)
static void bh_receive(SLMP_INFO *info)
static void bh_transmit(SLMP_INFO *info)
static void bh_status(SLMP_INFO *info)
static void isr_timer(SLMP_INFO * info)
static void isr_rxint(SLMP_INFO * info)
static void isr_rxrdy(SLMP_INFO * info)
static void isr_txeom(SLMP_INFO * info, unsigned char status)
static void isr_txint(SLMP_INFO * info)
static void isr_txrdy(SLMP_INFO * info)
static void isr_rxdmaok(SLMP_INFO * info)
static void isr_rxdmaerror(SLMP_INFO * info)
static void isr_txdmaok(SLMP_INFO * info)
static void isr_txdmaerror(SLMP_INFO * info)
static void isr_io_pin( SLMP_INFO *info, u16 status )
static irqreturn_t synclinkmp_interrupt(int dummy, void *dev_id)
static int startup(SLMP_INFO * info)
static void shutdown(SLMP_INFO * info)
static void program_hw(SLMP_INFO *info)
static void change_params(SLMP_INFO *info)
static int get_stats(SLMP_INFO * info, struct mgsl_icount __user *user_icount)
static int get_params(SLMP_INFO * info, MGSL_PARAMS __user *user_params)
static int set_params(SLMP_INFO * info, MGSL_PARAMS __user *new_params)
static int get_txidle(SLMP_INFO * info, int __user *idle_mode)
static int set_txidle(SLMP_INFO * info, int idle_mode)
static int tx_enable(SLMP_INFO * info, int enable)
static int tx_abort(SLMP_INFO * info)
static int rx_enable(SLMP_INFO * info, int enable)
static int wait_mgsl_event(SLMP_INFO * info, int __user *mask_ptr)
static int modem_input_wait(SLMP_INFO *info,int arg)
static int tiocmget(struct tty_struct *tty)
static int tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int carrier_raised(struct tty_port *port)
static void dtr_rts(struct tty_port *port, int on)
static int block_til_ready(struct tty_struct *tty, struct file *filp,
SLMP_INFO *info)
static int alloc_dma_bufs(SLMP_INFO *info)
static int alloc_buf_list(SLMP_INFO *info)
static int alloc_frame_bufs(SLMP_INFO *info, SCADESC *buf_list,SCADESC_EX *buf_list_ex,int count)
static void free_dma_bufs(SLMP_INFO *info)
static int alloc_tmp_rx_buf(SLMP_INFO *info)
static void free_tmp_rx_buf(SLMP_INFO *info)
static int claim_resources(SLMP_INFO *info)
static void release_resources(SLMP_INFO *info)
static void add_device(SLMP_INFO *info)
static const struct tty_port_operations port_ops = ;
static SLMP_INFO *alloc_dev(int adapter_num, int port_num, struct pci_dev *pdev)
static void device_init(int adapter_num, struct pci_dev *pdev)
static const struct tty_operations ops = ;
static void synclinkmp_cleanup(void)
static int __init synclinkmp_init(void)
static void __exit synclinkmp_exit(void)
module_init(synclinkmp_init);
module_exit(synclinkmp_exit);
static void enable_loopback(SLMP_INFO *info, int enable)
static void set_rate( SLMP_INFO *info, u32 data_rate )
static void rx_stop(SLMP_INFO *info)
static void rx_start(SLMP_INFO *info)
static void tx_start(SLMP_INFO *info)
static void tx_stop( SLMP_INFO *info )
static void tx_load_fifo(SLMP_INFO *info)
static void reset_port(SLMP_INFO *info)
static void reset_adapter(SLMP_INFO *info)
static void async_mode(SLMP_INFO *info)
static void hdlc_mode(SLMP_INFO *info)
static void tx_set_idle(SLMP_INFO *info)
static void get_signals(SLMP_INFO *info)
static void set_signals(SLMP_INFO *info)
static void rx_reset_buffers(SLMP_INFO *info)
static void rx_free_frame_buffers(SLMP_INFO *info, unsigned int first, unsigned int last)
static bool rx_get_frame(SLMP_INFO *info)
static void tx_load_dma_buffer(SLMP_INFO *info, const char *buf, unsigned int count)
static bool register_test(SLMP_INFO *info)
static bool irq_test(SLMP_INFO *info)
static bool sca_init(SLMP_INFO *info)
static bool init_adapter(SLMP_INFO *info)
static bool loopback_test(SLMP_INFO *info)
static int adapter_test( SLMP_INFO *info )
static bool memory_test(SLMP_INFO *info)
static void load_pci_memory(SLMP_INFO *info, char* dest, const char* src, unsigned short count)
static void trace_block(SLMP_INFO *info,const char* data, int count, int xmit)
static void tx_timeout(unsigned long context)
static void status_timeout(unsigned long context)
#define CALC_REGADDR() \
unsigned char * RegAddr = (unsigned char*)(info->sca_base + Addr); \
if (info->port_num > 1) \
RegAddr += 256; \
if ( info->port_num & 1)
static unsigned char read_reg(SLMP_INFO * info, unsigned char Addr)
static void write_reg(SLMP_INFO * info, unsigned char Addr, unsigned char Value)
static u16 read_reg16(SLMP_INFO * info, unsigned char Addr)
static void write_reg16(SLMP_INFO * info, unsigned char Addr, u16 Value)
static unsigned char read_status_reg(SLMP_INFO * info)
static void write_control_reg(SLMP_INFO * info)
static int __devinit synclinkmp_init_one (struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit synclinkmp_remove_one (struct pci_dev *dev)
