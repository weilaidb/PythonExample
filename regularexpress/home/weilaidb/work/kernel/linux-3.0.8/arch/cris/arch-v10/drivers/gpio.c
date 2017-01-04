#define GPIO_MAJOR 120
#define D(x)
static char gpio_name[] = "etrax gpio";
static long gpio_ioctl(struct file *file, unsigned int cmd, unsigned long arg);
static ssize_t gpio_write(struct file *file, const char __user *buf,
size_t count, loff_t *off);
static int gpio_open(struct inode *inode, struct file *filp);
static int gpio_release(struct inode *inode, struct file *filp);
static unsigned int gpio_poll(struct file *filp, struct poll_table_struct *wait);
struct gpio_private ;
static struct gpio_private *alarmlist;
static int gpio_some_alarms;
static unsigned long gpio_pa_irq_enabled_mask;
static DEFINE_SPINLOCK(gpio_lock);
#define NUM_PORTS (GPIO_MINOR_B+1)
static volatile unsigned char *ports[NUM_PORTS] = ;
static volatile unsigned char *shads[NUM_PORTS] = ;
#define CONFIG_ETRAX_PA_CHANGEABLE_DIR 0x00
#define CONFIG_ETRAX_PB_CHANGEABLE_DIR 0x00
#define CONFIG_ETRAX_PA_CHANGEABLE_BITS 0xFF
#define CONFIG_ETRAX_PB_CHANGEABLE_BITS 0xFF
static unsigned char changeable_dir[NUM_PORTS] = ;
static unsigned char changeable_bits[NUM_PORTS] = ;
static volatile unsigned char *dir[NUM_PORTS] = ;
static volatile unsigned char *dir_shadow[NUM_PORTS] = ;
static const unsigned long int changeable_dir_g_mask = 0x01FFFF01;
static unsigned long changeable_dir_g;
static unsigned long dir_g_in_bits;
static unsigned long dir_g_out_bits;
static unsigned long dir_g_shadow;
#define USE_PORTS(priv) ((priv)->minor <= GPIO_MINOR_B)
static unsigned int gpio_poll(struct file *file, poll_table *wait)
int etrax_gpio_wake_up_check(void)
static irqreturn_t
gpio_poll_timer_interrupt(int irq, void *dev_id)
static irqreturn_t
gpio_interrupt(int irq, void *dev_id)
static void gpio_write_bit(struct gpio_private *priv,
unsigned char data, int bit)
static void gpio_write_byte(struct gpio_private *priv, unsigned char data)
static ssize_t gpio_write(struct file *file, const char __user *buf,
size_t count, loff_t *off)
static int
gpio_open(struct inode *inode, struct file *filp)
static int
gpio_release(struct inode *inode, struct file *filp)
unsigned long inline setget_input(struct gpio_private *priv, unsigned long arg)
unsigned long inline setget_output(struct gpio_private *priv, unsigned long arg)
static int
gpio_leds_ioctl(unsigned int cmd, unsigned long arg);
static long gpio_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int
gpio_leds_ioctl(unsigned int cmd, unsigned long arg)
static const struct file_operations gpio_fops = ;
static void ioif_watcher(const unsigned int gpio_in_available,
const unsigned int gpio_out_available,
const unsigned char pa_available,
const unsigned char pb_available)
static int __init gpio_init(void)
module_init(gpio_init);
