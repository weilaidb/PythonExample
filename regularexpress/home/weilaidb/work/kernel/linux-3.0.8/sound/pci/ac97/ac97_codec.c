MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Universal interface for Audio Codec '97");
MODULE_LICENSE("GPL");
static int enable_loopback;
module_param(enable_loopback, bool, 0444);
MODULE_PARM_DESC(enable_loopback, "Enable AC97 ADC/DAC Loopback Control");
static int power_save = CONFIG_SND_AC97_POWER_SAVE_DEFAULT;
module_param(power_save, int, 0644);
MODULE_PARM_DESC(power_save, "Automatic power-saving timeout "
"(in second, 0 = disable).");
struct ac97_codec_id ;
static const struct ac97_codec_id snd_ac97_codec_id_vendors[] = ;
static const struct ac97_codec_id snd_ac97_codec_ids[] = ;
static void update_power_regs(struct snd_ac97 *ac97);
#define ac97_is_power_save_mode(ac97) \
((ac97->scaps & AC97_SCAP_POWER_SAVE) && power_save)
#define ac97_is_power_save_mode(ac97) 0
static int snd_ac97_valid_reg(struct snd_ac97 *ac97, unsigned short reg)
void snd_ac97_write(struct snd_ac97 *ac97, unsigned short reg, unsigned short value)
EXPORT_SYMBOL(snd_ac97_write);
unsigned short snd_ac97_read(struct snd_ac97 *ac97, unsigned short reg)
static inline unsigned short snd_ac97_read_cache(struct snd_ac97 *ac97, unsigned short reg)
EXPORT_SYMBOL(snd_ac97_read);
void snd_ac97_write_cache(struct snd_ac97 *ac97, unsigned short reg, unsigned short value)
EXPORT_SYMBOL(snd_ac97_write_cache);
int snd_ac97_update(struct snd_ac97 *ac97, unsigned short reg, unsigned short value)
EXPORT_SYMBOL(snd_ac97_update);
int snd_ac97_update_bits(struct snd_ac97 *ac97, unsigned short reg, unsigned short mask, unsigned short value)
EXPORT_SYMBOL(snd_ac97_update_bits);
int snd_ac97_update_bits_nolock(struct snd_ac97 *ac97, unsigned short reg,
unsigned short mask, unsigned short value)
static int snd_ac97_ad18xx_update_pcm_bits(struct snd_ac97 *ac97, int codec, unsigned short mask, unsigned short value)
static int snd_ac97_info_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ac97_get_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_put_enum_double(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_page_save(struct snd_ac97 *ac97, int reg, struct snd_kcontrol *kcontrol)
static void snd_ac97_page_restore(struct snd_ac97 *ac97, int page_save)
static int snd_ac97_info_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_ac97_get_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_put_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new snd_ac97_controls_master_mono[2] = ;
static const struct snd_kcontrol_new snd_ac97_controls_tone[2] = ;
static const struct snd_kcontrol_new snd_ac97_controls_pc_beep[2] = ;
static const struct snd_kcontrol_new snd_ac97_controls_mic_boost =
AC97_SINGLE("Mic Boost (+20dB)", AC97_MIC, 6, 1, 0);
static const char* std_rec_sel[] = ;
static const char* std_3d_path[] = ;
static const char* std_mix[] = ;
static const char* std_mic[] = ;
static const struct ac97_enum std_enum[] = ;
static const struct snd_kcontrol_new snd_ac97_control_capture_src =
AC97_ENUM("Capture Source", std_enum[0]);
static const struct snd_kcontrol_new snd_ac97_control_capture_vol =
AC97_DOUBLE("Capture Volume", AC97_REC_GAIN, 8, 0, 15, 0);
static const struct snd_kcontrol_new snd_ac97_controls_mic_capture[2] = ;
enum ;
static const struct snd_kcontrol_new snd_ac97_controls_general[7] = ;
static const struct snd_kcontrol_new snd_ac97_controls_3d[2] = ;
static const struct snd_kcontrol_new snd_ac97_controls_center[2] = ;
static const struct snd_kcontrol_new snd_ac97_controls_lfe[2] = ;
static const struct snd_kcontrol_new snd_ac97_control_eapd =
AC97_SINGLE("External Amplifier", AC97_POWERDOWN, 15, 1, 1);
static const struct snd_kcontrol_new snd_ac97_controls_modem_switches[2] = ;
static void set_inv_eapd(struct snd_ac97 *ac97, struct snd_kcontrol *kctl)
static int snd_ac97_spdif_mask_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ac97_spdif_cmask_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_spdif_pmask_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_spdif_default_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_spdif_default_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_put_spsa(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new snd_ac97_controls_spdif[5] = ;
#define AD18XX_PCM_BITS(xname, codec, lshift, rshift, mask) \
static int snd_ac97_ad18xx_pcm_info_bits(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ac97_ad18xx_pcm_get_bits(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ad18xx_pcm_put_bits(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define AD18XX_PCM_VOLUME(xname, codec) \
static int snd_ac97_ad18xx_pcm_info_volume(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_ac97_ad18xx_pcm_get_volume(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_ac97_ad18xx_pcm_put_volume(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new snd_ac97_controls_ad18xx_pcm[2] = ;
static const struct snd_kcontrol_new snd_ac97_controls_ad18xx_surround[2] = ;
static const struct snd_kcontrol_new snd_ac97_controls_ad18xx_center[2] = ;
static const struct snd_kcontrol_new snd_ac97_controls_ad18xx_lfe[2] = ;
static void snd_ac97_powerdown(struct snd_ac97 *ac97);
static int snd_ac97_bus_free(struct snd_ac97_bus *bus)
static int snd_ac97_bus_dev_free(struct snd_device *device)
static int snd_ac97_free(struct snd_ac97 *ac97)
static int snd_ac97_dev_free(struct snd_device *device)
static int snd_ac97_try_volume_mix(struct snd_ac97 * ac97, int reg)
static void check_volume_resolution(struct snd_ac97 *ac97, int reg, unsigned char *lo_max, unsigned char *hi_max)
static int snd_ac97_try_bit(struct snd_ac97 * ac97, int reg, int bit)
static void snd_ac97_change_volume_params2(struct snd_ac97 * ac97, int reg, int shift, unsigned char *max)
static inline int printable(unsigned int x)
static struct snd_kcontrol *snd_ac97_cnew(const struct snd_kcontrol_new *_template,
struct snd_ac97 * ac97)
static int snd_ac97_cmute_new_stereo(struct snd_card *card, char *name, int reg,
int check_stereo, int check_amix,
struct snd_ac97 *ac97)
static const DECLARE_TLV_DB_SCALE(db_scale_4bit, -4500, 300, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_5bit, -4650, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_6bit, -9450, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_5bit_12db_max, -3450, 150, 0);
static const DECLARE_TLV_DB_SCALE(db_scale_rec_gain, 0, 150, 0);
static const unsigned int *find_db_scale(unsigned int maxval)
static void set_tlv_db_scale(struct snd_kcontrol *kctl, const unsigned int *tlv)
static int snd_ac97_cvol_new(struct snd_card *card, char *name, int reg, unsigned int lo_max,
unsigned int hi_max, struct snd_ac97 *ac97)
static int snd_ac97_cmix_new_stereo(struct snd_card *card, const char *pfx,
int reg, int check_stereo, int check_amix,
struct snd_ac97 *ac97)
#define snd_ac97_cmix_new(card, pfx, reg, acheck, ac97) \
snd_ac97_cmix_new_stereo(card, pfx, reg, 0, acheck, ac97)
#define snd_ac97_cmute_new(card, name, reg, acheck, ac97) \
snd_ac97_cmute_new_stereo(card, name, reg, 0, acheck, ac97)
static unsigned int snd_ac97_determine_spdif_rates(struct snd_ac97 *ac97);
static int snd_ac97_mixer_build(struct snd_ac97 * ac97)
static int snd_ac97_modem_build(struct snd_card *card, struct snd_ac97 * ac97)
static int snd_ac97_test_rate(struct snd_ac97 *ac97, int reg, int shadow_reg, int rate)
static void snd_ac97_determine_rates(struct snd_ac97 *ac97, int reg, int shadow_reg, unsigned int *r_result)
static unsigned int snd_ac97_determine_spdif_rates(struct snd_ac97 *ac97)
static const struct ac97_codec_id *look_for_codec_id(const struct ac97_codec_id *table,
unsigned int id)
void snd_ac97_get_name(struct snd_ac97 *ac97, unsigned int id, char *name, int modem)
const char *snd_ac97_get_short_name(struct snd_ac97 *ac97)
EXPORT_SYMBOL(snd_ac97_get_short_name);
static int ac97_reset_wait(struct snd_ac97 *ac97, int timeout, int with_modem)
int snd_ac97_bus(struct snd_card *card, int num, struct snd_ac97_bus_ops *ops,
void *private_data, struct snd_ac97_bus **rbus)
EXPORT_SYMBOL(snd_ac97_bus);
static void ac97_device_release(struct device * dev)
static int snd_ac97_dev_register(struct snd_device *device)
static int snd_ac97_dev_disconnect(struct snd_device *device)
static const struct snd_ac97_build_ops null_build_ops;
static void do_update_power(struct work_struct *work)
int snd_ac97_mixer(struct snd_ac97_bus *bus, struct snd_ac97_template *template, struct snd_ac97 **rac97)
EXPORT_SYMBOL(snd_ac97_mixer);
static void snd_ac97_powerdown(struct snd_ac97 *ac97)
struct ac97_power_reg ;
enum ;
static struct ac97_power_reg power_regs[PWIDX_SIZE] = ;
int snd_ac97_update_power(struct snd_ac97 *ac97, int reg, int powerup)
EXPORT_SYMBOL(snd_ac97_update_power);
static void update_power_regs(struct snd_ac97 *ac97)
void snd_ac97_suspend(struct snd_ac97 *ac97)
EXPORT_SYMBOL(snd_ac97_suspend);
static void snd_ac97_restore_status(struct snd_ac97 *ac97)
static void snd_ac97_restore_iec958(struct snd_ac97 *ac97)
void snd_ac97_resume(struct snd_ac97 *ac97)
EXPORT_SYMBOL(snd_ac97_resume);
static void set_ctl_name(char *dst, const char *src, const char *suffix)
static int snd_ac97_remove_ctl(struct snd_ac97 *ac97, const char *name,
const char *suffix)
static struct snd_kcontrol *ctl_find(struct snd_ac97 *ac97, const char *name, const char *suffix)
static int snd_ac97_rename_ctl(struct snd_ac97 *ac97, const char *src,
const char *dst, const char *suffix)
static void snd_ac97_rename_vol_ctl(struct snd_ac97 *ac97, const char *src,
const char *dst)
static int snd_ac97_swap_ctl(struct snd_ac97 *ac97, const char *s1,
const char *s2, const char *suffix)
#if 1
static int bind_hp_volsw_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int tune_hp_only(struct snd_ac97 *ac97)
static int tune_hp_only(struct snd_ac97 *ac97)
static int tune_swap_hp(struct snd_ac97 *ac97)
static int tune_swap_surround(struct snd_ac97 *ac97)
static int tune_ad_sharing(struct snd_ac97 *ac97)
static const struct snd_kcontrol_new snd_ac97_alc_jack_detect =
AC97_SINGLE("Jack Detect", AC97_ALC650_CLOCK, 5, 1, 0);
static int tune_alc_jack(struct snd_ac97 *ac97)
static int tune_inv_eapd(struct snd_ac97 *ac97)
static int master_mute_sw_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int tune_mute_led(struct snd_ac97 *ac97)
static int hp_master_mute_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int tune_hp_mute_led(struct snd_ac97 *ac97)
struct quirk_table ;
static struct quirk_table applicable_quirks[] = ;
static int apply_quirk(struct snd_ac97 *ac97, int type)
static int apply_quirk_str(struct snd_ac97 *ac97, const char *typestr)
int snd_ac97_tune_hardware(struct snd_ac97 *ac97, struct ac97_quirk *quirk, const char *override)
EXPORT_SYMBOL(snd_ac97_tune_hardware);
static int __init alsa_ac97_init(void)
static void __exit alsa_ac97_exit(void)
module_init(alsa_ac97_init)
module_exit(alsa_ac97_exit)
