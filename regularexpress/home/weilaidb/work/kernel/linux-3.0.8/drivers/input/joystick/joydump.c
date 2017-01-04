#define DRIVER_DESC	"Gameport data dumper module"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define BUF_SIZE 256
struct joydump ;
static int joydump_connect(struct gameport *gameport, struct gameport_driver *drv)
static void joydump_disconnect(struct gameport *gameport)
static struct gameport_driver joydump_drv = ;
static int __init joydump_init(void)
static void __exit joydump_exit(void)
module_init(joydump_init);
module_exit(joydump_exit);
