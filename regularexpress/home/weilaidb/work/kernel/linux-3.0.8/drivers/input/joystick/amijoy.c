MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Driver for Amiga joysticks");
MODULE_LICENSE("GPL");
static int amijoy[2] = ;
module_param_array_named(map, amijoy, uint, NULL, 0);
MODULE_PARM_DESC(map, "Map of attached joysticks in form of <a>,<b> (default is 0,1)");
static int amijoy_used;
static DEFINE_MUTEX(amijoy_mutex);
static struct input_dev *amijoy_dev[2];
static char *amijoy_phys[2] = ;
static irqreturn_t amijoy_interrupt(int irq, void *dummy)
static int amijoy_open(struct input_dev *dev)
static void amijoy_close(struct input_dev *dev)
static int __init amijoy_init(void)
static void __exit amijoy_exit(void)
module_init(amijoy_init);
module_exit(amijoy_exit);
