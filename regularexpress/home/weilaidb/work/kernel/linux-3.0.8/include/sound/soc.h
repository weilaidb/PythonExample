#define __LINUX_SND_SOC_H
#define SOC_SINGLE_VALUE(xreg, xshift, xmax, xinvert) \
((unsigned long)&(struct soc_mixer_control) \
)
#define SOC_SINGLE_VALUE_EXT(xreg, xmax, xinvert) \
((unsigned long)&(struct soc_mixer_control) \
)
#define SOC_SINGLE(xname, reg, shift, max, invert) \
#define SOC_SINGLE_TLV(xname, reg, shift, max, invert, tlv_array) \
#define SOC_DOUBLE(xname, xreg, shift_left, shift_right, xmax, xinvert) \
#define SOC_DOUBLE_R(xname, reg_left, reg_right, xshift, xmax, xinvert) \
#define SOC_DOUBLE_TLV(xname, xreg, shift_left, shift_right, xmax, xinvert, tlv_array) \
#define SOC_DOUBLE_R_TLV(xname, reg_left, reg_right, xshift, xmax, xinvert, tlv_array) \
#define SOC_DOUBLE_S8_TLV(xname, xreg, xmin, xmax, tlv_array) \
#define SOC_ENUM_DOUBLE(xreg, xshift_l, xshift_r, xmax, xtexts) \
#define SOC_ENUM_SINGLE(xreg, xshift, xmax, xtexts) \
SOC_ENUM_DOUBLE(xreg, xshift, xshift, xmax, xtexts)
#define SOC_ENUM_SINGLE_EXT(xmax, xtexts) \
#define SOC_VALUE_ENUM_DOUBLE(xreg, xshift_l, xshift_r, xmask, xmax, xtexts, xvalues) \
#define SOC_VALUE_ENUM_SINGLE(xreg, xshift, xmask, xmax, xtexts, xvalues) \
SOC_VALUE_ENUM_DOUBLE(xreg, xshift, xshift, xmask, xmax, xtexts, xvalues)
#define SOC_ENUM(xname, xenum) \
#define SOC_VALUE_ENUM(xname, xenum) \
#define SOC_SINGLE_EXT(xname, xreg, xshift, xmax, xinvert,\
xhandler_get, xhandler_put) \
#define SOC_DOUBLE_EXT(xname, xreg, shift_left, shift_right, xmax, xinvert,\
xhandler_get, xhandler_put) \
#define SOC_SINGLE_EXT_TLV(xname, xreg, xshift, xmax, xinvert,\
xhandler_get, xhandler_put, tlv_array) \
#define SOC_DOUBLE_EXT_TLV(xname, xreg, shift_left, shift_right, xmax, xinvert,\
xhandler_get, xhandler_put, tlv_array) \
#define SOC_DOUBLE_R_EXT_TLV(xname, reg_left, reg_right, xshift, xmax, xinvert,\
xhandler_get, xhandler_put, tlv_array) \
#define SOC_SINGLE_BOOL_EXT(xname, xdata, xhandler_get, xhandler_put) \
#define SOC_ENUM_EXT(xname, xenum, xhandler_get, xhandler_put) \
#define SOC_DOUBLE_R_SX_TLV(xname, xreg_left, xreg_right, xshift,\
xmin, xmax, tlv_array) \
#define SOC_ENUM_DOUBLE_DECL(name, xreg, xshift_l, xshift_r, xtexts) \
struct soc_enum name = SOC_ENUM_DOUBLE(xreg, xshift_l, xshift_r, \
ARRAY_SIZE(xtexts), xtexts)
#define SOC_ENUM_SINGLE_DECL(name, xreg, xshift, xtexts) \
SOC_ENUM_DOUBLE_DECL(name, xreg, xshift, xshift, xtexts)
#define SOC_ENUM_SINGLE_EXT_DECL(name, xtexts) \
struct soc_enum name = SOC_ENUM_SINGLE_EXT(ARRAY_SIZE(xtexts), xtexts)
#define SOC_VALUE_ENUM_DOUBLE_DECL(name, xreg, xshift_l, xshift_r, xmask, xtexts, xvalues) \
struct soc_enum name = SOC_VALUE_ENUM_DOUBLE(xreg, xshift_l, xshift_r, xmask, \
ARRAY_SIZE(xtexts), xtexts, xvalues)
#define SOC_VALUE_ENUM_SINGLE_DECL(name, xreg, xshift, xmask, xtexts, xvalues) \
SOC_VALUE_ENUM_DOUBLE_DECL(name, xreg, xshift, xshift, xmask, xtexts, xvalues)
enum snd_soc_bias_level ;
struct snd_jack;
struct snd_soc_card;
struct snd_soc_pcm_stream;
struct snd_soc_ops;
struct snd_soc_pcm_runtime;
struct snd_soc_dai;
struct snd_soc_dai_driver;
struct snd_soc_platform;
struct snd_soc_dai_link;
struct snd_soc_platform_driver;
struct snd_soc_codec;
struct snd_soc_codec_driver;
struct soc_enum;
struct snd_soc_jack;
struct snd_soc_jack_zone;
struct snd_soc_jack_pin;
struct snd_soc_cache_ops;
struct snd_soc_jack_gpio;
typedef int (*hw_write_t)(void *,const char* ,int);
extern struct snd_ac97_bus_ops soc_ac97_ops;
enum snd_soc_control_type ;
enum snd_soc_compress_type ;
int snd_soc_codec_set_sysclk(struct snd_soc_codec *codec, int clk_id,
unsigned int freq, int dir);
int snd_soc_codec_set_pll(struct snd_soc_codec *codec, int pll_id, int source,
unsigned int freq_in, unsigned int freq_out);
int snd_soc_register_card(struct snd_soc_card *card);
int snd_soc_unregister_card(struct snd_soc_card *card);
int snd_soc_suspend(struct device *dev);
int snd_soc_resume(struct device *dev);
int snd_soc_poweroff(struct device *dev);
int snd_soc_register_platform(struct device *dev,
struct snd_soc_platform_driver *platform_drv);
void snd_soc_unregister_platform(struct device *dev);
int snd_soc_register_codec(struct device *dev,
const struct snd_soc_codec_driver *codec_drv,
struct snd_soc_dai_driver *dai_drv, int num_dai);
void snd_soc_unregister_codec(struct device *dev);
int snd_soc_codec_volatile_register(struct snd_soc_codec *codec,
unsigned int reg);
int snd_soc_codec_readable_register(struct snd_soc_codec *codec,
unsigned int reg);
int snd_soc_codec_writable_register(struct snd_soc_codec *codec,
unsigned int reg);
int snd_soc_codec_set_cache_io(struct snd_soc_codec *codec,
int addr_bits, int data_bits,
enum snd_soc_control_type control);
int snd_soc_cache_sync(struct snd_soc_codec *codec);
int snd_soc_cache_init(struct snd_soc_codec *codec);
int snd_soc_cache_exit(struct snd_soc_codec *codec);
int snd_soc_cache_write(struct snd_soc_codec *codec,
unsigned int reg, unsigned int value);
int snd_soc_cache_read(struct snd_soc_codec *codec,
unsigned int reg, unsigned int *value);
int snd_soc_default_volatile_register(struct snd_soc_codec *codec,
unsigned int reg);
int snd_soc_default_readable_register(struct snd_soc_codec *codec,
unsigned int reg);
int snd_soc_default_writable_register(struct snd_soc_codec *codec,
unsigned int reg);
int snd_soc_calc_frame_size(int sample_size, int channels, int tdm_slots);
int snd_soc_params_to_frame_size(struct snd_pcm_hw_params *params);
int snd_soc_calc_bclk(int fs, int sample_size, int channels, int tdm_slots);
int snd_soc_params_to_bclk(struct snd_pcm_hw_params *parms);
int snd_soc_set_runtime_hwparams(struct snd_pcm_substream *substream,
const struct snd_pcm_hardware *hw);
int snd_soc_jack_new(struct snd_soc_codec *codec, const char *id, int type,
struct snd_soc_jack *jack);
void snd_soc_jack_report(struct snd_soc_jack *jack, int status, int mask);
int snd_soc_jack_add_pins(struct snd_soc_jack *jack, int count,
struct snd_soc_jack_pin *pins);
void snd_soc_jack_notifier_register(struct snd_soc_jack *jack,
struct notifier_block *nb);
void snd_soc_jack_notifier_unregister(struct snd_soc_jack *jack,
struct notifier_block *nb);
int snd_soc_jack_add_zones(struct snd_soc_jack *jack, int count,
struct snd_soc_jack_zone *zones);
int snd_soc_jack_get_type(struct snd_soc_jack *jack, int micbias_voltage);
int snd_soc_jack_add_gpios(struct snd_soc_jack *jack, int count,
struct snd_soc_jack_gpio *gpios);
void snd_soc_jack_free_gpios(struct snd_soc_jack *jack, int count,
struct snd_soc_jack_gpio *gpios);
int snd_soc_update_bits(struct snd_soc_codec *codec, unsigned short reg,
unsigned int mask, unsigned int value);
int snd_soc_update_bits_locked(struct snd_soc_codec *codec,
unsigned short reg, unsigned int mask,
unsigned int value);
int snd_soc_test_bits(struct snd_soc_codec *codec, unsigned short reg,
unsigned int mask, unsigned int value);
int snd_soc_new_ac97_codec(struct snd_soc_codec *codec,
struct snd_ac97_bus_ops *ops, int num);
void snd_soc_free_ac97_codec(struct snd_soc_codec *codec);
struct snd_kcontrol *snd_soc_cnew(const struct snd_kcontrol_new *_template,
void *data, char *long_name,
const char *prefix);
int snd_soc_add_controls(struct snd_soc_codec *codec,
const struct snd_kcontrol_new *controls, int num_controls);
int snd_soc_info_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
int snd_soc_info_enum_ext(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
int snd_soc_get_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_put_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_get_value_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_put_value_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_info_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
int snd_soc_info_volsw_ext(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
#define snd_soc_info_bool_ext		snd_ctl_boolean_mono_info
int snd_soc_get_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_put_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_info_volsw_2r(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
int snd_soc_get_volsw_2r(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_put_volsw_2r(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_info_volsw_s8(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
int snd_soc_get_volsw_s8(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_put_volsw_s8(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_limit_volume(struct snd_soc_codec *codec,
const char *name, int max);
int snd_soc_info_volsw_2r_sx(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
int snd_soc_get_volsw_2r_sx(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_soc_put_volsw_2r_sx(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
struct snd_soc_reg_access ;
struct snd_soc_jack_pin ;
struct snd_soc_jack_zone ;
struct snd_soc_jack_gpio ;
struct snd_soc_jack ;
struct snd_soc_pcm_stream ;
struct snd_soc_ops ;
struct snd_soc_cache_ops ;
struct snd_soc_codec ;
struct snd_soc_codec_driver ;
struct snd_soc_platform_driver ;
struct snd_soc_platform ;
struct snd_soc_dai_link ;
struct snd_soc_codec_conf ;
struct snd_soc_aux_dev ;
struct snd_soc_card ;
struct snd_soc_pcm_runtime  ;
struct soc_mixer_control ;
struct soc_enum ;
unsigned int snd_soc_read(struct snd_soc_codec *codec, unsigned int reg);
unsigned int snd_soc_write(struct snd_soc_codec *codec,
unsigned int reg, unsigned int val);
unsigned int snd_soc_bulk_write_raw(struct snd_soc_codec *codec,
unsigned int reg, const void *data, size_t len);
static inline void snd_soc_card_set_drvdata(struct snd_soc_card *card,
void *data)
static inline void *snd_soc_card_get_drvdata(struct snd_soc_card *card)
static inline void snd_soc_codec_set_drvdata(struct snd_soc_codec *codec,
void *data)
static inline void *snd_soc_codec_get_drvdata(struct snd_soc_codec *codec)
static inline void snd_soc_platform_set_drvdata(struct snd_soc_platform *platform,
void *data)
static inline void *snd_soc_platform_get_drvdata(struct snd_soc_platform *platform)
static inline void snd_soc_pcm_set_drvdata(struct snd_soc_pcm_runtime *rtd,
void *data)
static inline void *snd_soc_pcm_get_drvdata(struct snd_soc_pcm_runtime *rtd)
static inline void snd_soc_initialize_card_lists(struct snd_soc_card *card)
int snd_soc_util_init(void);
void snd_soc_util_exit(void);
extern struct dentry *snd_soc_debugfs_root;
extern const struct dev_pm_ops snd_soc_pm_ops;
