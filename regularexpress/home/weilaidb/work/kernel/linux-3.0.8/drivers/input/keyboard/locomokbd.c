MODULE_AUTHOR("John Lenz <lenz@cs.wisc.edu>");
MODULE_DESCRIPTION("LoCoMo keyboard driver");
MODULE_LICENSE("GPL");
#define LOCOMOKBD_NUMKEYS	128
#define KEY_ACTIVITY		KEY_F16
#define KEY_CONTACT		KEY_F18
#define KEY_CENTER		KEY_F15
static const unsigned char
locomokbd_keycode[LOCOMOKBD_NUMKEYS] __devinitconst = ;
#define KB_ROWS			16
#define KB_COLS			8
#define KB_ROWMASK(r)		(1 << (r))
#define SCANCODE(c,r)		( ((c)<<4) + (r) + 1 )
#define KB_DELAY		8
#define SCAN_INTERVAL		(HZ/10)
struct locomokbd ;
static inline void locomokbd_charge_all(unsigned long membase)
static inline void locomokbd_activate_all(unsigned long membase)
static inline void locomokbd_activate_col(unsigned long membase, int col)
static inline void locomokbd_reset_col(unsigned long membase, int col)
static void locomokbd_scankeyboard(struct locomokbd *locomokbd)
static irqreturn_t locomokbd_interrupt(int irq, void *dev_id)
static void locomokbd_timer_callback(unsigned long data)
static int locomokbd_open(struct input_dev *dev)
static void locomokbd_close(struct input_dev *dev)
static int __devinit locomokbd_probe(struct locomo_dev *dev)
static int __devexit locomokbd_remove(struct locomo_dev *dev)
static struct locomo_driver keyboard_driver = ;
static int __init locomokbd_init(void)
static void __exit locomokbd_exit(void)
module_init(locomokbd_init);
module_exit(locomokbd_exit);
