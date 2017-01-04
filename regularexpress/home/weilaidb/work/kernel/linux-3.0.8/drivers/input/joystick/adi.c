#define DRIVER_DESC	"Logitech ADI joystick family driver"
MODULE_AUTHOR("Vojtech Pavlik <vojtech@ucw.cz>");
MODULE_DESCRIPTION(DRIVER_DESC);
MODULE_LICENSE("GPL");
#define ADI_MAX_START		200
#define ADI_MAX_STROBE		40
#define ADI_INIT_DELAY		10
#define ADI_DATA_DELAY		4
#define ADI_MAX_LENGTH		256
#define ADI_MIN_LENGTH		8
#define ADI_MIN_LEN_LENGTH	10
#define ADI_MIN_ID_LENGTH	66
#define ADI_MAX_NAME_LENGTH	64
#define ADI_MAX_CNAME_LENGTH	16
#define ADI_MAX_PHYS_LENGTH	64
#define ADI_FLAG_HAT		0x04
#define ADI_FLAG_10BIT		0x08
#define ADI_ID_TPD		0x01
#define ADI_ID_WGP		0x06
#define ADI_ID_WGPE		0x08
#define ADI_ID_MAX		0x0a
static char *adi_names[] = ;
static char adi_wmgpe_abs[] =	;
static char adi_wmi_abs[] =	;
static char adi_wmed3d_abs[] =	;
static char adi_cm2_abs[] =	;
static char adi_wmf_abs[] =	;
static short adi_wmgpe_key[] =	;
static short adi_wmi_key[] =	;
static short adi_wmed3d_key[] =	;
static short adi_cm2_key[] =	;
static char* adi_abs[] = ;
static short* adi_key[] = ;
static struct  adi_hat_to_axis[] = ;
struct adi ;
struct adi_port ;
static void adi_read_packet(struct adi_port *port)
static void adi_move_bits(struct adi_port *port, int length)
static inline int adi_get_bits(struct adi *adi, int count)
static int adi_decode(struct adi *adi)
static int adi_read(struct adi_port *port)
static void adi_poll(struct gameport *gameport)
static int adi_open(struct input_dev *dev)
static void adi_close(struct input_dev *dev)
static void adi_init_digital(struct gameport *gameport)
static void adi_id_decode(struct adi *adi, struct adi_port *port)
static int adi_init_input(struct adi *adi, struct adi_port *port, int half)
static void adi_init_center(struct adi *adi)
static int adi_connect(struct gameport *gameport, struct gameport_driver *drv)
static void adi_disconnect(struct gameport *gameport)
static struct gameport_driver adi_drv = ;
static int __init adi_init(void)
static void __exit adi_exit(void)
module_init(adi_init);
module_exit(adi_exit);
