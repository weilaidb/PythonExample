#define DEBUG
#define VERSION_STRING DRIVER_DESC " 2.1d"
#define NOZOMI_DEBUG_LEVEL 0x00
#define P_BUF_SIZE 128
#define NFO(_err_flag_, args...)				\
do  while (0)
#define DBG1(args...) D_(0x01, ##args)
#define DBG2(args...) D_(0x02, ##args)
#define DBG3(args...) D_(0x04, ##args)
#define DBG4(args...) D_(0x08, ##args)
#define DBG5(args...) D_(0x10, ##args)
#define DBG6(args...) D_(0x20, ##args)
#define DBG7(args...) D_(0x40, ##args)
#define DBG8(args...) D_(0x80, ##args)
static int debug = NOZOMI_DEBUG_LEVEL;
#define D(lvl, args...)  do \
\
while (0)
#define D_(lvl, args...) D(lvl, ##args)
static int debug;
#define D_(lvl, args...)
#define TMP_BUF_MAX 256
#define DUMP(buf__,len__) \
do  while (0)
#define NOZOMI_NAME		"nozomi"
#define NOZOMI_NAME_TTY		"nozomi_tty"
#define DRIVER_DESC		"Nozomi driver"
#define NTTY_TTY_MAXMINORS	256
#define NTTY_FIFO_BUFFER_SIZE	8192
#define FIFO_BUFFER_SIZE_UL	8192
#define SEND_BUF_MAX		1024
#define RECEIVE_BUF_MAX		4
#define R_IIR		0x0000
#define R_FCR		0x0000
#define R_IER		0x0004
#define CONFIG_MAGIC	0xEFEFFEFE
#define TOGGLE_VALID	0x0000
#define MDM_DL1		0x0001
#define MDM_UL1		0x0002
#define MDM_DL2		0x0004
#define MDM_UL2		0x0008
#define DIAG_DL1	0x0010
#define DIAG_DL2	0x0020
#define DIAG_UL		0x0040
#define APP1_DL		0x0080
#define APP1_UL		0x0100
#define APP2_DL		0x0200
#define APP2_UL		0x0400
#define CTRL_DL		0x0800
#define CTRL_UL		0x1000
#define RESET		0x8000
#define MDM_DL		(MDM_DL1  | MDM_DL2)
#define MDM_UL		(MDM_UL1  | MDM_UL2)
#define DIAG_DL		(DIAG_DL1 | DIAG_DL2)
#define CTRL_DSR	0x0001
#define CTRL_DCD	0x0002
#define CTRL_RI		0x0004
#define CTRL_CTS	0x0008
#define CTRL_DTR	0x0001
#define CTRL_RTS	0x0002
#define MAX_PORT		4
#define NOZOMI_MAX_PORTS	5
#define NOZOMI_MAX_CARDS	(NTTY_TTY_MAXMINORS / MAX_PORT)
enum card_type ;
enum card_state ;
enum channel_type ;
enum ctrl_port_type ;
enum port_type ;
struct toggles  __attribute__ ((packed));
struct config_table  __attribute__ ((packed));
struct ctrl_dl  __attribute__ ((packed));
struct ctrl_ul  __attribute__ ((packed));
struct toggles  __attribute__ ((packed));
struct config_table  __attribute__ ((packed));
struct ctrl_dl  __attribute__ ((packed));
struct ctrl_ul  __attribute__ ((packed));
struct port ;
struct nozomi ;
struct buffer  __attribute__ ((packed));
static const struct pci_device_id nozomi_pci_tbl[] __devinitconst = ;
MODULE_DEVICE_TABLE(pci, nozomi_pci_tbl);
static struct nozomi *ndevs[NOZOMI_MAX_CARDS];
static struct tty_driver *ntty_driver;
static const struct tty_port_operations noz_tty_port_ops;
static inline struct nozomi *get_dc_by_tty(const struct tty_struct *tty)
static inline struct port *get_port_by_tty(const struct tty_struct *tty)
static void read_mem32(u32 *buf, const void __iomem *mem_addr_start,
u32 size_bytes)
static u32 write_mem32(void __iomem *mem_addr_start, const u32 *buf,
u32 size_bytes)
static void setup_memory(struct nozomi *dc)
static void dump_table(const struct nozomi *dc)
static inline void dump_table(const struct nozomi *dc)
static int nozomi_read_config_table(struct nozomi *dc)
static void enable_transmit_ul(enum port_type port, struct nozomi *dc)
static void disable_transmit_ul(enum port_type port, struct nozomi *dc)
static void enable_transmit_dl(enum port_type port, struct nozomi *dc)
static void disable_transmit_dl(enum port_type port, struct nozomi *dc)
static int send_data(enum port_type index, struct nozomi *dc)
static int receive_data(enum port_type index, struct nozomi *dc)
static char *interrupt2str(u16 interrupt)
static int receive_flow_control(struct nozomi *dc)
static enum ctrl_port_type port2ctrl(enum port_type port,
const struct nozomi *dc)
static int send_flow_control(struct nozomi *dc)
static int handle_data_dl(struct nozomi *dc, enum port_type port, u8 *toggle,
u16 read_iir, u16 mask1, u16 mask2)
static int handle_data_ul(struct nozomi *dc, enum port_type port, u16 read_iir)
static irqreturn_t interrupt_handler(int irq, void *dev_id)
static void nozomi_get_card_type(struct nozomi *dc)
static void nozomi_setup_private_data(struct nozomi *dc)
static ssize_t card_type_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(card_type, S_IRUGO, card_type_show, NULL);
static ssize_t open_ttys_show(struct device *dev, struct device_attribute *attr,
char *buf)
static DEVICE_ATTR(open_ttys, S_IRUGO, open_ttys_show, NULL);
static void make_sysfs_files(struct nozomi *dc)
static void remove_sysfs_files(struct nozomi *dc)
static int __devinit nozomi_card_init(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit tty_exit(struct nozomi *dc)
static void __devexit nozomi_card_exit(struct pci_dev *pdev)
static void set_rts(const struct tty_struct *tty, int rts)
static void set_dtr(const struct tty_struct *tty, int dtr)
static int ntty_install(struct tty_driver *driver, struct tty_struct *tty)
static void ntty_cleanup(struct tty_struct *tty)
static int ntty_activate(struct tty_port *tport, struct tty_struct *tty)
static int ntty_open(struct tty_struct *tty, struct file *filp)
static void ntty_shutdown(struct tty_port *tport)
static void ntty_close(struct tty_struct *tty, struct file *filp)
static void ntty_hangup(struct tty_struct *tty)
static int ntty_write(struct tty_struct *tty, const unsigned char *buffer,
int count)
static int ntty_write_room(struct tty_struct *tty)
static int ntty_tiocmget(struct tty_struct *tty)
static int ntty_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int ntty_cflags_changed(struct port *port, unsigned long flags,
struct async_icount *cprev)
static int ntty_tiocgicount(struct tty_struct *tty,
struct serial_icounter_struct *icount)
static int ntty_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static void ntty_unthrottle(struct tty_struct *tty)
static void ntty_throttle(struct tty_struct *tty)
static s32 ntty_chars_in_buffer(struct tty_struct *tty)
static const struct tty_port_operations noz_tty_port_ops = ;
static const struct tty_operations tty_ops = ;
static struct pci_driver nozomi_driver = ;
static __init int nozomi_init(void)
static __exit void nozomi_exit(void)
module_init(nozomi_init);
module_exit(nozomi_exit);
module_param(debug, int, S_IRUGO | S_IWUSR);
MODULE_LICENSE("Dual BSD/GPL");
MODULE_DESCRIPTION(DRIVER_DESC);
