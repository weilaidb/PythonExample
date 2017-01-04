#define DRIVER_NAME	"rc-loopback"
#define dprintk(x...)	if (debug) printk(KERN_INFO DRIVER_NAME ": " x)
#define RXMASK_REGULAR	0x1
#define RXMASK_LEARNING	0x2
static bool debug;
struct loopback_dev ;
static struct loopback_dev loopdev;
static int loop_set_tx_mask(struct rc_dev *dev, u32 mask)
static int loop_set_tx_carrier(struct rc_dev *dev, u32 carrier)
static int loop_set_tx_duty_cycle(struct rc_dev *dev, u32 duty_cycle)
static int loop_set_rx_carrier_range(struct rc_dev *dev, u32 min, u32 max)
static int loop_tx_ir(struct rc_dev *dev, int *txbuf, u32 n)
static void loop_set_idle(struct rc_dev *dev, bool enable)
static int loop_set_learning_mode(struct rc_dev *dev, int enable)
static int loop_set_carrier_report(struct rc_dev *dev, int enable)
static int __init loop_init(void)
static void __exit loop_exit(void)
module_init(loop_init);
module_exit(loop_exit);
module_param(debug, bool, S_IRUGO | S_IWUSR);
MODULE_PARM_DESC(debug, "Enable debug messages");
MODULE_DESCRIPTION("Loopback device for rc-core debugging");
MODULE_AUTHOR("David Härdeman <david@hardeman.nu>");
MODULE_LICENSE("GPL");
