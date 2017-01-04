#define DBGINFO(fmt) if (debug_level >= DEBUG_LEVEL_INFO) printk fmt
#define DBGERR(fmt) if (debug_level >= DEBUG_LEVEL_ERROR) printk fmt
#define DBGBH(fmt) if (debug_level >= DEBUG_LEVEL_BH) printk fmt
#define DBGISR(fmt) if (debug_level >= DEBUG_LEVEL_ISR) printk fmt
#define DBGDATA(info, buf, size, label) if (debug_level >= DEBUG_LEVEL_DATA) trace_block((info), (buf), (size), (label))
#if defined(CONFIG_HDLC) || (defined(CONFIG_HDLC_MODULE) && defined(CONFIG_SYNCLINK_GT_MODULE))
#define SYNCLINK_GENERIC_HDLC 1
#define SYNCLINK_GENERIC_HDLC 0
static char *driver_name     = "SyncLink GT";
static char *tty_driver_name = "synclink_gt";
static char *tty_dev_prefix  = "ttySLG";
MODULE_LICENSE("GPL");
#define MGSL_MAGIC 0x5401
#define MAX_DEVICES 32
static struct pci_device_id pci_table[] = ;
MODULE_DEVICE_TABLE(pci, pci_table);
static int  init_one(struct pci_dev *dev,const struct pci_device_id *ent);
static void remove_one(struct pci_dev *dev);
static struct pci_driver pci_driver = ;
static bool pci_registered;
static struct slgt_info *slgt_device_list;
static int slgt_device_count;
static int ttymajor;
static int debug_level;
static int maxframe[MAX_DEVICES];
module_param(ttymajor, int, 0);
module_param(debug_level, int, 0);
module_param_array(maxframe, int, NULL, 0);
MODULE_PARM_DESC(ttymajor, "TTY major device number override: 0=auto assigned");
MODULE_PARM_DESC(debug_level, "Debug syslog output: 0=disabled, 1 to 5=increasing detail");
MODULE_PARM_DESC(maxframe, "Maximum frame size used by device (4096 to 65535)");
static struct tty_driver *serial_driver;
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
static void hdlcdev_tx_done(struct slgt_info *info);
static void hdlcdev_rx(struct slgt_info *info, char *buf, int size);
static int  hdlcdev_init(struct slgt_info *info);
static void hdlcdev_exit(struct slgt_info *info);
#define SLGT_MAX_PORTS 4
#define SLGT_REG_SIZE  256
struct cond_wait ;
static void init_cond_wait(struct cond_wait *w, unsigned int data);
static void add_cond_wait(struct cond_wait **head, struct cond_wait *w);
static void remove_cond_wait(struct cond_wait **head, struct cond_wait *w);
static void flush_cond_wait(struct cond_wait **head);
struct slgt_desc
;
#define set_desc_buffer(a,b) (a).pbuf = cpu_to_le32((unsigned int)(b))
#define set_desc_next(a,b) (a).next   = cpu_to_le32((unsigned int)(b))
#define set_desc_count(a,b)(a).count  = cpu_to_le16((unsigned short)(b))
#define set_desc_eof(a,b)  (a).status = cpu_to_le16((b) ? (le16_to_cpu((a).status) | BIT0) : (le16_to_cpu((a).status) & ~BIT0))
#define set_desc_status(a, b) (a).status = cpu_to_le16((unsigned short)(b))
#define desc_count(a)      (le16_to_cpu((a).count))
#define desc_status(a)     (le16_to_cpu((a).status))
#define desc_complete(a)   (le16_to_cpu((a).status) & BIT15)
#define desc_eof(a)        (le16_to_cpu((a).status) & BIT2)
#define desc_crc_error(a)  (le16_to_cpu((a).status) & BIT1)
#define desc_abort(a)      (le16_to_cpu((a).status) & BIT0)
#define desc_residue(a)    ((le16_to_cpu((a).status) & 0x38) >> 3)
struct _input_signal_events ;
struct slgt_info ;
static MGSL_PARAMS default_params = ;
#define BH_RECEIVE  1
#define BH_TRANSMIT 2
#define BH_STATUS   4
#define IO_PIN_SHUTDOWN_LIMIT 100
#define DMABUFSIZE 256
#define DESC_LIST_SIZE 4096
#define MASK_PARITY  BIT1
#define MASK_FRAMING BIT0
#define MASK_BREAK   BIT14
#define MASK_OVERRUN BIT4
#define GSR   0x00
#define JCR   0x04
#define IODR  0x08
#define IOER  0x0c
#define IOVR  0x10
#define IOSR  0x14
#define TDR   0x80
#define RDR   0x80
#define TCR   0x82
#define TIR   0x84
#define TPR   0x85
#define RCR   0x86
#define VCR   0x88
#define CCR   0x89
#define BDR   0x8a
#define SCR   0x8c
#define SSR   0x8e
#define RDCSR 0x90
#define TDCSR 0x94
#define RDDAR 0x98
#define TDDAR 0x9c
#define XSR   0x40
#define XCR   0x44
#define RXIDLE      BIT14
#define RXBREAK     BIT14
#define IRQ_TXDATA  BIT13
#define IRQ_TXIDLE  BIT12
#define IRQ_TXUNDER BIT11
#define IRQ_RXDATA  BIT10
#define IRQ_RXIDLE  BIT9
#define IRQ_RXBREAK BIT9
#define IRQ_RXOVER  BIT8
#define IRQ_DSR     BIT7
#define IRQ_CTS     BIT6
#define IRQ_DCD     BIT5
#define IRQ_RI      BIT4
#define IRQ_ALL     0x3ff0
#define IRQ_MASTER  BIT0
#define slgt_irq_on(info, mask) \
wr_reg16((info), SCR, (unsigned short)(rd_reg16((info), SCR) | (mask)))
#define slgt_irq_off(info, mask) \
wr_reg16((info), SCR, (unsigned short)(rd_reg16((info), SCR) & ~(mask)))
static __u8  rd_reg8(struct slgt_info *info, unsigned int addr);
static void  wr_reg8(struct slgt_info *info, unsigned int addr, __u8 value);
static __u16 rd_reg16(struct slgt_info *info, unsigned int addr);
static void  wr_reg16(struct slgt_info *info, unsigned int addr, __u16 value);
static __u32 rd_reg32(struct slgt_info *info, unsigned int addr);
static void  wr_reg32(struct slgt_info *info, unsigned int addr, __u32 value);
static void  msc_set_vcr(struct slgt_info *info);
static int  startup(struct slgt_info *info);
static int  block_til_ready(struct tty_struct *tty, struct file * filp,struct slgt_info *info);
static void shutdown(struct slgt_info *info);
static void program_hw(struct slgt_info *info);
static void change_params(struct slgt_info *info);
static int  register_test(struct slgt_info *info);
static int  irq_test(struct slgt_info *info);
static int  loopback_test(struct slgt_info *info);
static int  adapter_test(struct slgt_info *info);
static void reset_adapter(struct slgt_info *info);
static void reset_port(struct slgt_info *info);
static void async_mode(struct slgt_info *info);
static void sync_mode(struct slgt_info *info);
static void rx_stop(struct slgt_info *info);
static void rx_start(struct slgt_info *info);
static void reset_rbufs(struct slgt_info *info);
static void free_rbufs(struct slgt_info *info, unsigned int first, unsigned int last);
static void rdma_reset(struct slgt_info *info);
static bool rx_get_frame(struct slgt_info *info);
static bool rx_get_buf(struct slgt_info *info);
static void tx_start(struct slgt_info *info);
static void tx_stop(struct slgt_info *info);
static void tx_set_idle(struct slgt_info *info);
static unsigned int free_tbuf_count(struct slgt_info *info);
static unsigned int tbuf_bytes(struct slgt_info *info);
static void reset_tbufs(struct slgt_info *info);
static void tdma_reset(struct slgt_info *info);
static bool tx_load(struct slgt_info *info, const char *buf, unsigned int count);
static void get_signals(struct slgt_info *info);
static void set_signals(struct slgt_info *info);
static void enable_loopback(struct slgt_info *info);
static void set_rate(struct slgt_info *info, u32 data_rate);
static int  bh_action(struct slgt_info *info);
static void bh_handler(struct work_struct *work);
static void bh_transmit(struct slgt_info *info);
static void isr_serial(struct slgt_info *info);
static void isr_rdma(struct slgt_info *info);
static void isr_txeom(struct slgt_info *info, unsigned short status);
static void isr_tdma(struct slgt_info *info);
static int  alloc_dma_bufs(struct slgt_info *info);
static void free_dma_bufs(struct slgt_info *info);
static int  alloc_desc(struct slgt_info *info);
static void free_desc(struct slgt_info *info);
static int  alloc_bufs(struct slgt_info *info, struct slgt_desc *bufs, int count);
static void free_bufs(struct slgt_info *info, struct slgt_desc *bufs, int count);
static int  alloc_tmp_rbuf(struct slgt_info *info);
static void free_tmp_rbuf(struct slgt_info *info);
static void tx_timeout(unsigned long context);
static void rx_timeout(unsigned long context);
static int  get_stats(struct slgt_info *info, struct mgsl_icount __user *user_icount);
static int  get_params(struct slgt_info *info, MGSL_PARAMS __user *params);
static int  set_params(struct slgt_info *info, MGSL_PARAMS __user *params);
static int  get_txidle(struct slgt_info *info, int __user *idle_mode);
static int  set_txidle(struct slgt_info *info, int idle_mode);
static int  tx_enable(struct slgt_info *info, int enable);
static int  tx_abort(struct slgt_info *info);
static int  rx_enable(struct slgt_info *info, int enable);
static int  modem_input_wait(struct slgt_info *info,int arg);
static int  wait_mgsl_event(struct slgt_info *info, int __user *mask_ptr);
static int  tiocmget(struct tty_struct *tty);
static int  tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static int set_break(struct tty_struct *tty, int break_state);
static int  get_interface(struct slgt_info *info, int __user *if_mode);
static int  set_interface(struct slgt_info *info, int if_mode);
static int  set_gpio(struct slgt_info *info, struct gpio_desc __user *gpio);
static int  get_gpio(struct slgt_info *info, struct gpio_desc __user *gpio);
static int  wait_gpio(struct slgt_info *info, struct gpio_desc __user *gpio);
static int  get_xsync(struct slgt_info *info, int __user *if_mode);
static int  set_xsync(struct slgt_info *info, int if_mode);
static int  get_xctrl(struct slgt_info *info, int __user *if_mode);
static int  set_xctrl(struct slgt_info *info, int if_mode);
static void add_device(struct slgt_info *info);
static void device_init(int adapter_num, struct pci_dev *pdev);
static int  claim_resources(struct slgt_info *info);
static void release_resources(struct slgt_info *info);
#define DBGINFO(fmt)
#define DBGERR(fmt)
#define DBGBH(fmt)
#define DBGISR(fmt)
static void trace_block(struct slgt_info *info, const char *data, int count, const char *label)
#define DBGDATA(info, buf, size, label)
static void dump_tbufs(struct slgt_info *info)
#define DBGTBUF(info)
static void dump_rbufs(struct slgt_info *info)
#define DBGRBUF(info)
static inline int sanity_check(struct slgt_info *info, char *devname, const char *name)
static void ldisc_receive_buf(struct tty_struct *tty,
const __u8 *data, char *flags, int count)
static int open(struct tty_struct *tty, struct file *filp)
static void close(struct tty_struct *tty, struct file *filp)
static void hangup(struct tty_struct *tty)
static void set_termios(struct tty_struct *tty, struct ktermios *old_termios)
static void update_tx_timer(struct slgt_info *info)
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
static long get_params32(struct slgt_info *info, struct MGSL_PARAMS32 __user *user_params)
static long set_params32(struct slgt_info *info, struct MGSL_PARAMS32 __user *new_params)
static long slgt_compat_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
#define slgt_compat_ioctl NULL
static inline void line_info(struct seq_file *m, struct slgt_info *info)
static int synclink_gt_proc_show(struct seq_file *m, void *v)
static int synclink_gt_proc_open(struct inode *inode, struct file *file)
static const struct file_operations synclink_gt_proc_fops = ;
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
static void hdlcdev_tx_done(struct slgt_info *info)
static void hdlcdev_rx(struct slgt_info *info, char *buf, int size)
static const struct net_device_ops hdlcdev_ops = ;
static int hdlcdev_init(struct slgt_info *info)
static void hdlcdev_exit(struct slgt_info *info)
static void rx_async(struct slgt_info *info)
static int bh_action(struct slgt_info *info)
static void bh_handler(struct work_struct *work)
static void bh_transmit(struct slgt_info *info)
static void dsr_change(struct slgt_info *info, unsigned short status)
static void cts_change(struct slgt_info *info, unsigned short status)
static void dcd_change(struct slgt_info *info, unsigned short status)
static void ri_change(struct slgt_info *info, unsigned short status)
static void isr_rxdata(struct slgt_info *info)
static void isr_serial(struct slgt_info *info)
static void isr_rdma(struct slgt_info *info)
static void isr_tdma(struct slgt_info *info)
static bool unsent_tbufs(struct slgt_info *info)
static void isr_txeom(struct slgt_info *info, unsigned short status)
static void isr_gpio(struct slgt_info *info, unsigned int changed, unsigned int state)
static irqreturn_t slgt_interrupt(int dummy, void *dev_id)
static int startup(struct slgt_info *info)
static void shutdown(struct slgt_info *info)
static void program_hw(struct slgt_info *info)
static void change_params(struct slgt_info *info)
static int get_stats(struct slgt_info *info, struct mgsl_icount __user *user_icount)
static int get_params(struct slgt_info *info, MGSL_PARAMS __user *user_params)
static int set_params(struct slgt_info *info, MGSL_PARAMS __user *new_params)
static int get_txidle(struct slgt_info *info, int __user *idle_mode)
static int set_txidle(struct slgt_info *info, int idle_mode)
static int tx_enable(struct slgt_info *info, int enable)
static int tx_abort(struct slgt_info *info)
static int rx_enable(struct slgt_info *info, int enable)
static int wait_mgsl_event(struct slgt_info *info, int __user *mask_ptr)
static int get_interface(struct slgt_info *info, int __user *if_mode)
static int set_interface(struct slgt_info *info, int if_mode)
static int get_xsync(struct slgt_info *info, int __user *xsync)
static int set_xsync(struct slgt_info *info, int xsync)
static int get_xctrl(struct slgt_info *info, int __user *xctrl)
static int set_xctrl(struct slgt_info *info, int xctrl)
static int set_gpio(struct slgt_info *info, struct gpio_desc __user *user_gpio)
static int get_gpio(struct slgt_info *info, struct gpio_desc __user *user_gpio)
static void init_cond_wait(struct cond_wait *w, unsigned int data)
static void add_cond_wait(struct cond_wait **head, struct cond_wait *w)
static void remove_cond_wait(struct cond_wait **head, struct cond_wait *cw)
static void flush_cond_wait(struct cond_wait **head)
static int wait_gpio(struct slgt_info *info, struct gpio_desc __user *user_gpio)
static int modem_input_wait(struct slgt_info *info,int arg)
static int tiocmget(struct tty_struct *tty)
static int tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int carrier_raised(struct tty_port *port)
static void dtr_rts(struct tty_port *port, int on)
static int block_til_ready(struct tty_struct *tty, struct file *filp,
struct slgt_info *info)
static int alloc_tmp_rbuf(struct slgt_info *info)
static void free_tmp_rbuf(struct slgt_info *info)
static int alloc_desc(struct slgt_info *info)
static void free_desc(struct slgt_info *info)
static int alloc_bufs(struct slgt_info *info, struct slgt_desc *bufs, int count)
static void free_bufs(struct slgt_info *info, struct slgt_desc *bufs, int count)
static int alloc_dma_bufs(struct slgt_info *info)
static void free_dma_bufs(struct slgt_info *info)
static int claim_resources(struct slgt_info *info)
static void release_resources(struct slgt_info *info)
static void add_device(struct slgt_info *info)
static const struct tty_port_operations slgt_port_ops = ;
static struct slgt_info *alloc_dev(int adapter_num, int port_num, struct pci_dev *pdev)
static void device_init(int adapter_num, struct pci_dev *pdev)
static int __devinit init_one(struct pci_dev *dev,
const struct pci_device_id *ent)
static void __devexit remove_one(struct pci_dev *dev)
static const struct tty_operations ops = ;
static void slgt_cleanup(void)
static int __init slgt_init(void)
static void __exit slgt_exit(void)
module_init(slgt_init);
module_exit(slgt_exit);
#define CALC_REGADDR() \
unsigned long reg_addr = ((unsigned long)info->reg_addr) + addr; \
if (addr >= 0x80) \
reg_addr += (info->port_num) * 32; \
else if (addr >= 0x40)	\
reg_addr += (info->port_num) * 16;
static __u8 rd_reg8(struct slgt_info *info, unsigned int addr)
static void wr_reg8(struct slgt_info *info, unsigned int addr, __u8 value)
static __u16 rd_reg16(struct slgt_info *info, unsigned int addr)
static void wr_reg16(struct slgt_info *info, unsigned int addr, __u16 value)
static __u32 rd_reg32(struct slgt_info *info, unsigned int addr)
static void wr_reg32(struct slgt_info *info, unsigned int addr, __u32 value)
static void rdma_reset(struct slgt_info *info)
static void tdma_reset(struct slgt_info *info)
static void enable_loopback(struct slgt_info *info)
static void set_rate(struct slgt_info *info, u32 rate)
static void rx_stop(struct slgt_info *info)
static void rx_start(struct slgt_info *info)
static void tx_start(struct slgt_info *info)
static void tx_stop(struct slgt_info *info)
static void reset_port(struct slgt_info *info)
static void reset_adapter(struct slgt_info *info)
static void async_mode(struct slgt_info *info)
static void sync_mode(struct slgt_info *info)
static void tx_set_idle(struct slgt_info *info)
static void get_signals(struct slgt_info *info)
static void msc_set_vcr(struct slgt_info *info)
static void set_signals(struct slgt_info *info)
static void free_rbufs(struct slgt_info *info, unsigned int i, unsigned int last)
static void reset_rbufs(struct slgt_info *info)
static bool rx_get_frame(struct slgt_info *info)
static bool rx_get_buf(struct slgt_info *info)
static void reset_tbufs(struct slgt_info *info)
static unsigned int free_tbuf_count(struct slgt_info *info)
static unsigned int tbuf_bytes(struct slgt_info *info)
static bool tx_load(struct slgt_info *info, const char *buf, unsigned int size)
static int register_test(struct slgt_info *info)
static int irq_test(struct slgt_info *info)
static int loopback_test_rx(struct slgt_info *info)
static int loopback_test(struct slgt_info *info)
static int adapter_test(struct slgt_info *info)
static void tx_timeout(unsigned long context)
static void rx_timeout(unsigned long context)
