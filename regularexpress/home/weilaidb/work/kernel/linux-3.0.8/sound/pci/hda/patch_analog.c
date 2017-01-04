struct ad198x_spec ;
static int ad198x_mux_enum_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int ad198x_mux_enum_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int ad198x_mux_enum_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int ad198x_init(struct hda_codec *codec)
static const char * const ad_slave_vols[] = ;
static const char * const ad_slave_sws[] = ;
static const char * const ad1988_6stack_fp_slave_vols[] = ;
static const char * const ad1988_6stack_fp_slave_sws[] = ;
static void ad198x_free_kctls(struct hda_codec *codec);
static const struct snd_kcontrol_new ad_beep_mixer[] = ;
static const struct snd_kcontrol_new ad_beep2_mixer[] = ;
#define set_beep_amp(spec, nid, idx, dir) \
((spec)->beep_amp = HDA_COMPOSE_AMP_VAL(nid, 1, idx, dir))
#define set_beep_amp(spec, nid, idx, dir)
static int ad198x_build_controls(struct hda_codec *codec)
static int ad198x_check_power_status(struct hda_codec *codec, hda_nid_t nid)
static int ad198x_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int ad198x_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int ad198x_playback_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream ad198x_pcm_analog_alt_playback = ;
static int ad198x_dig_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int ad198x_dig_playback_pcm_close(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int ad198x_dig_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int ad198x_dig_playback_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int ad198x_capture_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int ad198x_capture_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream ad198x_pcm_analog_playback = ;
static const struct hda_pcm_stream ad198x_pcm_analog_capture = ;
static const struct hda_pcm_stream ad198x_pcm_digital_playback = ;
static const struct hda_pcm_stream ad198x_pcm_digital_capture = ;
static int ad198x_build_pcms(struct hda_codec *codec)
static void ad198x_free_kctls(struct hda_codec *codec)
static void ad198x_power_eapd_write(struct hda_codec *codec, hda_nid_t front,
hda_nid_t hp)
static void ad198x_power_eapd(struct hda_codec *codec)
static void ad198x_shutup(struct hda_codec *codec)
static void ad198x_free(struct hda_codec *codec)
static int ad198x_suspend(struct hda_codec *codec, pm_message_t state)
static const struct hda_codec_ops ad198x_patch_ops = ;
#define ad198x_eapd_info	snd_ctl_boolean_mono_info
static int ad198x_eapd_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int ad198x_eapd_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int ad198x_ch_mode_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
static int ad198x_ch_mode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
static int ad198x_ch_mode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
#define AD1986A_SPDIF_OUT	0x02
#define AD1986A_FRONT_DAC	0x03
#define AD1986A_SURR_DAC	0x04
#define AD1986A_CLFE_DAC	0x05
#define AD1986A_ADC		0x06
static const hda_nid_t ad1986a_dac_nids[3] = ;
static const hda_nid_t ad1986a_adc_nids[1] = ;
static const hda_nid_t ad1986a_capsrc_nids[1] = ;
static const struct hda_input_mux ad1986a_capture_source = ;
static const struct hda_bind_ctls ad1986a_bind_pcm_vol = ;
static const struct hda_bind_ctls ad1986a_bind_pcm_sw = ;
static const struct snd_kcontrol_new ad1986a_mixers[] = ;
static const struct snd_kcontrol_new ad1986a_3st_mixers[] = ;
static const hda_nid_t ad1986a_laptop_dac_nids[1] = ;
static const struct hda_bind_ctls ad1986a_laptop_master_vol = ;
static const struct hda_bind_ctls ad1986a_laptop_master_sw = ;
static const struct snd_kcontrol_new ad1986a_laptop_mixers[] = ;
static const struct hda_input_mux ad1986a_laptop_eapd_capture_source = ;
static const struct hda_input_mux ad1986a_automic_capture_source = ;
static const struct snd_kcontrol_new ad1986a_laptop_master_mixers[] = ;
static const struct snd_kcontrol_new ad1986a_laptop_eapd_mixers[] = ;
static const struct snd_kcontrol_new ad1986a_laptop_intmic_mixers[] = ;
static void ad1986a_automic(struct hda_codec *codec)
#define AD1986A_MIC_EVENT		0x36
static void ad1986a_automic_unsol_event(struct hda_codec *codec,
unsigned int res)
static int ad1986a_automic_init(struct hda_codec *codec)
static void ad1986a_update_hp(struct hda_codec *codec)
static void ad1986a_hp_automute(struct hda_codec *codec)
#define AD1986A_HP_EVENT		0x37
static void ad1986a_hp_unsol_event(struct hda_codec *codec, unsigned int res)
static int ad1986a_hp_init(struct hda_codec *codec)
static int ad1986a_hp_master_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new ad1986a_automute_master_mixers[] = ;
static const struct hda_verb ad1986a_init_verbs[] = ;
static const struct hda_verb ad1986a_ch2_init[] = ;
static const struct hda_verb ad1986a_ch4_init[] = ;
static const struct hda_verb ad1986a_ch6_init[] = ;
static const struct hda_channel_mode ad1986a_modes[3] = ;
static const struct hda_verb ad1986a_eapd_init_verbs[] = ;
static const struct hda_verb ad1986a_automic_verbs[] = ;
static const struct hda_verb ad1986a_ultra_init[] = ;
static const struct hda_verb ad1986a_hp_init_verbs[] = ;
static void ad1986a_samsung_p50_unsol_event(struct hda_codec *codec,
unsigned int res)
static int ad1986a_samsung_p50_init(struct hda_codec *codec)
enum ;
static const char * const ad1986a_models[AD1986A_MODELS] = ;
static const struct snd_pci_quirk ad1986a_cfg_tbl[] = ;
static const struct hda_amp_list ad1986a_loopbacks[] = ;
static int is_jack_available(struct hda_codec *codec, hda_nid_t nid)
static int patch_ad1986a(struct hda_codec *codec)
#define AD1983_SPDIF_OUT	0x02
#define AD1983_DAC		0x03
#define AD1983_ADC		0x04
static const hda_nid_t ad1983_dac_nids[1] = ;
static const hda_nid_t ad1983_adc_nids[1] = ;
static const hda_nid_t ad1983_capsrc_nids[1] = ;
static const struct hda_input_mux ad1983_capture_source = ;
static int ad1983_spdif_route_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int ad1983_spdif_route_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int ad1983_spdif_route_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new ad1983_mixers[] = ;
static const struct hda_verb ad1983_init_verbs[] = ;
static const struct hda_amp_list ad1983_loopbacks[] = ;
static int patch_ad1983(struct hda_codec *codec)
#define AD1981_SPDIF_OUT	0x02
#define AD1981_DAC		0x03
#define AD1981_ADC		0x04
static const hda_nid_t ad1981_dac_nids[1] = ;
static const hda_nid_t ad1981_adc_nids[1] = ;
static const hda_nid_t ad1981_capsrc_nids[1] = ;
static const struct hda_input_mux ad1981_capture_source = ;
static const struct snd_kcontrol_new ad1981_mixers[] = ;
static const struct hda_verb ad1981_init_verbs[] = ;
static const struct hda_amp_list ad1981_loopbacks[] = ;
#define AD1981_HP_EVENT		0x37
#define AD1981_MIC_EVENT	0x38
static const struct hda_verb ad1981_hp_init_verbs[] = ;
static int ad1981_hp_master_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct hda_bind_ctls ad1981_hp_bind_master_vol = ;
static void ad1981_hp_automute(struct hda_codec *codec)
static void ad1981_hp_automic(struct hda_codec *codec)
static void ad1981_hp_unsol_event(struct hda_codec *codec,
unsigned int res)
static const struct hda_input_mux ad1981_hp_capture_source = ;
static const struct snd_kcontrol_new ad1981_hp_mixers[] = ;
static int ad1981_hp_init(struct hda_codec *codec)
static const struct hda_verb ad1981_toshiba_init_verbs[] = ;
static const struct snd_kcontrol_new ad1981_toshiba_mixers[] = ;
static const struct snd_kcontrol_new ad1981_thinkpad_mixers[] = ;
static const struct hda_input_mux ad1981_thinkpad_capture_source = ;
enum ;
static const char * const ad1981_models[AD1981_MODELS] = ;
static const struct snd_pci_quirk ad1981_cfg_tbl[] = ;
static int patch_ad1981(struct hda_codec *codec)
enum ;
#define AD1988A_REV2		0x100200
#define is_rev2(codec) \
((codec)->vendor_id == 0x11d41988 && \
(codec)->revision_id == AD1988A_REV2)
static const hda_nid_t ad1988_6stack_dac_nids[4] = ;
static const hda_nid_t ad1988_3stack_dac_nids[3] = ;
static const hda_nid_t ad1988_6stack_dac_nids_rev2[4] = ;
static const hda_nid_t ad1988_alt_dac_nid[1] = ;
static const hda_nid_t ad1988_3stack_dac_nids_rev2[3] = ;
static const hda_nid_t ad1988_adc_nids[3] = ;
static const hda_nid_t ad1988_capsrc_nids[3] = ;
#define AD1988_SPDIF_OUT		0x02
#define AD1988_SPDIF_OUT_HDMI	0x0b
#define AD1988_SPDIF_IN		0x07
static const hda_nid_t ad1989b_slave_dig_outs[] = ;
static const struct hda_input_mux ad1988_6stack_capture_source = ;
static const struct hda_input_mux ad1988_laptop_capture_source = ;
static int ad198x_ch_mode_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int ad198x_ch_mode_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int ad198x_ch_mode_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new ad1988_6stack_mixers1[] = ;
static const struct snd_kcontrol_new ad1988_6stack_mixers1_rev2[] = ;
static const struct snd_kcontrol_new ad1988_6stack_mixers2[] = ;
static const struct snd_kcontrol_new ad1988_6stack_fp_mixers[] = ;
static const struct snd_kcontrol_new ad1988_3stack_mixers1[] = ;
static const struct snd_kcontrol_new ad1988_3stack_mixers1_rev2[] = ;
static const struct snd_kcontrol_new ad1988_3stack_mixers2[] = ;
static const struct snd_kcontrol_new ad1988_laptop_mixers[] = ;
static const struct snd_kcontrol_new ad1988_capture_mixers[] = ;
static int ad1988_spdif_playback_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int ad1988_spdif_playback_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int ad1988_spdif_playback_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new ad1988_spdif_out_mixers[] = ;
static const struct snd_kcontrol_new ad1988_spdif_in_mixers[] = ;
static const struct snd_kcontrol_new ad1989_spdif_out_mixers[] = ;
static const struct hda_verb ad1988_6stack_init_verbs[] = ;
static const struct hda_verb ad1988_6stack_fp_init_verbs[] = ;
static const struct hda_verb ad1988_capture_init_verbs[] = ;
static const struct hda_verb ad1988_spdif_init_verbs[] = ;
static const struct hda_verb ad1988_spdif_in_init_verbs[] = ;
static const struct hda_verb ad1989_spdif_init_verbs[] = ;
static const struct hda_verb ad1988_3stack_ch2_init[] = ;
static const struct hda_verb ad1988_3stack_ch6_init[] = ;
static const struct hda_channel_mode ad1988_3stack_modes[2] = ;
static const struct hda_verb ad1988_3stack_init_verbs[] = ;
static const struct hda_verb ad1988_laptop_hp_on[] = ;
static const struct hda_verb ad1988_laptop_hp_off[] = ;
#define AD1988_HP_EVENT	0x01
static const struct hda_verb ad1988_laptop_init_verbs[] = ;
static void ad1988_laptop_unsol_event(struct hda_codec *codec, unsigned int res)
static const struct hda_amp_list ad1988_loopbacks[] = ;
enum ;
static const struct snd_kcontrol_new ad1988_control_templates[] = ;
static int add_control(struct ad198x_spec *spec, int type, const char *name,
unsigned long val)
#define AD1988_PIN_CD_NID		0x18
#define AD1988_PIN_BEEP_NID		0x10
static const hda_nid_t ad1988_mixer_nids[8] = ;
static inline hda_nid_t ad1988_idx_to_dac(struct hda_codec *codec, int idx)
static const hda_nid_t ad1988_boost_nids[8] = ;
static int ad1988_pin_idx(hda_nid_t nid)
static int ad1988_pin_to_loopback_idx(hda_nid_t nid)
static int ad1988_pin_to_adc_idx(hda_nid_t nid)
static int ad1988_auto_fill_dac_nids(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static int ad1988_auto_create_multi_out_ctls(struct ad198x_spec *spec,
const struct auto_pin_cfg *cfg)
static int ad1988_auto_create_extra_out(struct hda_codec *codec, hda_nid_t pin,
const char *pfx)
static int new_analog_input(struct ad198x_spec *spec, hda_nid_t pin,
const char *ctlname, int ctlidx, int boost)
static int ad1988_auto_create_analog_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static void ad1988_auto_set_output_and_unmute(struct hda_codec *codec,
hda_nid_t nid, int pin_type,
int dac_idx)
static void ad1988_auto_init_multi_out(struct hda_codec *codec)
static void ad1988_auto_init_extra_out(struct hda_codec *codec)
static void ad1988_auto_init_analog_input(struct hda_codec *codec)
static int ad1988_parse_auto_config(struct hda_codec *codec)
static int ad1988_auto_init(struct hda_codec *codec)
static const char * const ad1988_models[AD1988_MODEL_LAST] = ;
static const struct snd_pci_quirk ad1988_cfg_tbl[] = ;
static int patch_ad1988(struct hda_codec *codec)
static const hda_nid_t ad1884_dac_nids[1] = ;
static const hda_nid_t ad1884_adc_nids[2] = ;
static const hda_nid_t ad1884_capsrc_nids[2] = ;
#define AD1884_SPDIF_OUT	0x02
static const struct hda_input_mux ad1884_capture_source = ;
static const struct snd_kcontrol_new ad1884_base_mixers[] = ;
static const struct snd_kcontrol_new ad1984_dmic_mixers[] = ;
static const struct hda_verb ad1884_init_verbs[] = ;
static const struct hda_amp_list ad1884_loopbacks[] = ;
static const char * const ad1884_slave_vols[] = ;
static int patch_ad1884(struct hda_codec *codec)
static const struct hda_input_mux ad1984_thinkpad_capture_source = ;
static const struct hda_input_mux ad1984_dell_desktop_capture_source = ;
static const struct snd_kcontrol_new ad1984_thinkpad_mixers[] = ;
static const struct hda_verb ad1984_thinkpad_init_verbs[] = ;
static const struct snd_kcontrol_new ad1984_dell_desktop_mixers[] = ;
static int ad1984_pcm_dmic_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int ad1984_pcm_dmic_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream ad1984_pcm_dmic_capture = ;
static int ad1984_build_pcms(struct hda_codec *codec)
enum ;
static const char * const ad1984_models[AD1984_MODELS] = ;
static const struct snd_pci_quirk ad1984_cfg_tbl[] = ;
static int patch_ad1984(struct hda_codec *codec)
static const hda_nid_t ad1884a_dac_nids[1] = ;
#define ad1884a_adc_nids	ad1884_adc_nids
#define ad1884a_capsrc_nids	ad1884_capsrc_nids
#define AD1884A_SPDIF_OUT	0x02
static const struct hda_input_mux ad1884a_capture_source = ;
static const struct snd_kcontrol_new ad1884a_base_mixers[] = ;
static const struct hda_verb ad1884a_init_verbs[] = ;
static const struct hda_amp_list ad1884a_loopbacks[] = ;
static int ad1884a_mobile_master_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new ad1884a_laptop_mixers[] = ;
static const struct snd_kcontrol_new ad1884a_mobile_mixers[] = ;
static void ad1884a_hp_automute(struct hda_codec *codec)
static void ad1884a_hp_automic(struct hda_codec *codec)
#define AD1884A_HP_EVENT		0x37
#define AD1884A_MIC_EVENT		0x36
static void ad1884a_hp_unsol_event(struct hda_codec *codec, unsigned int res)
static int ad1884a_hp_init(struct hda_codec *codec)
static void ad1884a_laptop_automute(struct hda_codec *codec)
static void ad1884a_laptop_automic(struct hda_codec *codec)
static void ad1884a_laptop_unsol_event(struct hda_codec *codec,
unsigned int res)
static int ad1884a_laptop_init(struct hda_codec *codec)
static const struct hda_verb ad1884a_laptop_verbs[] = ;
static const struct hda_verb ad1884a_mobile_verbs[] = ;
static const struct hda_verb ad1984a_thinkpad_verbs[] = ;
static const struct snd_kcontrol_new ad1984a_thinkpad_mixers[] = ;
static const struct hda_input_mux ad1984a_thinkpad_capture_source = ;
static void ad1984a_thinkpad_automute(struct hda_codec *codec)
static void ad1984a_thinkpad_unsol_event(struct hda_codec *codec,
unsigned int res)
static int ad1984a_thinkpad_init(struct hda_codec *codec)
static const struct hda_verb ad1984a_precision_verbs[] = ;
static const struct snd_kcontrol_new ad1984a_precision_mixers[] = ;
static void ad1984a_precision_automute(struct hda_codec *codec)
static void ad1984a_precision_unsol_event(struct hda_codec *codec,
unsigned int res)
static int ad1984a_precision_init(struct hda_codec *codec)
static const struct hda_verb ad1984a_touchsmart_verbs[] = ;
static const struct snd_kcontrol_new ad1984a_touchsmart_mixers[] = ;
static void ad1984a_touchsmart_automic(struct hda_codec *codec)
static void ad1984a_touchsmart_unsol_event(struct hda_codec *codec,
unsigned int res)
static int ad1984a_touchsmart_init(struct hda_codec *codec)
enum ;
static const char * const ad1884a_models[AD1884A_MODELS] = ;
static const struct snd_pci_quirk ad1884a_cfg_tbl[] = ;
static int patch_ad1884a(struct hda_codec *codec)
static const hda_nid_t ad1882_dac_nids[3] = ;
static const hda_nid_t ad1882_adc_nids[2] = ;
static const hda_nid_t ad1882_capsrc_nids[2] = ;
#define AD1882_SPDIF_OUT	0x02
static const struct hda_input_mux ad1882_capture_source = ;
static const struct hda_input_mux ad1882a_capture_source = ;
static const struct snd_kcontrol_new ad1882_base_mixers[] = ;
static const struct snd_kcontrol_new ad1882_loopback_mixers[] = ;
static const struct snd_kcontrol_new ad1882a_loopback_mixers[] = ;
static const struct snd_kcontrol_new ad1882_3stack_mixers[] = ;
static const struct snd_kcontrol_new ad1882_6stack_mixers[] = ;
static const struct hda_verb ad1882_ch2_init[] = ;
static const struct hda_verb ad1882_ch4_init[] = ;
static const struct hda_verb ad1882_ch6_init[] = ;
static const struct hda_channel_mode ad1882_modes[3] = ;
static const struct hda_verb ad1882_init_verbs[] = ;
static const struct hda_amp_list ad1882_loopbacks[] = ;
enum ;
static const char * const ad1882_models[AD1986A_MODELS] = ;
static int patch_ad1882(struct hda_codec *codec)
static const struct hda_codec_preset snd_hda_preset_analog[] = ;
MODULE_ALIAS("snd-hda-codec-id:11d4*");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Analog Devices HD-audio codec");
static struct hda_codec_preset_list analog_list = ;
static int __init patch_analog_init(void)
static void __exit patch_analog_exit(void)
module_init(patch_analog_init)
module_exit(patch_analog_exit)
