struct phase28_spec ;
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
static const unsigned char wm_vol[256] = ;
#define WM_VOL_MAX	(sizeof(wm_vol) - 1)
#define WM_VOL_MUTE	0x8000
static struct snd_akm4xxx akm_phase22 __devinitdata = ;
static struct snd_ak4xxx_private akm_phase22_priv __devinitdata = ;
static int __devinit phase22_init(struct snd_ice1712 *ice)
static int __devinit phase22_add_controls(struct snd_ice1712 *ice)
static unsigned char phase22_eeprom[] __devinitdata = ;
static unsigned char phase28_eeprom[] __devinitdata = ;
static void phase28_spi_write(struct snd_ice1712 *ice, unsigned int cs,
unsigned int data, int bits)
static unsigned short wm_get(struct snd_ice1712 *ice, int reg)
static void wm_put_nocache(struct snd_ice1712 *ice, int reg, unsigned short val)
static void wm_put(struct snd_ice1712 *ice, int reg, unsigned short val)
static void wm_set_vol(struct snd_ice1712 *ice, unsigned int index,
unsigned short vol, unsigned short master)
#define wm_pcm_mute_info	snd_ctl_boolean_mono_info
static int wm_pcm_mute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_pcm_mute_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_master_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int wm_master_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_master_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int __devinit phase28_init(struct snd_ice1712 *ice)
static int wm_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int wm_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_mute_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int wm_mute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_mute_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define wm_master_mute_info		snd_ctl_boolean_stereo_info
static int wm_master_mute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_master_mute_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define PCM_0dB 0xff
#define PCM_RES 128
#define PCM_MIN (PCM_0dB - PCM_RES)
static int wm_pcm_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int wm_pcm_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int wm_pcm_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define phase28_deemp_info	snd_ctl_boolean_mono_info
static int phase28_deemp_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int phase28_deemp_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int phase28_oversampling_info(struct snd_kcontrol *k,
struct snd_ctl_elem_info *uinfo)
static int phase28_oversampling_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int phase28_oversampling_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(db_scale_wm_dac, -12700, 100, 1);
static const DECLARE_TLV_DB_SCALE(db_scale_wm_pcm, -6400, 50, 1);
static struct snd_kcontrol_new phase28_dac_controls[] __devinitdata = ;
static struct snd_kcontrol_new wm_controls[] __devinitdata = ;
static int __devinit phase28_add_controls(struct snd_ice1712 *ice)
struct snd_ice1712_card_info snd_vt1724_phase_cards[] __devinitdata = ;
