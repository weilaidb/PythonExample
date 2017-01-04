static inline void stac9460_put(struct snd_ice1712 *ice, int reg,
unsigned char val)
static inline unsigned char stac9460_get(struct snd_ice1712 *ice, int reg)
static inline void stac9460_2_put(struct snd_ice1712 *ice, int reg,
unsigned char val)
static inline unsigned char stac9460_2_get(struct snd_ice1712 *ice, int reg)
#define stac9460_dac_mute_info		snd_ctl_boolean_mono_info
static int stac9460_dac_mute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac9460_dac_mute_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac9460_dac_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int stac9460_dac_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac9460_dac_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define stac9460_adc_mute_info		snd_ctl_boolean_stereo_info
static int stac9460_adc_mute_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac9460_adc_mute_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac9460_adc_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int stac9460_adc_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac9460_adc_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define stac9460_mic_sw_info		snd_ctl_boolean_mono_info
static int stac9460_mic_sw_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac9460_mic_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new stac9640_controls[] __devinitdata = ;
static int __devinit wtm_add_controls(struct snd_ice1712 *ice)
static int __devinit wtm_init(struct snd_ice1712 *ice)
static unsigned char wtm_eeprom[] __devinitdata = ;
struct snd_ice1712_card_info snd_vt1724_wtm_cards[] __devinitdata = ;
