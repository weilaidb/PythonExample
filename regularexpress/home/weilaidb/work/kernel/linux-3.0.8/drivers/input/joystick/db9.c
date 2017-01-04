MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("Atari, Amstrad, Commodore, Amiga, Sega, etc. joystick driver");
MODULE_LICENSE("GPL");
struct db9_config ;
#define DB9_MAX_PORTS		3
static struct db9_config db9_cfg[DB9_MAX_PORTS] __initdata;
module_param_array_named(dev, db9_cfg[0].args, int, &db9_cfg[0].nargs, 0);
MODULE_PARM_DESC(dev, "Describes first attached device (<parport#>,<type>)");
module_param_array_named(dev2, db9_cfg[1].args, int, &db9_cfg[1].nargs, 0);
MODULE_PARM_DESC(dev2, "Describes second attached device (<parport#>,<type>)");
module_param_array_named(dev3, db9_cfg[2].args, int, &db9_cfg[2].nargs, 0);
MODULE_PARM_DESC(dev3, "Describes third attached device (<parport#>,<type>)");
#define DB9_ARG_PARPORT		0
#define DB9_ARG_MODE		1
#define DB9_MULTI_STICK		0x01
#define DB9_MULTI2_STICK	0x02
#define DB9_GENESIS_PAD		0x03
#define DB9_GENESIS5_PAD	0x05
#define DB9_GENESIS6_PAD	0x06
#define DB9_SATURN_PAD		0x07
#define DB9_MULTI_0802		0x08
#define DB9_MULTI_0802_2	0x09
#define DB9_CD32_PAD		0x0A
#define DB9_SATURN_DPP		0x0B
#define DB9_SATURN_DPP_2	0x0C
#define DB9_MAX_PAD		0x0D
#define DB9_UP			0x01
#define DB9_DOWN		0x02
#define DB9_LEFT		0x04
#define DB9_RIGHT		0x08
#define DB9_FIRE1		0x10
#define DB9_FIRE2		0x20
#define DB9_FIRE3		0x40
#define DB9_FIRE4		0x80
#define DB9_NORMAL		0x0a
#define DB9_NOSELECT		0x08
#define DB9_GENESIS6_DELAY	14
#define DB9_REFRESH_TIME	HZ/100
#define DB9_MAX_DEVICES		2
struct db9_mode_data ;
struct db9 ;
static struct db9 *db9_base[3];
static const short db9_multi_btn[] = ;
static const short db9_genesis_btn[] = ;
static const short db9_cd32_btn[] = ;
static const short db9_abs[] = ;
static const struct db9_mode_data db9_modes[] = ;
#define DB9_SATURN_DELAY 300
static const int db9_saturn_byte[] = ;
static const unsigned char db9_saturn_mask[] = ;
static void db9_saturn_write_sub(struct parport *port, int type, unsigned char data, int powered, int pwr_sub)
static unsigned char db9_saturn_read_sub(struct parport *port, int type)
static unsigned char db9_saturn_read_analog(struct parport *port, int type, int powered)
static unsigned char db9_saturn_read_packet(struct parport *port, unsigned char *data, int type, int powered)
static int db9_saturn_report(unsigned char id, unsigned char data[60], struct input_dev *devs[], int n, int max_pads)
static int db9_saturn(int mode, struct parport *port, struct input_dev *devs[])
static void db9_timer(unsigned long private)
static int db9_open(struct input_dev *dev)
static void db9_close(struct input_dev *dev)
static struct db9 __init *db9_probe(int parport, int mode)
static void db9_remove(struct db9 *db9)
static int __init db9_init(void)
static void __exit db9_exit(void)
module_init(db9_init);
module_exit(db9_exit);
