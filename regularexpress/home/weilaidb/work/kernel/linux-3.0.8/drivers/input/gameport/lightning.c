#define L4_PORT			0x201
#define L4_SELECT_ANALOG	0xa4
#define L4_SELECT_DIGITAL	0xa5
#define L4_SELECT_SECONDARY	0xa6
#define L4_CMD_ID		0x80
#define L4_CMD_GETCAL		0x92
#define L4_CMD_SETCAL		0x93
#define L4_ID			0x04
#define L4_BUSY			0x01
#define L4_TIMEOUT		80
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION("PDPI Lightning 4 gamecard driver");
MODULE_LICENSE("GPL");
struct l4 ;
static struct l4 l4_ports[8];
static int l4_wait_ready(void)
static int l4_cooked_read(struct gameport *gameport, int *axes, int *buttons)
static int l4_open(struct gameport *gameport, int mode)
static int l4_getcal(int port, int *cal)
static int l4_setcal(int port, int *cal)
static int l4_calibrate(struct gameport *gameport, int *axes, int *max)
static int __init l4_create_ports(int card_no)
static int __init l4_add_card(int card_no)
static int __init l4_init(void)
static void __exit l4_exit(void)
module_init(l4_init);
module_exit(l4_exit);
