struct cs_spec ;
enum ;
#define CS420X_VENDOR_NID	0x11
#define CS_DIG_OUT1_PIN_NID	0x10
#define CS_DIG_OUT2_PIN_NID	0x15
#define CS_DMIC1_PIN_NID	0x12
#define CS_DMIC2_PIN_NID	0x0e
#define IDX_SPDIF_STAT		0x0000
#define IDX_SPDIF_CTL		0x0001
#define IDX_ADC_CFG		0x0002
#define   CS_COEF_ADC_SZC_MASK		(3 << 0)
#define   CS_COEF_ADC_MIC_SZC_MODE	(3 << 0)
#define   CS_COEF_ADC_LI_SZC_MODE	(3 << 0)
#define   CS_COEF_ADC_MIC_PGA_MODE	(1 << 5)
#define   CS_COEF_ADC_LI_PGA_MODE	(1 << 6)
#define IDX_DAC_CFG		0x0003
#define   CS_COEF_DAC_HP_SZC_MODE	(3 << 0)
#define   CS_COEF_DAC_LO_SZC_MODE	(3 << 2)
#define   CS_COEF_DAC_SPK_SZC_MODE	(3 << 4)
#define IDX_BEEP_CFG		0x0004
static inline int cs_vendor_coef_get(struct hda_codec *codec, unsigned int idx)
static inline void cs_vendor_coef_set(struct hda_codec *codec, unsigned int idx,
unsigned int coef)
#define HP_EVENT	1
#define MIC_EVENT	2
static int cs_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int cs_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int cs_playback_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int cs_dig_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int cs_dig_playback_pcm_close(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int cs_dig_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int cs_dig_playback_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int cs_capture_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int cs_capture_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream cs_pcm_analog_playback = ;
static const struct hda_pcm_stream cs_pcm_analog_capture = ;
static const struct hda_pcm_stream cs_pcm_digital_playback = ;
static const struct hda_pcm_stream cs_pcm_digital_capture = ;
static int cs_build_pcms(struct hda_codec *codec)
static hda_nid_t get_dac(struct hda_codec *codec, hda_nid_t pin)
static int is_ext_mic(struct hda_codec *codec, unsigned int idx)
static hda_nid_t get_adc(struct hda_codec *codec, hda_nid_t pin,
unsigned int *idxp)
static int is_active_pin(struct hda_codec *codec, hda_nid_t nid)
static int parse_output(struct hda_codec *codec)
static int parse_input(struct hda_codec *codec)
static int parse_digital_output(struct hda_codec *codec)
static int parse_digital_input(struct hda_codec *codec)
static const char * const dir_sfx[2] = ;
static int add_mute(struct hda_codec *codec, const char *name, int index,
unsigned int pval, int dir, struct snd_kcontrol **kctlp)
static int add_volume(struct hda_codec *codec, const char *name,
int index, unsigned int pval, int dir,
struct snd_kcontrol **kctlp)
static void fix_volume_caps(struct hda_codec *codec, hda_nid_t dac)
static int add_vmaster(struct hda_codec *codec, hda_nid_t dac)
static int add_output(struct hda_codec *codec, hda_nid_t dac, int idx,
int num_ctls, int type)
static int build_output(struct hda_codec *codec)
static const struct snd_kcontrol_new cs_capture_ctls[] = ;
static int change_cur_input(struct hda_codec *codec, unsigned int idx,
int force)
static int cs_capture_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int cs_capture_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int cs_capture_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new cs_capture_source = ;
static const struct hda_bind_ctls *make_bind_capture(struct hda_codec *codec,
struct hda_ctl_ops *ops)
static int add_input_volume_control(struct hda_codec *codec,
struct auto_pin_cfg *cfg,
int item)
static int build_input(struct hda_codec *codec)
static int build_digital_output(struct hda_codec *codec)
static int build_digital_input(struct hda_codec *codec)
static void cs_automute(struct hda_codec *codec)
static void cs_automic(struct hda_codec *codec)
static void init_output(struct hda_codec *codec)
static void init_input(struct hda_codec *codec)
static const struct hda_verb cs_coef_init_verbs[] = ;
static const struct hda_verb cs_errata_init_verbs[] = ;
static void init_digital(struct hda_codec *codec)
static int cs_init(struct hda_codec *codec)
static int cs_build_controls(struct hda_codec *codec)
static void cs_free(struct hda_codec *codec)
static void cs_unsol_event(struct hda_codec *codec, unsigned int res)
static const struct hda_codec_ops cs_patch_ops = ;
static int cs_parse_auto_config(struct hda_codec *codec)
static const char * const cs420x_models[CS420X_MODELS] = ;
static const struct snd_pci_quirk cs420x_cfg_tbl[] = ;
struct cs_pincfg ;
static const struct cs_pincfg mbp53_pincfgs[] = ;
static const struct cs_pincfg mbp55_pincfgs[] = ;
static const struct cs_pincfg imac27_pincfgs[] = ;
static const struct cs_pincfg *cs_pincfgs[CS420X_MODELS] = ;
static void fix_pincfg(struct hda_codec *codec, int model)
static int patch_cs420x(struct hda_codec *codec)
static const struct hda_codec_preset snd_hda_preset_cirrus[] = ;
MODULE_ALIAS("snd-hda-codec-id:10134206");
MODULE_ALIAS("snd-hda-codec-id:10134207");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Cirrus Logic HD-audio codec");
static struct hda_codec_preset_list cirrus_list = ;
static int __init patch_cirrus_init(void)
static void __exit patch_cirrus_exit(void)
module_init(patch_cirrus_init)
module_exit(patch_cirrus_exit)
