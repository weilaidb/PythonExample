#define RIO_NORMAL_MAJOR0  154
#define RIO_NORMAL_MAJOR1  156
#define PCI_DEVICE_ID_SPECIALIX_SX_XIO_IO8 0x2000
#define RIO_WINDOW_LEN 0x10000
#undef RIO_PARANOIA_CHECK
#define IRQ_RATE_LIMIT 200
static DEFINE_MUTEX(rio_fw_mutex);
static struct Conf
RIOConf = ;
static void rio_disable_tx_interrupts(void *ptr);
static void rio_enable_tx_interrupts(void *ptr);
static void rio_disable_rx_interrupts(void *ptr);
static void rio_enable_rx_interrupts(void *ptr);
static int rio_carrier_raised(struct tty_port *port);
static void rio_shutdown_port(void *ptr);
static int rio_set_real_termios(void *ptr);
static void rio_hungup(void *ptr);
static void rio_close(void *ptr);
static int rio_chars_in_buffer(void *ptr);
static long rio_fw_ioctl(struct file *filp, unsigned int cmd, unsigned long arg);
static int rio_init_drivers(void);
static void my_hd(void *addr, int len);
static struct tty_driver *rio_driver, *rio_driver2;
struct rio_info *p;
int rio_debug;
static int rio_poll = 1;
static int rio_probe_addrs[] = ;
#define NR_RIO_ADDRS ARRAY_SIZE(rio_probe_addrs)
static long rio_irqmask = -1;
MODULE_AUTHOR("Rogier Wolff <R.E.Wolff@bitwizard.nl>, Patrick van de Lageweg <patrick@bitwizard.nl>");
MODULE_DESCRIPTION("RIO driver");
MODULE_LICENSE("GPL");
module_param(rio_poll, int, 0);
module_param(rio_debug, int, 0644);
module_param(rio_irqmask, long, 0);
static struct real_driver rio_real_driver = ;
static const struct file_operations rio_fw_fops = ;
static struct miscdevice rio_fw_device = ;
static inline int rio_paranoia_check(struct rio_port const *port, char *name, const char *routine)
#define rio_paranoia_check(a,b,c) 0
static void my_hd(void *ad, int len)
#define my_hd(ad,len) do while (0)
int RIODelay(struct Port *PortP, int njiffies)
int RIODelay_ni(struct Port *PortP, int njiffies)
void rio_copy_to_card(void *from, void __iomem *to, int len)
int rio_minor(struct tty_struct *tty)
static int rio_set_real_termios(void *ptr)
static void rio_reset_interrupt(struct Host *HostP)
static irqreturn_t rio_interrupt(int irq, void *ptr)
static void rio_pollfunc(unsigned long data)
static void rio_disable_tx_interrupts(void *ptr)
static void rio_enable_tx_interrupts(void *ptr)
static void rio_disable_rx_interrupts(void *ptr)
static void rio_enable_rx_interrupts(void *ptr)
static int rio_carrier_raised(struct tty_port *port)
static int rio_chars_in_buffer(void *ptr)
static void rio_shutdown_port(void *ptr)
static void rio_hungup(void *ptr)
static void rio_close(void *ptr)
static long rio_fw_ioctl(struct file *filp, unsigned int cmd, unsigned long arg)
extern int RIOShortCommand(struct rio_info *p, struct Port *PortP, int command, int len, int arg);
static int rio_ioctl(struct tty_struct *tty, struct file *filp, unsigned int cmd, unsigned long arg)
static void rio_throttle(struct tty_struct *tty)
static void rio_unthrottle(struct tty_struct *tty)
static struct vpd_prom *get_VPD_PROM(struct Host *hp)
static const struct tty_operations rio_ops = ;
static int rio_init_drivers(void)
static const struct tty_port_operations rio_port_ops = ;
static int rio_init_datastructures(void)
static void __exit rio_release_drivers(void)
static void fix_rio_pci(struct pci_dev *pdev)
static int __init rio_init(void)
static void __exit rio_exit(void)
module_init(rio_init);
module_exit(rio_exit);
