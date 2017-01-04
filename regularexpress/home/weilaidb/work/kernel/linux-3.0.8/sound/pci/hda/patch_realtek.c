#define ALC880_FRONT_EVENT		0x01
#define ALC880_DCVOL_EVENT		0x02
#define ALC880_HP_EVENT			0x04
#define ALC880_MIC_EVENT		0x08
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
enum ;
#define GPIO_MASK	0x03
enum ;
struct alc_mic_route ;
#define MUX_IDX_UNDEF	((unsigned char)-1)
struct alc_customize_define ;
struct alc_fixup;
struct alc_multi_io ;
enum ;
struct alc_spec ;
struct alc_config_preset ;
static int alc_mux_enum_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int alc_mux_enum_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc_mux_enum_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc_ch_mode_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int alc_ch_mode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc_ch_mode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const char * const alc_pin_mode_names[] = ;
static const unsigned char alc_pin_mode_values[] = ;
#define ALC_PIN_DIR_IN              0x00
#define ALC_PIN_DIR_OUT             0x01
#define ALC_PIN_DIR_INOUT           0x02
#define ALC_PIN_DIR_IN_NOMICBIAS    0x03
#define ALC_PIN_DIR_INOUT_NOMICBIAS 0x04
static const signed char alc_pin_mode_dir_info[5][2] = ;
#define alc_pin_mode_min(_dir) (alc_pin_mode_dir_info[_dir][0])
#define alc_pin_mode_max(_dir) (alc_pin_mode_dir_info[_dir][1])
#define alc_pin_mode_n_items(_dir) \
(alc_pin_mode_max(_dir)-alc_pin_mode_min(_dir)+1)
static int alc_pin_mode_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int alc_pin_mode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc_pin_mode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define ALC_PIN_MODE(xname, nid, dir) \
#define alc_gpio_data_info	snd_ctl_boolean_mono_info
static int alc_gpio_data_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc_gpio_data_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define ALC_GPIO_DATA_SWITCH(xname, nid, mask) \
#define alc_spdif_ctrl_info	snd_ctl_boolean_mono_info
static int alc_spdif_ctrl_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc_spdif_ctrl_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define ALC_SPDIF_CTRL_SWITCH(xname, nid, mask) \
#define alc_eapd_ctrl_info	snd_ctl_boolean_mono_info
static int alc_eapd_ctrl_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc_eapd_ctrl_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define ALC_EAPD_CTRL_SWITCH(xname, nid, mask) \
static void alc_set_input_pin(struct hda_codec *codec, hda_nid_t nid,
int auto_pin_type)
static void alc_fixup_autocfg_pin_nums(struct hda_codec *codec)
static void add_mixer(struct alc_spec *spec, const struct snd_kcontrol_new *mix)
static void add_verb(struct alc_spec *spec, const struct hda_verb *verb)
static void setup_preset(struct hda_codec *codec,
const struct alc_config_preset *preset)
static const struct hda_verb alc_gpio1_init_verbs[] = ;
static const struct hda_verb alc_gpio2_init_verbs[] = ;
static const struct hda_verb alc_gpio3_init_verbs[] = ;
static void alc_fix_pll(struct hda_codec *codec)
static void alc_fix_pll_init(struct hda_codec *codec, hda_nid_t nid,
unsigned int coef_idx, unsigned int coef_bit)
static int alc_init_jacks(struct hda_codec *codec)
static int detect_jacks(struct hda_codec *codec, int num_pins, hda_nid_t *pins)
static void do_automute(struct hda_codec *codec, int num_pins, hda_nid_t *pins,
bool mute, bool hp_out)
static void update_speakers(struct hda_codec *codec)
static void alc_hp_automute(struct hda_codec *codec)
static void alc_line_automute(struct hda_codec *codec)
static int get_connection_index(struct hda_codec *codec, hda_nid_t mux,
hda_nid_t nid)
static void alc_dual_mic_adc_auto_switch(struct hda_codec *codec)
static void alc_mic_automute(struct hda_codec *codec)
static void alc_sku_unsol_event(struct hda_codec *codec, unsigned int res)
static void alc_inithook(struct hda_codec *codec)
static void alc888_coef_init(struct hda_codec *codec)
static void alc889_coef_init(struct hda_codec *codec)
static void set_eapd(struct hda_codec *codec, hda_nid_t nid, int on)
static void alc_auto_setup_eapd(struct hda_codec *codec, bool on)
static void alc_eapd_shutup(struct hda_codec *codec)
static void alc_auto_init_amp(struct hda_codec *codec, int type)
static int alc_automute_mode_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int alc_automute_mode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc_automute_mode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new alc_automute_mode_enum = ;
static struct snd_kcontrol_new *alc_kcontrol_new(struct alc_spec *spec);
static int alc_add_automute_mode_enum(struct hda_codec *codec)
static void alc_init_auto_hp(struct hda_codec *codec)
static void alc_init_auto_mic(struct hda_codec *codec)
#define ALC_FIXUP_SKU_IGNORE (2)
static int alc_auto_parse_customize_define(struct hda_codec *codec)
static int alc_subsystem_id(struct hda_codec *codec,
hda_nid_t porta, hda_nid_t porte,
hda_nid_t portd, hda_nid_t porti)
static void alc_ssid_check(struct hda_codec *codec,
hda_nid_t porta, hda_nid_t porte,
hda_nid_t portd, hda_nid_t porti)
struct alc_pincfg ;
struct alc_model_fixup ;
struct alc_fixup ;
enum ;
enum ;
static void alc_apply_fixup(struct hda_codec *codec, int action)
static void alc_pick_fixup(struct hda_codec *codec,
const struct alc_model_fixup *models,
const struct snd_pci_quirk *quirk,
const struct alc_fixup *fixlist)
static int alc_read_coef_idx(struct hda_codec *codec,
unsigned int coef_idx)
static void alc_write_coef_idx(struct hda_codec *codec, unsigned int coef_idx,
unsigned int coef_val)
static void alc_auto_init_digital(struct hda_codec *codec)
static void alc_auto_parse_digital(struct hda_codec *codec)
static const struct hda_verb alc888_4ST_ch2_intel_init[] = ;
static const struct hda_verb alc888_4ST_ch4_intel_init[] = ;
static const struct hda_verb alc888_4ST_ch6_intel_init[] = ;
static const struct hda_verb alc888_4ST_ch8_intel_init[] = ;
static const struct hda_channel_mode alc888_4ST_8ch_intel_modes[4] = ;
static const struct hda_verb alc888_fujitsu_xa3530_verbs[] = ;
static void alc889_automute_setup(struct hda_codec *codec)
static void alc889_intel_init_hook(struct hda_codec *codec)
static void alc888_fujitsu_xa3530_setup(struct hda_codec *codec)
static const struct hda_verb alc888_acer_aspire_4930g_verbs[] = ;
static const struct hda_verb alc888_acer_aspire_6530g_verbs[] = ;
static const struct hda_verb alc888_acer_aspire_7730G_verbs[] = ;
static const struct hda_verb alc889_acer_aspire_8930g_verbs[] = ;
static const struct hda_input_mux alc888_2_capture_sources[2] = ;
static const struct hda_input_mux alc888_acer_aspire_6530_sources[2] = ;
static const struct hda_input_mux alc889_capture_sources[3] = ;
static const struct snd_kcontrol_new alc888_base_mixer[] = ;
static const struct snd_kcontrol_new alc888_acer_aspire_4930g_mixer[] = ;
static const struct snd_kcontrol_new alc889_acer_aspire_8930g_mixer[] = ;
static void alc888_acer_aspire_4930g_setup(struct hda_codec *codec)
static void alc888_acer_aspire_6530g_setup(struct hda_codec *codec)
static void alc888_acer_aspire_7730g_setup(struct hda_codec *codec)
static void alc889_acer_aspire_8930g_setup(struct hda_codec *codec)
static const hda_nid_t alc880_dac_nids[4] = ;
static const hda_nid_t alc880_adc_nids[3] = ;
static const hda_nid_t alc880_adc_nids_alt[2] = ;
#define ALC880_DIGOUT_NID	0x06
#define ALC880_DIGIN_NID	0x0a
static const struct hda_input_mux alc880_capture_source = ;
static const struct hda_verb alc880_threestack_ch2_init[] = ;
static const struct hda_verb alc880_threestack_ch6_init[] = ;
static const struct hda_channel_mode alc880_threestack_modes[2] = ;
static const struct snd_kcontrol_new alc880_three_stack_mixer[] = ;
static int alc_cap_vol_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int alc_cap_vol_tlv(struct snd_kcontrol *kcontrol, int op_flag,
unsigned int size, unsigned int __user *tlv)
typedef int (*getput_call_t)(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
static int alc_cap_getput_caller(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol,
getput_call_t func, bool check_adc_switch)
static int alc_cap_vol_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc_cap_vol_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define alc_cap_sw_info		snd_ctl_boolean_stereo_info
static int alc_cap_sw_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc_cap_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define _DEFINE_CAPMIX(num) \
, \
#define _DEFINE_CAPSRC(num) \
#define DEFINE_CAPMIX(num) \
static const struct snd_kcontrol_new alc_capture_mixer ## num[] =
#define DEFINE_CAPMIX_NOSRC(num) \
static const struct snd_kcontrol_new alc_capture_mixer_nosrc ## num[] =
DEFINE_CAPMIX(1);
DEFINE_CAPMIX(2);
DEFINE_CAPMIX(3);
DEFINE_CAPMIX_NOSRC(1);
DEFINE_CAPMIX_NOSRC(2);
DEFINE_CAPMIX_NOSRC(3);
static const struct snd_kcontrol_new alc880_five_stack_mixer[] = ;
static const struct hda_verb alc880_fivestack_ch6_init[] = ;
static const struct hda_verb alc880_fivestack_ch8_init[] = ;
static const struct hda_channel_mode alc880_fivestack_modes[2] = ;
static const hda_nid_t alc880_6st_dac_nids[4] = ;
static const struct hda_input_mux alc880_6stack_capture_source = ;
static const struct hda_channel_mode alc880_sixstack_modes[1] = ;
static const struct snd_kcontrol_new alc880_six_stack_mixer[] = ;
static const hda_nid_t alc880_w810_dac_nids[3] = ;
static const struct hda_channel_mode alc880_w810_modes[1] = ;
static const struct snd_kcontrol_new alc880_w810_base_mixer[] = ;
static const hda_nid_t alc880_z71v_dac_nids[1] = ;
#define ALC880_Z71V_HP_DAC	0x03
static const struct hda_channel_mode alc880_2_jack_modes[1] = ;
static const struct snd_kcontrol_new alc880_z71v_mixer[] = ;
static const hda_nid_t alc880_f1734_dac_nids[1] = ;
#define ALC880_F1734_HP_DAC	0x02
static const struct snd_kcontrol_new alc880_f1734_mixer[] = ;
static const struct hda_input_mux alc880_f1734_capture_source = ;
#define alc880_asus_dac_nids	alc880_w810_dac_nids
#define alc880_asus_modes	alc880_threestack_modes
static const struct snd_kcontrol_new alc880_asus_mixer[] = ;
static const struct snd_kcontrol_new alc880_asus_w1v_mixer[] = ;
static const struct snd_kcontrol_new alc880_tcl_s700_mixer[] = ;
static const struct snd_kcontrol_new alc880_uniwill_mixer[] = ;
static const struct snd_kcontrol_new alc880_fujitsu_mixer[] = ;
static const struct snd_kcontrol_new alc880_uniwill_p53_mixer[] = ;
static const char * const alc_slave_vols[] = ;
static const char * const alc_slave_sws[] = ;
#define NID_MAPPING		(-1)
#define SUBDEV_SPEAKER_		(0 << 6)
#define SUBDEV_HP_		(1 << 6)
#define SUBDEV_LINE_		(2 << 6)
#define SUBDEV_SPEAKER(x)	(SUBDEV_SPEAKER_ | ((x) & 0x3f))
#define SUBDEV_HP(x)		(SUBDEV_HP_ | ((x) & 0x3f))
#define SUBDEV_LINE(x)		(SUBDEV_LINE_ | ((x) & 0x3f))
static void alc_free_kctls(struct hda_codec *codec);
static const struct snd_kcontrol_new alc_beep_mixer[] = ;
static int alc_build_controls(struct hda_codec *codec)
static const struct hda_verb alc880_volume_init_verbs[] = ;
static const struct hda_verb alc880_pin_3stack_init_verbs[] = ;
static const struct hda_verb alc880_pin_5stack_init_verbs[] = ;
static const struct hda_verb alc880_pin_w810_init_verbs[] = ;
static const struct hda_verb alc880_pin_z71v_init_verbs[] = ;
static const struct hda_verb alc880_pin_6stack_init_verbs[] = ;
static const struct hda_verb alc880_uniwill_init_verbs[] = ;
static const struct hda_verb alc880_uniwill_p53_init_verbs[] = ;
static const struct hda_verb alc880_beep_init_verbs[] = ;
static void alc88x_simple_mic_automute(struct hda_codec *codec)
static void alc880_uniwill_setup(struct hda_codec *codec)
static void alc880_uniwill_init_hook(struct hda_codec *codec)
static void alc880_uniwill_unsol_event(struct hda_codec *codec,
unsigned int res)
static void alc880_uniwill_p53_setup(struct hda_codec *codec)
static void alc880_uniwill_p53_dcvol_automute(struct hda_codec *codec)
static void alc880_uniwill_p53_unsol_event(struct hda_codec *codec,
unsigned int res)
static const struct hda_verb alc880_pin_f1734_init_verbs[] = ;
static const struct hda_verb alc880_pin_asus_init_verbs[] = ;
#define alc880_gpio1_init_verbs	alc_gpio1_init_verbs
#define alc880_gpio2_init_verbs	alc_gpio2_init_verbs
#define alc880_gpio3_init_verbs	alc_gpio3_init_verbs
static const struct hda_verb alc880_pin_clevo_init_verbs[] = ;
static const struct hda_verb alc880_pin_tcl_S700_init_verbs[] = ;
static const hda_nid_t alc880_lg_dac_nids[3] = ;
static const struct hda_input_mux alc880_lg_capture_source = ;
static const struct hda_verb alc880_lg_ch2_init[] = ;
static const struct hda_verb alc880_lg_ch4_init[] = ;
static const struct hda_verb alc880_lg_ch6_init[] = ;
static const struct hda_channel_mode alc880_lg_ch_modes[3] = ;
static const struct snd_kcontrol_new alc880_lg_mixer[] = ;
static const struct hda_verb alc880_lg_init_verbs[] = ;
static void alc880_lg_setup(struct hda_codec *codec)
static const struct hda_input_mux alc880_lg_lw_capture_source = ;
#define alc880_lg_lw_modes alc880_threestack_modes
static const struct snd_kcontrol_new alc880_lg_lw_mixer[] = ;
static const struct hda_verb alc880_lg_lw_init_verbs[] = ;
static void alc880_lg_lw_setup(struct hda_codec *codec)
static const struct snd_kcontrol_new alc880_medion_rim_mixer[] = ;
static const struct hda_input_mux alc880_medion_rim_capture_source = ;
static const struct hda_verb alc880_medion_rim_init_verbs[] = ;
static void alc880_medion_rim_automute(struct hda_codec *codec)
static void alc880_medion_rim_unsol_event(struct hda_codec *codec,
unsigned int res)
static void alc880_medion_rim_setup(struct hda_codec *codec)
static const struct hda_amp_list alc880_loopbacks[] = ;
static const struct hda_amp_list alc880_lg_loopbacks[] = ;
static void alc_init_special_input_src(struct hda_codec *codec);
static int alc_init(struct hda_codec *codec)
static void alc_unsol_event(struct hda_codec *codec, unsigned int res)
static int alc_check_power_status(struct hda_codec *codec, hda_nid_t nid)
static int alc880_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int alc880_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int alc880_playback_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int alc880_dig_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int alc880_dig_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int alc880_dig_playback_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int alc880_dig_playback_pcm_close(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int alc880_alt_capture_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int alc880_alt_capture_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int dualmic_capture_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int dualmic_capture_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream dualmic_pcm_analog_capture = ;
static const struct hda_pcm_stream alc880_pcm_analog_playback = ;
static const struct hda_pcm_stream alc880_pcm_analog_capture = ;
static const struct hda_pcm_stream alc880_pcm_analog_alt_playback = ;
static const struct hda_pcm_stream alc880_pcm_analog_alt_capture = ;
static const struct hda_pcm_stream alc880_pcm_digital_playback = ;
static const struct hda_pcm_stream alc880_pcm_digital_capture = ;
static const struct hda_pcm_stream alc_pcm_null_stream = ;
static int alc_build_pcms(struct hda_codec *codec)
static inline void alc_shutup(struct hda_codec *codec)
static void alc_free_kctls(struct hda_codec *codec)
static void alc_free(struct hda_codec *codec)
static void alc_power_eapd(struct hda_codec *codec)
static int alc_suspend(struct hda_codec *codec, pm_message_t state)
static int alc_resume(struct hda_codec *codec)
static const struct hda_codec_ops alc_patch_ops = ;
static int alc_codec_rename(struct hda_codec *codec, const char *name)
static const hda_nid_t alc880_test_dac_nids[4] = ;
static const struct hda_input_mux alc880_test_capture_source = ;
static const struct hda_channel_mode alc880_test_modes[4] = ;
static int alc_test_pin_ctl_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int alc_test_pin_ctl_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc_test_pin_ctl_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc_test_pin_src_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int alc_test_pin_src_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc_test_pin_src_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define PIN_CTL_TEST(xname,nid)
#define PIN_SRC_TEST(xname,nid)
static const struct snd_kcontrol_new alc880_test_mixer[] = ;
static const struct hda_verb alc880_test_init_verbs[] = ;
static const char * const alc880_models[ALC880_MODEL_LAST] = ;
static const struct snd_pci_quirk alc880_cfg_tbl[] = ;
static const struct alc_config_preset alc880_presets[] = ;
enum ;
static const struct snd_kcontrol_new alc880_control_templates[] = ;
static struct snd_kcontrol_new *alc_kcontrol_new(struct alc_spec *spec)
static int add_control(struct alc_spec *spec, int type, const char *name,
int cidx, unsigned long val)
static int add_control_with_pfx(struct alc_spec *spec, int type,
const char *pfx, const char *dir,
const char *sfx, int cidx, unsigned long val)
#define add_pb_vol_ctrl(spec, type, pfx, val)			\
add_control_with_pfx(spec, type, pfx, "Playback", "Volume", 0, val)
#define add_pb_sw_ctrl(spec, type, pfx, val)			\
add_control_with_pfx(spec, type, pfx, "Playback", "Switch", 0, val)
#define __add_pb_vol_ctrl(spec, type, pfx, cidx, val)			\
add_control_with_pfx(spec, type, pfx, "Playback", "Volume", cidx, val)
#define __add_pb_sw_ctrl(spec, type, pfx, cidx, val)			\
add_control_with_pfx(spec, type, pfx, "Playback", "Switch", cidx, val)
#define alc880_is_fixed_pin(nid)	((nid) >= 0x14 && (nid) <= 0x17)
#define alc880_fixed_pin_idx(nid)	((nid) - 0x14)
#define alc880_is_multi_pin(nid)	((nid) >= 0x18)
#define alc880_multi_pin_idx(nid)	((nid) - 0x18)
#define alc880_idx_to_dac(nid)		((nid) + 0x02)
#define alc880_dac_to_idx(nid)		((nid) - 0x02)
#define alc880_idx_to_mixer(nid)	((nid) + 0x0c)
#define alc880_idx_to_selector(nid)	((nid) + 0x10)
#define ALC880_PIN_CD_NID		0x1c
static int alc880_auto_fill_dac_nids(struct alc_spec *spec,
const struct auto_pin_cfg *cfg)
static const char *alc_get_line_out_pfx(struct alc_spec *spec,
bool can_be_master)
static int alc880_auto_create_multi_out_ctls(struct alc_spec *spec,
const struct auto_pin_cfg *cfg)
static int alc880_auto_create_extra_out(struct alc_spec *spec, hda_nid_t pin,
const char *pfx)
static int new_analog_input(struct alc_spec *spec, hda_nid_t pin,
const char *ctlname, int ctlidx,
int idx, hda_nid_t mix_nid)
static int alc_is_input_pin(struct hda_codec *codec, hda_nid_t nid)
static int alc_auto_create_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg,
hda_nid_t mixer,
hda_nid_t cap1, hda_nid_t cap2)
static int alc880_auto_create_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static void alc_set_pin_output(struct hda_codec *codec, hda_nid_t nid,
unsigned int pin_type)
static void alc880_auto_set_output_and_unmute(struct hda_codec *codec,
hda_nid_t nid, int pin_type,
int dac_idx)
static int get_pin_type(int line_out_type)
static void alc880_auto_init_multi_out(struct hda_codec *codec)
static void alc880_auto_init_extra_out(struct hda_codec *codec)
static void alc880_auto_init_analog_input(struct hda_codec *codec)
static void alc880_auto_init_input_src(struct hda_codec *codec)
static int alc_auto_add_multi_channel_mode(struct hda_codec *codec);
static int alc880_parse_auto_config(struct hda_codec *codec)
static void alc880_auto_init(struct hda_codec *codec)
static void fixup_automic_adc(struct hda_codec *codec)
static void select_or_unmute_capsrc(struct hda_codec *codec, hda_nid_t cap,
int idx)
static int init_capsrc_for_pin(struct hda_codec *codec, hda_nid_t pin)
static void fixup_single_adc(struct hda_codec *codec)
static void fixup_dual_adc_switch(struct hda_codec *codec)
static void alc_init_special_input_src(struct hda_codec *codec)
static void set_capture_mixer(struct hda_codec *codec)
static void fillup_priv_adc_nids(struct hda_codec *codec, const hda_nid_t *nids,
int num_nids)
#define set_beep_amp(spec, nid, idx, dir) \
((spec)->beep_amp = HDA_COMPOSE_AMP_VAL(nid, 3, idx, dir))
static const struct snd_pci_quirk beep_white_list[] = ;
static inline int has_cdefine_beep(struct hda_codec *codec)
#define set_beep_amp(spec, nid, idx, dir)
#define has_cdefine_beep(codec)		0
static int patch_alc880(struct hda_codec *codec)
static const hda_nid_t alc260_dac_nids[1] = ;
static const hda_nid_t alc260_adc_nids[1] = ;
static const hda_nid_t alc260_adc_nids_alt[1] = ;
static const hda_nid_t alc260_dual_adc_nids[2] = ;
#define ALC260_DIGOUT_NID	0x03
#define ALC260_DIGIN_NID	0x06
static const struct hda_input_mux alc260_capture_source = ;
static const struct hda_input_mux alc260_fujitsu_capture_sources[2] = ;
static const struct hda_input_mux alc260_acer_capture_sources[2] = ;
static const struct hda_input_mux alc260_favorit100_capture_sources[2] = ;
static const struct hda_channel_mode alc260_modes[1] = ;
static const struct snd_kcontrol_new alc260_base_output_mixer[] = ;
static const struct snd_kcontrol_new alc260_input_mixer[] = ;
static void alc260_hp_master_update(struct hda_codec *codec)
static int alc260_hp_master_sw_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc260_hp_master_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new alc260_hp_output_mixer[] = ;
static const struct hda_verb alc260_hp_unsol_verbs[] = ;
static void alc260_hp_setup(struct hda_codec *codec)
static const struct snd_kcontrol_new alc260_hp_3013_mixer[] = ;
static void alc260_hp_3013_setup(struct hda_codec *codec)
static const struct hda_bind_ctls alc260_dc7600_bind_master_vol = ;
static const struct hda_bind_ctls alc260_dc7600_bind_switch = ;
static const struct snd_kcontrol_new alc260_hp_dc7600_mixer[] = ;
static const struct hda_verb alc260_hp_3013_unsol_verbs[] = ;
static void alc260_hp_3012_setup(struct hda_codec *codec)
static const struct snd_kcontrol_new alc260_fujitsu_mixer[] = ;
static const struct snd_kcontrol_new alc260_acer_mixer[] = ;
static const struct snd_kcontrol_new alc260_favorit100_mixer[] = ;
static const struct snd_kcontrol_new alc260_will_mixer[] = ;
static const struct snd_kcontrol_new alc260_replacer_672v_mixer[] = ;
static const struct hda_verb alc260_init_verbs[] = ;
static const struct hda_verb alc260_hp_3013_init_verbs[] = ;
static const struct hda_verb alc260_fujitsu_init_verbs[] = ;
static const struct hda_verb alc260_acer_init_verbs[] = ;
static const struct hda_verb alc260_favorit100_init_verbs[] = ;
static const struct hda_verb alc260_will_verbs[] = ;
static const struct hda_verb alc260_replacer_672v_verbs[] = ;
static void alc260_replacer_672v_automute(struct hda_codec *codec)
static void alc260_replacer_672v_unsol_event(struct hda_codec *codec,
unsigned int res)
static const struct hda_verb alc260_hp_dc7600_verbs[] = ;
static const hda_nid_t alc260_test_dac_nids[1] = ;
static const hda_nid_t alc260_test_adc_nids[2] = ;
static const struct hda_input_mux alc260_test_capture_sources[2] = ;
static const struct snd_kcontrol_new alc260_test_mixer[] = ;
static const struct hda_verb alc260_test_init_verbs[] = ;
#define alc260_pcm_analog_playback	alc880_pcm_analog_alt_playback
#define alc260_pcm_analog_capture	alc880_pcm_analog_capture
#define alc260_pcm_digital_playback	alc880_pcm_digital_playback
#define alc260_pcm_digital_capture	alc880_pcm_digital_capture
static int alc260_add_playback_controls(struct alc_spec *spec, hda_nid_t nid,
const char *pfx, int *vol_bits)
static int alc260_auto_create_multi_out_ctls(struct alc_spec *spec,
const struct auto_pin_cfg *cfg)
static int alc260_auto_create_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static void alc260_auto_set_output_and_unmute(struct hda_codec *codec,
hda_nid_t nid, int pin_type,
int sel_idx)
static void alc260_auto_init_multi_out(struct hda_codec *codec)
#define ALC260_PIN_CD_NID		0x16
static void alc260_auto_init_analog_input(struct hda_codec *codec)
#define alc260_auto_init_input_src	alc880_auto_init_input_src
static const struct hda_verb alc260_volume_init_verbs[] = ;
static int alc260_parse_auto_config(struct hda_codec *codec)
static void alc260_auto_init(struct hda_codec *codec)
static const struct hda_amp_list alc260_loopbacks[] = ;
enum ;
static const struct alc_fixup alc260_fixups[] = ;
static const struct snd_pci_quirk alc260_fixup_tbl[] = ;
static const char * const alc260_models[ALC260_MODEL_LAST] = ;
static const struct snd_pci_quirk alc260_cfg_tbl[] = ;
static const struct alc_config_preset alc260_presets[] = ;
static int patch_alc260(struct hda_codec *codec)
#define ALC882_DIGOUT_NID	0x06
#define ALC882_DIGIN_NID	0x0a
#define ALC883_DIGOUT_NID	ALC882_DIGOUT_NID
#define ALC883_DIGIN_NID	ALC882_DIGIN_NID
#define ALC1200_DIGOUT_NID	0x10
static const struct hda_channel_mode alc882_ch_modes[1] = ;
static const hda_nid_t alc882_dac_nids[4] = ;
#define alc883_dac_nids		alc882_dac_nids
#define alc882_adc_nids		alc880_adc_nids
#define alc882_adc_nids_alt	alc880_adc_nids_alt
#define alc883_adc_nids		alc882_adc_nids_alt
static const hda_nid_t alc883_adc_nids_alt[1] = ;
static const hda_nid_t alc883_adc_nids_rev[2] = ;
#define alc889_adc_nids		alc880_adc_nids
static const hda_nid_t alc882_capsrc_nids[3] = ;
static const hda_nid_t alc882_capsrc_nids_alt[2] = ;
#define alc883_capsrc_nids	alc882_capsrc_nids_alt
static const hda_nid_t alc883_capsrc_nids_rev[2] = ;
#define alc889_capsrc_nids	alc882_capsrc_nids
static const struct hda_input_mux alc882_capture_source = ;
#define alc883_capture_source	alc882_capture_source
static const struct hda_input_mux alc889_capture_source = ;
static const struct hda_input_mux mb5_capture_source = ;
static const struct hda_input_mux macmini3_capture_source = ;
static const struct hda_input_mux alc883_3stack_6ch_intel = ;
static const struct hda_input_mux alc883_lenovo_101e_capture_source = ;
static const struct hda_input_mux alc883_lenovo_nb0763_capture_source = ;
static const struct hda_input_mux alc883_fujitsu_pi2515_capture_source = ;
static const struct hda_input_mux alc883_lenovo_sky_capture_source = ;
static const struct hda_input_mux alc883_asus_eee1601_capture_source = ;
static const struct hda_input_mux alc889A_mb31_capture_source = ;
static const struct hda_input_mux alc889A_imac91_capture_source = ;
static const struct hda_channel_mode alc883_3ST_2ch_modes[1] = ;
static const struct hda_verb alc882_3ST_ch2_init[] = ;
static const struct hda_verb alc882_3ST_ch4_init[] = ;
static const struct hda_verb alc882_3ST_ch6_init[] = ;
static const struct hda_channel_mode alc882_3ST_6ch_modes[3] = ;
#define alc883_3ST_6ch_modes	alc882_3ST_6ch_modes
static const struct hda_verb alc883_3ST_ch2_clevo_init[] = ;
static const struct hda_verb alc883_3ST_ch4_clevo_init[] = ;
static const struct hda_verb alc883_3ST_ch6_clevo_init[] = ;
static const struct hda_channel_mode alc883_3ST_6ch_clevo_modes[3] = ;
static const struct hda_verb alc882_sixstack_ch6_init[] = ;
static const struct hda_verb alc882_sixstack_ch8_init[] = ;
static const struct hda_channel_mode alc882_sixstack_modes[2] = ;
static const struct hda_channel_mode alc885_mba21_ch_modes[1] = ;
static const struct hda_verb alc885_mbp_ch2_init[] = ;
static const struct hda_verb alc885_mbp_ch4_init[] = ;
static const struct hda_channel_mode alc885_mbp_4ch_modes[2] = ;
static const struct hda_verb alc885_mb5_ch2_init[] = ;
static const struct hda_verb alc885_mb5_ch6_init[] = ;
static const struct hda_channel_mode alc885_mb5_6ch_modes[2] = ;
#define alc885_macmini3_6ch_modes	alc885_mb5_6ch_modes
static const struct hda_verb alc883_4ST_ch2_init[] = ;
static const struct hda_verb alc883_4ST_ch4_init[] = ;
static const struct hda_verb alc883_4ST_ch6_init[] = ;
static const struct hda_verb alc883_4ST_ch8_init[] = ;
static const struct hda_channel_mode alc883_4ST_8ch_modes[4] = ;
static const struct hda_verb alc883_3ST_ch2_intel_init[] = ;
static const struct hda_verb alc883_3ST_ch4_intel_init[] = ;
static const struct hda_verb alc883_3ST_ch6_intel_init[] = ;
static const struct hda_channel_mode alc883_3ST_6ch_intel_modes[3] = ;
static const struct hda_verb alc889_ch2_intel_init[] = ;
static const struct hda_verb alc889_ch6_intel_init[] = ;
static const struct hda_verb alc889_ch8_intel_init[] = ;
static const struct hda_channel_mode alc889_8ch_intel_modes[3] = ;
static const struct hda_verb alc883_sixstack_ch6_init[] = ;
static const struct hda_verb alc883_sixstack_ch8_init[] = ;
static const struct hda_channel_mode alc883_sixstack_modes[2] = ;
static const struct snd_kcontrol_new alc882_base_mixer[] = ;
static const struct snd_kcontrol_new alc885_mba21_mixer[] = ;
static const struct snd_kcontrol_new alc885_mbp3_mixer[] = ;
static const struct snd_kcontrol_new alc885_mb5_mixer[] = ;
static const struct snd_kcontrol_new alc885_macmini3_mixer[] = ;
static const struct snd_kcontrol_new alc885_imac91_mixer[] = ;
static const struct snd_kcontrol_new alc882_w2jc_mixer[] = ;
static const struct snd_kcontrol_new alc882_targa_mixer[] = ;
static const struct snd_kcontrol_new alc882_asus_a7j_mixer[] = ;
static const struct snd_kcontrol_new alc882_asus_a7m_mixer[] = ;
static const struct snd_kcontrol_new alc882_chmode_mixer[] = ;
static const struct hda_verb alc882_base_init_verbs[] = ;
static const struct hda_verb alc882_adc1_init_verbs[] = ;
static const struct hda_verb alc882_eapd_verbs[] = ;
static const struct hda_verb alc889_eapd_verbs[] = ;
static const struct hda_verb alc_hp15_unsol_verbs[] = ;
static const struct hda_verb alc885_init_verbs[] = ;
static const struct hda_verb alc885_init_input_verbs[] = ;
static const struct hda_verb alc889_init_input_verbs[] = ;
#define alc883_init_verbs	alc882_base_init_verbs
static const struct snd_kcontrol_new alc882_macpro_mixer[] = ;
static const struct hda_verb alc882_macpro_init_verbs[] = ;
static const struct hda_verb alc885_mb5_init_verbs[] = ;
static const struct hda_verb alc885_macmini3_init_verbs[] = ;
static const struct hda_verb alc885_mba21_init_verbs[] = ;
static const struct hda_verb alc885_mbp3_init_verbs[] = ;
static const struct hda_verb alc885_imac91_init_verbs[] = ;
static const struct snd_kcontrol_new alc885_imac24_mixer[] = ;
static const struct hda_verb alc885_imac24_init_verbs[] = ;
static void alc885_imac24_setup(struct hda_codec *codec)
#define alc885_mb5_setup	alc885_imac24_setup
#define alc885_macmini3_setup	alc885_imac24_setup
static void alc885_mba21_setup(struct hda_codec *codec)
static void alc885_mbp3_setup(struct hda_codec *codec)
static void alc885_imac91_setup(struct hda_codec *codec)
static const struct hda_verb alc882_targa_verbs[] = ;
static void alc882_targa_automute(struct hda_codec *codec)
static void alc882_targa_setup(struct hda_codec *codec)
static void alc882_targa_unsol_event(struct hda_codec *codec, unsigned int res)
static const struct hda_verb alc882_asus_a7j_verbs[] = ;
static const struct hda_verb alc882_asus_a7m_verbs[] = ;
static void alc882_gpio_mute(struct hda_codec *codec, int pin, int muted)
static void alc885_macpro_init_hook(struct hda_codec *codec)
static void alc885_imac24_init_hook(struct hda_codec *codec)
static const struct hda_verb alc883_auto_init_verbs[] = ;
static const struct hda_verb alc889A_mb31_ch2_init[] = ;
static const struct hda_verb alc889A_mb31_ch4_init[] = ;
static const struct hda_verb alc889A_mb31_ch5_init[] = ;
static const struct hda_verb alc889A_mb31_ch6_init[] = ;
static const struct hda_channel_mode alc889A_mb31_6ch_modes[4] = ;
static const struct hda_verb alc883_medion_eapd_verbs[] = ;
#define alc883_base_mixer	alc882_base_mixer
static const struct snd_kcontrol_new alc883_mitac_mixer[] = ;
static const struct snd_kcontrol_new alc883_clevo_m720_mixer[] = ;
static const struct snd_kcontrol_new alc883_2ch_fujitsu_pi2515_mixer[] = ;
static const struct snd_kcontrol_new alc883_3ST_2ch_mixer[] = ;
static const struct snd_kcontrol_new alc883_3ST_6ch_mixer[] = ;
static const struct snd_kcontrol_new alc883_3ST_6ch_intel_mixer[] = ;
static const struct snd_kcontrol_new alc885_8ch_intel_mixer[] = ;
static const struct snd_kcontrol_new alc883_fivestack_mixer[] = ;
static const struct snd_kcontrol_new alc883_targa_mixer[] = ;
static const struct snd_kcontrol_new alc883_targa_2ch_mixer[] = ;
static const struct snd_kcontrol_new alc883_targa_8ch_mixer[] = ;
static const struct snd_kcontrol_new alc883_lenovo_101e_2ch_mixer[] = ;
static const struct snd_kcontrol_new alc883_lenovo_nb0763_mixer[] = ;
static const struct snd_kcontrol_new alc883_medion_wim2160_mixer[] = ;
static const struct hda_verb alc883_medion_wim2160_verbs[] = ;
static void alc883_medion_wim2160_setup(struct hda_codec *codec)
static const struct snd_kcontrol_new alc883_acer_aspire_mixer[] = ;
static const struct snd_kcontrol_new alc888_acer_aspire_6530_mixer[] = ;
static const struct snd_kcontrol_new alc888_lenovo_sky_mixer[] = ;
static const struct snd_kcontrol_new alc889A_mb31_mixer[] = ;
static const struct snd_kcontrol_new alc883_vaiott_mixer[] = ;
static const struct hda_bind_ctls alc883_bind_cap_vol = ;
static const struct hda_bind_ctls alc883_bind_cap_switch = ;
static const struct snd_kcontrol_new alc883_asus_eee1601_mixer[] = ;
static const struct snd_kcontrol_new alc883_asus_eee1601_cap_mixer[] = ;
static const struct snd_kcontrol_new alc883_chmode_mixer[] = ;
static void alc883_mitac_setup(struct hda_codec *codec)
static const struct hda_verb alc883_mitac_verbs[] = ;
static const struct hda_verb alc883_clevo_m540r_verbs[] = ;
static const struct hda_verb alc883_clevo_m720_verbs[] = ;
static const struct hda_verb alc883_2ch_fujitsu_pi2515_verbs[] = ;
static const struct hda_verb alc883_targa_verbs[] = ;
static const struct hda_verb alc883_lenovo_101e_verbs[] = ;
static const struct hda_verb alc883_lenovo_nb0763_verbs[] = ;
static const struct hda_verb alc888_lenovo_ms7195_verbs[] = ;
static const struct hda_verb alc883_haier_w66_verbs[] = ;
static const struct hda_verb alc888_lenovo_sky_verbs[] = ;
static const struct hda_verb alc888_6st_dell_verbs[] = ;
static const struct hda_verb alc883_vaiott_verbs[] = ;
static void alc888_3st_hp_setup(struct hda_codec *codec)
static const struct hda_verb alc888_3st_hp_verbs[] = ;
static const struct hda_verb alc888_3st_hp_2ch_init[] = ;
static const struct hda_verb alc888_3st_hp_4ch_init[] = ;
static const struct hda_verb alc888_3st_hp_6ch_init[] = ;
static const struct hda_channel_mode alc888_3st_hp_modes[3] = ;
static void alc888_lenovo_ms7195_setup(struct hda_codec *codec)
static void alc883_lenovo_nb0763_setup(struct hda_codec *codec)
#define alc883_targa_init_hook		alc882_targa_init_hook
#define alc883_targa_unsol_event	alc882_targa_unsol_event
static void alc883_clevo_m720_setup(struct hda_codec *codec)
static void alc883_clevo_m720_init_hook(struct hda_codec *codec)
static void alc883_clevo_m720_unsol_event(struct hda_codec *codec,
unsigned int res)
static void alc883_2ch_fujitsu_pi2515_setup(struct hda_codec *codec)
static void alc883_haier_w66_setup(struct hda_codec *codec)
static void alc883_lenovo_101e_setup(struct hda_codec *codec)
static void alc883_acer_aspire_setup(struct hda_codec *codec)
static const struct hda_verb alc883_acer_eapd_verbs[] = ;
static void alc888_6st_dell_setup(struct hda_codec *codec)
static void alc888_lenovo_sky_setup(struct hda_codec *codec)
static void alc883_vaiott_setup(struct hda_codec *codec)
static const struct hda_verb alc888_asus_m90v_verbs[] = ;
static void alc883_mode2_setup(struct hda_codec *codec)
static const struct hda_verb alc888_asus_eee1601_verbs[] = ;
static void alc883_eee1601_inithook(struct hda_codec *codec)
static const struct hda_verb alc889A_mb31_verbs[] = ;
static void alc889A_mb31_automute(struct hda_codec *codec)
static void alc889A_mb31_unsol_event(struct hda_codec *codec, unsigned int res)
#define alc882_loopbacks	alc880_loopbacks
#define alc882_pcm_analog_playback	alc880_pcm_analog_playback
#define alc882_pcm_analog_capture	alc880_pcm_analog_capture
#define alc882_pcm_digital_playback	alc880_pcm_digital_playback
#define alc882_pcm_digital_capture	alc880_pcm_digital_capture
static const hda_nid_t alc883_slave_dig_outs[] = ;
static const hda_nid_t alc1200_slave_dig_outs[] = ;
static const char * const alc882_models[ALC882_MODEL_LAST] = ;
static const struct snd_pci_quirk alc882_cfg_tbl[] = ;
static const struct snd_pci_quirk alc882_ssid_cfg_tbl[] = ;
static const struct alc_config_preset alc882_presets[] = ;
enum ;
static const struct alc_fixup alc882_fixups[] = ;
static const struct snd_pci_quirk alc882_fixup_tbl[] = ;
static int alc882_auto_create_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static void alc882_auto_set_output_and_unmute(struct hda_codec *codec,
hda_nid_t nid, int pin_type,
hda_nid_t dac)
static void alc882_auto_init_multi_out(struct hda_codec *codec)
static void alc882_auto_init_hp_out(struct hda_codec *codec)
static void alc882_auto_init_analog_input(struct hda_codec *codec)
static void alc882_auto_init_input_src(struct hda_codec *codec)
static int alc_auto_add_mic_boost(struct hda_codec *codec)
static int alc882_parse_auto_config(struct hda_codec *codec)
static void alc882_auto_init(struct hda_codec *codec)
static int patch_alc882(struct hda_codec *codec)
#define ALC262_DIGOUT_NID	ALC880_DIGOUT_NID
#define ALC262_DIGIN_NID	ALC880_DIGIN_NID
#define alc262_dac_nids		alc260_dac_nids
#define alc262_adc_nids		alc882_adc_nids
#define alc262_adc_nids_alt	alc882_adc_nids_alt
#define alc262_capsrc_nids	alc882_capsrc_nids
#define alc262_capsrc_nids_alt	alc882_capsrc_nids_alt
#define alc262_modes		alc260_modes
#define alc262_capture_source	alc882_capture_source
static const hda_nid_t alc262_dmic_adc_nids[1] = ;
static const hda_nid_t alc262_dmic_capsrc_nids[1] = ;
static const struct snd_kcontrol_new alc262_base_mixer[] = ;
#define alc262_hp_master_update		alc260_hp_master_update
static void alc262_hp_bpc_setup(struct hda_codec *codec)
static void alc262_hp_wildwest_setup(struct hda_codec *codec)
#define alc262_hp_master_sw_get		alc260_hp_master_sw_get
#define alc262_hp_master_sw_put		alc260_hp_master_sw_put
#define ALC262_HP_MASTER_SWITCH					\
, \
static const struct snd_kcontrol_new alc262_HP_BPC_mixer[] = ;
static const struct snd_kcontrol_new alc262_HP_BPC_WildWest_mixer[] = ;
static const struct snd_kcontrol_new alc262_HP_BPC_WildWest_option_mixer[] = ;
static void alc262_hp_t5735_setup(struct hda_codec *codec)
static const struct snd_kcontrol_new alc262_hp_t5735_mixer[] = ;
static const struct hda_verb alc262_hp_t5735_verbs[] = ;
static const struct snd_kcontrol_new alc262_hp_rp5700_mixer[] = ;
static const struct hda_verb alc262_hp_rp5700_verbs[] = ;
static const struct hda_input_mux alc262_hp_rp5700_capture_source = ;
#define alc262_hippo_master_update	alc262_hp_master_update
#define alc262_hippo_master_sw_get	alc262_hp_master_sw_get
#define alc262_hippo_master_sw_put	alc262_hp_master_sw_put
#define ALC262_HIPPO_MASTER_SWITCH				\
,							\
static const struct snd_kcontrol_new alc262_hippo_mixer[] = ;
static const struct snd_kcontrol_new alc262_hippo1_mixer[] = ;
static void alc262_hippo_setup(struct hda_codec *codec)
static void alc262_hippo1_setup(struct hda_codec *codec)
static const struct snd_kcontrol_new alc262_sony_mixer[] = ;
static const struct snd_kcontrol_new alc262_benq_t31_mixer[] = ;
static const struct snd_kcontrol_new alc262_tyan_mixer[] = ;
static const struct hda_verb alc262_tyan_verbs[] = ;
static void alc262_tyan_setup(struct hda_codec *codec)
#define alc262_capture_mixer		alc882_capture_mixer
#define alc262_capture_alt_mixer	alc882_capture_alt_mixer
static const struct hda_verb alc262_init_verbs[] = ;
static const struct hda_verb alc262_eapd_verbs[] = ;
static const struct hda_verb alc262_hippo1_unsol_verbs[] = ;
static const struct hda_verb alc262_sony_unsol_verbs[] = ;
static const struct snd_kcontrol_new alc262_toshiba_s06_mixer[] = ;
static const struct hda_verb alc262_toshiba_s06_verbs[] = ;
static void alc262_toshiba_s06_setup(struct hda_codec *codec)
static const struct snd_kcontrol_new alc262_nec_mixer[] = ;
static const struct hda_verb alc262_nec_verbs[] = ;
#define ALC_HP_EVENT	ALC880_HP_EVENT
static const struct hda_verb alc262_fujitsu_unsol_verbs[] = ;
static const struct hda_verb alc262_lenovo_3000_unsol_verbs[] = ;
static const struct hda_verb alc262_lenovo_3000_init_verbs[] = ;
static const struct hda_input_mux alc262_fujitsu_capture_source = ;
static const struct hda_input_mux alc262_HP_capture_source = ;
static const struct hda_input_mux alc262_HP_D7000_capture_source = ;
static void alc262_fujitsu_setup(struct hda_codec *codec)
static const struct hda_bind_ctls alc262_fujitsu_bind_master_vol = ;
static const struct snd_kcontrol_new alc262_fujitsu_mixer[] = ;
static void alc262_lenovo_3000_setup(struct hda_codec *codec)
static const struct snd_kcontrol_new alc262_lenovo_3000_mixer[] = ;
static const struct snd_kcontrol_new alc262_toshiba_rx1_mixer[] = ;
static const struct hda_verb alc262_EAPD_verbs[] = ;
static const struct hda_verb alc262_benq_t31_EAPD_verbs[] = ;
static const struct snd_kcontrol_new alc262_ultra_mixer[] = ;
static const struct hda_verb alc262_ultra_verbs[] = ;
static void alc262_ultra_automute(struct hda_codec *codec)
static void alc262_ultra_unsol_event(struct hda_codec *codec,
unsigned int res)
static const struct hda_input_mux alc262_ultra_capture_source = ;
static int alc262_ultra_mux_enum_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new alc262_ultra_capture_mixer[] = ;
static int alc262_check_volbit(hda_nid_t nid)
static int alc262_add_out_vol_ctl(struct alc_spec *spec, hda_nid_t nid,
const char *pfx, int *vbits, int idx)
static int alc262_add_out_sw_ctl(struct alc_spec *spec, hda_nid_t nid,
const char *pfx, int idx)
static int alc262_auto_create_multi_out_ctls(struct alc_spec *spec,
const struct auto_pin_cfg *cfg)
#define alc262_auto_create_input_ctls \
alc882_auto_create_input_ctls
static const struct hda_verb alc262_volume_init_verbs[] = ;
static const struct hda_verb alc262_HP_BPC_init_verbs[] = ;
static const struct hda_verb alc262_HP_BPC_WildWest_init_verbs[] = ;
static const struct hda_verb alc262_toshiba_rx1_unsol_verbs[] = ;
enum ;
static const struct alc_fixup alc262_fixups[] = ;
static const struct snd_pci_quirk alc262_fixup_tbl[] = ;
#define alc262_loopbacks	alc880_loopbacks
#define alc262_pcm_analog_playback	alc880_pcm_analog_playback
#define alc262_pcm_analog_capture	alc880_pcm_analog_capture
#define alc262_pcm_digital_playback	alc880_pcm_digital_playback
#define alc262_pcm_digital_capture	alc880_pcm_digital_capture
static int alc262_parse_auto_config(struct hda_codec *codec)
#define alc262_auto_init_multi_out	alc882_auto_init_multi_out
#define alc262_auto_init_hp_out		alc882_auto_init_hp_out
#define alc262_auto_init_analog_input	alc882_auto_init_analog_input
#define alc262_auto_init_input_src	alc882_auto_init_input_src
static void alc262_auto_init(struct hda_codec *codec)
static const char * const alc262_models[ALC262_MODEL_LAST] = ;
static const struct snd_pci_quirk alc262_cfg_tbl[] = ;
static const struct alc_config_preset alc262_presets[] = ;
static int patch_alc262(struct hda_codec *codec)
#define ALC268_DIGOUT_NID	ALC880_DIGOUT_NID
#define alc268_modes		alc260_modes
static const hda_nid_t alc268_dac_nids[2] = ;
static const hda_nid_t alc268_adc_nids[2] = ;
static const hda_nid_t alc268_adc_nids_alt[1] = ;
static const hda_nid_t alc268_capsrc_nids[2] = ;
static const struct snd_kcontrol_new alc268_base_mixer[] = ;
static const struct snd_kcontrol_new alc268_toshiba_mixer[] = ;
static const struct hda_bind_ctls alc268_bind_beep_sw = ;
static const struct snd_kcontrol_new alc268_beep_mixer[] = ;
static const struct hda_verb alc268_eapd_verbs[] = ;
static const struct hda_verb alc268_toshiba_verbs[] = ;
static const struct hda_bind_ctls alc268_acer_bind_master_vol = ;
static void alc268_acer_setup(struct hda_codec *codec)
#define alc268_acer_master_sw_get	alc262_hp_master_sw_get
#define alc268_acer_master_sw_put	alc262_hp_master_sw_put
static const struct snd_kcontrol_new alc268_acer_aspire_one_mixer[] = ;
static const struct snd_kcontrol_new alc268_acer_mixer[] = ;
static const struct snd_kcontrol_new alc268_acer_dmic_mixer[] = ;
static const struct hda_verb alc268_acer_aspire_one_verbs[] = ;
static const struct hda_verb alc268_acer_verbs[] = ;
#define alc268_toshiba_setup		alc262_hippo_setup
static void alc268_acer_lc_setup(struct hda_codec *codec)
static const struct snd_kcontrol_new alc268_dell_mixer[] = ;
static const struct hda_verb alc268_dell_verbs[] = ;
static void alc268_dell_setup(struct hda_codec *codec)
static const struct snd_kcontrol_new alc267_quanta_il1_mixer[] = ;
static const struct hda_verb alc267_quanta_il1_verbs[] = ;
static void alc267_quanta_il1_setup(struct hda_codec *codec)
static const struct hda_verb alc268_base_init_verbs[] = ;
static const struct hda_verb alc268_volume_init_verbs[] = ;
static const struct snd_kcontrol_new alc268_capture_nosrc_mixer[] = ;
static const struct snd_kcontrol_new alc268_capture_alt_mixer[] = ;
static const struct snd_kcontrol_new alc268_capture_mixer[] = ;
static const struct hda_input_mux alc268_capture_source = ;
static const struct hda_input_mux alc268_acer_capture_source = ;
static const struct hda_input_mux alc268_acer_dmic_capture_source = ;
static const struct snd_kcontrol_new alc268_test_mixer[] = ;
static int alc268_new_analog_output(struct alc_spec *spec, hda_nid_t nid,
const char *ctlname, int idx)
static int alc268_auto_create_multi_out_ctls(struct alc_spec *spec,
const struct auto_pin_cfg *cfg)
static int alc268_auto_create_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static void alc268_auto_set_output_and_unmute(struct hda_codec *codec,
hda_nid_t nid, int pin_type)
static void alc268_auto_init_multi_out(struct hda_codec *codec)
static void alc268_auto_init_hp_out(struct hda_codec *codec)
static void alc268_auto_init_mono_speaker_out(struct hda_codec *codec)
#define alc268_pcm_analog_playback	alc880_pcm_analog_playback
#define alc268_pcm_analog_capture	alc880_pcm_analog_capture
#define alc268_pcm_analog_alt_capture	alc880_pcm_analog_alt_capture
#define alc268_pcm_digital_playback	alc880_pcm_digital_playback
static int alc268_parse_auto_config(struct hda_codec *codec)
#define alc268_auto_init_analog_input	alc882_auto_init_analog_input
#define alc268_auto_init_input_src	alc882_auto_init_input_src
static void alc268_auto_init(struct hda_codec *codec)
static const char * const alc268_models[ALC268_MODEL_LAST] = ;
static const struct snd_pci_quirk alc268_cfg_tbl[] = ;
static const struct snd_pci_quirk alc268_ssid_cfg_tbl[] = ;
static const struct alc_config_preset alc268_presets[] = ;
static int patch_alc268(struct hda_codec *codec)
#define ALC269_DIGOUT_NID	ALC880_DIGOUT_NID
#define alc269_dac_nids		alc260_dac_nids
static const hda_nid_t alc269_adc_nids[1] = ;
static const hda_nid_t alc269_capsrc_nids[1] = ;
static const hda_nid_t alc269vb_adc_nids[1] = ;
static const hda_nid_t alc269vb_capsrc_nids[1] = ;
static const hda_nid_t alc269_adc_candidates[] = ;
#define alc269_modes		alc260_modes
#define alc269_capture_source	alc880_lg_lw_capture_source
static const struct snd_kcontrol_new alc269_base_mixer[] = ;
static const struct snd_kcontrol_new alc269_quanta_fl1_mixer[] = ;
static const struct snd_kcontrol_new alc269_lifebook_mixer[] = ;
static const struct snd_kcontrol_new alc269_laptop_mixer[] = ;
static const struct snd_kcontrol_new alc269vb_laptop_mixer[] = ;
static const struct snd_kcontrol_new alc269_asus_mixer[] = ;
static const struct snd_kcontrol_new alc269_laptop_analog_capture_mixer[] = ;
static const struct snd_kcontrol_new alc269_laptop_digital_capture_mixer[] = ;
static const struct snd_kcontrol_new alc269vb_laptop_analog_capture_mixer[] = ;
static const struct snd_kcontrol_new alc269vb_laptop_digital_capture_mixer[] = ;
#define alc269_fujitsu_mixer	alc269_laptop_mixer
static const struct hda_verb alc269_quanta_fl1_verbs[] = ;
static const struct hda_verb alc269_lifebook_verbs[] = ;
static void alc269_quanta_fl1_speaker_automute(struct hda_codec *codec)
#define alc269_lifebook_speaker_automute \
alc269_quanta_fl1_speaker_automute
static void alc269_lifebook_mic_autoswitch(struct hda_codec *codec)
static void alc269_quanta_fl1_unsol_event(struct hda_codec *codec,
unsigned int res)
static void alc269_lifebook_unsol_event(struct hda_codec *codec,
unsigned int res)
static void alc269_quanta_fl1_setup(struct hda_codec *codec)
static void alc269_quanta_fl1_init_hook(struct hda_codec *codec)
static void alc269_lifebook_setup(struct hda_codec *codec)
static void alc269_lifebook_init_hook(struct hda_codec *codec)
static const struct hda_verb alc269_laptop_dmic_init_verbs[] = ;
static const struct hda_verb alc269_laptop_amic_init_verbs[] = ;
static const struct hda_verb alc269vb_laptop_dmic_init_verbs[] = ;
static const struct hda_verb alc269vb_laptop_amic_init_verbs[] = ;
static const struct hda_verb alc271_acer_dmic_verbs[] = ;
static void alc269_laptop_amic_setup(struct hda_codec *codec)
static void alc269_laptop_dmic_setup(struct hda_codec *codec)
static void alc269vb_laptop_amic_setup(struct hda_codec *codec)
static void alc269vb_laptop_dmic_setup(struct hda_codec *codec)
static const struct hda_verb alc269_init_verbs[] = ;
static const struct hda_verb alc269vb_init_verbs[] = ;
#define alc269_auto_create_multi_out_ctls \
alc268_auto_create_multi_out_ctls
#define alc269_auto_create_input_ctls \
alc268_auto_create_input_ctls
#define alc269_loopbacks	alc880_loopbacks
#define alc269_pcm_analog_playback	alc880_pcm_analog_playback
#define alc269_pcm_analog_capture	alc880_pcm_analog_capture
#define alc269_pcm_digital_playback	alc880_pcm_digital_playback
#define alc269_pcm_digital_capture	alc880_pcm_digital_capture
static const struct hda_pcm_stream alc269_44k_pcm_analog_playback = ;
static const struct hda_pcm_stream alc269_44k_pcm_analog_capture = ;
static int alc269_mic2_for_mute_led(struct hda_codec *codec)
static int alc269_mic2_mute_check_ps(struct hda_codec *codec, hda_nid_t nid)
static int alc275_setup_dual_adc(struct hda_codec *codec)
enum ;
static int alc269_parse_auto_config(struct hda_codec *codec)
#define alc269_auto_init_multi_out	alc268_auto_init_multi_out
#define alc269_auto_init_hp_out		alc268_auto_init_hp_out
#define alc269_auto_init_analog_input	alc882_auto_init_analog_input
#define alc269_auto_init_input_src	alc882_auto_init_input_src
static void alc269_auto_init(struct hda_codec *codec)
static void alc269_toggle_power_output(struct hda_codec *codec, int power_up)
static void alc269_shutup(struct hda_codec *codec)
static int alc269_resume(struct hda_codec *codec)
static void alc269_fixup_hweq(struct hda_codec *codec,
const struct alc_fixup *fix, int action)
static void alc271_fixup_dmic(struct hda_codec *codec,
const struct alc_fixup *fix, int action)
enum ;
static const struct alc_fixup alc269_fixups[] = ;
static const struct snd_pci_quirk alc269_fixup_tbl[] = ;
static const char * const alc269_models[ALC269_MODEL_LAST] = ;
static const struct snd_pci_quirk alc269_cfg_tbl[] = ;
static const struct alc_config_preset alc269_presets[] = ;
static int alc269_fill_coef(struct hda_codec *codec)
static int patch_alc269(struct hda_codec *codec)
static const struct hda_verb alc861_threestack_ch2_init[] = ;
static const struct hda_verb alc861_threestack_ch6_init[] = ;
static const struct hda_channel_mode alc861_threestack_modes[2] = ;
static const struct hda_verb alc861_uniwill_m31_ch2_init[] = ;
static const struct hda_verb alc861_uniwill_m31_ch4_init[] = ;
static const struct hda_channel_mode alc861_uniwill_m31_modes[2] = ;
static const struct hda_verb alc861_asus_ch2_init[] = ;
static const struct hda_verb alc861_asus_ch6_init[] = ;
static const struct hda_channel_mode alc861_asus_modes[2] = ;
static const struct snd_kcontrol_new alc861_base_mixer[] = ;
static const struct snd_kcontrol_new alc861_3ST_mixer[] = ;
static const struct snd_kcontrol_new alc861_toshiba_mixer[] = ;
static const struct snd_kcontrol_new alc861_uniwill_m31_mixer[] = ;
static const struct snd_kcontrol_new alc861_asus_mixer[] = ;
static const struct snd_kcontrol_new alc861_asus_laptop_mixer[] = ;
static const struct hda_verb alc861_base_init_verbs[] = ;
static const struct hda_verb alc861_threestack_init_verbs[] = ;
static const struct hda_verb alc861_uniwill_m31_init_verbs[] = ;
static const struct hda_verb alc861_asus_init_verbs[] = ;
static const struct hda_verb alc861_asus_laptop_init_verbs[] = ;
static const struct hda_verb alc861_auto_init_verbs[] = ;
static const struct hda_verb alc861_toshiba_init_verbs[] = ;
static void alc861_toshiba_automute(struct hda_codec *codec)
static void alc861_toshiba_unsol_event(struct hda_codec *codec,
unsigned int res)
#define alc861_pcm_analog_playback	alc880_pcm_analog_playback
#define alc861_pcm_analog_capture	alc880_pcm_analog_capture
#define alc861_pcm_digital_playback	alc880_pcm_digital_playback
#define alc861_pcm_digital_capture	alc880_pcm_digital_capture
#define ALC861_DIGOUT_NID	0x07
static const struct hda_channel_mode alc861_8ch_modes[1] = ;
static const hda_nid_t alc861_dac_nids[4] = ;
static const hda_nid_t alc660_dac_nids[3] = ;
static const hda_nid_t alc861_adc_nids[1] = ;
static const struct hda_input_mux alc861_capture_source = ;
static hda_nid_t alc861_look_for_dac(struct hda_codec *codec, hda_nid_t pin)
static int alc861_auto_fill_dac_nids(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static int __alc861_create_out_sw(struct hda_codec *codec, const char *pfx,
hda_nid_t nid, int idx, unsigned int chs)
#define alc861_create_out_sw(codec, pfx, nid, chs) \
__alc861_create_out_sw(codec, pfx, nid, 0, chs)
static int alc861_auto_create_multi_out_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static int alc861_auto_create_hp_ctls(struct hda_codec *codec, hda_nid_t pin)
static int alc861_auto_create_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static void alc861_auto_set_output_and_unmute(struct hda_codec *codec,
hda_nid_t nid,
int pin_type, hda_nid_t dac)
static void alc861_auto_init_multi_out(struct hda_codec *codec)
static void alc861_auto_init_hp_out(struct hda_codec *codec)
static void alc861_auto_init_analog_input(struct hda_codec *codec)
static int alc861_parse_auto_config(struct hda_codec *codec)
static void alc861_auto_init(struct hda_codec *codec)
static const struct hda_amp_list alc861_loopbacks[] = ;
static const char * const alc861_models[ALC861_MODEL_LAST] = ;
static const struct snd_pci_quirk alc861_cfg_tbl[] = ;
static const struct alc_config_preset alc861_presets[] = ;
enum ;
static const struct alc_fixup alc861_fixups[] = ;
static const struct snd_pci_quirk alc861_fixup_tbl[] = ;
static int patch_alc861(struct hda_codec *codec)
#define ALC861VD_DIGOUT_NID	0x06
static const hda_nid_t alc861vd_dac_nids[4] = ;
static const hda_nid_t alc660vd_dac_nids[3] = ;
static const hda_nid_t alc861vd_adc_nids[1] = ;
static const hda_nid_t alc861vd_capsrc_nids[1] = ;
static const struct hda_input_mux alc861vd_capture_source = ;
static const struct hda_input_mux alc861vd_dallas_capture_source = ;
static const struct hda_input_mux alc861vd_hp_capture_source = ;
static const struct hda_channel_mode alc861vd_3stack_2ch_modes[1] = ;
static const struct hda_verb alc861vd_6stack_ch6_init[] = ;
static const struct hda_verb alc861vd_6stack_ch8_init[] = ;
static const struct hda_channel_mode alc861vd_6stack_modes[2] = ;
static const struct snd_kcontrol_new alc861vd_chmode_mixer[] = ;
static const struct snd_kcontrol_new alc861vd_6st_mixer[] = ;
static const struct snd_kcontrol_new alc861vd_3st_mixer[] = ;
static const struct snd_kcontrol_new alc861vd_lenovo_mixer[] = ;
static const struct snd_kcontrol_new alc861vd_dallas_mixer[] = ;
static const struct snd_kcontrol_new alc861vd_hp_mixer[] = ;
static const struct hda_verb alc861vd_volume_init_verbs[] = ;
static const struct hda_verb alc861vd_3stack_init_verbs[] = ;
static const struct hda_verb alc861vd_6stack_init_verbs[] = ;
static const struct hda_verb alc861vd_eapd_verbs[] = ;
static const struct hda_verb alc660vd_eapd_verbs[] = ;
static const struct hda_verb alc861vd_lenovo_unsol_verbs[] = ;
static void alc861vd_lenovo_setup(struct hda_codec *codec)
static void alc861vd_lenovo_init_hook(struct hda_codec *codec)
static void alc861vd_lenovo_unsol_event(struct hda_codec *codec,
unsigned int res)
static const struct hda_verb alc861vd_dallas_verbs[] = ;
static void alc861vd_dallas_setup(struct hda_codec *codec)
#define alc861vd_loopbacks	alc880_loopbacks
#define alc861vd_pcm_analog_playback	alc880_pcm_analog_playback
#define alc861vd_pcm_analog_capture	alc880_pcm_analog_capture
#define alc861vd_pcm_digital_playback	alc880_pcm_digital_playback
#define alc861vd_pcm_digital_capture	alc880_pcm_digital_capture
static const char * const alc861vd_models[ALC861VD_MODEL_LAST] = ;
static const struct snd_pci_quirk alc861vd_cfg_tbl[] = ;
static const struct alc_config_preset alc861vd_presets[] = ;
static int alc861vd_auto_create_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static void alc861vd_auto_set_output_and_unmute(struct hda_codec *codec,
hda_nid_t nid, int pin_type, int dac_idx)
static void alc861vd_auto_init_multi_out(struct hda_codec *codec)
static void alc861vd_auto_init_hp_out(struct hda_codec *codec)
#define ALC861VD_PIN_CD_NID		ALC880_PIN_CD_NID
static void alc861vd_auto_init_analog_input(struct hda_codec *codec)
#define alc861vd_auto_init_input_src	alc882_auto_init_input_src
#define alc861vd_idx_to_mixer_vol(nid)		((nid) + 0x02)
#define alc861vd_idx_to_mixer_switch(nid)	((nid) + 0x0c)
static int alc861vd_auto_create_multi_out_ctls(struct alc_spec *spec,
const struct auto_pin_cfg *cfg)
static int alc861vd_auto_create_extra_out(struct alc_spec *spec,
hda_nid_t pin, const char *pfx)
static int alc861vd_parse_auto_config(struct hda_codec *codec)
static void alc861vd_auto_init(struct hda_codec *codec)
enum ;
static const struct alc_fixup alc861vd_fixups[] = ;
static const struct snd_pci_quirk alc861vd_fixup_tbl[] = ;
static int patch_alc861vd(struct hda_codec *codec)
#define ALC662_DIGOUT_NID	0x06
#define ALC662_DIGIN_NID	0x0a
static const hda_nid_t alc662_dac_nids[3] = ;
static const hda_nid_t alc272_dac_nids[2] = ;
static const hda_nid_t alc662_adc_nids[2] = ;
static const hda_nid_t alc272_adc_nids[1] = ;
static const hda_nid_t alc662_capsrc_nids[2] = ;
static const hda_nid_t alc272_capsrc_nids[1] = ;
static const struct hda_input_mux alc662_capture_source = ;
static const struct hda_input_mux alc662_lenovo_101e_capture_source = ;
static const struct hda_input_mux alc663_capture_source = ;
static const struct hda_channel_mode alc662_3ST_2ch_modes[1] = ;
static const struct hda_verb alc662_3ST_ch2_init[] = ;
static const struct hda_verb alc662_3ST_ch6_init[] = ;
static const struct hda_channel_mode alc662_3ST_6ch_modes[2] = ;
static const struct hda_verb alc662_sixstack_ch6_init[] = ;
static const struct hda_verb alc662_sixstack_ch8_init[] = ;
static const struct hda_channel_mode alc662_5stack_modes[2] = ;
static const struct snd_kcontrol_new alc662_base_mixer[] = ;
static const struct snd_kcontrol_new alc662_3ST_2ch_mixer[] = ;
static const struct snd_kcontrol_new alc662_3ST_6ch_mixer[] = ;
static const struct snd_kcontrol_new alc662_lenovo_101e_mixer[] = ;
static const struct snd_kcontrol_new alc662_eeepc_p701_mixer[] = ;
static const struct snd_kcontrol_new alc662_eeepc_ep20_mixer[] = ;
static const struct hda_bind_ctls alc663_asus_bind_master_vol = ;
static const struct hda_bind_ctls alc663_asus_one_bind_switch = ;
static const struct snd_kcontrol_new alc663_m51va_mixer[] = ;
static const struct hda_bind_ctls alc663_asus_tree_bind_switch = ;
static const struct snd_kcontrol_new alc663_two_hp_m1_mixer[] = ;
static const struct hda_bind_ctls alc663_asus_four_bind_switch = ;
static const struct snd_kcontrol_new alc663_two_hp_m2_mixer[] = ;
static const struct snd_kcontrol_new alc662_1bjd_mixer[] = ;
static const struct hda_bind_ctls alc663_asus_two_bind_master_vol = ;
static const struct hda_bind_ctls alc663_asus_two_bind_switch = ;
static const struct snd_kcontrol_new alc663_asus_21jd_clfe_mixer[] = ;
static const struct snd_kcontrol_new alc663_asus_15jd_clfe_mixer[] = ;
static const struct snd_kcontrol_new alc663_g71v_mixer[] = ;
static const struct snd_kcontrol_new alc663_g50v_mixer[] = ;
static const struct hda_bind_ctls alc663_asus_mode7_8_all_bind_switch = ;
static const struct hda_bind_ctls alc663_asus_mode7_8_sp_bind_switch = ;
static const struct snd_kcontrol_new alc663_mode7_mixer[] = ;
static const struct snd_kcontrol_new alc663_mode8_mixer[] = ;
static const struct snd_kcontrol_new alc662_chmode_mixer[] = ;
static const struct hda_verb alc662_init_verbs[] = ;
static const struct hda_verb alc662_eapd_init_verbs[] = ;
static const struct hda_verb alc662_sue_init_verbs[] = ;
static const struct hda_verb alc662_eeepc_sue_init_verbs[] = ;
static const struct hda_verb alc662_eeepc_ep20_sue_init_verbs[] = ;
static const struct hda_verb alc663_m51va_init_verbs[] = ;
static const struct hda_verb alc663_21jd_amic_init_verbs[] = ;
static const struct hda_verb alc662_1bjd_amic_init_verbs[] = ;
static const struct hda_verb alc663_15jd_amic_init_verbs[] = ;
static const struct hda_verb alc663_two_hp_amic_m1_init_verbs[] = ;
static const struct hda_verb alc663_two_hp_amic_m2_init_verbs[] = ;
static const struct hda_verb alc663_g71v_init_verbs[] = ;
static const struct hda_verb alc663_g50v_init_verbs[] = ;
static const struct hda_verb alc662_ecs_init_verbs[] = ;
static const struct hda_verb alc272_dell_zm1_init_verbs[] = ;
static const struct hda_verb alc272_dell_init_verbs[] = ;
static const struct hda_verb alc663_mode7_init_verbs[] = ;
static const struct hda_verb alc663_mode8_init_verbs[] = ;
static const struct snd_kcontrol_new alc662_auto_capture_mixer[] = ;
static const struct snd_kcontrol_new alc272_auto_capture_mixer[] = ;
static void alc662_lenovo_101e_setup(struct hda_codec *codec)
static void alc662_eeepc_setup(struct hda_codec *codec)
static void alc662_eeepc_ep20_setup(struct hda_codec *codec)
static void alc663_m51va_setup(struct hda_codec *codec)
static void alc663_mode1_setup(struct hda_codec *codec)
static void alc662_mode2_setup(struct hda_codec *codec)
static void alc663_mode3_setup(struct hda_codec *codec)
static void alc663_mode4_setup(struct hda_codec *codec)
static void alc663_mode5_setup(struct hda_codec *codec)
static void alc663_mode6_setup(struct hda_codec *codec)
static void alc663_mode7_setup(struct hda_codec *codec)
static void alc663_mode8_setup(struct hda_codec *codec)
static void alc663_g71v_setup(struct hda_codec *codec)
#define alc663_g50v_setup	alc663_m51va_setup
static const struct snd_kcontrol_new alc662_ecs_mixer[] = ;
static const struct snd_kcontrol_new alc272_nc10_mixer[] = ;
#define alc662_loopbacks	alc880_loopbacks
#define alc662_pcm_analog_playback	alc880_pcm_analog_playback
#define alc662_pcm_analog_capture	alc880_pcm_analog_capture
#define alc662_pcm_digital_playback	alc880_pcm_digital_playback
#define alc662_pcm_digital_capture	alc880_pcm_digital_capture
static const char * const alc662_models[ALC662_MODEL_LAST] = ;
static const struct snd_pci_quirk alc662_cfg_tbl[] = ;
static const struct alc_config_preset alc662_presets[] = ;
static hda_nid_t alc_auto_mix_to_dac(struct hda_codec *codec, hda_nid_t nid)
static hda_nid_t alc_go_down_to_selector(struct hda_codec *codec, hda_nid_t pin)
static hda_nid_t alc_auto_dac_to_mix(struct hda_codec *codec, hda_nid_t pin,
hda_nid_t dac)
static int alc_auto_select_dac(struct hda_codec *codec, hda_nid_t pin,
hda_nid_t dac)
static hda_nid_t alc_auto_look_for_dac(struct hda_codec *codec, hda_nid_t pin)
static int alc662_auto_fill_dac_nids(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static inline int __alc662_add_vol_ctl(struct alc_spec *spec, const char *pfx,
hda_nid_t nid, int idx, unsigned int chs)
static inline int __alc662_add_sw_ctl(struct alc_spec *spec, const char *pfx,
hda_nid_t nid, int idx, unsigned int chs)
#define alc662_add_vol_ctl(spec, pfx, nid, chs) \
__alc662_add_vol_ctl(spec, pfx, nid, 0, chs)
#define alc662_add_sw_ctl(spec, pfx, nid, chs) \
__alc662_add_sw_ctl(spec, pfx, nid, 0, chs)
#define alc662_add_stereo_vol(spec, pfx, nid) \
alc662_add_vol_ctl(spec, pfx, nid, 3)
#define alc662_add_stereo_sw(spec, pfx, nid) \
alc662_add_sw_ctl(spec, pfx, nid, 3)
static int alc662_auto_create_multi_out_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static int alc662_auto_create_extra_out(struct hda_codec *codec, hda_nid_t pin,
const char *pfx)
#define alc662_auto_create_input_ctls \
alc882_auto_create_input_ctls
static void alc662_auto_set_output_and_unmute(struct hda_codec *codec,
hda_nid_t nid, int pin_type,
hda_nid_t dac)
static void alc662_auto_init_multi_out(struct hda_codec *codec)
static void alc662_auto_init_hp_out(struct hda_codec *codec)
#define ALC662_PIN_CD_NID		ALC880_PIN_CD_NID
static void alc662_auto_init_analog_input(struct hda_codec *codec)
#define alc662_auto_init_input_src	alc882_auto_init_input_src
static int alc_auto_fill_multi_ios(struct hda_codec *codec,
unsigned int location)
static int alc_auto_ch_mode_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int alc_auto_ch_mode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int alc_set_multi_io(struct hda_codec *codec, int idx, bool output)
static int alc_auto_ch_mode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new alc_auto_channel_mode_enum = ;
static int alc_auto_add_multi_channel_mode(struct hda_codec *codec)
static int alc662_parse_auto_config(struct hda_codec *codec)
static void alc662_auto_init(struct hda_codec *codec)
static void alc272_fixup_mario(struct hda_codec *codec,
const struct alc_fixup *fix, int action)
enum ;
static const struct alc_fixup alc662_fixups[] = ;
static const struct snd_pci_quirk alc662_fixup_tbl[] = ;
static const struct alc_model_fixup alc662_fixup_models[] = ;
static int patch_alc662(struct hda_codec *codec)
static int patch_alc888(struct hda_codec *codec)
static int patch_alc899(struct hda_codec *codec)
#define ALC680_DIGIN_NID	ALC880_DIGIN_NID
#define ALC680_DIGOUT_NID	ALC880_DIGOUT_NID
#define alc680_modes		alc260_modes
static const hda_nid_t alc680_dac_nids[3] = ;
static const hda_nid_t alc680_adc_nids[3] = ;
static void alc680_rec_autoswitch(struct hda_codec *codec)
static int alc680_capture_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int alc680_capture_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream alc680_pcm_analog_auto_capture = ;
static const struct snd_kcontrol_new alc680_base_mixer[] = ;
static const struct hda_bind_ctls alc680_bind_cap_vol = ;
static const struct hda_bind_ctls alc680_bind_cap_switch = ;
static const struct snd_kcontrol_new alc680_master_capture_mixer[] = ;
static const struct hda_verb alc680_init_verbs[] = ;
static void alc680_base_setup(struct hda_codec *codec)
static void alc680_unsol_event(struct hda_codec *codec,
unsigned int res)
static void alc680_inithook(struct hda_codec *codec)
static int alc680_new_analog_output(struct alc_spec *spec, hda_nid_t nid,
const char *ctlname, int idx)
static int alc680_auto_create_multi_out_ctls(struct alc_spec *spec,
const struct auto_pin_cfg *cfg)
static void alc680_auto_set_output_and_unmute(struct hda_codec *codec,
hda_nid_t nid, int pin_type)
static void alc680_auto_init_multi_out(struct hda_codec *codec)
static void alc680_auto_init_hp_out(struct hda_codec *codec)
#define alc680_pcm_analog_playback	alc880_pcm_analog_playback
#define alc680_pcm_analog_capture	alc880_pcm_analog_capture
#define alc680_pcm_analog_alt_capture	alc880_pcm_analog_alt_capture
#define alc680_pcm_digital_playback	alc880_pcm_digital_playback
#define alc680_pcm_digital_capture	alc880_pcm_digital_capture
static int alc680_parse_auto_config(struct hda_codec *codec)
#define alc680_auto_init_analog_input	alc882_auto_init_analog_input
static void alc680_auto_init(struct hda_codec *codec)
static const char * const alc680_models[ALC680_MODEL_LAST] = ;
static const struct snd_pci_quirk alc680_cfg_tbl[] = ;
static const struct alc_config_preset alc680_presets[] = ;
static int patch_alc680(struct hda_codec *codec)
static const struct hda_codec_preset snd_hda_preset_realtek[] = ;
MODULE_ALIAS("snd-hda-codec-id:10ec*");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Realtek HD-audio codec");
static struct hda_codec_preset_list realtek_list = ;
static int __init patch_realtek_init(void)
static void __exit patch_realtek_exit(void)
module_init(patch_realtek_init)
module_exit(patch_realtek_exit)
