#define WM8776_REG_HEADPHONE_L		0x00
#define WM8776_REG_HEADPHONE_R		0x01
#define WM8776_REG_HEADPHONE_MASTER	0x02
#define WM8776_REG_DAC_ATTEN_L		0x03
#define WM8776_REG_DAC_ATTEN_R		0x04
#define WM8776_REG_DAC_ATTEN_MASTER	0x05
#define WM8776_REG_DAC_PHASE		0x06
#define WM8776_REG_DAC_CONTROL		0x07
#define WM8776_REG_DAC_MUTE		0x08
#define WM8776_REG_DAC_DEEMPH		0x09
#define WM8776_REG_DAC_IF_CONTROL	0x0a
#define WM8776_REG_ADC_IF_CONTROL	0x0b
#define WM8776_REG_MASTER_MODE_CONTROL	0x0c
#define WM8776_REG_POWERDOWN		0x0d
#define WM8776_REG_ADC_ATTEN_L		0x0e
#define WM8776_REG_ADC_ATTEN_R		0x0f
#define WM8776_REG_ADC_ALC1		0x10
#define WM8776_REG_ADC_ALC2		0x11
#define WM8776_REG_ADC_ALC3		0x12
#define WM8776_REG_ADC_NOISE_GATE	0x13
#define WM8776_REG_ADC_LIMITER		0x14
#define WM8776_REG_ADC_MUX		0x15
#define WM8776_REG_OUTPUT_MUX		0x16
#define WM8776_REG_RESET		0x17
#define WM8776_NUM_REGS			0x18
#define WM8776_CLOCK_RATIO_128FS	0
#define WM8776_CLOCK_RATIO_192FS	1
#define WM8776_CLOCK_RATIO_256FS	2
#define WM8776_CLOCK_RATIO_384FS	3
#define WM8776_CLOCK_RATIO_512FS	4
#define WM8776_CLOCK_RATIO_768FS	5
enum ;
enum ;
struct snd_wm8776 ;
struct snd_maya44 ;
static void wm8776_write(struct snd_ice1712 *ice, struct snd_wm8776 *wm,
unsigned char reg, unsigned short val)
static int wm8776_write_bits(struct snd_ice1712 *ice, struct snd_wm8776 *wm,
unsigned char reg,
unsigned short mask, unsigned short val)
struct maya_vol_info ;
static struct maya_vol_info vol_info[WM_NUM_VOLS] = ;
static const DECLARE_TLV_DB_SCALE(db_scale_hp, -7400, 100, 1);
static const DECLARE_TLV_DB_SCALE(db_scale_dac, -12750, 50, 1);
static const DECLARE_TLV_DB_SCALE(db_scale_adc, -2100, 50, 1);
static int maya_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int maya_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int maya_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define COMPOSE_SW_VAL(idx, reg, mask)	((idx) | ((reg) << 8) | ((mask) << 16))
#define GET_SW_VAL_IDX(val)	((val) & 0xff)
#define GET_SW_VAL_REG(val)	(((val) >> 8) & 0xff)
#define GET_SW_VAL_MASK(val)	(((val) >> 16) & 0xff)
#define maya_sw_info	snd_ctl_boolean_mono_info
static int maya_sw_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int maya_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define GPIO_PHANTOM_OFF	2
#define GPIO_MIC_RELAY		4
#define GPIO_SPDIF_IN_INV	5
#define GPIO_MUST_BE_0		7
#define COMPOSE_GPIO_VAL(shift, inv)	((shift) | ((inv) << 8))
#define GET_GPIO_VAL_SHIFT(val)		((val) & 0xff)
#define GET_GPIO_VAL_INV(val)		(((val) >> 8) & 1)
static int maya_set_gpio_bits(struct snd_ice1712 *ice, unsigned int mask,
unsigned int bits)
#define maya_gpio_sw_info	snd_ctl_boolean_mono_info
static int maya_gpio_sw_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int maya_gpio_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define MAYA_LINE_IN	1
#define MAYA_MIC_IN	3
static void wm8776_select_input(struct snd_maya44 *chip, int idx, int line)
static int maya_rec_src_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int maya_rec_src_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int maya_rec_src_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int maya_pb_route_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int maya_pb_route_shift(int idx)
static int maya_pb_route_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int maya_pb_route_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new maya_controls[] __devinitdata = ;
static int __devinit maya44_add_controls(struct snd_ice1712 *ice)
static void __devinit wm8776_init(struct snd_ice1712 *ice,
struct snd_wm8776 *wm, unsigned int addr)
static void set_rate(struct snd_ice1712 *ice, unsigned int rate)
static unsigned int rates[] = ;
static struct snd_pcm_hw_constraint_list dac_rates = ;
static unsigned char wm8776_addr[2] __devinitdata = ;
static int __devinit maya44_init(struct snd_ice1712 *ice)
static unsigned char maya44_eeprom[] __devinitdata = ;
struct snd_ice1712_card_info snd_vt1724_maya44_cards[] __devinitdata = ;
