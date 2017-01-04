#define M5602_S5K4AA_H_
#define S5K4AA_PAGE_MAP			0xec
#define S5K4AA_PAGE_MAP_0		0x00
#define S5K4AA_PAGE_MAP_1		0x01
#define S5K4AA_PAGE_MAP_2		0x02
#define S5K4AA_READ_MODE		0x03
#define S5K4AA_ROWSTART_HI		0x04
#define S5K4AA_ROWSTART_LO		0x05
#define S5K4AA_COLSTART_HI		0x06
#define S5K4AA_COLSTART_LO		0x07
#define S5K4AA_WINDOW_HEIGHT_HI		0x08
#define S5K4AA_WINDOW_HEIGHT_LO		0x09
#define S5K4AA_WINDOW_WIDTH_HI		0x0a
#define S5K4AA_WINDOW_WIDTH_LO		0x0b
#define S5K4AA_GLOBAL_GAIN__		0x0f
#define S5K4AA_H_BLANK_HI__		0x1d
#define S5K4AA_H_BLANK_LO__		0x1e
#define S5K4AA_EXPOSURE_HI		0x17
#define S5K4AA_EXPOSURE_LO		0x18
#define S5K4AA_BRIGHTNESS		0x1f
#define S5K4AA_GAIN			0x20
#define S5K4AA_NOISE_SUPP		0x37
#define S5K4AA_RM_ROW_SKIP_4X		0x08
#define S5K4AA_RM_ROW_SKIP_2X		0x04
#define S5K4AA_RM_COL_SKIP_4X		0x02
#define S5K4AA_RM_COL_SKIP_2X		0x01
#define S5K4AA_RM_H_FLIP		0x40
#define S5K4AA_RM_V_FLIP		0x80
#define S5K4AA_DEFAULT_GAIN		0x5f
#define S5K4AA_DEFAULT_BRIGHTNESS	0x10
extern int force_sensor;
extern int dump_sensor;
int s5k4aa_probe(struct sd *sd);
int s5k4aa_init(struct sd *sd);
int s5k4aa_start(struct sd *sd);
void s5k4aa_disconnect(struct sd *sd);
static const struct m5602_sensor s5k4aa = ;
static const unsigned char preinit_s5k4aa[][4] = ;
static const unsigned char init_s5k4aa[][4] = ;
static const unsigned char VGA_s5k4aa[][4] = ;
static const unsigned char SXGA_s5k4aa[][4] = ;
