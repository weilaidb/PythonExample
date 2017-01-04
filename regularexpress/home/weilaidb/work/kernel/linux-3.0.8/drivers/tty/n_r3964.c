#define TRACE(format, args...) printk("r3964: " format "\n" , ## args)
#define TRACE_M(format, args...) printk("r3964: " format "\n" , ## args)
#define TRACE_M(fmt, arg...) do  while (0)
#define TRACE_PS(format, args...) printk("r3964: " format "\n" , ## args)
#define TRACE_PS(fmt, arg...) do  while (0)
#define TRACE_PE(format, args...) printk("r3964: " format "\n" , ## args)
#define TRACE_PE(fmt, arg...) do  while (0)
#define TRACE_L(format, args...) printk("r3964: " format "\n" , ## args)
#define TRACE_L(fmt, arg...) do  while (0)
#define TRACE_Q(format, args...) printk("r3964: " format "\n" , ## args)
#define TRACE_Q(fmt, arg...) do  while (0)
static void add_tx_queue(struct r3964_info *, struct r3964_block_header *);
static void remove_from_tx_queue(struct r3964_info *pInfo, int error_code);
static void put_char(struct r3964_info *pInfo, unsigned char ch);
static void trigger_transmit(struct r3964_info *pInfo);
static void retry_transmit(struct r3964_info *pInfo);
static void transmit_block(struct r3964_info *pInfo);
static void receive_char(struct r3964_info *pInfo, const unsigned char c);
static void receive_error(struct r3964_info *pInfo, const char flag);
static void on_timeout(unsigned long priv);
static int enable_signals(struct r3964_info *pInfo, struct pid *pid, int arg);
static int read_telegram(struct r3964_info *pInfo, struct pid *pid,
unsigned char __user * buf);
static void add_msg(struct r3964_client_info *pClient, int msg_id, int arg,
int error_code, struct r3964_block_header *pBlock);
static struct r3964_message *remove_msg(struct r3964_info *pInfo,
struct r3964_client_info *pClient);
static void remove_client_block(struct r3964_info *pInfo,
struct r3964_client_info *pClient);
static int r3964_open(struct tty_struct *tty);
static void r3964_close(struct tty_struct *tty);
static ssize_t r3964_read(struct tty_struct *tty, struct file *file,
unsigned char __user * buf, size_t nr);
static ssize_t r3964_write(struct tty_struct *tty, struct file *file,
const unsigned char *buf, size_t nr);
static int r3964_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg);
static void r3964_set_termios(struct tty_struct *tty, struct ktermios *old);
static unsigned int r3964_poll(struct tty_struct *tty, struct file *file,
struct poll_table_struct *wait);
static void r3964_receive_buf(struct tty_struct *tty, const unsigned char *cp,
char *fp, int count);
static struct tty_ldisc_ops tty_ldisc_N_R3964 = ;
static void dump_block(const unsigned char *block, unsigned int length)
static void __exit r3964_exit(void)
static int __init r3964_init(void)
module_init(r3964_init);
module_exit(r3964_exit);
static void add_tx_queue(struct r3964_info *pInfo,
struct r3964_block_header *pHeader)
static void remove_from_tx_queue(struct r3964_info *pInfo, int error_code)
static void add_rx_queue(struct r3964_info *pInfo,
struct r3964_block_header *pHeader)
static void remove_from_rx_queue(struct r3964_info *pInfo,
struct r3964_block_header *pHeader)
static void put_char(struct r3964_info *pInfo, unsigned char ch)
static void flush(struct r3964_info *pInfo)
static void trigger_transmit(struct r3964_info *pInfo)
static void retry_transmit(struct r3964_info *pInfo)
static void transmit_block(struct r3964_info *pInfo)
static void on_receive_block(struct r3964_info *pInfo)
static void receive_char(struct r3964_info *pInfo, const unsigned char c)
static void receive_error(struct r3964_info *pInfo, const char flag)
static void on_timeout(unsigned long priv)
static struct r3964_client_info *findClient(struct r3964_info *pInfo,
struct pid *pid)
static int enable_signals(struct r3964_info *pInfo, struct pid *pid, int arg)
static int read_telegram(struct r3964_info *pInfo, struct pid *pid,
unsigned char __user * buf)
static void add_msg(struct r3964_client_info *pClient, int msg_id, int arg,
int error_code, struct r3964_block_header *pBlock)
static struct r3964_message *remove_msg(struct r3964_info *pInfo,
struct r3964_client_info *pClient)
static void remove_client_block(struct r3964_info *pInfo,
struct r3964_client_info *pClient)
static int r3964_open(struct tty_struct *tty)
static void r3964_close(struct tty_struct *tty)
static ssize_t r3964_read(struct tty_struct *tty, struct file *file,
unsigned char __user * buf, size_t nr)
static ssize_t r3964_write(struct tty_struct *tty, struct file *file,
const unsigned char *data, size_t count)
static int r3964_ioctl(struct tty_struct *tty, struct file *file,
unsigned int cmd, unsigned long arg)
static void r3964_set_termios(struct tty_struct *tty, struct ktermios *old)
static unsigned int r3964_poll(struct tty_struct *tty, struct file *file,
struct poll_table_struct *wait)
static void r3964_receive_buf(struct tty_struct *tty, const unsigned char *cp,
char *fp, int count)
MODULE_LICENSE("GPL");
MODULE_ALIAS_LDISC(N_R3964);
