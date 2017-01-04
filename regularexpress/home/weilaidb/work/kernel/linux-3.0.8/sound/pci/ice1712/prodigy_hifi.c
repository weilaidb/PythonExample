struct prodigy_hifi_spec ;
#define WM_DEV		0x34
#define WM_HP_ATTEN_L		0x00
#define WM_HP_ATTEN_R		0x01
#define WM_HP_MASTER		0x02
#define WM_DAC_ATTEN_L		0x03
#define WM_DAC_ATTEN_R		0x04
#define WM_DAC_MASTER		0x05
#define WM_PHASE_SWAP		0x06
#define WM_DAC_CTRL1		0x07
#define WM_DAC_MUTE		0x08
#define WM_DAC_CTRL2		0x09
#define WM_DAC_INT		0x0a
#define WM_ADC_INT		0x0b
#define WM_MASTER_CTRL		0x0c
#define WM_POWERDOWN		0x0d
#define WM_ADC_ATTEN_L		0x0e
#define WM_ADC_ATTEN_R		0x0f
#define WM_ALC_CTRL1		0x10
#define WM_ALC_CTRL2		0x11
#define WM_ALC_CTRL3		0x12
#define WM_NOISE_GATE		0x13
#define WM_LIMITER		0x14
#define WM_ADC_MUX		0x15
#define WM_OUT_MUX		0x16
#define WM_RESET		0x17
#define WM_AIN1 "AIN1"
#define WM_AIN2 "AIN2"
#define WM_AIN3 "AIN3"
#define WM_AIN4 "AIN4"
#define WM_AIN5 "AIN5"
#define WM8766_SPI_CLK	 (1<<17)
#define WM8766_SPI_MD	  (1<<16)
#define WM8766_SPI_ML	  (1<<18)
#define WM8766_DAC_CTRL	 0x02
#define WM8766_INT_CTRL	 0x03
#define WM8766_DAC_CTRL2	0x09
#define WM8766_DAC_CTRL3	0x0a
#define WM8766_RESET	    0x1f
#define WM8766_LDA1	     0x00
#define WM8766_LDA2	     0x04
#define WM8766_LDA3	     0x06
#define WM8766_RDA1	     0x01
#define WM8766_RDA2	     0x05
#define WM8766_RDA3	     0x07
#define WM8766_MUTE1	    0x0C
#define WM8766_MUTE2	    0x0F
#define AK4396_ADDR    0x00
#define AK4396_CSN    (1 << 8)
#define AK4396_CCLK   (1 << 9)
#define AK4396_CDTI   (1 << 10)
#define AK4396_CTRL1	    0x00
#define AK4396_CTRL2	    0x01
#define AK4396_CTRL3	    0x02
#define AK4396_LCH_ATT	  0x03
#define AK4396_RCH_ATT	  0x04
static unsigned short wm_get(struct snd_ice1712 *ice, int reg)
static void wm_put_nocache(struct snd_ice1712 *ice, int reg, unsigned short val)
static void wm_put(struct snd_ice1712 *ice, int reg, unsigned short val)
static void set_gpio_bit(struct snd_ice1712 *ice, unsigned int bit, int val)
static void wm8766_spi_send_word(struct snd_ice1712 *ice, unsigned int data)
static void wm8766_spi_write(struct snd_ice1712 *ice, unsigned int reg,
unsigned int data)
static void ak4396_send_word(struct snd_ice1712 *ice, unsigned int data)
static void ak4396_write(struct snd_ice1712 *ice, unsigned int reg,
unsigned int data)
static int ak4396_dac_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int ak4396_dac_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int ak4396_dac_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_wm_dac, -12700, 100, 1);
static struct snd_kcontrol_new prodigy_hd2_controls[] __devinitdata = ;
static const unsigned char wm_vol[256] = ;
#define WM_VOL_MAX	(sizeof(wm_vol) - 1)
#define WM_VOL_MUTE	0x8000
#define DAC_0dB	0xff
#define DAC_RES	128
#define DAC_MIN	(DAC_0dB - DAC_RES)
static void wm_set_vol(struct snd_ice1712 *ice, unsigned int index,
unsigned short vol, unsigned short master)
static void wm8766_set_vol(struct snd_ice1712 *ice, unsigned int index,
unsigned short vol, unsigned short master)
static int wm_dac_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int wm_dac_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_dac_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm8766_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int wm8766_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm8766_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_master_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int wm_master_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_master_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_adc_mux_enum_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int wm_adc_mux_enum_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_adc_mux_enum_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define ADC_0dB	0xcf
#define ADC_RES	128
#define ADC_MIN	(ADC_0dB - ADC_RES)
static int wm_adc_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int wm_adc_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_adc_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define wm_adc_mux_info		snd_ctl_boolean_mono_info
static int wm_adc_mux_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_adc_mux_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define wm_bypass_info		snd_ctl_boolean_mono_info
static int wm_bypass_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_bypass_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define wm_chswap_info		snd_ctl_boolean_mono_info
static int wm_chswap_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_chswap_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new prodigy_hifi_controls[] __devinitdata = ;
static void wm_proc_regs_write(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void wm_proc_regs_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void wm_proc_init(struct snd_ice1712 *ice)
static int __devinit prodigy_hifi_add_controls(struct snd_ice1712 *ice)
static int __devinit prodigy_hd2_add_controls(struct snd_ice1712 *ice)
static int __devinit prodigy_hifi_init(struct snd_ice1712 *ice)
static void ak4396_init(struct snd_ice1712 *ice)
static int prodigy_hd2_resume(struct snd_ice1712 *ice)
static int __devinit prodigy_hd2_init(struct snd_ice1712 *ice)
static unsigned char prodigy71hifi_eeprom[] __devinitdata = ;
static unsigned char prodigyhd2_eeprom[] __devinitdata = ;
static unsigned char fortissimo4_eeprom[] __devinitdata = ;
struct snd_ice1712_card_info snd_vt1724_prodigy_hifi_cards[] __devinitdata = ;
