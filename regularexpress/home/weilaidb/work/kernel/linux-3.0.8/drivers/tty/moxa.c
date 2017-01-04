#define MOXA_VERSION		"6.0k"
#define MOXA_FW_HDRLEN		32
#define MOXAMAJOR		172
#define MAX_BOARDS		4
#define MAX_PORTS_PER_BOARD	32
#define MAX_PORTS		(MAX_BOARDS * MAX_PORTS_PER_BOARD)
#define MOXA_IS_320(brd) ((brd)->boardType == MOXA_BOARD_C320_ISA || \
(brd)->boardType == MOXA_BOARD_C320_PCI)
#define MOXA_BUS_TYPE_ISA	0
#define MOXA_BUS_TYPE_PCI	1
enum ;
static char *moxa_brdname[] =
;
static struct pci_device_id moxa_pcibrds[] = ;
MODULE_DEVICE_TABLE(pci, moxa_pcibrds);
struct moxa_port;
static struct moxa_board_conf  moxa_boards[MAX_BOARDS];
struct mxser_mstatus ;
struct moxaq_str ;
struct moxa_port ;
struct mon_str ;
#define TXSTOPPED	1
#define LOWWAIT 	2
#define EMPTYWAIT	3
#define SERIAL_DO_RESTART
#define WAKEUP_CHARS		256
static int ttymajor = MOXAMAJOR;
static struct mon_str moxaLog;
static unsigned int moxaFuncTout = HZ / 2;
static unsigned int moxaLowWaterChk;
static DEFINE_MUTEX(moxa_openlock);
static DEFINE_SPINLOCK(moxa_lock);
static unsigned long baseaddr[MAX_BOARDS];
static unsigned int type[MAX_BOARDS];
static unsigned int numports[MAX_BOARDS];
MODULE_AUTHOR("William Chen");
MODULE_DESCRIPTION("MOXA Intellio Family Multiport Board Device Driver");
MODULE_LICENSE("GPL");
MODULE_FIRMWARE("c218tunx.cod");
MODULE_FIRMWARE("cp204unx.cod");
MODULE_FIRMWARE("c320tunx.cod");
module_param_array(type, uint, NULL, 0);
MODULE_PARM_DESC(type, "card type: C218=2, C320=4");
module_param_array(baseaddr, ulong, NULL, 0);
MODULE_PARM_DESC(baseaddr, "base address");
module_param_array(numports, uint, NULL, 0);
MODULE_PARM_DESC(numports, "numports (ignored for C218)");
module_param(ttymajor, int, 0);
static int moxa_open(struct tty_struct *, struct file *);
static void moxa_close(struct tty_struct *, struct file *);
static int moxa_write(struct tty_struct *, const unsigned char *, int);
static int moxa_write_room(struct tty_struct *);
static void moxa_flush_buffer(struct tty_struct *);
static int moxa_chars_in_buffer(struct tty_struct *);
static void moxa_set_termios(struct tty_struct *, struct ktermios *);
static void moxa_stop(struct tty_struct *);
static void moxa_start(struct tty_struct *);
static void moxa_hangup(struct tty_struct *);
static int moxa_tiocmget(struct tty_struct *tty);
static int moxa_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear);
static void moxa_poll(unsigned long);
static void moxa_set_tty_param(struct tty_struct *, struct ktermios *);
static void moxa_shutdown(struct tty_port *);
static int moxa_carrier_raised(struct tty_port *);
static void moxa_dtr_rts(struct tty_port *, int);
static void MoxaPortEnable(struct moxa_port *);
static void MoxaPortDisable(struct moxa_port *);
static int MoxaPortSetTermio(struct moxa_port *, struct ktermios *, speed_t);
static int MoxaPortGetLineOut(struct moxa_port *, int *, int *);
static void MoxaPortLineCtrl(struct moxa_port *, int, int);
static void MoxaPortFlowCtrl(struct moxa_port *, int, int, int, int, int);
static int MoxaPortLineStatus(struct moxa_port *);
static void MoxaPortFlushData(struct moxa_port *, int);
static int MoxaPortWriteData(struct tty_struct *, const unsigned char *, int);
static int MoxaPortReadData(struct moxa_port *);
static int MoxaPortTxQueue(struct moxa_port *);
static int MoxaPortRxQueue(struct moxa_port *);
static int MoxaPortTxFree(struct moxa_port *);
static void MoxaPortTxDisable(struct moxa_port *);
static void MoxaPortTxEnable(struct moxa_port *);
static int moxa_get_serial_info(struct moxa_port *, struct serial_struct __user *);
static int moxa_set_serial_info(struct moxa_port *, struct serial_struct __user *);
static void MoxaSetFifo(struct moxa_port *port, int enable);
static DEFINE_SPINLOCK(moxafunc_lock);
static void moxa_wait_finish(void __iomem *ofsAddr)
static void moxafunc(void __iomem *ofsAddr, u16 cmd, u16 arg)
static int moxafuncret(void __iomem *ofsAddr, u16 cmd, u16 arg)
static void moxa_low_water_check(void __iomem *ofsAddr)
static int moxa_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int moxa_break_ctl(struct tty_struct *tty, int state)
static const struct tty_operations moxa_ops = ;
static const struct tty_port_operations moxa_port_ops = ;
static struct tty_driver *moxaDriver;
static DEFINE_TIMER(moxaTimer, moxa_poll, 0, 0);
static int moxa_check_fw_model(struct moxa_board_conf *brd, u8 model)
static int moxa_check_fw(const void *ptr)
static int moxa_load_bios(struct moxa_board_conf *brd, const u8 *buf,
size_t len)
static int moxa_load_320b(struct moxa_board_conf *brd, const u8 *ptr,
size_t len)
static int moxa_real_load_code(struct moxa_board_conf *brd, const void *ptr,
size_t len)
static int moxa_load_code(struct moxa_board_conf *brd, const void *ptr,
size_t len)
static int moxa_load_fw(struct moxa_board_conf *brd, const struct firmware *fw)
static int moxa_init_board(struct moxa_board_conf *brd, struct device *dev)
static void moxa_board_deinit(struct moxa_board_conf *brd)
static int __devinit moxa_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit moxa_pci_remove(struct pci_dev *pdev)
static struct pci_driver moxa_pci_driver = ;
static int __init moxa_init(void)
static void __exit moxa_exit(void)
module_init(moxa_init);
module_exit(moxa_exit);
static void moxa_shutdown(struct tty_port *port)
static int moxa_carrier_raised(struct tty_port *port)
static void moxa_dtr_rts(struct tty_port *port, int onoff)
static int moxa_open(struct tty_struct *tty, struct file *filp)
static void moxa_close(struct tty_struct *tty, struct file *filp)
static int moxa_write(struct tty_struct *tty,
const unsigned char *buf, int count)
static int moxa_write_room(struct tty_struct *tty)
static void moxa_flush_buffer(struct tty_struct *tty)
static int moxa_chars_in_buffer(struct tty_struct *tty)
static int moxa_tiocmget(struct tty_struct *tty)
static int moxa_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static void moxa_set_termios(struct tty_struct *tty,
struct ktermios *old_termios)
static void moxa_stop(struct tty_struct *tty)
static void moxa_start(struct tty_struct *tty)
static void moxa_hangup(struct tty_struct *tty)
static void moxa_new_dcdstate(struct moxa_port *p, u8 dcd)
static int moxa_poll_port(struct moxa_port *p, unsigned int handle,
u16 __iomem *ip)
static void moxa_poll(unsigned long ignored)
static void moxa_set_tty_param(struct tty_struct *tty, struct ktermios *old_termios)
static void MoxaPortFlushData(struct moxa_port *port, int mode)
static void MoxaPortEnable(struct moxa_port *port)
static void MoxaPortDisable(struct moxa_port *port)
static speed_t MoxaPortSetBaud(struct moxa_port *port, speed_t baud)
static int MoxaPortSetTermio(struct moxa_port *port, struct ktermios *termio,
speed_t baud)
static int MoxaPortGetLineOut(struct moxa_port *port, int *dtrState,
int *rtsState)
static void MoxaPortLineCtrl(struct moxa_port *port, int dtr, int rts)
static void MoxaPortFlowCtrl(struct moxa_port *port, int rts, int cts,
int txflow, int rxflow, int txany)
static int MoxaPortLineStatus(struct moxa_port *port)
static int MoxaPortWriteData(struct tty_struct *tty,
const unsigned char *buffer, int len)
static int MoxaPortReadData(struct moxa_port *port)
static int MoxaPortTxQueue(struct moxa_port *port)
static int MoxaPortTxFree(struct moxa_port *port)
static int MoxaPortRxQueue(struct moxa_port *port)
static void MoxaPortTxDisable(struct moxa_port *port)
static void MoxaPortTxEnable(struct moxa_port *port)
static int moxa_get_serial_info(struct moxa_port *info,
struct serial_struct __user *retinfo)
static int moxa_set_serial_info(struct moxa_port *info,
struct serial_struct __user *new_info)
static void MoxaSetFifo(struct moxa_port *port, int enable)
