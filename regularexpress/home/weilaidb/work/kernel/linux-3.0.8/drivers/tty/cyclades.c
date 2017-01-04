#undef	BLOCKMOVE
#define	Z_WAKE
#undef	Z_EXT_CHARS_IN_BUFFER
#define CY_VERSION	"2.6"
#define NR_CARDS	4
#define NR_PORTS	256
#define ZO_V1	0
#define ZO_V2	1
#define ZE_V1	2
#define	SERIAL_PARANOIA_CHECK
#undef	CY_DEBUG_OPEN
#undef	CY_DEBUG_THROTTLE
#undef	CY_DEBUG_OTHER
#undef	CY_DEBUG_IO
#undef	CY_DEBUG_COUNT
#undef	CY_DEBUG_DTR
#undef	CY_DEBUG_WAIT_UNTIL_SENT
#undef	CY_DEBUG_INTERRUPTS
#undef	CY_16Y_HACK
#undef	CY_ENABLE_MONITORING
#undef	CY_PCI_DEBUG
static void cy_send_xchar(struct tty_struct *tty, char ch);
#define	SERIAL_XMIT_SIZE	(min(PAGE_SIZE, 4096))
#define STD_COM_FLAGS (0)
#define ZL_MAX_BLOCKS	16
#define DRIVER_VERSION	0x02010203
#define RAM_SIZE 0x80000
enum zblock_type ;
struct zfile_header  __attribute__ ((packed));
struct zfile_config  __attribute__ ((packed));
struct zfile_block  __attribute__ ((packed));
static struct tty_driver *cy_serial_driver;
static unsigned int cy_isa_addresses[] = ;
#define NR_ISA_ADDRS ARRAY_SIZE(cy_isa_addresses)
static long maddr[NR_CARDS];
static int irq[NR_CARDS];
module_param_array(maddr, long, NULL, 0);
module_param_array(irq, int, NULL, 0);
static struct cyclades_card cy_card[NR_CARDS];
static int cy_next_channel;
static const int baud_table[] = ;
static const char baud_co_25[] = ;
static const char baud_bpr_25[] = ;
static const char baud_co_60[] = ;
static const char baud_bpr_60[] = ;
static const char baud_cor3[] = ;
static const char rflow_thr[] = ;
static const unsigned int cy_chip_offset[] = ;
static const struct pci_device_id cy_pci_dev_id[] = ;
MODULE_DEVICE_TABLE(pci, cy_pci_dev_id);
static void cy_start(struct tty_struct *);
static void cy_set_line_char(struct cyclades_port *, struct tty_struct *);
static int cyz_issue_cmd(struct cyclades_card *, __u32, __u8, __u32);
static unsigned detect_isa_irq(void __iomem *);
static void cyz_poll(unsigned long);
static long cyz_polling_cycle = CZ_DEF_POLL;
static DEFINE_TIMER(cyz_timerlist, cyz_poll, 0, 0);
static void cyz_rx_restart(unsigned long);
static struct timer_list cyz_rx_full_timer[NR_PORTS];
static inline void cyy_writeb(struct cyclades_port *port, u32 reg, u8 val)
static inline u8 cyy_readb(struct cyclades_port *port, u32 reg)
static inline bool cy_is_Z(struct cyclades_card *card)
static inline bool __cyz_fpga_loaded(struct RUNTIME_9060 __iomem *ctl_addr)
static inline bool cyz_fpga_loaded(struct cyclades_card *card)
static inline bool cyz_is_loaded(struct cyclades_card *card)
static inline int serial_paranoia_check(struct cyclades_port *info,
const char *name, const char *routine)
static int __cyy_issue_cmd(void __iomem *base_addr, u8 cmd, int index)
static inline int cyy_issue_cmd(struct cyclades_port *port, u8 cmd)
static unsigned detect_isa_irq(void __iomem *address)
static void cyy_chip_rx(struct cyclades_card *cinfo, int chip,
void __iomem *base_addr)
static void cyy_chip_tx(struct cyclades_card *cinfo, unsigned int chip,
void __iomem *base_addr)
static void cyy_chip_modem(struct cyclades_card *cinfo, int chip,
void __iomem *base_addr)
static irqreturn_t cyy_interrupt(int irq, void *dev_id)
static void cyy_change_rts_dtr(struct cyclades_port *info, unsigned int set,
unsigned int clear)
static int
cyz_fetch_msg(struct cyclades_card *cinfo,
__u32 *channel, __u8 *cmd, __u32 *param)
static int
cyz_issue_cmd(struct cyclades_card *cinfo,
__u32 channel, __u8 cmd, __u32 param)
static void cyz_handle_rx(struct cyclades_port *info, struct tty_struct *tty)
static void cyz_handle_tx(struct cyclades_port *info, struct tty_struct *tty)
static void cyz_handle_cmd(struct cyclades_card *cinfo)
static irqreturn_t cyz_interrupt(int irq, void *dev_id)
static void cyz_rx_restart(unsigned long arg)
static void cyz_poll(unsigned long arg)
static int cy_startup(struct cyclades_port *info, struct tty_struct *tty)
static void start_xmit(struct cyclades_port *info)
static void cy_shutdown(struct cyclades_port *info, struct tty_struct *tty)
static int cy_open(struct tty_struct *tty, struct file *filp)
static void cy_wait_until_sent(struct tty_struct *tty, int timeout)
static void cy_flush_buffer(struct tty_struct *tty)
static void cy_do_close(struct tty_port *port)
static void cy_close(struct tty_struct *tty, struct file *filp)
static int cy_write(struct tty_struct *tty, const unsigned char *buf, int count)
static int cy_put_char(struct tty_struct *tty, unsigned char ch)
static void cy_flush_chars(struct tty_struct *tty)
static int cy_write_room(struct tty_struct *tty)
static int cy_chars_in_buffer(struct tty_struct *tty)
static void cyy_baud_calc(struct cyclades_port *info, __u32 baud)
static void cy_set_line_char(struct cyclades_port *info, struct tty_struct *tty)
static int cy_get_serial_info(struct cyclades_port *info,
struct serial_struct __user *retinfo)
static int
cy_set_serial_info(struct cyclades_port *info, struct tty_struct *tty,
struct serial_struct __user *new_info)
static int get_lsr_info(struct cyclades_port *info, unsigned int __user *value)
static int cy_tiocmget(struct tty_struct *tty)
static int
cy_tiocmset(struct tty_struct *tty,
unsigned int set, unsigned int clear)
static int cy_break(struct tty_struct *tty, int break_state)
static int set_threshold(struct cyclades_port *info, unsigned long value)
static int get_threshold(struct cyclades_port *info,
unsigned long __user *value)
static int set_timeout(struct cyclades_port *info, unsigned long value)
static int get_timeout(struct cyclades_port *info,
unsigned long __user *value)
static int cy_cflags_changed(struct cyclades_port *info, unsigned long arg,
struct cyclades_icount *cprev)
static int
cy_ioctl(struct tty_struct *tty,
unsigned int cmd, unsigned long arg)
static int cy_get_icount(struct tty_struct *tty,
struct serial_icounter_struct *sic)
static void cy_set_termios(struct tty_struct *tty, struct ktermios *old_termios)
static void cy_send_xchar(struct tty_struct *tty, char ch)
static void cy_throttle(struct tty_struct *tty)
static void cy_unthrottle(struct tty_struct *tty)
static void cy_stop(struct tty_struct *tty)
static void cy_start(struct tty_struct *tty)
static void cy_hangup(struct tty_struct *tty)
static int cyy_carrier_raised(struct tty_port *port)
static void cyy_dtr_rts(struct tty_port *port, int raise)
static int cyz_carrier_raised(struct tty_port *port)
static void cyz_dtr_rts(struct tty_port *port, int raise)
static const struct tty_port_operations cyy_port_ops = ;
static const struct tty_port_operations cyz_port_ops = ;
static int __devinit cy_init_card(struct cyclades_card *cinfo)
static unsigned short __devinit cyy_init_card(void __iomem *true_base_addr,
int index)
static int __init cy_detect_isa(void)
static inline int __devinit cyc_isfwstr(const char *str, unsigned int size)
static inline void __devinit cyz_fpga_copy(void __iomem *fpga, const u8 *data,
unsigned int size)
static void __devinit plx_init(struct pci_dev *pdev, int irq,
struct RUNTIME_9060 __iomem *addr)
static int __devinit __cyz_load_fw(const struct firmware *fw,
const char *name, const u32 mailbox, void __iomem *base,
void __iomem *fpga)
static int __devinit cyz_load_fw(struct pci_dev *pdev, void __iomem *base_addr,
struct RUNTIME_9060 __iomem *ctl_addr, int irq)
static int __devinit cy_pci_probe(struct pci_dev *pdev,
const struct pci_device_id *ent)
static void __devexit cy_pci_remove(struct pci_dev *pdev)
static struct pci_driver cy_pci_driver = ;
static int cyclades_proc_show(struct seq_file *m, void *v)
static int cyclades_proc_open(struct inode *inode, struct file *file)
static const struct file_operations cyclades_proc_fops = ;
static const struct tty_operations cy_ops = ;
static int __init cy_init(void)
static void __exit cy_cleanup_module(void)
module_init(cy_init);
module_exit(cy_cleanup_module);
MODULE_LICENSE("GPL");
MODULE_VERSION(CY_VERSION);
MODULE_ALIAS_CHARDEV_MAJOR(CYCLADES_MAJOR);
MODULE_FIRMWARE("cyzfirm.bin");
