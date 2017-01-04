#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define InterruptTheCard(base) outw(0, (base) + 0xc)
#define ClearInterrupt(base) inw((base) + 0x0a)
#define isicom_paranoia_check(a, b, c) __isicom_paranoia_check((a), (b), (c))
#define isicom_paranoia_check(a, b, c) 0
static int isicom_probe(struct pci_dev *, const struct pci_device_id *);
static void __devexit isicom_remove(struct pci_dev *);
static struct pci_device_id isicom_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, isicom_pci_tbl);
static struct pci_driver isicom_driver = ;
static int prev_card = 3;
static struct tty_driver *isicom_normal;
static void isicom_tx(unsigned long _data);
static void isicom_start(struct tty_struct *tty);
static DEFINE_TIMER(tx, isicom_tx, 0, 0);
static signed char linuxb_to_isib[] = ;
struct	isi_board ;
struct	isi_port ;
static struct isi_board isi_card[BOARD_COUNT];
static struct isi_port  isi_ports[PORT_COUNT];
static inline int WaitTillCardIsFree(unsigned long base)
static int lock_card(struct isi_board *card)
static void unlock_card(struct isi_board *card)
static void raise_dtr(struct isi_port *port)
static inline void drop_dtr(struct isi_port *port)
static inline void raise_rts(struct isi_port *port)
static inline void drop_rts(struct isi_port *port)
static void isicom_dtr_rts(struct tty_port *port, int on)
static void drop_dtr_rts(struct isi_port *port)
static inline int __isicom_paranoia_check(struct isi_port const *port,
char *name, const char *routine)
static void isicom_tx(unsigned long _data)
static irqreturn_t isicom_interrupt(int irq, void *dev_id)
static void isicom_config_port(struct tty_struct *tty)
static inline void isicom_setup_board(struct isi_board *bp)
static int isicom_activate(struct tty_port *tport, struct tty_struct *tty)
static int isicom_carrier_raised(struct tty_port *port)
static struct tty_port *isicom_find_port(struct tty_struct *tty)
static int isicom_open(struct tty_struct *tty, struct file *filp)
static void isicom_shutdown_port(struct isi_port *port)
static void isicom_flush_buffer(struct tty_struct *tty)
static void isicom_shutdown(struct tty_port *port)
static void isicom_close(struct tty_struct *tty, struct file *filp)
static int isicom_write(struct tty_struct *tty,	const unsigned char *buf,
int count)
static int isicom_put_char(struct tty_struct *tty, unsigned char ch)
static void isicom_flush_chars(struct tty_struct *tty)
static int isicom_write_room(struct tty_struct *tty)
static int isicom_chars_in_buffer(struct tty_struct *tty)
static int isicom_send_break(struct tty_struct *tty, int length)
static int isicom_tiocmget(struct tty_struct *tty)
static int isicom_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int isicom_set_serial_info(struct tty_struct *tty,
struct serial_struct __user *info)
static int isicom_get_serial_info(struct isi_port *port,
struct serial_struct __user *info)
static int isicom_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void isicom_set_termios(struct tty_struct *tty,
struct ktermios *old_termios)
static void isicom_throttle(struct tty_struct *tty)
static void isicom_unthrottle(struct tty_struct *tty)
static void isicom_stop(struct tty_struct *tty)
static void isicom_start(struct tty_struct *tty)
static void isicom_hangup(struct tty_struct *tty)
static const struct tty_operations isicom_ops = ;
static const struct tty_port_operations isicom_port_ops = ;
static int __devinit reset_card(struct pci_dev *pdev,
const unsigned int card, unsigned int *signature)
static int __devinit load_firmware(struct pci_dev *pdev,
const unsigned int index, const unsigned int signature)
static unsigned int card_count;
static int __devinit isicom_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit isicom_remove(struct pci_dev *pdev)
static int __init isicom_init(void)
static void __exit isicom_exit(void)
module_init(isicom_init);
module_exit(isicom_exit);
MODULE_AUTHOR("MultiTech");
MODULE_DESCRIPTION("Driver for the ISI series of cards by MultiTech");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("isi608.bin");
MODULE_FIRMWARE("isi608em.bin");
MODULE_FIRMWARE("isi616em.bin");
MODULE_FIRMWARE("isi4608.bin");
MODULE_FIRMWARE("isi4616.bin");
