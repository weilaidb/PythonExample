MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("TurboGraFX parallel port interface driver");
MODULE_LICENSE("GPL");
#define TGFX_MAX_PORTS		3
#define TGFX_MAX_DEVICES	7
struct tgfx_config ;
static struct tgfx_config tgfx_cfg[TGFX_MAX_PORTS] __initdata;
module_param_array_named(map, tgfx_cfg[0].args, int, &tgfx_cfg[0].nargs, 0);
MODULE_PARM_DESC(map, "Describes first set of devices (<parport#>,<js1>,<js2>,..<js7>");
module_param_array_named(map2, tgfx_cfg[1].args, int, &tgfx_cfg[1].nargs, 0);
MODULE_PARM_DESC(map2, "Describes second set of devices");
module_param_array_named(map3, tgfx_cfg[2].args, int, &tgfx_cfg[2].nargs, 0);
MODULE_PARM_DESC(map3, "Describes third set of devices");
#define TGFX_REFRESH_TIME	HZ/100
#define TGFX_TRIGGER		0x08
#define TGFX_UP			0x10
#define TGFX_DOWN		0x20
#define TGFX_LEFT		0x40
#define TGFX_RIGHT		0x80
#define TGFX_THUMB		0x02
#define TGFX_THUMB2		0x04
#define TGFX_TOP		0x01
#define TGFX_TOP2		0x08
static int tgfx_buttons[] = ;
static struct tgfx  *tgfx_base[TGFX_MAX_PORTS];
static void tgfx_timer(unsigned long private)
static int tgfx_open(struct input_dev *dev)
static void tgfx_close(struct input_dev *dev)
static struct tgfx __init *tgfx_probe(int parport, int *n_buttons, int n_devs)
static void tgfx_remove(struct tgfx *tgfx)
static int __init tgfx_init(void)
static void __exit tgfx_exit(void)
module_init(tgfx_init);
module_exit(tgfx_exit);
