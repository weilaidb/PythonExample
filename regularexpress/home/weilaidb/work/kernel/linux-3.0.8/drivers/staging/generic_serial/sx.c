#define SX_VERSION	1.33
#define BYTE u8
#define WORD u16
#define _u8 u8
#define _u16 u16
#define PCI_DEVICE_ID_SPECIALIX_SX_XIO_IO8 0x2000
#undef SX_PARANOIA_CHECK
#define IRQ_RATE_LIMIT 20
#undef IRQ_RATE_LIMIT
static void sx_disable_tx_interrupts(void *ptr);
static void sx_enable_tx_interrupts(void *ptr);
static void sx_disable_rx_interrupts(void *ptr);
static void sx_enable_rx_interrupts(void *ptr);
static int sx_carrier_raised(struct tty_port *port);
static void sx_shutdown_port(void *ptr);
static int sx_set_real_termios(void *ptr);
static void sx_close(void *ptr);
static int sx_chars_in_buffer(void *ptr);
static int sx_init_board(struct sx_board *board);
static int sx_init_portstructs(int nboards, int nports);
static long sx_fw_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg);
static int sx_init_drivers(void);
static struct tty_driver *sx_driver;
static DEFINE_MUTEX(sx_boards_lock);
static struct sx_board boards[SX_NBOARDS];
static struct sx_port *sx_ports;
static int sx_initialized;
static int sx_nports;
static int sx_debug;
static int sx_poll = 1;
static int sx_slowpoll;
static int sx_maxints = 100;
static int sx_probe_addrs[] = ;
static int si_probe_addrs[] = ;
static int si1_probe_addrs[] = ;
#define NR_SX_ADDRS ARRAY_SIZE(sx_probe_addrs)
#define NR_SI_ADDRS ARRAY_SIZE(si_probe_addrs)
#define NR_SI1_ADDRS ARRAY_SIZE(si1_probe_addrs)
module_param_array(sx_probe_addrs, int, NULL, 0);
module_param_array(si_probe_addrs, int, NULL, 0);
static int sx_irqmask = -1;
module_param(sx_poll, int, 0);
module_param(sx_slowpoll, int, 0);
module_param(sx_maxints, int, 0);
module_param(sx_debug, int, 0);
module_param(sx_irqmask, int, 0);
MODULE_LICENSE("GPL");
static struct real_driver sx_real_driver = ;
#define DEBUG
#define sx_dprintk(f, str...)	if (sx_debug & f) printk (str)
#define sx_dprintk(f, str...)
#define func_enter()	sx_dprintk(SX_DEBUG_FLOW, "sx: enter %s\n",__func__)
#define func_exit()	sx_dprintk(SX_DEBUG_FLOW, "sx: exit  %s\n",__func__)
#define func_enter2()	sx_dprintk(SX_DEBUG_FLOW, "sx: enter %s (port %d)\n", \
__func__, port->line)
static const struct file_operations sx_fw_fops = ;
static struct miscdevice sx_fw_device = ;
static inline int sx_paranoia_check(struct sx_port const *port,
char *name, const char *routine)
#define sx_paranoia_check(a,b,c) 0
#define TIMEOUT_1 30
#define TIMEOUT_2 1000000
static void my_hd_io(void __iomem *p, int len)
static void my_hd(void *p, int len)
static inline void write_sx_byte(struct sx_board *board, int offset, u8 byte)
static inline u8 read_sx_byte(struct sx_board *board, int offset)
static inline void write_sx_word(struct sx_board *board, int offset, u16 word)
static inline u16 read_sx_word(struct sx_board *board, int offset)
static int sx_busy_wait_eq(struct sx_board *board,
int offset, int mask, int correctval)
static int sx_busy_wait_neq(struct sx_board *board,
int offset, int mask, int badval)
static int sx_reset(struct sx_board *board)
#define OFFSETOF(strct, elem)	((long)&(((struct strct *)NULL)->elem))
#define CHAN_OFFSET(port,elem)	(port->ch_base + OFFSETOF (_SXCHANNEL, elem))
#define MODU_OFFSET(board,addr,elem)	(addr + OFFSETOF (_SXMODULE, elem))
#define  BRD_OFFSET(board,elem)	(OFFSETOF (_SXCARD, elem))
#define sx_write_channel_byte(port, elem, val) \
write_sx_byte (port->board, CHAN_OFFSET (port, elem), val)
#define sx_read_channel_byte(port, elem) \
read_sx_byte (port->board, CHAN_OFFSET (port, elem))
#define sx_write_channel_word(port, elem, val) \
write_sx_word (port->board, CHAN_OFFSET (port, elem), val)
#define sx_read_channel_word(port, elem) \
read_sx_word (port->board, CHAN_OFFSET (port, elem))
#define sx_write_module_byte(board, addr, elem, val) \
write_sx_byte (board, MODU_OFFSET (board, addr, elem), val)
#define sx_read_module_byte(board, addr, elem) \
read_sx_byte (board, MODU_OFFSET (board, addr, elem))
#define sx_write_module_word(board, addr, elem, val) \
write_sx_word (board, MODU_OFFSET (board, addr, elem), val)
#define sx_read_module_word(board, addr, elem) \
read_sx_word (board, MODU_OFFSET (board, addr, elem))
#define sx_write_board_byte(board, elem, val) \
write_sx_byte (board, BRD_OFFSET (board, elem), val)
#define sx_read_board_byte(board, elem) \
read_sx_byte (board, BRD_OFFSET (board, elem))
#define sx_write_board_word(board, elem, val) \
write_sx_word (board, BRD_OFFSET (board, elem), val)
#define sx_read_board_word(board, elem) \
read_sx_word (board, BRD_OFFSET (board, elem))
static int sx_start_board(struct sx_board *board)
#define SX_IRQ_REG_VAL(board) \
((board->flags & SX_ISA_BOARD) ? (board->irq << 4) : 0)
static int sx_start_interrupts(struct sx_board *board)
static int sx_send_command(struct sx_port *port,
int command, int mask, int newstat)
static char *mod_type_s(int module_type)
static char *pan_type_s(int pan_type)
static int mod_compat_type(int module_type)
static void sx_reconfigure_port(struct sx_port *port)
static void sx_setsignals(struct sx_port *port, int dtr, int rts)
static int sx_getsignals(struct sx_port *port)
static void sx_set_baud(struct sx_port *port)
static int sx_set_real_termios(void *ptr)
static void sx_transmit_chars(struct sx_port *port)
static inline void sx_receive_chars(struct sx_port *port)
static inline void sx_check_modem_signals(struct sx_port *port)
static irqreturn_t sx_interrupt(int irq, void *ptr)
static void sx_pollfunc(unsigned long data)
static void sx_disable_tx_interrupts(void *ptr)
static void sx_enable_tx_interrupts(void *ptr)
static void sx_disable_rx_interrupts(void *ptr)
static void sx_enable_rx_interrupts(void *ptr)
static int sx_carrier_raised(struct tty_port *port)
static int sx_chars_in_buffer(void *ptr)
static void sx_shutdown_port(void *ptr)
static int sx_open(struct tty_struct *tty, struct file *filp)
static void sx_close(void *ptr)
#define MARCHUP		for (i = min; i < max; i++)
#define MARCHDOWN	for (i = max - 1; i >= min; i--)
#define W0		write_sx_byte(board, i, 0x55)
#define W1		write_sx_byte(board, i, 0xaa)
#define R0		if (read_sx_byte(board, i) != 0x55) return 1
#define R1		if (read_sx_byte(board, i) != 0xaa) return 1
static int do_memtest(struct sx_board *board, int min, int max)
#undef MARCHUP
#undef MARCHDOWN
#undef W0
#undef W1
#undef R0
#undef R1
#define MARCHUP		for (i = min; i < max; i += 2)
#define MARCHDOWN	for (i = max - 1; i >= min; i -= 2)
#define W0		write_sx_word(board, i, 0x55aa)
#define W1		write_sx_word(board, i, 0xaa55)
#define R0		if (read_sx_word(board, i) != 0x55aa) return 1
#define R1		if (read_sx_word(board, i) != 0xaa55) return 1
static long sx_fw_ioctl(struct file *filp, unsigned int cmd,
unsigned long arg)
static int sx_break(struct tty_struct *tty, int flag)
static int sx_tiocmget(struct tty_struct *tty)
static int sx_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int sx_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void sx_throttle(struct tty_struct *tty)
static void sx_unthrottle(struct tty_struct *tty)
static int sx_init_board(struct sx_board *board)
static void __devinit printheader(void)
static int __devinit probe_sx(struct sx_board *board)
#if defined(CONFIG_ISA) || defined(CONFIG_EISA)
static int __devinit probe_si(struct sx_board *board)
static const struct tty_operations sx_ops = ;
static const struct tty_port_operations sx_port_ops = ;
static int sx_init_drivers(void)
static int sx_init_portstructs(int nboards, int nports)
static unsigned int sx_find_free_board(void)
static void __exit sx_release_drivers(void)
static void __devexit sx_remove_card(struct sx_board *board,
struct pci_dev *pdev)
static int __devinit sx_eisa_probe(struct device *dev)
static int __devexit sx_eisa_remove(struct device *dev)
static struct eisa_device_id sx_eisa_tbl[] = ;
MODULE_DEVICE_TABLE(eisa, sx_eisa_tbl);
static struct eisa_driver sx_eisadriver = ;
static void __devinit fix_sx_pci(struct pci_dev *pdev, struct sx_board *board)
static int __devinit sx_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit sx_pci_remove(struct pci_dev *pdev)
static struct pci_device_id sx_pci_tbl[] = ;
MODULE_DEVICE_TABLE(pci, sx_pci_tbl);
static struct pci_driver sx_pcidriver = ;
static int __init sx_init(void)
static void __exit sx_exit(void)
module_init(sx_init);
module_exit(sx_exit);
