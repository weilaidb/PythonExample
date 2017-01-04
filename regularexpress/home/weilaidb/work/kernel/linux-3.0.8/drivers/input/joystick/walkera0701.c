#define RESERVE 20000
#define SYNC_PULSE 1306000
#define BIN0_PULSE 288000
#define BIN1_PULSE 438000
#define ANALOG_MIN_PULSE 318000
#define ANALOG_MAX_PULSE 878000
#define ANALOG_DELTA 80000
#define BIN_SAMPLE ((BIN0_PULSE + BIN1_PULSE) / 2)
#define NO_SYNC 25
MODULE_AUTHOR("Peter Popovec <popovec@fei.tuke.sk>");
MODULE_DESCRIPTION("Walkera WK-0701 TX as joystick");
MODULE_LICENSE("GPL");
static unsigned int walkera0701_pp_no;
module_param_named(port, walkera0701_pp_no, int, 0);
MODULE_PARM_DESC(port,
"Parallel port adapter for Walkera WK-0701 TX (default is 0)");
struct walkera_dev ;
static struct walkera_dev w_dev;
static inline void walkera0701_parse_frame(struct walkera_dev *w)
static inline int read_ack(struct pardevice *p)
static void walkera0701_irq_handler(void *handler_data)
static enum hrtimer_restart timer_handler(struct hrtimer
*handle)
static int walkera0701_open(struct input_dev *dev)
static void walkera0701_close(struct input_dev *dev)
static int walkera0701_connect(struct walkera_dev *w, int parport)
static void walkera0701_disconnect(struct walkera_dev *w)
static int __init walkera0701_init(void)
static void __exit walkera0701_exit(void)
module_init(walkera0701_init);
module_exit(walkera0701_exit);
