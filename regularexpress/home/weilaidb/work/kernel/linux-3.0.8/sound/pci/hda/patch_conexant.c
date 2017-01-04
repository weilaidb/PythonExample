#define CXT_PIN_DIR_IN              0x00
#define CXT_PIN_DIR_OUT             0x01
#define CXT_PIN_DIR_INOUT           0x02
#define CXT_PIN_DIR_IN_NOMICBIAS    0x03
#define CXT_PIN_DIR_INOUT_NOMICBIAS 0x04
#define CONEXANT_HP_EVENT	0x37
#define CONEXANT_MIC_EVENT	0x38
#define CONEXANT_LINE_EVENT	0x39
#define CXT5051_SPDIF_OUT	0x12
#define CXT5051_PORTB_EVENT	0x38
#define CXT5051_PORTC_EVENT	0x39
#define AUTO_MIC_PORTB		(1 << 1)
#define AUTO_MIC_PORTC		(1 << 2)
struct pin_dac_pair ;
struct imux_info ;
struct conexant_spec ;
static int conexant_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int conexant_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int conexant_playback_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int conexant_dig_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int conexant_dig_playback_pcm_close(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int conexant_dig_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int conexant_capture_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int conexant_capture_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream conexant_pcm_analog_playback = ;
static const struct hda_pcm_stream conexant_pcm_analog_capture = ;
static const struct hda_pcm_stream conexant_pcm_digital_playback = ;
static const struct hda_pcm_stream conexant_pcm_digital_capture = ;
static int cx5051_capture_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int cx5051_capture_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream cx5051_pcm_analog_capture = ;
static int conexant_build_pcms(struct hda_codec *codec)
static int conexant_mux_enum_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int conexant_mux_enum_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int conexant_mux_enum_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int conexant_init_jacks(struct hda_codec *codec)
static int conexant_init(struct hda_codec *codec)
static void conexant_free(struct hda_codec *codec)
static const struct snd_kcontrol_new cxt_capture_mixers[] = ;
static const struct snd_kcontrol_new cxt_beep_mixer[] = ;
static const char * const slave_vols[] = ;
static const char * const slave_sws[] = ;
static int conexant_build_controls(struct hda_codec *codec)
static int conexant_suspend(struct hda_codec *codec, pm_message_t state)
static const struct hda_codec_ops conexant_patch_ops = ;
#define set_beep_amp(spec, nid, idx, dir) \
((spec)->beep_amp = HDA_COMPOSE_AMP_VAL(nid, 1, idx, dir))
#define set_beep_amp(spec, nid, idx, dir)
static int patch_conexant_auto(struct hda_codec *codec);
#define cxt_eapd_info		snd_ctl_boolean_mono_info
static int cxt_eapd_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int cxt_eapd_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define CXT_EAPD_SWITCH(xname, nid, mask) \
static int conexant_ch_mode_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int conexant_ch_mode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int conexant_ch_mode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define CXT_PIN_MODE(xname, nid, dir) \
static const hda_nid_t cxt5045_dac_nids[1] = ;
static const hda_nid_t cxt5045_adc_nids[1] = ;
static const hda_nid_t cxt5045_capsrc_nids[1] = ;
#define CXT5045_SPDIF_OUT	0x18
static const struct hda_channel_mode cxt5045_modes[1] = ;
static const struct hda_input_mux cxt5045_capture_source = ;
static const struct hda_input_mux cxt5045_capture_source_benq = ;
static const struct hda_input_mux cxt5045_capture_source_hp530 = ;
static int cxt5045_hp_master_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct hda_bind_ctls cxt5045_hp_bind_master_vol = ;
static void cxt5045_hp_automic(struct hda_codec *codec)
static void cxt5045_hp_automute(struct hda_codec *codec)
static void cxt5045_hp_unsol_event(struct hda_codec *codec,
unsigned int res)
static const struct snd_kcontrol_new cxt5045_mixers[] = ;
static const struct snd_kcontrol_new cxt5045_benq_mixers[] = ;
static const struct snd_kcontrol_new cxt5045_mixers_hp530[] = ;
static const struct hda_verb cxt5045_init_verbs[] = ;
static const struct hda_verb cxt5045_benq_init_verbs[] = ;
static const struct hda_verb cxt5045_hp_sense_init_verbs[] = ;
static const struct hda_verb cxt5045_mic_sense_init_verbs[] = ;
static const struct hda_input_mux cxt5045_test_capture_source = ;
static const struct snd_kcontrol_new cxt5045_test_mixer[] = ;
static const struct hda_verb cxt5045_test_init_verbs[] = ;
static int cxt5045_init(struct hda_codec *codec)
enum ;
static const char * const cxt5045_models[CXT5045_MODELS] = ;
static const struct snd_pci_quirk cxt5045_cfg_tbl[] = ;
static int patch_cxt5045(struct hda_codec *codec)
#define CXT5047_SPDIF_OUT	0x11
static const hda_nid_t cxt5047_dac_nids[1] = ;
static const hda_nid_t cxt5047_adc_nids[1] = ;
static const hda_nid_t cxt5047_capsrc_nids[1] = ;
static const struct hda_channel_mode cxt5047_modes[1] = ;
static const struct hda_input_mux cxt5047_toshiba_capture_source = ;
static int cxt5047_hp_master_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void cxt5047_hp_automute(struct hda_codec *codec)
static void cxt5047_hp_automic(struct hda_codec *codec)
static void cxt5047_hp_unsol_event(struct hda_codec *codec,
unsigned int res)
static const struct snd_kcontrol_new cxt5047_base_mixers[] = ;
static const struct snd_kcontrol_new cxt5047_hp_spk_mixers[] = ;
static const struct snd_kcontrol_new cxt5047_hp_only_mixers[] = ;
static const struct hda_verb cxt5047_init_verbs[] = ;
static const struct hda_verb cxt5047_toshiba_init_verbs[] = ;
static const struct hda_input_mux cxt5047_test_capture_source = ;
static const struct snd_kcontrol_new cxt5047_test_mixer[] = ;
static const struct hda_verb cxt5047_test_init_verbs[] = ;
static int cxt5047_hp_init(struct hda_codec *codec)
enum ;
static const char * const cxt5047_models[CXT5047_MODELS] = ;
static const struct snd_pci_quirk cxt5047_cfg_tbl[] = ;
static int patch_cxt5047(struct hda_codec *codec)
static const hda_nid_t cxt5051_dac_nids[1] = ;
static const hda_nid_t cxt5051_adc_nids[2] = ;
static const struct hda_channel_mode cxt5051_modes[1] = ;
static void cxt5051_update_speaker(struct hda_codec *codec)
static int cxt5051_hp_master_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void cxt5051_portb_automic(struct hda_codec *codec)
static void cxt5051_portc_automic(struct hda_codec *codec)
static void cxt5051_hp_automute(struct hda_codec *codec)
static void cxt5051_hp_unsol_event(struct hda_codec *codec,
unsigned int res)
static const struct snd_kcontrol_new cxt5051_playback_mixers[] = ;
static const struct snd_kcontrol_new cxt5051_capture_mixers[] = ;
static const struct snd_kcontrol_new cxt5051_hp_mixers[] = ;
static const struct snd_kcontrol_new cxt5051_hp_dv6736_mixers[] = ;
static const struct snd_kcontrol_new cxt5051_f700_mixers[] = ;
static const struct snd_kcontrol_new cxt5051_toshiba_mixers[] = ;
static const struct hda_verb cxt5051_init_verbs[] = ;
static const struct hda_verb cxt5051_hp_dv6736_init_verbs[] = ;
static const struct hda_verb cxt5051_lenovo_x200_init_verbs[] = ;
static const struct hda_verb cxt5051_f700_init_verbs[] = ;
static void cxt5051_init_mic_port(struct hda_codec *codec, hda_nid_t nid,
unsigned int event)
static const struct hda_verb cxt5051_ideapad_init_verbs[] = ;
static int cxt5051_init(struct hda_codec *codec)
enum ;
static const char *const cxt5051_models[CXT5051_MODELS] = ;
static const struct snd_pci_quirk cxt5051_cfg_tbl[] = ;
static int patch_cxt5051(struct hda_codec *codec)
static const hda_nid_t cxt5066_dac_nids[1] = ;
static const hda_nid_t cxt5066_adc_nids[3] = ;
static const hda_nid_t cxt5066_capsrc_nids[1] = ;
static const hda_nid_t cxt5066_digout_pin_nids[2] = ;
#define CXT5066_OLPC_EXT_MIC_BIAS PIN_VREF50
static const struct hda_channel_mode cxt5066_modes[1] = ;
#define HP_PRESENT_PORT_A	(1 << 0)
#define HP_PRESENT_PORT_D	(1 << 1)
#define hp_port_a_present(spec)	((spec)->hp_present & HP_PRESENT_PORT_A)
#define hp_port_d_present(spec)	((spec)->hp_present & HP_PRESENT_PORT_D)
static void cxt5066_update_speaker(struct hda_codec *codec)
static int cxt5066_hp_master_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct hda_input_mux cxt5066_olpc_dc_bias = ;
static int cxt5066_set_olpc_dc_bias(struct hda_codec *codec)
static void cxt5066_olpc_select_mic(struct hda_codec *codec)
static void cxt5066_olpc_automic(struct hda_codec *codec)
static void cxt5066_vostro_automic(struct hda_codec *codec)
static void cxt5066_ideapad_automic(struct hda_codec *codec)
static void cxt5066_asus_automic(struct hda_codec *codec)
static void cxt5066_hp_laptop_automic(struct hda_codec *codec)
static void cxt5066_thinkpad_automic(struct hda_codec *codec)
static void cxt5066_hp_automute(struct hda_codec *codec)
static void cxt5066_automic(struct hda_codec *codec)
static void cxt5066_olpc_unsol_event(struct hda_codec *codec, unsigned int res)
static void cxt5066_unsol_event(struct hda_codec *codec, unsigned int res)
static const struct hda_input_mux cxt5066_analog_mic_boost = ;
static void cxt5066_set_mic_boost(struct hda_codec *codec)
static int cxt5066_mic_boost_mux_enum_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int cxt5066_mic_boost_mux_enum_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int cxt5066_mic_boost_mux_enum_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void cxt5066_enable_dc(struct hda_codec *codec)
static void cxt5066_disable_dc(struct hda_codec *codec)
static int cxt5066_olpc_dc_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int cxt5066_olpc_dc_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int cxt5066_olpc_dc_bias_enum_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int cxt5066_olpc_dc_bias_enum_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int cxt5066_olpc_dc_bias_enum_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void cxt5066_olpc_capture_prepare(struct hda_codec *codec)
static void cxt5066_olpc_capture_cleanup(struct hda_codec *codec)
static void conexant_check_dig_outs(struct hda_codec *codec,
const hda_nid_t *dig_pins,
int num_pins)
static const struct hda_input_mux cxt5066_capture_source = ;
static const struct hda_bind_ctls cxt5066_bind_capture_vol_others = ;
static const struct hda_bind_ctls cxt5066_bind_capture_sw_others = ;
static const struct snd_kcontrol_new cxt5066_mixer_master[] = ;
static const struct snd_kcontrol_new cxt5066_mixer_master_olpc[] = ;
static const struct snd_kcontrol_new cxt5066_mixer_olpc_dc[] = ;
static const struct snd_kcontrol_new cxt5066_mixers[] = ;
static const struct snd_kcontrol_new cxt5066_vostro_mixers[] = ;
static const struct hda_verb cxt5066_init_verbs[] = ;
static const struct hda_verb cxt5066_init_verbs_olpc[] = ;
static const struct hda_verb cxt5066_init_verbs_vostro[] = ;
static const struct hda_verb cxt5066_init_verbs_ideapad[] = ;
static const struct hda_verb cxt5066_init_verbs_thinkpad[] = ;
static const struct hda_verb cxt5066_init_verbs_portd_lo[] = ;
static const struct hda_verb cxt5066_init_verbs_hp_laptop[] = ;
static int cxt5066_init(struct hda_codec *codec)
static int cxt5066_olpc_init(struct hda_codec *codec)
enum ;
static const char * const cxt5066_models[CXT5066_MODELS] = ;
static const struct snd_pci_quirk cxt5066_cfg_tbl[] = ;
static int patch_cxt5066(struct hda_codec *codec)
static int cx_auto_capture_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int cx_auto_capture_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream cx_auto_pcm_analog_capture = ;
static const hda_nid_t cx_auto_adc_nids[] = ;
static int get_connection_index(struct hda_codec *codec, hda_nid_t mux,
hda_nid_t nid)
static hda_nid_t get_unassigned_dac(struct hda_codec *codec, hda_nid_t pin,
hda_nid_t *dacs, int *num_dacs)
#define MAX_AUTO_DACS	5
static int fill_cx_auto_dacs(struct hda_codec *codec, hda_nid_t *dacs)
static int fill_dacs_for_pins(struct hda_codec *codec, hda_nid_t *pins,
int num_pins, hda_nid_t *dacs, int *rest,
struct pin_dac_pair *filled, int type)
static void cx_auto_parse_output(struct hda_codec *codec)
static void cx_auto_turn_eapd(struct hda_codec *codec, int num_pins,
hda_nid_t *pins, bool on);
static void do_automute(struct hda_codec *codec, int num_pins,
hda_nid_t *pins, bool on)
static int detect_jacks(struct hda_codec *codec, int num_pins, hda_nid_t *pins)
static void cx_auto_update_speakers(struct hda_codec *codec)
static void cx_auto_hp_automute(struct hda_codec *codec)
static void cx_auto_line_automute(struct hda_codec *codec)
static int cx_automute_mode_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int cx_automute_mode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int cx_automute_mode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new cx_automute_mode_enum[] = ;
static int cx_auto_mux_enum_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int cx_auto_mux_enum_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int __select_input_connection(struct hda_codec *codec, hda_nid_t mux,
hda_nid_t pin, hda_nid_t *srcp,
bool do_select, int depth)
static void select_input_connection(struct hda_codec *codec, hda_nid_t mux,
hda_nid_t pin)
static int get_input_connection(struct hda_codec *codec, hda_nid_t mux,
hda_nid_t pin)
static int cx_auto_mux_enum_update(struct hda_codec *codec,
const struct hda_input_mux *imux,
unsigned int idx)
static int cx_auto_mux_enum_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new cx_auto_capture_mixers[] = ;
static bool select_automic(struct hda_codec *codec, int idx, bool detect)
static void cx_auto_automic(struct hda_codec *codec)
static void cx_auto_unsol_event(struct hda_codec *codec, unsigned int res)
static void cx_auto_check_auto_mic(struct hda_codec *codec)
static void cx_auto_parse_input(struct hda_codec *codec)
static hda_nid_t cx_auto_get_dig_in(struct hda_codec *codec, hda_nid_t pin)
static void cx_auto_parse_digital(struct hda_codec *codec)
static void cx_auto_parse_beep(struct hda_codec *codec)
#define cx_auto_parse_beep(codec)
static int cx_auto_parse_auto_config(struct hda_codec *codec)
static void cx_auto_turn_eapd(struct hda_codec *codec, int num_pins,
hda_nid_t *pins, bool on)
static void select_connection(struct hda_codec *codec, hda_nid_t pin,
hda_nid_t src)
static void mute_outputs(struct hda_codec *codec, int num_nids,
const hda_nid_t *nids)
static void enable_unsol_pins(struct hda_codec *codec, int num_pins,
hda_nid_t *pins, unsigned int tag)
static void cx_auto_init_output(struct hda_codec *codec)
static void cx_auto_init_input(struct hda_codec *codec)
static void cx_auto_init_digital(struct hda_codec *codec)
static int cx_auto_init(struct hda_codec *codec)
static int cx_auto_add_volume_idx(struct hda_codec *codec, const char *basename,
const char *dir, int cidx,
hda_nid_t nid, int hda_dir, int amp_idx)
#define cx_auto_add_volume(codec, str, dir, cidx, nid, hda_dir)		\
cx_auto_add_volume_idx(codec, str, dir, cidx, nid, hda_dir, 0)
#define cx_auto_add_pb_volume(codec, nid, str, idx)			\
cx_auto_add_volume(codec, str, " Playback", idx, nid, HDA_OUTPUT)
static int try_add_pb_volume(struct hda_codec *codec, hda_nid_t dac,
hda_nid_t pin, const char *name, int idx)
static int cx_auto_build_output_controls(struct hda_codec *codec)
static int cx_auto_add_capture_volume(struct hda_codec *codec, hda_nid_t nid,
const char *label, const char *pfx,
int cidx)
static int cx_auto_add_boost_volume(struct hda_codec *codec, int idx,
const char *label, int cidx)
static int cx_auto_build_input_controls(struct hda_codec *codec)
static int cx_auto_build_controls(struct hda_codec *codec)
static int cx_auto_search_adcs(struct hda_codec *codec)
static const struct hda_codec_ops cx_auto_patch_ops = ;
static int patch_conexant_auto(struct hda_codec *codec)
static const struct hda_codec_preset snd_hda_preset_conexant[] = ;
MODULE_ALIAS("snd-hda-codec-id:14f15045");
MODULE_ALIAS("snd-hda-codec-id:14f15047");
MODULE_ALIAS("snd-hda-codec-id:14f15051");
MODULE_ALIAS("snd-hda-codec-id:14f15066");
MODULE_ALIAS("snd-hda-codec-id:14f15067");
MODULE_ALIAS("snd-hda-codec-id:14f15068");
MODULE_ALIAS("snd-hda-codec-id:14f15069");
MODULE_ALIAS("snd-hda-codec-id:14f1506c");
MODULE_ALIAS("snd-hda-codec-id:14f1506e");
MODULE_ALIAS("snd-hda-codec-id:14f15097");
MODULE_ALIAS("snd-hda-codec-id:14f15098");
MODULE_ALIAS("snd-hda-codec-id:14f150a1");
MODULE_ALIAS("snd-hda-codec-id:14f150a2");
MODULE_ALIAS("snd-hda-codec-id:14f150ab");
MODULE_ALIAS("snd-hda-codec-id:14f150ac");
MODULE_ALIAS("snd-hda-codec-id:14f150b8");
MODULE_ALIAS("snd-hda-codec-id:14f150b9");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Conexant HD-audio codec");
static struct hda_codec_preset_list conexant_list = ;
static int __init patch_conexant_init(void)
static void __exit patch_conexant_exit(void)
module_init(patch_conexant_init)
module_exit(patch_conexant_exit)
