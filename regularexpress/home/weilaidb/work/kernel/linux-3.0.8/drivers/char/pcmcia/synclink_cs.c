#define VERSION(ver,rel,seq) (((ver)<<16) | ((rel)<<8) | (seq))
#if defined(__i386__)
#  define BREAKPOINT() asm("   int $3");
#  define BREAKPOINT()
#define MAX_DEVICE_COUNT 4
#if defined(CONFIG_HDLC) || (defined(CONFIG_HDLC_MODULE) && defined(CONFIG_SYNCLINK_CS_MODULE))
#define SYNCLINK_GENERIC_HDLC 1
#define SYNCLINK_GENERIC_HDLC 0
#define GET_USER(error,value,addr) error = get_user(value,addr)
#define COPY_FROM_USER(error,dest,src,size) error = copy_from_user(dest,src,size) ? -EFAULT : 0
#define PUT_USER(error,value,addr) error = put_user(value,addr)
#define COPY_TO_USER(error,dest,src,size) error = copy_to_user(dest,src,size) ? -EFAULT : 0
static MGSL_PARAMS default_params = ;
typedef struct
RXBUF;
#define BH_RECEIVE  1
#define BH_TRANSMIT 2
#define BH_STATUS   4
#define IO_PIN_SHUTDOWN_LIMIT 100
#define RELEVANT_IFLAG(iflag) (iflag & (IGNBRK|BRKINT|IGNPAR|PARMRK|INPCK))
struct _input_signal_events ;
typedef struct _mgslpc_info  MGSLPC_INFO;
#define MGSLPC_MAGIC 0x5402
#define TXBUFSIZE 4096
#define CHA     0x00
#define CHB     0x40
#undef PVR
#define RXFIFO  0
#define TXFIFO  0
#define STAR    0x20
#define CMDR    0x20
#define RSTA    0x21
#define PRE     0x21
#define MODE    0x22
#define TIMR    0x23
#define XAD1    0x24
#define XAD2    0x25
#define RAH1    0x26
#define RAH2    0x27
#define DAFO    0x27
#define RAL1    0x28
#define RFC     0x28
#define RHCR    0x29
#define RAL2    0x29
#define RBCL    0x2a
#define XBCL    0x2a
#define RBCH    0x2b
#define XBCH    0x2b
#define CCR0    0x2c
#define CCR1    0x2d
#define CCR2    0x2e
#define CCR3    0x2f
#define VSTR    0x34
#define BGR     0x34
#define RLCR    0x35
#define AML     0x36
#define AMH     0x37
#define GIS     0x38
#define IVA     0x38
#define IPC     0x39
#define ISR     0x3a
#define IMR     0x3a
#define PVR     0x3c
#define PIS     0x3d
#define PIM     0x3d
#define PCR     0x3e
#define CCR4    0x3f
#define IRQ_BREAK_ON    BIT15
#define IRQ_DATAOVERRUN BIT14
#define IRQ_ALLSENT     BIT13
#define IRQ_UNDERRUN    BIT12
#define IRQ_TIMER       BIT11
#define IRQ_CTS         BIT10
#define IRQ_TXREPEAT    BIT9
#define IRQ_TXFIFO      BIT8
#define IRQ_RXEOM       BIT7
#define IRQ_EXITHUNT    BIT6
#define IRQ_RXTIME      BIT6
#define IRQ_DCD         BIT2
#define IRQ_OVERRUN     BIT1
#define IRQ_RXFIFO      BIT0
#define XFW   BIT6
#define CEC   BIT2
#define CTS   BIT1
#define PVR_DTR      BIT0
#define PVR_DSR      BIT1
#define PVR_RI       BIT2
#define PVR_AUTOCTS  BIT3
#define PVR_RS232    0x20
#define PVR_V35      0xe0
#define PVR_RS422    0x40
#define write_reg(info, reg, val) outb((val),(info)->io_base + (reg))
#define read_reg(info, reg) inb((info)->io_base + (reg))
#define read_reg16(info, reg) inw((info)->io_base + (reg))
#define write_reg16(info, reg, val) outw((val), (info)->io_base + (reg))
#define set_reg_bits(info, reg, mask) \
write_reg(info, (reg), \
(unsigned char) (read_reg(info, (reg)) | (mask)))
#define clear_reg_bits(info, reg, mask) \
write_reg(info, (reg), \
(unsigned char) (read_reg(info, (reg)) & ~(mask)))
static void irq_disable(MGSLPC_INFO *info, unsigned char channel, unsigned short mask)
static void irq_enable(MGSLPC_INFO *info, unsigned char channel, unsigned short mask)
#define port_irq_disable(info, mask) \
#define port_irq_enable(info, mask) \
static void rx_start(MGSLPC_INFO *info);
static void rx_stop(MGSLPC_INFO *info);
static void tx_start(MGSLPC_INFO *info, struct tty_struct *tty);
static void tx_stop(MGSLPC_INFO *info);
static void tx_set_idle(MGSLPC_INFO *info);
static void get_signals(MGSLPC_INFO *info);
static void set_signals(MGSLPC_INFO *info);
static void reset_device(MGSLPC_INFO *info);
static void hdlc_mode(MGSLPC_INFO *info);
static void async_mode(MGSLPC_INFO *info);
static void tx_timeout(unsigned long context);
static int carrier_raised(struct tty_port *port);
static void dtr_rts(struct tty_port *port, int onoff);
#if SYNCLINK_GENERIC_HDLC
#define dev_to_port(D) (dev_to_hdlc(D)->priv)
static void hdlcdev_tx_done(MGSLPC_INFO *info);
static void hdlcdev_rx(MGSLPC_INFO *info, char *buf, int size);
static int  hdlcdev_init(MGSLPC_INFO *info);
static void hdlcdev_exit(MGSLPC_INFO *info);
static void trace_block(MGSLPC_INFO *info,const char* data, int count, int xmit);
static bool register_test(MGSLPC_INFO *info);
static bool irq_test(MGSLPC_INFO *info);
static int adapter_test(MGSLPC_INFO *info);
static int claim_resources(MGSLPC_INFO *info);
static void release_resources(MGSLPC_INFO *info);
static void mgslpc_add_device(MGSLPC_INFO *info);
static void mgslpc_remove_device(MGSLPC_INFO *info);
static bool rx_get_frame(MGSLPC_INFO *info, struct tty_struct *tty);
static void rx_reset_buffers(MGSLPC_INFO *info);
static int  rx_alloc_buffers(MGSLPC_INFO *info);
static void rx_free_buffers(MGSLPC_INFO *info);
static irqreturn_t mgslpc_isr(int irq, void *dev_id);
static void bh_handler(struct work_struct *work);
static void bh_transmit(MGSLPC_INFO *info, struct tty_struct *tty);
static void bh_status(MGSLPC_INFO *info);
static int tiocmget(struct tty_struct *tty);
static int tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static int get_stats(MGSLPC_INFO *info, struct mgsl_icount __user *user_icount);
static int get_params(MGSLPC_INFO *info, MGSL_PARAMS __user *user_params);
static int set_params(MGSLPC_INFO *info, MGSL_PARAMS __user *new_params, struct tty_struct *tty);
static int get_txidle(MGSLPC_INFO *info, int __user *idle_mode);
static int set_txidle(MGSLPC_INFO *info, int idle_mode);
static int set_txenable(MGSLPC_INFO *info, int enable, struct tty_struct *tty);
static int tx_abort(MGSLPC_INFO *info);
static int set_rxenable(MGSLPC_INFO *info, int enable);
static int wait_events(MGSLPC_INFO *info, int __user *mask);
static MGSLPC_INFO *mgslpc_device_list = NULL;
static int mgslpc_device_count = 0;
static int break_on_load=0;
static int ttymajor=0;
static int debug_level = 0;
static int maxframe[MAX_DEVICE_COUNT] = ;
module_param(break_on_load, bool, 0);
module_param(ttymajor, int, 0);
module_param(debug_level, int, 0);
module_param_array(maxframe, int, NULL, 0);
MODULE_LICENSE("GPL");
static char *driver_name = "SyncLink PC Card driver";
static char *driver_version = "$Revision: 4.34 $";
static struct tty_driver *serial_driver;
#define WAKEUP_CHARS 256
static void mgslpc_change_params(MGSLPC_INFO *info, struct tty_struct *tty);
static void mgslpc_wait_until_sent(struct tty_struct *tty, int timeout);
static int mgslpc_config(struct pcmcia_device *link);
static void mgslpc_release(u_long arg);
static void mgslpc_detach(struct pcmcia_device *p_dev);
static void* mgslpc_get_text_ptr(void)
static void ldisc_receive_buf(struct tty_struct *tty,
const __u8 *data, char *flags, int count)
static const struct tty_port_operations mgslpc_port_ops = ;
static int mgslpc_probe(struct pcmcia_device *link)
static int mgslpc_ioprobe(struct pcmcia_device *p_dev, void *priv_data)
static int mgslpc_config(struct pcmcia_device *link)
static void mgslpc_release(u_long arg)
static void mgslpc_detach(struct pcmcia_device *link)
static int mgslpc_suspend(struct pcmcia_device *link)
static int mgslpc_resume(struct pcmcia_device *link)
static inline bool mgslpc_paranoia_check(MGSLPC_INFO *info,
char *name, const char *routine)
#define CMD_RXFIFO      BIT7
#define CMD_RXRESET     BIT6
#define CMD_RXFIFO_READ BIT5
#define CMD_START_TIMER BIT4
#define CMD_TXFIFO      BIT3
#define CMD_TXEOM       BIT1
#define CMD_TXRESET     BIT0
static bool wait_command_complete(MGSLPC_INFO *info, unsigned char channel)
static void issue_command(MGSLPC_INFO *info, unsigned char channel, unsigned char cmd)
static void tx_pause(struct tty_struct *tty)
static void tx_release(struct tty_struct *tty)
static int bh_action(MGSLPC_INFO *info)
static void bh_handler(struct work_struct *work)
static void bh_transmit(MGSLPC_INFO *info, struct tty_struct *tty)
static void bh_status(MGSLPC_INFO *info)
static void rx_ready_hdlc(MGSLPC_INFO *info, int eom)
static void rx_ready_async(MGSLPC_INFO *info, int tcd, struct tty_struct *tty)
static void tx_done(MGSLPC_INFO *info, struct tty_struct *tty)
static void tx_ready(MGSLPC_INFO *info, struct tty_struct *tty)
static void cts_change(MGSLPC_INFO *info, struct tty_struct *tty)
static void dcd_change(MGSLPC_INFO *info, struct tty_struct *tty)
static void dsr_change(MGSLPC_INFO *info)
static void ri_change(MGSLPC_INFO *info)
static irqreturn_t mgslpc_isr(int dummy, void *dev_id)
static int startup(MGSLPC_INFO * info, struct tty_struct *tty)
static void shutdown(MGSLPC_INFO * info, struct tty_struct *tty)
static void mgslpc_program_hw(MGSLPC_INFO *info, struct tty_struct *tty)
static void mgslpc_change_params(MGSLPC_INFO *info, struct tty_struct *tty)
static int mgslpc_put_char(struct tty_struct *tty, unsigned char ch)
static void mgslpc_flush_chars(struct tty_struct *tty)
static int mgslpc_write(struct tty_struct * tty,
const unsigned char *buf, int count)
static int mgslpc_write_room(struct tty_struct *tty)
static int mgslpc_chars_in_buffer(struct tty_struct *tty)
static void mgslpc_flush_buffer(struct tty_struct *tty)
static void mgslpc_send_xchar(struct tty_struct *tty, char ch)
static void mgslpc_throttle(struct tty_struct * tty)
static void mgslpc_unthrottle(struct tty_struct * tty)
static int get_stats(MGSLPC_INFO * info, struct mgsl_icount __user *user_icount)
static int get_params(MGSLPC_INFO * info, MGSL_PARAMS __user *user_params)
static int set_params(MGSLPC_INFO * info, MGSL_PARAMS __user *new_params, struct tty_struct *tty)
static int get_txidle(MGSLPC_INFO * info, int __user *idle_mode)
static int set_txidle(MGSLPC_INFO * info, int idle_mode)
static int get_interface(MGSLPC_INFO * info, int __user *if_mode)
static int set_interface(MGSLPC_INFO * info, int if_mode)
static int set_txenable(MGSLPC_INFO * info, int enable, struct tty_struct *tty)
static int tx_abort(MGSLPC_INFO * info)
static int set_rxenable(MGSLPC_INFO * info, int enable)
static int wait_events(MGSLPC_INFO * info, int __user *mask_ptr)
static int modem_input_wait(MGSLPC_INFO *info,int arg)
static int tiocmget(struct tty_struct *tty)
static int tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int mgslpc_break(struct tty_struct *tty, int break_state)
static int mgslpc_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int mgslpc_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void mgslpc_set_termios(struct tty_struct *tty, struct ktermios *old_termios)
static void mgslpc_close(struct tty_struct *tty, struct file * filp)
static void mgslpc_wait_until_sent(struct tty_struct *tty, int timeout)
static void mgslpc_hangup(struct tty_struct *tty)
static int carrier_raised(struct tty_port *port)
static void dtr_rts(struct tty_port *port, int onoff)
static int mgslpc_open(struct tty_struct *tty, struct file * filp)
static inline void line_info(struct seq_file *m, MGSLPC_INFO *info)
static int mgslpc_proc_show(struct seq_file *m, void *v)
static int mgslpc_proc_open(struct inode *inode, struct file *file)
static const struct file_operations mgslpc_proc_fops = ;
static int rx_alloc_buffers(MGSLPC_INFO *info)
static void rx_free_buffers(MGSLPC_INFO *info)
static int claim_resources(MGSLPC_INFO *info)
static void release_resources(MGSLPC_INFO *info)
static void mgslpc_add_device(MGSLPC_INFO *info)
static void mgslpc_remove_device(MGSLPC_INFO *remove_info)
static const struct pcmcia_device_id mgslpc_ids[] = ;
MODULE_DEVICE_TABLE(pcmcia, mgslpc_ids);
static struct pcmcia_driver mgslpc_driver = ;
static const struct tty_operations mgslpc_ops = ;
static void synclink_cs_cleanup(void)
static int __init synclink_cs_init(void)
static void __exit synclink_cs_exit(void)
module_init(synclink_cs_init);
module_exit(synclink_cs_exit);
static void mgslpc_set_rate(MGSLPC_INFO *info, unsigned char channel, unsigned int rate)
static void enable_auxclk(MGSLPC_INFO *info)
static void loopback_enable(MGSLPC_INFO *info)
static void hdlc_mode(MGSLPC_INFO *info)
static void rx_stop(MGSLPC_INFO *info)
static void rx_start(MGSLPC_INFO *info)
static void tx_start(MGSLPC_INFO *info, struct tty_struct *tty)
static void tx_stop(MGSLPC_INFO *info)
static void reset_device(MGSLPC_INFO *info)
static void async_mode(MGSLPC_INFO *info)
static void tx_set_idle(MGSLPC_INFO *info)
static void get_signals(MGSLPC_INFO *info)
static void set_signals(MGSLPC_INFO *info)
static void rx_reset_buffers(MGSLPC_INFO *info)
static bool rx_get_frame(MGSLPC_INFO *info, struct tty_struct *tty)
static bool register_test(MGSLPC_INFO *info)
static bool irq_test(MGSLPC_INFO *info)
static int adapter_test(MGSLPC_INFO *info)
static void trace_block(MGSLPC_INFO *info,const char* data, int count, int xmit)
static void tx_timeout(unsigned long context)
#if SYNCLINK_GENERIC_HDLC
static int hdlcdev_attach(struct net_device *dev, unsigned short encoding,
unsigned short parity)
static netdev_tx_t hdlcdev_xmit(struct sk_buff *skb,
struct net_device *dev)
static int hdlcdev_open(struct net_device *dev)
static int hdlcdev_close(struct net_device *dev)
static int hdlcdev_ioctl(struct net_device *dev, struct ifreq *ifr, int cmd)
static void hdlcdev_tx_timeout(struct net_device *dev)
static void hdlcdev_tx_done(MGSLPC_INFO *info)
static void hdlcdev_rx(MGSLPC_INFO *info, char *buf, int size)
static const struct net_device_ops hdlcdev_ops = ;
static int hdlcdev_init(MGSLPC_INFO *info)
static void hdlcdev_exit(MGSLPC_INFO *info)
