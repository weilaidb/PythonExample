MODULE_AUTHOR("Yoichi Yuasa <yuasa@linux-mips.org>");
MODULE_DESCRIPTION("TANBAC TB0219 base board driver");
MODULE_LICENSE("GPL");
static int major;
module_param(major, int, 0);
MODULE_PARM_DESC(major, "Major device number");
static void (*old_machine_restart)(char *command);
static void __iomem *tb0219_base;
static DEFINE_SPINLOCK(tb0219_lock);
#define tb0219_read(offset)		readw(tb0219_base + (offset))
#define tb0219_write(offset, value)	writew((value), tb0219_base + (offset))
#define TB0219_START	0x0a000000UL
#define TB0219_SIZE	0x20UL
#define TB0219_LED			0x00
#define TB0219_GPIO_INPUT		0x02
#define TB0219_GPIO_OUTPUT		0x04
#define TB0219_DIP_SWITCH		0x06
#define TB0219_MISC			0x08
#define TB0219_RESET			0x0e
#define TB0219_PCI_SLOT1_IRQ_STATUS	0x10
#define TB0219_PCI_SLOT2_IRQ_STATUS	0x12
#define TB0219_PCI_SLOT3_IRQ_STATUS	0x14
typedef enum  tb0219_type_t;
static inline char get_led(void)
static inline char get_gpio_input_pin(unsigned int pin)
static inline char get_gpio_output_pin(unsigned int pin)
static inline char get_dip_switch(unsigned int pin)
static inline int set_led(char command)
static inline int set_gpio_output_pin(unsigned int pin, char command)
static ssize_t tanbac_tb0219_read(struct file *file, char __user *buf, size_t len,
loff_t *ppos)
static ssize_t tanbac_tb0219_write(struct file *file, const char __user *data,
size_t len, loff_t *ppos)
static int tanbac_tb0219_open(struct inode *inode, struct file *file)
static int tanbac_tb0219_release(struct inode *inode, struct file *file)
static const struct file_operations tb0219_fops = ;
static void tb0219_restart(char *command)
static void tb0219_pci_irq_init(void)
static int __devinit tb0219_probe(struct platform_device *dev)
static int __devexit tb0219_remove(struct platform_device *dev)
static struct platform_device *tb0219_platform_device;
static struct platform_driver tb0219_device_driver = ;
static int __init tanbac_tb0219_init(void)
static void __exit tanbac_tb0219_exit(void)
module_init(tanbac_tb0219_init);
module_exit(tanbac_tb0219_exit);
