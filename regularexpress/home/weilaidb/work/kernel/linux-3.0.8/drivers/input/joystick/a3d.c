#define DRIVER_DESC	"FP-Gaming Assassin 3D joystick driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define A3D_MAX_START		600
#define A3D_MAX_STROBE		80
#define A3D_MAX_LENGTH		40
#define A3D_MODE_A3D		1
#define A3D_MODE_PAN		2
#define A3D_MODE_OEM		3
#define A3D_MODE_PXL		4
static char *a3d_names[] = ;
struct a3d ;
static int a3d_read_packet(struct gameport *gameport, int length, char *data)
static int a3d_csum(char *data, int count)
static void a3d_read(struct a3d *a3d, unsigned char *data)
static void a3d_poll(struct gameport *gameport)
static int a3d_adc_cooked_read(struct gameport *gameport, int *axes, int *buttons)
static int a3d_adc_open(struct gameport *gameport, int mode)
static void a3d_adc_close(struct gameport *gameport)
static int a3d_open(struct input_dev *dev)
static void a3d_close(struct input_dev *dev)
static int a3d_connect(struct gameport *gameport, struct gameport_driver *drv)
static void a3d_disconnect(struct gameport *gameport)
static struct gameport_driver a3d_drv = ;
static int __init a3d_init(void)
static void __exit a3d_exit(void)
module_init(a3d_init);
module_exit(a3d_exit);
