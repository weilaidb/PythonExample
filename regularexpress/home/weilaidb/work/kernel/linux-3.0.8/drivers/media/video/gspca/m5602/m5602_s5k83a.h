#define M5602_S5K83A_H_
#define S5K83A_FLIP			0x01
#define S5K83A_HFLIP_TUNE		0x03
#define S5K83A_VFLIP_TUNE		0x05
#define S5K83A_BRIGHTNESS		0x0a
#define S5K83A_EXPOSURE			0x18
#define S5K83A_GAIN			0x1b
#define S5K83A_PAGE_MAP			0xec
#define S5K83A_DEFAULT_GAIN		0x71
#define S5K83A_DEFAULT_BRIGHTNESS	0x7e
#define S5K83A_DEFAULT_EXPOSURE		0x00
#define S5K83A_MAXIMUM_EXPOSURE		0x3c
#define S5K83A_FLIP_MASK		0x10
#define S5K83A_GPIO_LED_MASK		0x10
#define S5K83A_GPIO_ROTATION_MASK	0x40
extern int force_sensor;
extern int dump_sensor;
int s5k83a_probe(struct sd *sd);
int s5k83a_init(struct sd *sd);
int s5k83a_start(struct sd *sd);
int s5k83a_stop(struct sd *sd);
void s5k83a_disconnect(struct sd *sd);
static const struct m5602_sensor s5k83a = ;
struct s5k83a_priv ;
static const unsigned char preinit_s5k83a[][4] = ;
static const unsigned char init_s5k83a[][4] = ;
static const unsigned char start_s5k83a[][4] = ;
