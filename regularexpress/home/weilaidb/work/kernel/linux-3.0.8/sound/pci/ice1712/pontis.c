#define WM_DEV		0x34
#define CS_DEV		0x20
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
#define PONTIS_CS_CS		(1<<4)
#define PONTIS_CS_CLK		(1<<5)
#define PONTIS_CS_RDATA		(1<<6)
#define PONTIS_CS_WDATA		(1<<7)
static unsigned short wm_get(struct snd_ice1712 *ice, int reg)
static void wm_put_nocache(struct snd_ice1712 *ice, int reg, unsigned short val)
static void wm_put(struct snd_ice1712 *ice, int reg, unsigned short val)
#define DAC_0dB	0xff
#define DAC_RES	128
#define DAC_MIN	(DAC_0dB - DAC_RES)
static int wm_dac_vol_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int wm_dac_vol_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_dac_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define ADC_0dB	0xcf
#define ADC_RES	128
#define ADC_MIN	(ADC_0dB - ADC_RES)
static int wm_adc_vol_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int wm_adc_vol_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_adc_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define wm_adc_mux_info		snd_ctl_boolean_mono_info
static int wm_adc_mux_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_adc_mux_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define wm_bypass_info		snd_ctl_boolean_mono_info
static int wm_bypass_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_bypass_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define wm_chswap_info		snd_ctl_boolean_mono_info
static int wm_chswap_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_chswap_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static void set_gpio_bit(struct snd_ice1712 *ice, unsigned int bit, int val)
static void spi_send_byte(struct snd_ice1712 *ice, unsigned char data)
static unsigned int spi_read_byte(struct snd_ice1712 *ice)
static void spi_write(struct snd_ice1712 *ice, unsigned int dev, unsigned int reg, unsigned int data)
static unsigned int spi_read(struct snd_ice1712 *ice, unsigned int dev, unsigned int reg)
static int cs_source_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int cs_source_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int cs_source_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int pontis_gpio_mask_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int pontis_gpio_mask_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int pontis_gpio_mask_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int pontis_gpio_dir_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int pontis_gpio_dir_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int pontis_gpio_data_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int pontis_gpio_data_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_volume, -6400, 50, 1);
static struct snd_kcontrol_new pontis_controls[] __devinitdata = ;
static void wm_proc_regs_write(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
static void wm_proc_regs_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
static void wm_proc_init(struct snd_ice1712 *ice)
static void cs_proc_regs_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
static void cs_proc_init(struct snd_ice1712 *ice)
static int __devinit pontis_add_controls(struct snd_ice1712 *ice)
static int __devinit pontis_init(struct snd_ice1712 *ice)
static unsigned char pontis_eeprom[] __devinitdata = ;
struct snd_ice1712_card_info snd_vt1720_pontis_cards[] __devinitdata = ;
