static DEFINE_MUTEX(ip2_mutex);
static const struct file_operations ip2mem_proc_fops;
static const struct file_operations ip2_proc_fops;
static const char pcName[] = "Computone IntelliPort Plus multiport driver";
static const char pcVersion[] = "1.2.14";
static const char pcDriver_name[] = "ip2";
static const char pcIpl[] = "ip2ipl";
static int  ip2_open(PTTY, struct file *);
static void ip2_close(PTTY, struct file *);
static int  ip2_write(PTTY, const unsigned char *, int);
static int  ip2_putchar(PTTY, unsigned char);
static void ip2_flush_chars(PTTY);
static int  ip2_write_room(PTTY);
static int  ip2_chars_in_buf(PTTY);
static void ip2_flush_buffer(PTTY);
static int  ip2_ioctl(PTTY, UINT, ULONG);
static void ip2_set_termios(PTTY, struct ktermios *);
static void ip2_set_line_discipline(PTTY);
static void ip2_throttle(PTTY);
static void ip2_unthrottle(PTTY);
static void ip2_stop(PTTY);
static void ip2_start(PTTY);
static void ip2_hangup(PTTY);
static int  ip2_tiocmget(struct tty_struct *tty);
static int  ip2_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static int ip2_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount);
static void set_irq(int, int);
static void ip2_interrupt_bh(struct work_struct *work);
static irqreturn_t ip2_interrupt(int irq, void *dev_id);
static void ip2_poll(unsigned long arg);
static inline void service_all_boards(void);
static void do_input(struct work_struct *);
static void do_status(struct work_struct *);
static void ip2_wait_until_sent(PTTY,int);
static void set_params (i2ChanStrPtr, struct ktermios *);
static int get_serial_info(i2ChanStrPtr, struct serial_struct __user *);
static int set_serial_info(i2ChanStrPtr, struct serial_struct __user *);
static ssize_t ip2_ipl_read(struct file *, char __user *, size_t, loff_t *);
static ssize_t ip2_ipl_write(struct file *, const char __user *, size_t, loff_t *);
static long ip2_ipl_ioctl(struct file *, UINT, ULONG);
static int ip2_ipl_open(struct inode *, struct file *);
static int DumpTraceBuffer(char __user *, int);
static int DumpFifoBuffer( char __user *, int);
static void ip2_init_board(int, const struct firmware *);
static unsigned short find_eisa_board(int);
static int ip2_setup(char *str);
static struct tty_driver *ip2_tty_driver;
static unsigned short i2nBoards;
static i2eBordStrPtr i2BoardPtrTable[IP2_MAX_BOARDS];
static i2ChanStrPtr  DevTable[IP2_MAX_PORTS];
static void  *DevTableMem[IP2_MAX_BOARDS];
static const struct file_operations ip2_ipl = ;
static unsigned long irq_counter;
static unsigned long bh_counter;
#define USE_IQI
#define  POLL_TIMEOUT   (jiffies + 1)
static DEFINE_TIMER(PollTimer, ip2_poll, 0, 0);
#define TRACEMAX  1000
static unsigned long tracebuf[TRACEMAX];
static int tracestuff;
static int tracestrip;
static int tracewrap;
#define DBG_CNT(s) printk(KERN_DEBUG "(%s): [%x] ttyc=%d, modc=%x -> %s\n", \
tty->name,(pCh->flags), \
tty->count,0,s)
#define DBG_CNT(s)
MODULE_AUTHOR("Doug McNash");
MODULE_DESCRIPTION("Computone IntelliPort Plus Driver");
MODULE_LICENSE("GPL");
#define	MAX_CMD_STR	50
static int poll_only;
static char cmd[MAX_CMD_STR];
static int Eisa_irq;
static int Eisa_slot;
static int iindx;
static char rirqs[IP2_MAX_BOARDS];
static int Valid_Irqs[] = ;
static int io[IP2_MAX_BOARDS];
static int irq[IP2_MAX_BOARDS] = ;
MODULE_AUTHOR("Doug McNash");
MODULE_DESCRIPTION("Computone IntelliPort Plus Driver");
module_param_array(irq, int, NULL, 0);
MODULE_PARM_DESC(irq, "Interrupts for IntelliPort Cards");
module_param_array(io, int, NULL, 0);
MODULE_PARM_DESC(io, "I/O ports for IntelliPort Cards");
module_param(poll_only, bool, 0);
MODULE_PARM_DESC(poll_only, "Do not use card interrupts");
module_param_string(ip2, cmd, MAX_CMD_STR, 0);
MODULE_PARM_DESC(ip2, "Contains module parameter passed with 'ip2='");
static struct class *ip2_class;
static int __init is_valid_irq(int irq)
static void __init mark_requested_irq(char irq)
static int __exit clear_requested_irq(char irq)
static int have_requested_irq(char irq)
static void __exit ip2_cleanup_module(void)
module_exit(ip2_cleanup_module);
static const struct tty_operations ip2_ops = ;
#define IP2_SA_FLAGS	0
static const struct firmware *ip2_request_firmware(void)
static int __init ip2_setup(char *str)
__setup("ip2=", ip2_setup);
static int __init ip2_loadmain(void)
module_init(ip2_loadmain);
static void
ip2_init_board(int boardnum, const struct firmware *fw)
static unsigned short
find_eisa_board( int start_slot )
static void
set_irq( int boardnum, int boardIrq )
static inline void
service_all_boards(void)
static void
ip2_interrupt_bh(struct work_struct *work)
static void
ip2_irq_work(i2eBordStrPtr pB)
static void
ip2_polled_interrupt(void)
static irqreturn_t
ip2_interrupt(int irq, void *dev_id)
static void
ip2_poll(unsigned long arg)
static void do_input(struct work_struct *work)
static inline void  isig(int sig, struct tty_struct *tty, int flush)
static void do_status(struct work_struct *work)
static void
open_sanity_check( i2ChanStrPtr pCh, i2eBordStrPtr pBrd )
static int
ip2_open( PTTY tty, struct file *pFile )
static void
ip2_close( PTTY tty, struct file *pFile )
static void
ip2_hangup ( PTTY tty )
static int
ip2_write( PTTY tty, const unsigned char *pData, int count)
static int
ip2_putchar( PTTY tty, unsigned char ch )
static void
ip2_flush_chars( PTTY tty )
static int
ip2_write_room ( PTTY tty )
static int
ip2_chars_in_buf ( PTTY tty )
static void
ip2_flush_buffer( PTTY tty )
static void
ip2_wait_until_sent ( PTTY tty, int timeout )
static void
ip2_throttle ( PTTY tty )
static void
ip2_unthrottle ( PTTY tty )
static void
ip2_start ( PTTY tty )
static void
ip2_stop ( PTTY tty )
static int ip2_tiocmget(struct tty_struct *tty)
static int ip2_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int
ip2_ioctl ( PTTY tty, UINT cmd, ULONG arg )
static int ip2_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int
get_serial_info ( i2ChanStrPtr pCh, struct serial_struct __user *retinfo )
static int
set_serial_info( i2ChanStrPtr pCh, struct serial_struct __user *new_info )
static void
ip2_set_termios( PTTY tty, struct ktermios *old_termios )
static void
ip2_set_line_discipline ( PTTY tty )
static void
set_params( i2ChanStrPtr pCh, struct ktermios *o_tios )
static
ssize_t
ip2_ipl_read(struct file *pFile, char __user *pData, size_t count, loff_t *off )
static int
DumpFifoBuffer ( char __user *pData, int count )
static int
DumpTraceBuffer ( char __user *pData, int count )
static ssize_t
ip2_ipl_write(struct file *pFile, const char __user *pData, size_t count, loff_t *off)
static long
ip2_ipl_ioctl (struct file *pFile, UINT cmd, ULONG arg )
static int
ip2_ipl_open( struct inode *pInode, struct file *pFile )
static int
proc_ip2mem_show(struct seq_file *m, void *v)
static int proc_ip2mem_open(struct inode *inode, struct file *file)
static const struct file_operations ip2mem_proc_fops = ;
static int ip2_proc_show(struct seq_file *m, void *v)
static int ip2_proc_open(struct inode *inode, struct file *file)
static const struct file_operations ip2_proc_fops = ;
void
ip2trace (unsigned short pn, unsigned char cat, unsigned char label, unsigned long codes, ...)
MODULE_LICENSE("GPL");
static struct pci_device_id ip2main_pci_tbl[] __devinitdata __used = ;
MODULE_DEVICE_TABLE(pci, ip2main_pci_tbl);
MODULE_FIRMWARE("intelliport2.bin");
