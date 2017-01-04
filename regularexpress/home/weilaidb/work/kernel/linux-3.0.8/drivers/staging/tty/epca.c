#define VERSION            "1.3.0.1-LK2.6"
#define DIGIINFOMAJOR       35
#define MAXCARDS 7
#define epcaassert(x, msg)  if (!(x)) epca_error(__LINE__, msg)
#define PFX "epca: "
static int nbdevs, num_cards, liloconfig;
static int digi_poller_inhibited = 1 ;
static int setup_error_code;
static int invalid_lilo_config;
static DEFINE_SPINLOCK(epca_lock);
static struct board_info boards[MAXBOARDS];
static struct tty_driver *pc_driver;
static struct tty_driver *pc_info;
static struct channel digi_channels[MAX_ALLOC];
static struct channel *card_ptr[MAXCARDS];
static struct timer_list epca_timer;
static void memwinon(struct board_info *b, unsigned int win);
static void memwinoff(struct board_info *b, unsigned int win);
static void globalwinon(struct channel *ch);
static void rxwinon(struct channel *ch);
static void txwinon(struct channel *ch);
static void memoff(struct channel *ch);
static void assertgwinon(struct channel *ch);
static void assertmemoff(struct channel *ch);
static void pcxem_memwinon(struct board_info *b, unsigned int win);
static void pcxem_memwinoff(struct board_info *b, unsigned int win);
static void pcxem_globalwinon(struct channel *ch);
static void pcxem_rxwinon(struct channel *ch);
static void pcxem_txwinon(struct channel *ch);
static void pcxem_memoff(struct channel *ch);
static void pcxe_memwinon(struct board_info *b, unsigned int win);
static void pcxe_memwinoff(struct board_info *b, unsigned int win);
static void pcxe_globalwinon(struct channel *ch);
static void pcxe_rxwinon(struct channel *ch);
static void pcxe_txwinon(struct channel *ch);
static void pcxe_memoff(struct channel *ch);
static void pcxi_memwinon(struct board_info *b, unsigned int win);
static void pcxi_memwinoff(struct board_info *b, unsigned int win);
static void pcxi_globalwinon(struct channel *ch);
static void pcxi_rxwinon(struct channel *ch);
static void pcxi_txwinon(struct channel *ch);
static void pcxi_memoff(struct channel *ch);
static void dummy_memwinon(struct board_info *b, unsigned int win);
static void dummy_memwinoff(struct board_info *b, unsigned int win);
static void dummy_globalwinon(struct channel *ch);
static void dummy_rxwinon(struct channel *ch);
static void dummy_txwinon(struct channel *ch);
static void dummy_memoff(struct channel *ch);
static void dummy_assertgwinon(struct channel *ch);
static void dummy_assertmemoff(struct channel *ch);
static struct channel *verifyChannel(struct tty_struct *);
static void pc_sched_event(struct channel *, int);
static void epca_error(int, char *);
static void pc_close(struct tty_struct *, struct file *);
static void shutdown(struct channel *, struct tty_struct *tty);
static void pc_hangup(struct tty_struct *);
static int pc_write_room(struct tty_struct *);
static int pc_chars_in_buffer(struct tty_struct *);
static void pc_flush_buffer(struct tty_struct *);
static void pc_flush_chars(struct tty_struct *);
static int pc_open(struct tty_struct *, struct file *);
static void post_fep_init(unsigned int crd);
static void epcapoll(unsigned long);
static void doevent(int);
static void fepcmd(struct channel *, int, int, int, int, int);
static unsigned termios2digi_h(struct channel *ch, unsigned);
static unsigned termios2digi_i(struct channel *ch, unsigned);
static unsigned termios2digi_c(struct channel *ch, unsigned);
static void epcaparam(struct tty_struct *, struct channel *);
static void receive_data(struct channel *, struct tty_struct *tty);
static int pc_ioctl(struct tty_struct *,
unsigned int, unsigned long);
static int info_ioctl(struct tty_struct *,
unsigned int, unsigned long);
static void pc_set_termios(struct tty_struct *, struct ktermios *);
static void do_softint(struct work_struct *work);
static void pc_stop(struct tty_struct *);
static void pc_start(struct tty_struct *);
static void pc_throttle(struct tty_struct *tty);
static void pc_unthrottle(struct tty_struct *tty);
static int pc_send_break(struct tty_struct *tty, int msec);
static void setup_empty_event(struct tty_struct *tty, struct channel *ch);
static int pc_write(struct tty_struct *, const unsigned char *, int);
static int pc_init(void);
static int init_PCI(void);
static void memwinon(struct board_info *b, unsigned int win)
static void memwinoff(struct board_info *b, unsigned int win)
static void globalwinon(struct channel *ch)
static void rxwinon(struct channel *ch)
static void txwinon(struct channel *ch)
static void memoff(struct channel *ch)
static void assertgwinon(struct channel *ch)
static void assertmemoff(struct channel *ch)
static void pcxem_memwinon(struct board_info *b, unsigned int win)
static void pcxem_memwinoff(struct board_info *b, unsigned int win)
static void pcxem_globalwinon(struct channel *ch)
static void pcxem_rxwinon(struct channel *ch)
static void pcxem_txwinon(struct channel *ch)
static void pcxem_memoff(struct channel *ch)
static void pcxe_memwinon(struct board_info *b, unsigned int win)
static void pcxe_memwinoff(struct board_info *b, unsigned int win)
static void pcxe_globalwinon(struct channel *ch)
static void pcxe_rxwinon(struct channel *ch)
static void pcxe_txwinon(struct channel *ch)
static void pcxe_memoff(struct channel *ch)
static void pcxi_memwinon(struct board_info *b, unsigned int win)
static void pcxi_memwinoff(struct board_info *b, unsigned int win)
static void pcxi_globalwinon(struct channel *ch)
static void pcxi_rxwinon(struct channel *ch)
static void pcxi_txwinon(struct channel *ch)
static void pcxi_memoff(struct channel *ch)
static void pcxi_assertgwinon(struct channel *ch)
static void pcxi_assertmemoff(struct channel *ch)
static void dummy_memwinon(struct board_info *b, unsigned int win)
static void dummy_memwinoff(struct board_info *b, unsigned int win)
static void dummy_globalwinon(struct channel *ch)
static void dummy_rxwinon(struct channel *ch)
static void dummy_txwinon(struct channel *ch)
static void dummy_memoff(struct channel *ch)
static void dummy_assertgwinon(struct channel *ch)
static void dummy_assertmemoff(struct channel *ch)
static struct channel *verifyChannel(struct tty_struct *tty)
static void pc_sched_event(struct channel *ch, int event)
static void epca_error(int line, char *msg)
static void pc_close(struct tty_struct *tty, struct file *filp)
static void shutdown(struct channel *ch, struct tty_struct *tty)
static void pc_hangup(struct tty_struct *tty)
static int pc_write(struct tty_struct *tty,
const unsigned char *buf, int bytesAvailable)
static int pc_write_room(struct tty_struct *tty)
static int pc_chars_in_buffer(struct tty_struct *tty)
static void pc_flush_buffer(struct tty_struct *tty)
static void pc_flush_chars(struct tty_struct *tty)
static int epca_carrier_raised(struct tty_port *port)
static void epca_dtr_rts(struct tty_port *port, int onoff)
static int pc_open(struct tty_struct *tty, struct file *filp)
static int __init epca_module_init(void)
module_init(epca_module_init);
static struct pci_driver epca_driver;
static void __exit epca_module_exit(void)
module_exit(epca_module_exit);
static const struct tty_operations pc_ops = ;
static const struct tty_port_operations epca_port_ops = ;
static int info_open(struct tty_struct *tty, struct file *filp)
static const struct tty_operations info_ops = ;
static int __init pc_init(void)
static void post_fep_init(unsigned int crd)
static void epcapoll(unsigned long ignored)
static void doevent(int crd)
}
static void fepcmd(struct channel *ch, int cmd, int word_or_byte,
int byte2, int ncmds, int bytecmd)
static unsigned termios2digi_h(struct channel *ch, unsigned cflag)
static unsigned termios2digi_i(struct channel *ch, unsigned iflag)
static unsigned termios2digi_c(struct channel *ch, unsigned cflag)
static void epcaparam(struct tty_struct *tty, struct channel *ch)
static void receive_data(struct channel *ch, struct tty_struct *tty)
static int info_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int pc_tiocmget(struct tty_struct *tty)
static int pc_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int pc_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void pc_set_termios(struct tty_struct *tty, struct ktermios *old_termios)
static void do_softint(struct work_struct *work)
static void pc_stop(struct tty_struct *tty)
static void pc_start(struct tty_struct *tty)
static void pc_throttle(struct tty_struct *tty)
static void pc_unthrottle(struct tty_struct *tty)
static int pc_send_break(struct tty_struct *tty, int msec)
static void setup_empty_event(struct tty_struct *tty, struct channel *ch)
static void __init epca_setup(char *str, int *ints)
static int __init epca_real_setup(char *str)
__setup("digiepca", epca_real_setup);
enum epic_board_types ;
static struct  epca_info_tbl[] = ;
static int __devinit epca_init_one(struct pci_dev *pdev,
const struct pci_device_id *ent)
static struct pci_device_id epca_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, epca_pci_tbl);
static int __init init_PCI(void)
MODULE_LICENSE("GPL");
