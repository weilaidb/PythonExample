#define UART_IE_IXP42X_RTOIE 0x10
#define LIRC_DRIVER_NAME "lirc_serial"
struct lirc_serial ;
#define LIRC_HOMEBREW		0
#define LIRC_IRDEO		1
#define LIRC_IRDEO_REMOTE	2
#define LIRC_ANIMAX		3
#define LIRC_IGOR		4
#define LIRC_NSLU2		5
static int type;
static int io;
static int irq;
static int iommap;
static int ioshift;
static int softcarrier = 1;
static int share_irq;
static int debug;
static int sense = -1;
static int txsense;
#define dprintk(fmt, args...)					\
do  while (0)
static long send_pulse_irdeo(unsigned long length);
static long send_pulse_homebrew(unsigned long length);
static void send_space_irdeo(long length);
static void send_space_homebrew(long length);
static struct lirc_serial hardware[] = ;
#define RS_ISR_PASS_LIMIT 256
#define RBUF_LEN 256
static struct timeval lasttv = ;
static struct lirc_buffer rbuf;
static unsigned int freq = 38000;
static unsigned int duty_cycle = 50;
static unsigned long period;
static unsigned long pulse_width;
static unsigned long space_width;
#if defined(__i386__)
#define LIRC_SERIAL_TRANSMITTER_LATENCY 450
#define LIRC_SERIAL_TRANSMITTER_LATENCY 256
static u8 sinp(int offset)
static void soutp(int offset, u8 value)
static void on(void)
static void off(void)
#define MAX_UDELAY_US 5000
#define MAX_UDELAY_US (MAX_UDELAY_MS*1000)
static void safe_udelay(unsigned long usecs)
static unsigned long conv_us_to_clocks;
static int init_timing_params(unsigned int new_duty_cycle,
unsigned int new_freq)
static int init_timing_params(unsigned int new_duty_cycle,
unsigned int new_freq)
static long send_pulse_irdeo(unsigned long length)
static long send_pulse_homebrew_softcarrier(unsigned long length)
static long send_pulse_homebrew_softcarrier(unsigned long length)
static long send_pulse_homebrew(unsigned long length)
static void send_space_irdeo(long length)
static void send_space_homebrew(long length)
static void rbwrite(int l)
static void frbwrite(int l)
static irqreturn_t irq_handler(int i, void *blah)
static int hardware_init_port(void)
static int init_port(void)
static int set_use_inc(void *data)
static void set_use_dec(void *data)
static ssize_t lirc_write(struct file *file, const char *buf,
size_t n, loff_t *ppos)
static long lirc_ioctl(struct file *filep, unsigned int cmd, unsigned long arg)
static const struct file_operations lirc_fops = ;
static struct lirc_driver driver = ;
static struct platform_device *lirc_serial_dev;
static int __devinit lirc_serial_probe(struct platform_device *dev)
static int __devexit lirc_serial_remove(struct platform_device *dev)
static int lirc_serial_suspend(struct platform_device *dev,
pm_message_t state)
static void lirc_serial_exit(void);
static int lirc_serial_resume(struct platform_device *dev)
static struct platform_driver lirc_serial_driver = ;
static int __init lirc_serial_init(void)
static void lirc_serial_exit(void)
static int __init lirc_serial_init_module(void)
static void __exit lirc_serial_exit_module(void)
module_init(lirc_serial_init_module);
module_exit(lirc_serial_exit_module);
MODULE_DESCRIPTION("Infra-red receiver driver for serial ports.");
MODULE_AUTHOR("Ralph Metzler, Trent Piepho, Ben Pfaff, "
"Christoph Bartelmus, Andrei Tanas");
MODULE_LICENSE("GPL");
module_param(type, int, S_IRUGO);
MODULE_PARM_DESC(type, "Hardware type (0 = home-brew, 1 = IRdeo,"
" 2 = IRdeo Remote, 3 = AnimaX, 4 = IgorPlug,"
" 5 = NSLU2 RX:CTS2/TX:GreenLED)");
module_param(io, int, S_IRUGO);
MODULE_PARM_DESC(io, "I/O address base (0x3f8 or 0x2f8)");
module_param(iommap, bool, S_IRUGO);
MODULE_PARM_DESC(iommap, "physical base for memory mapped I/O"
" (0 = no memory mapped io)");
module_param(ioshift, int, S_IRUGO);
MODULE_PARM_DESC(ioshift, "shift I/O register offset (0 = no shift)");
module_param(irq, int, S_IRUGO);
MODULE_PARM_DESC(irq, "Interrupt (4 or 3)");
module_param(share_irq, bool, S_IRUGO);
MODULE_PARM_DESC(share_irq, "Share interrupts (0 = off, 1 = on)");
module_param(sense, bool, S_IRUGO);
MODULE_PARM_DESC(sense, "Override autodetection of IR receiver circuit"
" (0 = active high, 1 = active low )");
module_param(txsense, bool, S_IRUGO);
MODULE_PARM_DESC(txsense, "Sense of transmitter circuit"
" (0 = active high, 1 = active low )");
module_param(softcarrier, bool, S_IRUGO);
MODULE_PARM_DESC(softcarrier, "Software carrier (0 = off, 1 = on, default on)");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable debugging messages");
