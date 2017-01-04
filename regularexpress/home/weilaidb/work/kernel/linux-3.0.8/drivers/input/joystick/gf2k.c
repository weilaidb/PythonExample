#define DRIVER_DESC	"Genius Flight 2000 joystick driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define GF2K_START		400
#define GF2K_STROBE		40
#define GF2K_TIMEOUT		4
#define GF2K_LENGTH		80
#define GF2K_ID_G09		1
#define GF2K_ID_F30D		2
#define GF2K_ID_F30		3
#define GF2K_ID_F31D		4
#define GF2K_ID_F305		5
#define GF2K_ID_F23P		6
#define GF2K_ID_F31		7
#define GF2K_ID_MAX		7
static char gf2k_length[] = ;
static char gf2k_hat_to_axis[][2] = ;
static char *gf2k_names[] = ;
static unsigned char gf2k_hats[] = ;
static unsigned char gf2k_axes[] = ;
static unsigned char gf2k_joys[] = ;
static unsigned char gf2k_pads[] = ;
static unsigned char gf2k_lens[] = ;
static unsigned char gf2k_abs[] = ;
static short gf2k_btn_joy[] = ;
static short gf2k_btn_pad[] = ;
static short gf2k_seq_reset[] = ;
static short gf2k_seq_digital[] = ;
struct gf2k ;
static int gf2k_read_packet(struct gameport *gameport, int length, char *data)
static void gf2k_trigger_seq(struct gameport *gameport, short *seq)
#define GB(p,n,s)	gf2k_get_bits(data, p, n, s)
static int gf2k_get_bits(unsigned char *buf, int pos, int num, int shift)
static void gf2k_read(struct gf2k *gf2k, unsigned char *data)
static void gf2k_poll(struct gameport *gameport)
static int gf2k_open(struct input_dev *dev)
static void gf2k_close(struct input_dev *dev)
static int gf2k_connect(struct gameport *gameport, struct gameport_driver *drv)
static void gf2k_disconnect(struct gameport *gameport)
static struct gameport_driver gf2k_drv = ;
static int __init gf2k_init(void)
static void __exit gf2k_exit(void)
module_init(gf2k_init);
module_exit(gf2k_exit);
