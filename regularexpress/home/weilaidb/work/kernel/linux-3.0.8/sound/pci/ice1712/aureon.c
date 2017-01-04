struct aureon_spec ;
#define WM_DAC_ATTEN		0x00
#define WM_DAC_MASTER_ATTEN	0x08
#define WM_DAC_DIG_ATTEN	0x09
#define WM_DAC_DIG_MASTER_ATTEN	0x11
#define WM_PHASE_SWAP		0x12
#define WM_DAC_CTRL1		0x13
#define WM_MUTE			0x14
#define WM_DAC_CTRL2		0x15
#define WM_INT_CTRL		0x16
#define WM_MASTER		0x17
#define WM_POWERDOWN		0x18
#define WM_ADC_GAIN		0x19
#define WM_ADC_MUX		0x1b
#define WM_OUT_MUX1		0x1c
#define WM_OUT_MUX2		0x1e
#define WM_RESET		0x1f
#define CS8415_CTRL1	0x01
#define CS8415_CTRL2	0x02
#define CS8415_QSUB		0x14
#define CS8415_RATIO	0x1E
#define CS8415_C_BUFFER	0x20
#define CS8415_ID		0x7F
#define PCA9554_DEV     0x40
#define PCA9554_IN      0x00
#define PCA9554_OUT     0x01
#define PCA9554_INVERT  0x02
#define PCA9554_DIR     0x03
static void aureon_pca9554_write(struct snd_ice1712 *ice, unsigned char reg,
unsigned char data)
static int aureon_universe_inmux_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int aureon_universe_inmux_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int aureon_universe_inmux_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void aureon_ac97_write(struct snd_ice1712 *ice, unsigned short reg,
unsigned short val)
static unsigned short aureon_ac97_read(struct snd_ice1712 *ice, unsigned short reg)
static int aureon_ac97_init(struct snd_ice1712 *ice)
#define AUREON_AC97_STEREO	0x80
static int aureon_ac97_vol_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int aureon_ac97_vol_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_ac97_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define aureon_ac97_mute_info	snd_ctl_boolean_mono_info
static int aureon_ac97_mute_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_ac97_mute_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define aureon_ac97_micboost_info	snd_ctl_boolean_mono_info
static int aureon_ac97_micboost_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_ac97_micboost_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static void aureon_spi_write(struct snd_ice1712 *ice, unsigned int cs, unsigned int data, int bits)
static void aureon_spi_read(struct snd_ice1712 *ice, unsigned int cs,
unsigned int data, int bits, unsigned char *buffer, int size)
static unsigned char aureon_cs8415_get(struct snd_ice1712 *ice, int reg)
static void aureon_cs8415_read(struct snd_ice1712 *ice, int reg,
unsigned char *buffer, int size)
static void aureon_cs8415_put(struct snd_ice1712 *ice, int reg,
unsigned char val)
static unsigned short wm_get(struct snd_ice1712 *ice, int reg)
static void wm_put_nocache(struct snd_ice1712 *ice, int reg, unsigned short val)
static void wm_put(struct snd_ice1712 *ice, int reg, unsigned short val)
#define aureon_mono_bool_info		snd_ctl_boolean_mono_info
#define aureon_ac97_mmute_info		snd_ctl_boolean_mono_info
static int aureon_ac97_mmute_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_ac97_mmute_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_wm_dac, -10000, 100, 1);
static const DECLARE_TLV_DB_SCALE(db_scale_wm_pcm, -6400, 50, 1);
static const DECLARE_TLV_DB_SCALE(db_scale_wm_adc, -1200, 100, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_ac97_master, -4650, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_ac97_gain, -3450, 150, 0);
#define WM_VOL_MAX	100
#define WM_VOL_CNT	101
#define WM_VOL_MUTE	0x8000
static void wm_set_vol(struct snd_ice1712 *ice, unsigned int index, unsigned short vol, unsigned short master)
#define wm_pcm_mute_info	snd_ctl_boolean_mono_info
static int wm_pcm_mute_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_pcm_mute_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_master_vol_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int wm_master_vol_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_master_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_vol_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int wm_vol_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_mute_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int wm_mute_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_mute_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define wm_master_mute_info		snd_ctl_boolean_stereo_info
static int wm_master_mute_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_master_mute_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define PCM_0dB 0xff
#define PCM_RES 128
#define PCM_MIN (PCM_0dB - PCM_RES)
static int wm_pcm_vol_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int wm_pcm_vol_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_pcm_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define wm_adc_mute_info		snd_ctl_boolean_stereo_info
static int wm_adc_mute_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_adc_mute_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_adc_vol_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int wm_adc_vol_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_adc_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_adc_mux_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int wm_adc_mux_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int wm_adc_mux_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_cs8415_mux_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int aureon_cs8415_mux_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_cs8415_mux_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_cs8415_rate_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int aureon_cs8415_rate_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define aureon_cs8415_mute_info		snd_ctl_boolean_mono_info
static int aureon_cs8415_mute_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_cs8415_mute_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_cs8415_qsub_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int aureon_cs8415_qsub_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_cs8415_spdif_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int aureon_cs8415_mask_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_cs8415_spdif_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_set_headphone_amp(struct snd_ice1712 *ice, int enable)
static int aureon_get_headphone_amp(struct snd_ice1712 *ice)
#define aureon_hpamp_info	snd_ctl_boolean_mono_info
static int aureon_hpamp_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_hpamp_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define aureon_deemp_info	snd_ctl_boolean_mono_info
static int aureon_deemp_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_deemp_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_oversampling_info(struct snd_kcontrol *k, struct snd_ctl_elem_info *uinfo)
static int aureon_oversampling_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int aureon_oversampling_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new aureon_dac_controls[] __devinitdata = ;
static struct snd_kcontrol_new wm_controls[] __devinitdata = ;
static struct snd_kcontrol_new ac97_controls[] __devinitdata = ;
static struct snd_kcontrol_new universe_ac97_controls[] __devinitdata = ;
static struct snd_kcontrol_new cs8415_controls[] __devinitdata = ;
static int __devinit aureon_add_controls(struct snd_ice1712 *ice)
static int aureon_reset(struct snd_ice1712 *ice)
static int aureon_resume(struct snd_ice1712 *ice)
static int __devinit aureon_init(struct snd_ice1712 *ice)
static unsigned char aureon51_eeprom[] __devinitdata = ;
static unsigned char aureon71_eeprom[] __devinitdata = ;
#define prodigy71_eeprom aureon71_eeprom
static unsigned char aureon71_universe_eeprom[] __devinitdata = ;
static unsigned char prodigy71lt_eeprom[] __devinitdata = ;
#define prodigy71xt_eeprom prodigy71lt_eeprom
struct snd_ice1712_card_info snd_vt1724_aureon_cards[] __devinitdata = ;
