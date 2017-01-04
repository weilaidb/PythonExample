#define NID_MAPPING		(-1)
#define AMP_VAL_IDX_SHIFT	19
#define AMP_VAL_IDX_MASK	(0x0f<<19)
#define VT1708_HP_NID		0x13
#define VT1708_DIGOUT_NID	0x14
#define VT1708_DIGIN_NID	0x16
#define VT1708_DIGIN_PIN	0x26
#define VT1708_HP_PIN_NID	0x20
#define VT1708_CD_PIN_NID	0x24
#define VT1709_HP_DAC_NID	0x28
#define VT1709_DIGOUT_NID	0x13
#define VT1709_DIGIN_NID	0x17
#define VT1709_DIGIN_PIN	0x25
#define VT1708B_HP_NID		0x25
#define VT1708B_DIGOUT_NID	0x12
#define VT1708B_DIGIN_NID	0x15
#define VT1708B_DIGIN_PIN	0x21
#define VT1708S_HP_NID		0x25
#define VT1708S_DIGOUT_NID	0x12
#define VT1702_HP_NID		0x17
#define VT1702_DIGOUT_NID	0x11
enum VIA_HDA_CODEC ;
#define VT2002P_COMPATIBLE(spec) \
((spec)->codec_type == VT2002P ||\
(spec)->codec_type == VT1812 ||\
(spec)->codec_type == VT1802)
struct via_spec ;
static enum VIA_HDA_CODEC get_codec_type(struct hda_codec *codec);
static struct via_spec * via_new_spec(struct hda_codec *codec)
static enum VIA_HDA_CODEC get_codec_type(struct hda_codec *codec)
;
#define VIA_JACK_EVENT		0x20
#define VIA_HP_EVENT		0x01
#define VIA_GPIO_EVENT		0x02
#define VIA_MONO_EVENT		0x03
#define VIA_SPEAKER_EVENT	0x04
#define VIA_BIND_HP_EVENT	0x05
enum ;
enum ;
static void analog_low_current_mode(struct hda_codec *codec, int stream_idle);
static int is_aa_path_mute(struct hda_codec *codec);
static void vt1708_start_hp_work(struct via_spec *spec)
static void vt1708_stop_hp_work(struct via_spec *spec)
static void set_widgets_power_state(struct hda_codec *codec)
static int analog_input_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define ANALOG_INPUT_MUTE						\
static void via_hp_bind_automute(struct hda_codec *codec);
static int bind_pin_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define BIND_PIN_MUTE							\
static const struct snd_kcontrol_new via_control_templates[] = ;
static const hda_nid_t vt1708_adc_nids[2] = ;
static const hda_nid_t vt1709_adc_nids[3] = ;
static const hda_nid_t vt1708B_adc_nids[2] = ;
static const hda_nid_t vt1708S_adc_nids[2] = ;
static const hda_nid_t vt1702_adc_nids[3] = ;
static const hda_nid_t vt1718S_adc_nids[2] = ;
static const hda_nid_t vt1716S_adc_nids[2] = ;
static const hda_nid_t vt2002P_adc_nids[2] = ;
static const hda_nid_t vt1812_adc_nids[2] = ;
static int __via_add_control(struct via_spec *spec, int type, const char *name,
int idx, unsigned long val)
#define via_add_control(spec, type, name, val) \
__via_add_control(spec, type, name, 0, val)
static struct snd_kcontrol_new *via_clone_control(struct via_spec *spec,
const struct snd_kcontrol_new *tmpl)
static void via_free_kctls(struct hda_codec *codec)
static int via_new_analog_input(struct via_spec *spec, const char *ctlname,
int type_idx, int idx, int mix_nid)
static void via_auto_set_output_and_unmute(struct hda_codec *codec,
hda_nid_t nid, int pin_type,
int dac_idx)
static void via_auto_init_multi_out(struct hda_codec *codec)
static void via_auto_init_hp_out(struct hda_codec *codec)
static int is_smart51_pins(struct via_spec *spec, hda_nid_t pin);
static void via_auto_init_analog_input(struct hda_codec *codec)
static void set_pin_power_state(struct hda_codec *codec, hda_nid_t nid,
unsigned int *affected_parm)
static int via_mux_enum_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int via_mux_enum_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int via_mux_enum_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int via_independent_hp_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int via_independent_hp_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void activate_ctl(struct hda_codec *codec, const char *name, int active)
static hda_nid_t side_mute_channel(struct via_spec *spec)
static int update_side_mute_status(struct hda_codec *codec)
static int via_independent_hp_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new via_hp_mixer[2] = ;
static int via_hp_build(struct hda_codec *codec)
static void notify_aa_path_ctls(struct hda_codec *codec)
static void mute_aa_path(struct hda_codec *codec, int mute)
static int is_smart51_pins(struct via_spec *spec, hda_nid_t pin)
static int via_smart51_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int via_smart51_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int via_smart51_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new via_smart51_mixer[2] = ;
static int via_smart51_build(struct via_spec *spec)
static const struct snd_kcontrol_new vt1708_capture_mixer[] = ;
static int is_aa_path_mute(struct hda_codec *codec)
static void analog_low_current_mode(struct hda_codec *codec, int stream_idle)
static const struct hda_verb vt1708_volume_init_verbs[] = ;
static int via_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static void playback_multi_pcm_prep_0(struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int via_playback_multi_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int via_playback_multi_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int via_dig_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int via_dig_playback_pcm_close(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int via_dig_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int via_dig_playback_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int via_capture_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int via_capture_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream vt1708_pcm_analog_playback = ;
static const struct hda_pcm_stream vt1708_pcm_analog_s16_playback = ;
static const struct hda_pcm_stream vt1708_pcm_analog_capture = ;
static const struct hda_pcm_stream vt1708_pcm_digital_playback = ;
static const struct hda_pcm_stream vt1708_pcm_digital_capture = ;
static int via_build_controls(struct hda_codec *codec)
static int via_build_pcms(struct hda_codec *codec)
static void via_free(struct hda_codec *codec)
static void via_hp_automute(struct hda_codec *codec)
static void via_mono_automute(struct hda_codec *codec)
static void via_gpio_control(struct hda_codec *codec)
static void via_speaker_automute(struct hda_codec *codec)
static void via_hp_bind_automute(struct hda_codec *codec)
static void via_unsol_event(struct hda_codec *codec,
unsigned int res)
static int via_init(struct hda_codec *codec)
static int via_suspend(struct hda_codec *codec, pm_message_t state)
static int via_check_power_status(struct hda_codec *codec, hda_nid_t nid)
static const struct hda_codec_ops via_patch_ops = ;
static int vt1708_auto_fill_dac_nids(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt1708_auto_create_multi_out_ctls(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static void create_hp_imux(struct via_spec *spec)
static int vt1708_auto_create_hp_ctls(struct via_spec *spec, hda_nid_t pin)
static int vt_auto_create_analog_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg,
hda_nid_t cap_nid,
const hda_nid_t pin_idxs[],
int num_idxs)
static int vt1708_auto_create_analog_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static const struct hda_amp_list vt1708_loopbacks[] = ;
static void vt1708_set_pinconfig_connect(struct hda_codec *codec, hda_nid_t nid)
static int vt1708_jack_detectect_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int vt1708_jack_detectect_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new vt1708_jack_detectect[] = ;
static int vt1708_parse_auto_config(struct hda_codec *codec)
static int via_auto_init(struct hda_codec *codec)
static void vt1708_update_hp_jack_state(struct work_struct *work)
static int get_mux_nids(struct hda_codec *codec)
static int patch_vt1708(struct hda_codec *codec)
static const struct snd_kcontrol_new vt1709_capture_mixer[] = ;
static const struct hda_verb vt1709_uniwill_init_verbs[] = ;
static const struct hda_verb vt1709_10ch_volume_init_verbs[] = ;
static const struct hda_pcm_stream vt1709_10ch_pcm_analog_playback = ;
static const struct hda_pcm_stream vt1709_6ch_pcm_analog_playback = ;
static const struct hda_pcm_stream vt1709_pcm_analog_capture = ;
static const struct hda_pcm_stream vt1709_pcm_digital_playback = ;
static const struct hda_pcm_stream vt1709_pcm_digital_capture = ;
static int vt1709_auto_fill_dac_nids(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt1709_auto_create_multi_out_ctls(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt1709_auto_create_hp_ctls(struct via_spec *spec, hda_nid_t pin)
static int vt1709_auto_create_analog_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static int vt1709_parse_auto_config(struct hda_codec *codec)
static const struct hda_amp_list vt1709_loopbacks[] = ;
static int patch_vt1709_10ch(struct hda_codec *codec)
static const struct hda_verb vt1709_6ch_volume_init_verbs[] = ;
static int patch_vt1709_6ch(struct hda_codec *codec)
static const struct snd_kcontrol_new vt1708B_capture_mixer[] = ;
static const struct hda_verb vt1708B_8ch_volume_init_verbs[] = ;
static const struct hda_verb vt1708B_4ch_volume_init_verbs[] = ;
static const struct hda_verb vt1708B_uniwill_init_verbs[] = ;
static int via_pcm_open_close(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream vt1708B_8ch_pcm_analog_playback = ;
static const struct hda_pcm_stream vt1708B_4ch_pcm_analog_playback = ;
static const struct hda_pcm_stream vt1708B_pcm_analog_capture = ;
static const struct hda_pcm_stream vt1708B_pcm_digital_playback = ;
static const struct hda_pcm_stream vt1708B_pcm_digital_capture = ;
static int vt1708B_auto_fill_dac_nids(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt1708B_auto_create_multi_out_ctls(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt1708B_auto_create_hp_ctls(struct via_spec *spec, hda_nid_t pin)
static int vt1708B_auto_create_analog_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static int vt1708B_parse_auto_config(struct hda_codec *codec)
static const struct hda_amp_list vt1708B_loopbacks[] = ;
static void set_widgets_power_state_vt1708B(struct hda_codec *codec)
static int patch_vt1708S(struct hda_codec *codec);
static int patch_vt1708B_8ch(struct hda_codec *codec)
static int patch_vt1708B_4ch(struct hda_codec *codec)
static const struct snd_kcontrol_new vt1708S_capture_mixer[] = ;
static const struct hda_verb vt1708S_volume_init_verbs[] = ;
static const struct hda_verb vt1708S_uniwill_init_verbs[] = ;
static const struct hda_verb vt1705_uniwill_init_verbs[] = ;
static const struct hda_pcm_stream vt1708S_pcm_analog_playback = ;
static const struct hda_pcm_stream vt1705_pcm_analog_playback = ;
static const struct hda_pcm_stream vt1708S_pcm_analog_capture = ;
static const struct hda_pcm_stream vt1708S_pcm_digital_playback = ;
static int vt1708S_auto_fill_dac_nids(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt1708S_auto_create_multi_out_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static int vt1708S_auto_create_hp_ctls(struct via_spec *spec, hda_nid_t pin)
static int vt1708S_auto_create_analog_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static void fill_dig_outs(struct hda_codec *codec)
static int vt1708S_parse_auto_config(struct hda_codec *codec)
static const struct hda_amp_list vt1708S_loopbacks[] = ;
static void override_mic_boost(struct hda_codec *codec, hda_nid_t pin,
int offset, int num_steps, int step_size)
static int patch_vt1708S(struct hda_codec *codec)
static const struct snd_kcontrol_new vt1702_capture_mixer[] = ;
static const struct hda_verb vt1702_volume_init_verbs[] = ;
static const struct hda_verb vt1702_uniwill_init_verbs[] = ;
static const struct hda_pcm_stream vt1702_pcm_analog_playback = ;
static const struct hda_pcm_stream vt1702_pcm_analog_capture = ;
static const struct hda_pcm_stream vt1702_pcm_digital_playback = ;
static int vt1702_auto_fill_dac_nids(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt1702_auto_create_line_out_ctls(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt1702_auto_create_hp_ctls(struct via_spec *spec, hda_nid_t pin)
static int vt1702_auto_create_analog_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static int vt1702_parse_auto_config(struct hda_codec *codec)
static const struct hda_amp_list vt1702_loopbacks[] = ;
static void set_widgets_power_state_vt1702(struct hda_codec *codec)
static int patch_vt1702(struct hda_codec *codec)
static const struct snd_kcontrol_new vt1718S_capture_mixer[] = ;
static const struct hda_verb vt1718S_volume_init_verbs[] = ;
static const struct hda_verb vt1718S_uniwill_init_verbs[] = ;
static const struct hda_pcm_stream vt1718S_pcm_analog_playback = ;
static const struct hda_pcm_stream vt1718S_pcm_analog_capture = ;
static const struct hda_pcm_stream vt1718S_pcm_digital_playback = ;
static const struct hda_pcm_stream vt1718S_pcm_digital_capture = ;
static int vt1718S_auto_fill_dac_nids(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt1718S_auto_create_multi_out_ctls(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt1718S_auto_create_hp_ctls(struct via_spec *spec, hda_nid_t pin)
static int vt1718S_auto_create_analog_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static int vt1718S_parse_auto_config(struct hda_codec *codec)
static const struct hda_amp_list vt1718S_loopbacks[] = ;
static void set_widgets_power_state_vt1718S(struct hda_codec *codec)
static int patch_vt1718S(struct hda_codec *codec)
static int vt1716s_dmic_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int vt1716s_dmic_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int vt1716s_dmic_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new vt1716S_capture_mixer[] = ;
static const struct snd_kcontrol_new vt1716s_dmic_mixer[] = ;
static const struct snd_kcontrol_new vt1716S_mono_out_mixer[] = ;
static const struct hda_verb vt1716S_volume_init_verbs[] = ;
static const struct hda_verb vt1716S_uniwill_init_verbs[] = ;
static const struct hda_pcm_stream vt1716S_pcm_analog_playback = ;
static const struct hda_pcm_stream vt1716S_pcm_analog_capture = ;
static const struct hda_pcm_stream vt1716S_pcm_digital_playback = ;
static int vt1716S_auto_fill_dac_nids(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt1716S_auto_create_multi_out_ctls(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt1716S_auto_create_hp_ctls(struct via_spec *spec, hda_nid_t pin)
static int vt1716S_auto_create_analog_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static int vt1716S_parse_auto_config(struct hda_codec *codec)
static const struct hda_amp_list vt1716S_loopbacks[] = ;
static void set_widgets_power_state_vt1716S(struct hda_codec *codec)
static int patch_vt1716S(struct hda_codec *codec)
static const struct snd_kcontrol_new vt2002P_capture_mixer[] = ;
static const struct hda_verb vt2002P_volume_init_verbs[] = ;
static const struct hda_verb vt1802_volume_init_verbs[] = ;
static const struct hda_verb vt2002P_uniwill_init_verbs[] = ;
static const struct hda_verb vt1802_uniwill_init_verbs[] = ;
static const struct hda_pcm_stream vt2002P_pcm_analog_playback = ;
static const struct hda_pcm_stream vt2002P_pcm_analog_capture = ;
static const struct hda_pcm_stream vt2002P_pcm_digital_playback = ;
static int vt2002P_auto_fill_dac_nids(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt2002P_auto_create_multi_out_ctls(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt2002P_auto_create_hp_ctls(struct via_spec *spec, hda_nid_t pin)
static int vt2002P_auto_create_analog_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static int vt2002P_parse_auto_config(struct hda_codec *codec)
static const struct hda_amp_list vt2002P_loopbacks[] = ;
static void set_widgets_power_state_vt2002P(struct hda_codec *codec)
static int patch_vt2002P(struct hda_codec *codec)
static const struct snd_kcontrol_new vt1812_capture_mixer[] = ;
static const struct hda_verb vt1812_volume_init_verbs[] = ;
static const struct hda_verb vt1812_uniwill_init_verbs[] = ;
static const struct hda_pcm_stream vt1812_pcm_analog_playback = ;
static const struct hda_pcm_stream vt1812_pcm_analog_capture = ;
static const struct hda_pcm_stream vt1812_pcm_digital_playback = ;
static int vt1812_auto_fill_dac_nids(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt1812_auto_create_multi_out_ctls(struct via_spec *spec,
const struct auto_pin_cfg *cfg)
static int vt1812_auto_create_hp_ctls(struct via_spec *spec, hda_nid_t pin)
static int vt1812_auto_create_analog_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static int vt1812_parse_auto_config(struct hda_codec *codec)
static const struct hda_amp_list vt1812_loopbacks[] = ;
static void set_widgets_power_state_vt1812(struct hda_codec *codec)
static int patch_vt1812(struct hda_codec *codec)
static const struct hda_codec_preset snd_hda_preset_via[] = ;
MODULE_ALIAS("snd-hda-codec-id:1106*");
static struct hda_codec_preset_list via_list = ;
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("VIA HD-audio codec");
static int __init patch_via_init(void)
static void __exit patch_via_exit(void)
module_init(patch_via_init)
module_exit(patch_via_exit)
