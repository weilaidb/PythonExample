struct prodigy192_spec ;
static inline void stac9460_put(struct snd_ice1712 *ice, int reg, unsigned char val)
static inline unsigned char stac9460_get(struct snd_ice1712 *ice, int reg)
static int stac9460_dac_mute(struct snd_ice1712 *ice, int idx,
unsigned char mute)
#define stac9460_dac_mute_info		snd_ctl_boolean_mono_info
static int stac9460_dac_mute_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int stac9460_dac_mute_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int stac9460_dac_vol_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int stac9460_dac_vol_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int stac9460_dac_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define stac9460_adc_mute_info		snd_ctl_boolean_stereo_info
static int stac9460_adc_mute_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int stac9460_adc_mute_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int stac9460_adc_vol_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int stac9460_adc_vol_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int stac9460_adc_vol_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int stac9460_mic_sw_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int stac9460_mic_sw_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac9460_mic_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void stac9460_set_rate_val(struct snd_ice1712 *ice, unsigned int rate)
static const DECLARE_TLV_DB_SCALE(db_scale_dac, -19125, 75, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_adc, 0, 150, 0);
static struct snd_kcontrol_new stac_controls[] __devinitdata = ;
#define AK4114_ADDR	0x00
static void write_data(struct snd_ice1712 *ice, unsigned int gpio,
unsigned int data, int idx)
static unsigned char read_data(struct snd_ice1712 *ice, unsigned int gpio,
int idx)
static unsigned int prodigy192_4wire_start(struct snd_ice1712 *ice)
static void prodigy192_4wire_finish(struct snd_ice1712 *ice, unsigned int tmp)
static void prodigy192_ak4114_write(void *private_data, unsigned char addr,
unsigned char data)
static unsigned char prodigy192_ak4114_read(void *private_data,
unsigned char addr)
static int ak4114_input_sw_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int ak4114_input_sw_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int ak4114_input_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new ak4114_controls[] __devinitdata = ;
static int prodigy192_ak4114_init(struct snd_ice1712 *ice)
static void stac9460_proc_regs_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void stac9460_proc_init(struct snd_ice1712 *ice)
static int __devinit prodigy192_add_controls(struct snd_ice1712 *ice)
static int prodigy192_miodio_exists(struct snd_ice1712 *ice)
static int __devinit prodigy192_init(struct snd_ice1712 *ice)
static unsigned char prodigy71_eeprom[] __devinitdata = ;
struct snd_ice1712_card_info snd_vt1724_prodigy192_cards[] __devinitdata = ;
