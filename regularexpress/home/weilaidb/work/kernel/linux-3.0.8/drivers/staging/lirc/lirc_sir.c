#define TEKRAM_115200 0x00
#define TEKRAM_57600  0x01
#define TEKRAM_38400  0x02
#define TEKRAM_19200  0x03
#define TEKRAM_9600   0x04
#define TEKRAM_2400   0x08
#define TEKRAM_PW 0x10
#define TIME_CONST (10000000ul/115200ul)
static void init_act200(void);
#elif defined(LIRC_SIR_ACTISYS_ACT220L)
static void init_act220(void);
struct sa1100_ser2_registers  sr;
static int irq = IRQ_Ser2ICP;
#define LIRC_ON_SA1100_TRANSMITTER_LATENCY 0
static unsigned long pulse_width = (13-LIRC_ON_SA1100_TRANSMITTER_LATENCY);
static unsigned long space_width = (13-LIRC_ON_SA1100_TRANSMITTER_LATENCY);
static unsigned int freq = 38000;
static unsigned int duty_cycle = 50;
#define RBUF_LEN 1024
#define WBUF_LEN 1024
#define LIRC_DRIVER_NAME "lirc_sir"
#define PULSE '['
#define TIME_CONST (9000000ul/115200ul)
#define SIR_TIMEOUT	(HZ*5/100)
#define LIRC_IRQ 4
#if defined(LIRC_SIR_ACTISYS_ACT200L)         || \
defined(LIRC_SIR_ACTISYS_ACT220L) || \
defined(LIRC_SIR_TEKRAM)
#define LIRC_PORT 0x3f8
#define LIRC_PORT 0x3e8
static int io = LIRC_PORT;
static int irq = LIRC_IRQ;
static int threshold = 3;
static DEFINE_SPINLOCK(timer_lock);
static struct timer_list timerlist;
static struct timeval last_tv = ;
static struct timeval last_intr_tv = ;
static int last_value;
static DECLARE_WAIT_QUEUE_HEAD(lirc_read_queue);
static DEFINE_SPINLOCK(hardware_lock);
static int rx_buf[RBUF_LEN];
static unsigned int rx_tail, rx_head;
static int debug;
#define dprintk(fmt, args...)						\
do  while (0)
static unsigned int lirc_poll(struct file *file, poll_table *wait);
static ssize_t lirc_read(struct file *file, char *buf, size_t count,
loff_t *ppos);
static ssize_t lirc_write(struct file *file, const char *buf, size_t n,
loff_t *pos);
static long lirc_ioctl(struct file *filep, unsigned int cmd, unsigned long arg);
static void add_read_queue(int flag, unsigned long val);
static int init_chrdev(void);
static void drop_chrdev(void);
static irqreturn_t sir_interrupt(int irq, void *dev_id);
static void send_space(unsigned long len);
static void send_pulse(unsigned long len);
static int init_hardware(void);
static void drop_hardware(void);
static int init_port(void);
static void drop_port(void);
static void on(void)
static void off(void)
static inline unsigned int sinp(int offset)
static inline void soutp(int offset, int value)
#define MAX_UDELAY_US 5000
#define MAX_UDELAY_US (MAX_UDELAY_MS*1000)
static void safe_udelay(unsigned long usecs)
static unsigned int lirc_poll(struct file *file, poll_table *wait)
static ssize_t lirc_read(struct file *file, char *buf, size_t count,
loff_t *ppos)
static ssize_t lirc_write(struct file *file, const char *buf, size_t n,
loff_t *pos)
static long lirc_ioctl(struct file *filep, unsigned int cmd, unsigned long arg)
static void add_read_queue(int flag, unsigned long val)
static const struct file_operations lirc_fops = ;
static int set_use_inc(void *data)
static void set_use_dec(void *data)
static struct lirc_driver driver = ;
static int init_chrdev(void)
static void drop_chrdev(void)
static long delta(struct timeval *tv1, struct timeval *tv2)
static void sir_timeout(unsigned long data)
static irqreturn_t sir_interrupt(int irq, void *dev_id)
static void send_pulse(unsigned long length)
static void send_space(unsigned long length)
static void send_space(unsigned long len)
static void send_pulse(unsigned long len)
static int sa1100_irda_set_power_collie(int state)
static int init_hardware(void)
static void drop_hardware(void)
static int init_port(void)
static void drop_port(void)
#define ACT200L_REG0    0x00
#define ACT200L_TXEN    0x01
#define ACT200L_RXEN    0x02
#define ACT200L_ECHO    0x08
#define ACT200L_REG1    0x10
#define ACT200L_LODB    0x01
#define ACT200L_WIDE    0x04
#define ACT200L_REG3    0x30
#define ACT200L_B0      0x01
#define ACT200L_B1      0x02
#define ACT200L_CHSY    0x04
#define ACT200L_REG4    0x40
#define ACT200L_OP0     0x01
#define ACT200L_OP1     0x02
#define ACT200L_BLKR    0x04
#define ACT200L_REG5    0x50
#define ACT200L_RWIDL   0x01
#define ACT200L_REG6    0x60
#define ACT200L_RS0     0x01
#define ACT200L_RS1     0x02
#define ACT200L_REG7    0x70
#define ACT200L_ENPOS   0x04
#define ACT200L_REG8    0x80
#define ACT200L_REG9    0x90
#define ACT200L_2400    0x5f
#define ACT200L_9600    0x17
#define ACT200L_19200   0x0b
#define ACT200L_38400   0x05
#define ACT200L_57600   0x03
#define ACT200L_115200  0x01
#define ACT200L_REG13   0xd0
#define ACT200L_SHDW    0x01
#define ACT200L_REG15   0xf0
#define ACT200L_REG21   0x50
#define ACT200L_EXCK    0x02
#define ACT200L_OSCL    0x04
static void init_act200(void)
void init_act220(void)
static int init_lirc_sir(void)
static int __init lirc_sir_init(void)
static void __exit lirc_sir_exit(void)
module_init(lirc_sir_init);
module_exit(lirc_sir_exit);
MODULE_DESCRIPTION("Infrared receiver driver for Tekram Irmate 210");
MODULE_AUTHOR("Christoph Bartelmus");
#elif defined(LIRC_ON_SA1100)
MODULE_DESCRIPTION("LIRC driver for StrongARM SA1100 embedded microprocessor");
MODULE_AUTHOR("Christoph Bartelmus");
#elif defined(LIRC_SIR_ACTISYS_ACT200L)
MODULE_DESCRIPTION("LIRC driver for Actisys Act200L");
MODULE_AUTHOR("Karl Bongers");
#elif defined(LIRC_SIR_ACTISYS_ACT220L)
MODULE_DESCRIPTION("LIRC driver for Actisys Act220L(+)");
MODULE_AUTHOR("Jan Roemisch");
MODULE_DESCRIPTION("Infrared receiver driver for SIR type serial ports");
MODULE_AUTHOR("Milan Pikula");
MODULE_LICENSE("GPL");
module_param(irq, int, S_IRUGO);
MODULE_PARM_DESC(irq, "Interrupt (16)");
module_param(io, int, S_IRUGO);
MODULE_PARM_DESC(io, "I/O address base (0x3f8 or 0x2f8)");
module_param(irq, int, S_IRUGO);
MODULE_PARM_DESC(irq, "Interrupt (4 or 3)");
module_param(threshold, int, S_IRUGO);
MODULE_PARM_DESC(threshold, "space detection threshold (3)");
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable debugging messages");
