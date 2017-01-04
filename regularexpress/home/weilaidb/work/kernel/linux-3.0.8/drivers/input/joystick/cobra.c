#define DRIVER_DESC	"Creative Labs Blaster GamePad Cobra driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define COBRA_MAX_STROBE	45
#define COBRA_LENGTH		36
static int cobra_btn[] = ;
struct cobra ;
static unsigned char cobra_read_packet(struct gameport *gameport, unsigned int *data)
static void cobra_poll(struct gameport *gameport)
static int cobra_open(struct input_dev *dev)
static void cobra_close(struct input_dev *dev)
static int cobra_connect(struct gameport *gameport, struct gameport_driver *drv)
static void cobra_disconnect(struct gameport *gameport)
static struct gameport_driver cobra_drv = ;
static int __init cobra_init(void)
static void __exit cobra_exit(void)
module_init(cobra_init);
module_exit(cobra_exit);
