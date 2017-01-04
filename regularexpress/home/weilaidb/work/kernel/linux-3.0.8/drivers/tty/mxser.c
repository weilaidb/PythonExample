#define	MXSER_VERSION	"2.0.5"
#define	MXSERMAJOR	 174
#define MXSER_BOARDS		4
#define MXSER_PORTS_PER_BOARD	8
#define MXSER_PORTS		(MXSER_BOARDS * MXSER_PORTS_PER_BOARD)
#define MXSER_ISR_PASS_LIMIT	100
#define MOXA_OTHER_UART		0x00
#define MOXA_MUST_MU150_HWID	0x01
#define MOXA_MUST_MU860_HWID	0x02
#define WAKEUP_CHARS		256
#define UART_MCR_AFE		0x20
#define UART_LSR_SPECIAL	0x1E
#define PCI_DEVICE_ID_POS104UL	0x1044
#define PCI_DEVICE_ID_CB108	0x1080
#define PCI_DEVICE_ID_CP102UF	0x1023
#define PCI_DEVICE_ID_CP112UL	0x1120
#define PCI_DEVICE_ID_CB114	0x1142
#define PCI_DEVICE_ID_CP114UL	0x1143
#define PCI_DEVICE_ID_CB134I	0x1341
#define PCI_DEVICE_ID_CP138U	0x1380
#define C168_ASIC_ID    1
#define C104_ASIC_ID    2
#define C102_ASIC_ID	0xB
#define CI132_ASIC_ID	4
#define CI134_ASIC_ID	3
#define CI104J_ASIC_ID  5
#define MXSER_HIGHBAUD	1
#define MXSER_HAS2	2
static const struct  Gpci_uart_info[] = ;
#define UART_INFO_NUM	ARRAY_SIZE(Gpci_uart_info)
struct mxser_cardinfo ;
static const struct mxser_cardinfo mxser_cards[] = ;
static struct pci_device_id mxser_pcibrds[] = ;
MODULE_DEVICE_TABLE(pci, mxser_pcibrds);
static unsigned long ioaddr[MXSER_BOARDS];
static int ttymajor = MXSERMAJOR;
MODULE_AUTHOR("Casper Yang");
MODULE_DESCRIPTION("MOXA Smartio/Industio Family Multiport Board Device Driver");
module_param_array(ioaddr, ulong, NULL, 0);
MODULE_PARM_DESC(ioaddr, "ISA io addresses to look for a moxa board");
module_param(ttymajor, int, 0);
MODULE_LICENSE("GPL");
struct mxser_log ;
struct mxser_mon ;
struct mxser_mon_ext ;
struct mxser_board;
struct mxser_port ;
struct mxser_board ;
struct mxser_mstatus ;
static struct mxser_board mxser_boards[MXSER_BOARDS];
static struct tty_driver *mxvar_sdriver;
static struct mxser_log mxvar_log;
static int mxser_set_baud_method[MXSER_PORTS + 1];
static void mxser_enable_must_enchance_mode(unsigned long baseio)
static void mxser_disable_must_enchance_mode(unsigned long baseio)
static void mxser_set_must_xon1_value(unsigned long baseio, u8 value)
static void mxser_set_must_xoff1_value(unsigned long baseio, u8 value)
static void mxser_set_must_fifo_value(struct mxser_port *info)
static void mxser_set_must_enum_value(unsigned long baseio, u8 value)
static void mxser_get_must_hardware_id(unsigned long baseio, u8 *pId)
static void SET_MOXA_MUST_NO_SOFTWARE_FLOW_CONTROL(unsigned long baseio)
static void mxser_enable_must_tx_software_flow_control(unsigned long baseio)
static void mxser_disable_must_tx_software_flow_control(unsigned long baseio)
static void mxser_enable_must_rx_software_flow_control(unsigned long baseio)
static void mxser_disable_must_rx_software_flow_control(unsigned long baseio)
static int __devinit CheckIsMoxaMust(unsigned long io)
static void process_txrx_fifo(struct mxser_port *info)
static unsigned char mxser_get_msr(int baseaddr, int mode, int port)
static int mxser_carrier_raised(struct tty_port *port)
static void mxser_dtr_rts(struct tty_port *port, int on)
static int mxser_set_baud(struct tty_struct *tty, long newspd)
static int mxser_change_speed(struct tty_struct *tty,
struct ktermios *old_termios)
static void mxser_check_modem_status(struct tty_struct *tty,
struct mxser_port *port, int status)
static int mxser_activate(struct tty_port *port, struct tty_struct *tty)
static void mxser_shutdown_port(struct tty_port *port)
static int mxser_open(struct tty_struct *tty, struct file *filp)
static void mxser_flush_buffer(struct tty_struct *tty)
static void mxser_close_port(struct tty_port *port)
static void mxser_close(struct tty_struct *tty, struct file *filp)
static int mxser_write(struct tty_struct *tty, const unsigned char *buf, int count)
static int mxser_put_char(struct tty_struct *tty, unsigned char ch)
static void mxser_flush_chars(struct tty_struct *tty)
static int mxser_write_room(struct tty_struct *tty)
static int mxser_chars_in_buffer(struct tty_struct *tty)
static int mxser_get_serial_info(struct tty_struct *tty,
struct serial_struct __user *retinfo)
static int mxser_set_serial_info(struct tty_struct *tty,
struct serial_struct __user *new_info)
static int mxser_get_lsr_info(struct mxser_port *info,
unsigned int __user *value)
static int mxser_tiocmget(struct tty_struct *tty)
static int mxser_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int __init mxser_program_mode(int port)
static void __init mxser_normal_mode(int port)
#define CHIP_SK 	0x01
#define CHIP_DO 	0x02
#define CHIP_CS 	0x04
#define CHIP_DI 	0x08
#define EN_CCMD 	0x000
#define EN0_RSARLO	0x008
#define EN0_RSARHI	0x009
#define EN0_RCNTLO	0x00A
#define EN0_RCNTHI	0x00B
#define EN0_DCFG	0x00E
#define EN0_PORT	0x010
#define ENC_PAGE0	0x000
#define ENC_PAGE3	0x0C0
static int __init mxser_read_register(int port, unsigned short *regs)
static int mxser_ioctl_special(unsigned int cmd, void __user *argp)
static int mxser_cflags_changed(struct mxser_port *info, unsigned long arg,
struct async_icount *cprev)
static int mxser_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int mxser_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static void mxser_stoprx(struct tty_struct *tty)
static void mxser_throttle(struct tty_struct *tty)
static void mxser_unthrottle(struct tty_struct *tty)
static void mxser_stop(struct tty_struct *tty)
static void mxser_start(struct tty_struct *tty)
static void mxser_set_termios(struct tty_struct *tty, struct ktermios *old_termios)
static void mxser_wait_until_sent(struct tty_struct *tty, int timeout)
static void mxser_hangup(struct tty_struct *tty)
static int mxser_rs_break(struct tty_struct *tty, int break_state)
static void mxser_receive_chars(struct tty_struct *tty,
struct mxser_port *port, int *status)
static void mxser_transmit_chars(struct tty_struct *tty, struct mxser_port *port)
static irqreturn_t mxser_interrupt(int irq, void *dev_id)
static const struct tty_operations mxser_ops = ;
struct tty_port_operations mxser_port_ops = ;
static void mxser_release_ISA_res(struct mxser_board *brd)
static int __devinit mxser_initbrd(struct mxser_board *brd,
struct pci_dev *pdev)
static int __init mxser_get_ISA_conf(int cap, struct mxser_board *brd)
static int __devinit mxser_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit mxser_remove(struct pci_dev *pdev)
static struct pci_driver mxser_driver = ;
static int __init mxser_module_init(void)
static void __exit mxser_module_exit(void)
module_init(mxser_module_init);
module_exit(mxser_module_exit);
