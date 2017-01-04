#define GPIO_DS_HP_DETECT	0x0010
#define GPIO_DS_INPUT_ROUTE	0x0040
#define GPIO_DS_OUTPUT_FRONTLR	0x0080
#define GPIO_DS_OUTPUT_ENABLE	0x0100
#define GPIO_SLIM_HDMI_DISABLE	0x0001
#define GPIO_SLIM_OUTPUT_ENABLE	0x0002
#define GPIO_SLIM_FIRMWARE_CLK	0x0040
#define GPIO_SLIM_FIRMWARE_DATA	0x0080
#define I2C_DEVICE_WM8776	0x34
#define LC_CONTROL_LIMITER	0x40000000
#define LC_CONTROL_ALC		0x20000000
struct xonar_wm87x6 ;
static void wm8776_write_spi(struct oxygen *chip,
unsigned int reg, unsigned int value)
static void wm8776_write_i2c(struct oxygen *chip,
unsigned int reg, unsigned int value)
static void wm8776_write(struct oxygen *chip,
unsigned int reg, unsigned int value)
static void wm8776_write_cached(struct oxygen *chip,
unsigned int reg, unsigned int value)
static void wm8766_write(struct oxygen *chip,
unsigned int reg, unsigned int value)
static void wm8766_write_cached(struct oxygen *chip,
unsigned int reg, unsigned int value)
static void wm8776_registers_init(struct oxygen *chip)
static void wm8766_registers_init(struct oxygen *chip)
static void wm8776_init(struct oxygen *chip)
static void wm8766_init(struct oxygen *chip)
static void xonar_ds_handle_hp_jack(struct oxygen *chip)
static void xonar_ds_init(struct oxygen *chip)
static void xonar_hdav_slim_init(struct oxygen *chip)
static void xonar_ds_cleanup(struct oxygen *chip)
static void xonar_hdav_slim_cleanup(struct oxygen *chip)
static void xonar_ds_suspend(struct oxygen *chip)
static void xonar_hdav_slim_suspend(struct oxygen *chip)
static void xonar_ds_resume(struct oxygen *chip)
static void xonar_hdav_slim_resume(struct oxygen *chip)
static void wm8776_adc_hardware_filter(unsigned int channel,
struct snd_pcm_hardware *hardware)
static void xonar_hdav_slim_hardware_filter(unsigned int channel,
struct snd_pcm_hardware *hardware)
static void set_wm87x6_dac_params(struct oxygen *chip,
struct snd_pcm_hw_params *params)
static void set_wm8776_adc_params(struct oxygen *chip,
struct snd_pcm_hw_params *params)
static void set_hdav_slim_dac_params(struct oxygen *chip,
struct snd_pcm_hw_params *params)
static void update_wm8776_volume(struct oxygen *chip)
static void update_wm87x6_volume(struct oxygen *chip)
static void update_wm8776_mute(struct oxygen *chip)
static void update_wm87x6_mute(struct oxygen *chip)
static void update_wm8766_center_lfe_mix(struct oxygen *chip, bool mixed)
static void xonar_ds_gpio_changed(struct oxygen *chip)
static int wm8776_bit_switch_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int wm8776_bit_switch_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int wm8776_field_enum_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int wm8776_field_volume_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static void wm8776_field_set_from_ctl(struct snd_kcontrol *ctl)
static int wm8776_field_set(struct snd_kcontrol *ctl, unsigned int value)
static int wm8776_field_enum_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int wm8776_field_volume_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int wm8776_field_enum_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int wm8776_field_volume_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int wm8776_hp_vol_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int wm8776_hp_vol_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int wm8776_hp_vol_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int wm8776_input_mux_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int wm8776_input_mux_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int wm8776_input_vol_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int wm8776_input_vol_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int wm8776_input_vol_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int wm8776_level_control_info(struct snd_kcontrol *ctl,
struct snd_ctl_elem_info *info)
static int wm8776_level_control_get(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static void activate_control(struct oxygen *chip,
struct snd_kcontrol *ctl, unsigned int mode)
static int wm8776_level_control_put(struct snd_kcontrol *ctl,
struct snd_ctl_elem_value *value)
static int hpf_info(struct snd_kcontrol *ctl, struct snd_ctl_elem_info *info)
static int hpf_get(struct snd_kcontrol *ctl, struct snd_ctl_elem_value *value)
static int hpf_put(struct snd_kcontrol *ctl, struct snd_ctl_elem_value *value)
#define WM8776_BIT_SWITCH(xname, reg, bit, invert, flags)
#define _WM8776_FIELD_CTL(xname, reg, shift, initval, min, max, mask, flags) \
.iface = SNDRV_CTL_ELEM_IFACE_MIXER, \
.name = xname, \
.private_value = (initval) | ((min) << 8) | ((max) << 12) | \
((mask) << 16) | ((shift) << 20) | ((reg) << 24) | (flags)
#define WM8776_FIELD_CTL_ENUM(xname, reg, shift, init, min, max, mask, flags)
#define WM8776_FIELD_CTL_VOLUME(a, b, c, d, e, f, g, h, tlv_p)
static const DECLARE_TLV_DB_SCALE(wm87x6_dac_db_scale, -6000, 50, 0);
static const DECLARE_TLV_DB_SCALE(wm8776_adc_db_scale, -2100, 50, 0);
static const DECLARE_TLV_DB_SCALE(wm8776_hp_db_scale, -6000, 100, 0);
static const DECLARE_TLV_DB_SCALE(wm8776_lct_db_scale, -1600, 100, 0);
static const DECLARE_TLV_DB_SCALE(wm8776_maxgain_db_scale, 0, 400, 0);
static const DECLARE_TLV_DB_SCALE(wm8776_ngth_db_scale, -7800, 600, 0);
static const DECLARE_TLV_DB_SCALE(wm8776_maxatten_lim_db_scale, -1200, 100, 0);
static const DECLARE_TLV_DB_SCALE(wm8776_maxatten_alc_db_scale, -2100, 400, 0);
static const struct snd_kcontrol_new ds_controls[] = ;
static const struct snd_kcontrol_new hdav_slim_controls[] = ;
static const struct snd_kcontrol_new lc_controls[] = ;
static int add_lc_controls(struct oxygen *chip)
static int xonar_ds_mixer_init(struct oxygen *chip)
static int xonar_hdav_slim_mixer_init(struct oxygen *chip)
static void dump_wm8776_registers(struct oxygen *chip,
struct snd_info_buffer *buffer)
static void dump_wm87x6_registers(struct oxygen *chip,
struct snd_info_buffer *buffer)
static const struct oxygen_model model_xonar_ds = ;
static const struct oxygen_model model_xonar_hdav_slim = ;
int __devinit get_xonar_wm87x6_model(struct oxygen *chip,
const struct pci_device_id *id)
