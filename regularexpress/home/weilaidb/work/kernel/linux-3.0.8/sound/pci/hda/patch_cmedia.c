#define NUM_PINS	11
enum ;
struct cmi_spec ;
static int cmi_mux_enum_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int cmi_mux_enum_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int cmi_mux_enum_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const struct hda_verb cmi9880_ch2_init[] = ;
static const struct hda_verb cmi9880_ch6_init[] = ;
static const struct hda_verb cmi9880_ch8_init[] = ;
static const struct hda_channel_mode cmi9880_channel_modes[3] = ;
static int cmi_ch_mode_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int cmi_ch_mode_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int cmi_ch_mode_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new cmi9880_basic_mixer[] = ;
static const struct snd_kcontrol_new cmi9880_ch_mode_mixer[] = ;
static const struct hda_input_mux cmi9880_basic_mux = ;
static const struct hda_input_mux cmi9880_no_line_mux = ;
static const hda_nid_t cmi9880_dac_nids[4] = ;
static const hda_nid_t cmi9880_adc_nids[2] = ;
#define CMI_DIG_OUT_NID	0x07
#define CMI_DIG_IN_NID	0x0a
static const struct hda_verb cmi9880_basic_init[] = ;
static const struct hda_verb cmi9880_allout_init[] = ;
static int cmi9880_build_controls(struct hda_codec *codec)
static int cmi9880_fill_multi_dac_nids(struct hda_codec *codec, const struct auto_pin_cfg *cfg)
static int cmi9880_fill_multi_init(struct hda_codec *codec, const struct auto_pin_cfg *cfg)
static int cmi9880_init(struct hda_codec *codec)
static int cmi9880_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int cmi9880_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int cmi9880_playback_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int cmi9880_dig_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int cmi9880_dig_playback_pcm_close(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int cmi9880_dig_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int cmi9880_capture_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int cmi9880_capture_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream cmi9880_pcm_analog_playback = ;
static const struct hda_pcm_stream cmi9880_pcm_analog_capture = ;
static const struct hda_pcm_stream cmi9880_pcm_digital_playback = ;
static const struct hda_pcm_stream cmi9880_pcm_digital_capture = ;
static int cmi9880_build_pcms(struct hda_codec *codec)
static void cmi9880_free(struct hda_codec *codec)
static const char * const cmi9880_models[CMI_MODELS] = ;
static const struct snd_pci_quirk cmi9880_cfg_tbl[] = ;
static const struct hda_codec_ops cmi9880_patch_ops = ;
static int patch_cmi9880(struct hda_codec *codec)
static const struct hda_codec_preset snd_hda_preset_cmedia[] = ;
MODULE_ALIAS("snd-hda-codec-id:13f69880");
MODULE_ALIAS("snd-hda-codec-id:434d4980");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("C-Media HD-audio codec");
static struct hda_codec_preset_list cmedia_list = ;
static int __init patch_cmedia_init(void)
static void __exit patch_cmedia_exit(void)
module_init(patch_cmedia_init)
module_exit(patch_cmedia_exit)
