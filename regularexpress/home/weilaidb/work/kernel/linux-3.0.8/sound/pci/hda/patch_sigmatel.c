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
struct sigmatel_event ;
struct sigmatel_mic_route ;
#define MAX_PINS_NUM 16
#define MAX_ADCS_NUM 4
#define MAX_DMICS_NUM 4
struct sigmatel_spec ;
static const hda_nid_t stac9200_adc_nids[1] = ;
static const hda_nid_t stac9200_mux_nids[1] = ;
static const hda_nid_t stac9200_dac_nids[1] = ;
static const hda_nid_t stac92hd73xx_pwr_nids[8] = ;
static const hda_nid_t stac92hd73xx_slave_dig_outs[2] = ;
static const hda_nid_t stac92hd73xx_adc_nids[2] = ;
#define STAC92HD73XX_NUM_DMICS	2
static const hda_nid_t stac92hd73xx_dmic_nids[STAC92HD73XX_NUM_DMICS + 1] = ;
#define STAC92HD73_DAC_COUNT 5
static const hda_nid_t stac92hd73xx_mux_nids[2] = ;
static const hda_nid_t stac92hd73xx_dmux_nids[2] = ;
static const hda_nid_t stac92hd73xx_smux_nids[2] = ;
#define STAC92HD73XX_NUM_CAPS	2
static const unsigned long stac92hd73xx_capvols[] = ;
#define stac92hd73xx_capsws	stac92hd73xx_capvols
#define STAC92HD83_DAC_COUNT 3
static const hda_nid_t stac92hd83xxx_pwr_nids[4] = ;
static const hda_nid_t stac92hd83xxx_slave_dig_outs[2] = ;
static const unsigned int stac92hd83xxx_pwr_mapping[4] = ;
static const hda_nid_t stac92hd83xxx_dmic_nids[] = ;
static const hda_nid_t stac92hd71bxx_pwr_nids[3] = ;
static const hda_nid_t stac92hd71bxx_adc_nids[2] = ;
static const hda_nid_t stac92hd71bxx_mux_nids[2] = ;
static const hda_nid_t stac92hd71bxx_dmux_nids[2] = ;
static const hda_nid_t stac92hd71bxx_smux_nids[2] = ;
#define STAC92HD71BXX_NUM_DMICS	2
static const hda_nid_t stac92hd71bxx_dmic_nids[STAC92HD71BXX_NUM_DMICS + 1] = ;
static const hda_nid_t stac92hd71bxx_dmic_5port_nids[STAC92HD71BXX_NUM_DMICS] = ;
static const hda_nid_t stac92hd71bxx_slave_dig_outs[2] = ;
#define STAC92HD71BXX_NUM_CAPS		2
static const unsigned long stac92hd71bxx_capvols[] = ;
#define stac92hd71bxx_capsws	stac92hd71bxx_capvols
static const hda_nid_t stac925x_adc_nids[1] = ;
static const hda_nid_t stac925x_mux_nids[1] = ;
static const hda_nid_t stac925x_dac_nids[1] = ;
#define STAC925X_NUM_DMICS	1
static const hda_nid_t stac925x_dmic_nids[STAC925X_NUM_DMICS + 1] = ;
static const hda_nid_t stac925x_dmux_nids[1] = ;
static const unsigned long stac925x_capvols[] = ;
static const unsigned long stac925x_capsws[] = ;
static const hda_nid_t stac922x_adc_nids[2] = ;
static const hda_nid_t stac922x_mux_nids[2] = ;
#define STAC922X_NUM_CAPS	2
static const unsigned long stac922x_capvols[] = ;
#define stac922x_capsws		stac922x_capvols
static const hda_nid_t stac927x_slave_dig_outs[2] = ;
static const hda_nid_t stac927x_adc_nids[3] = ;
static const hda_nid_t stac927x_mux_nids[3] = ;
static const hda_nid_t stac927x_smux_nids[1] = ;
static const hda_nid_t stac927x_dac_nids[6] = ;
static const hda_nid_t stac927x_dmux_nids[1] = ;
#define STAC927X_NUM_DMICS 2
static const hda_nid_t stac927x_dmic_nids[STAC927X_NUM_DMICS + 1] = ;
#define STAC927X_NUM_CAPS	3
static const unsigned long stac927x_capvols[] = ;
static const unsigned long stac927x_capsws[] = ;
static const char * const stac927x_spdif_labels[5] = ;
static const hda_nid_t stac9205_adc_nids[2] = ;
static const hda_nid_t stac9205_mux_nids[2] = ;
static const hda_nid_t stac9205_dmux_nids[1] = ;
static const hda_nid_t stac9205_smux_nids[1] = ;
#define STAC9205_NUM_DMICS	2
static const hda_nid_t stac9205_dmic_nids[STAC9205_NUM_DMICS + 1] = ;
#define STAC9205_NUM_CAPS	2
static const unsigned long stac9205_capvols[] = ;
static const unsigned long stac9205_capsws[] = ;
static const hda_nid_t stac9200_pin_nids[8] = ;
static const hda_nid_t stac925x_pin_nids[8] = ;
static const hda_nid_t stac922x_pin_nids[10] = ;
static const hda_nid_t stac92hd73xx_pin_nids[13] = ;
#define STAC92HD71BXX_NUM_PINS 13
static const hda_nid_t stac92hd71bxx_pin_nids_4port[STAC92HD71BXX_NUM_PINS] = ;
static const hda_nid_t stac92hd71bxx_pin_nids_6port[STAC92HD71BXX_NUM_PINS] = ;
static const hda_nid_t stac927x_pin_nids[14] = ;
static const hda_nid_t stac9205_pin_nids[12] = ;
static int stac92xx_dmux_enum_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int stac92xx_dmux_enum_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac92xx_dmux_enum_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac92xx_smux_enum_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int stac92xx_smux_enum_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac92xx_smux_enum_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static unsigned int stac92xx_vref_set(struct hda_codec *codec,
hda_nid_t nid, unsigned int new_vref)
static unsigned int stac92xx_vref_get(struct hda_codec *codec, hda_nid_t nid)
static int stac92xx_mux_enum_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int stac92xx_mux_enum_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int stac92xx_mux_enum_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int stac92xx_mono_mux_enum_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int stac92xx_mono_mux_enum_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac92xx_mono_mux_enum_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define stac92xx_aloopback_info snd_ctl_boolean_mono_info
static int stac92xx_aloopback_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac92xx_aloopback_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct hda_verb stac9200_core_init[] = ;
static const struct hda_verb stac9200_eapd_init[] = ;
static const struct hda_verb dell_eq_core_init[] = ;
static const struct hda_verb stac92hd73xx_core_init[] = ;
static const struct hda_verb stac92hd83xxx_core_init[] = ;
static const struct hda_verb stac92hd71bxx_core_init[] = ;
static const struct hda_verb stac92hd71bxx_unmute_core_init[] = ;
static const struct hda_verb stac925x_core_init[] = ;
static const struct hda_verb stac922x_core_init[] = ;
static const struct hda_verb d965_core_init[] = ;
static const struct hda_verb dell_3st_core_init[] = ;
static const struct hda_verb stac927x_core_init[] = ;
static const struct hda_verb stac927x_volknob_core_init[] = ;
static const struct hda_verb stac9205_core_init[] = ;
#define STAC_MONO_MUX \
#define STAC_ANALOG_LOOPBACK(verb_read, verb_write, cnt) \
#define DC_BIAS(xname, idx, nid) \
static const struct snd_kcontrol_new stac9200_mixer[] = ;
static const struct snd_kcontrol_new stac92hd73xx_6ch_loopback[] = ;
static const struct snd_kcontrol_new stac92hd73xx_8ch_loopback[] = ;
static const struct snd_kcontrol_new stac92hd73xx_10ch_loopback[] = ;
static const struct snd_kcontrol_new stac92hd71bxx_loopback[] = ;
static const struct snd_kcontrol_new stac925x_mixer[] = ;
static const struct snd_kcontrol_new stac9205_loopback[] = ;
static const struct snd_kcontrol_new stac927x_loopback[] = ;
static struct snd_kcontrol_new stac_dmux_mixer = ;
static struct snd_kcontrol_new stac_smux_mixer = ;
static const char * const slave_vols[] = ;
static const char * const slave_sws[] = ;
static void stac92xx_free_kctls(struct hda_codec *codec);
static int stac92xx_add_jack(struct hda_codec *codec, hda_nid_t nid, int type);
static int stac92xx_build_controls(struct hda_codec *codec)
static const unsigned int ref9200_pin_configs[8] = ;
static const unsigned int gateway9200_m4_pin_configs[8] = ;
static const unsigned int gateway9200_m4_2_pin_configs[8] = ;
static const unsigned int dell9200_d21_pin_configs[8] = ;
static const unsigned int dell9200_d22_pin_configs[8] = ;
static const unsigned int dell9200_d23_pin_configs[8] = ;
static const unsigned int dell9200_m21_pin_configs[8] = ;
static const unsigned int dell9200_m22_pin_configs[8] = ;
static const unsigned int dell9200_m23_pin_configs[8] = ;
static const unsigned int dell9200_m24_pin_configs[8] = ;
static const unsigned int dell9200_m25_pin_configs[8] = ;
static const unsigned int dell9200_m26_pin_configs[8] = ;
static const unsigned int dell9200_m27_pin_configs[8] = ;
static const unsigned int oqo9200_pin_configs[8] = ;
static const unsigned int *stac9200_brd_tbl[STAC_9200_MODELS] = ;
static const char * const stac9200_models[STAC_9200_MODELS] = ;
static const struct snd_pci_quirk stac9200_cfg_tbl[] = ;
static const unsigned int ref925x_pin_configs[8] = ;
static const unsigned int stac925xM1_pin_configs[8] = ;
static const unsigned int stac925xM1_2_pin_configs[8] = ;
static const unsigned int stac925xM2_pin_configs[8] = ;
static const unsigned int stac925xM2_2_pin_configs[8] = ;
static const unsigned int stac925xM3_pin_configs[8] = ;
static const unsigned int stac925xM5_pin_configs[8] = ;
static const unsigned int stac925xM6_pin_configs[8] = ;
static const unsigned int *stac925x_brd_tbl[STAC_925x_MODELS] = ;
static const char * const stac925x_models[STAC_925x_MODELS] = ;
static const struct snd_pci_quirk stac925x_codec_id_cfg_tbl[] = ;
static const struct snd_pci_quirk stac925x_cfg_tbl[] = ;
static const unsigned int ref92hd73xx_pin_configs[13] = ;
static const unsigned int dell_m6_pin_configs[13] = ;
static const unsigned int alienware_m17x_pin_configs[13] = ;
static const unsigned int intel_dg45id_pin_configs[13] = ;
static const unsigned int *stac92hd73xx_brd_tbl[STAC_92HD73XX_MODELS] = ;
static const char * const stac92hd73xx_models[STAC_92HD73XX_MODELS] = ;
static const struct snd_pci_quirk stac92hd73xx_cfg_tbl[] = ;
static const struct snd_pci_quirk stac92hd73xx_codec_id_cfg_tbl[] = ;
static const unsigned int ref92hd83xxx_pin_configs[10] = ;
static const unsigned int dell_s14_pin_configs[10] = ;
static const unsigned int hp_dv7_4000_pin_configs[10] = ;
static const unsigned int *stac92hd83xxx_brd_tbl[STAC_92HD83XXX_MODELS] = ;
static const char * const stac92hd83xxx_models[STAC_92HD83XXX_MODELS] = ;
static const struct snd_pci_quirk stac92hd83xxx_cfg_tbl[] = ;
static const unsigned int ref92hd71bxx_pin_configs[STAC92HD71BXX_NUM_PINS] = ;
static const unsigned int dell_m4_1_pin_configs[STAC92HD71BXX_NUM_PINS] = ;
static const unsigned int dell_m4_2_pin_configs[STAC92HD71BXX_NUM_PINS] = ;
static const unsigned int dell_m4_3_pin_configs[STAC92HD71BXX_NUM_PINS] = ;
static const unsigned int *stac92hd71bxx_brd_tbl[STAC_92HD71BXX_MODELS] = ;
static const char * const stac92hd71bxx_models[STAC_92HD71BXX_MODELS] = ;
static const struct snd_pci_quirk stac92hd71bxx_cfg_tbl[] = ;
static const unsigned int ref922x_pin_configs[10] = ;
static const unsigned int dell_922x_d81_pin_configs[10] = ;
static const unsigned int dell_922x_d82_pin_configs[10] = ;
static const unsigned int dell_922x_m81_pin_configs[10] = ;
static const unsigned int dell_922x_m82_pin_configs[10] = ;
static const unsigned int d945gtp3_pin_configs[10] = ;
static const unsigned int d945gtp5_pin_configs[10] = ;
static const unsigned int intel_mac_v1_pin_configs[10] = ;
static const unsigned int intel_mac_v2_pin_configs[10] = ;
static const unsigned int intel_mac_v3_pin_configs[10] = ;
static const unsigned int intel_mac_v4_pin_configs[10] = ;
static const unsigned int intel_mac_v5_pin_configs[10] = ;
static const unsigned int ecs202_pin_configs[10] = ;
static const unsigned int *stac922x_brd_tbl[STAC_922X_MODELS] = ;
static const char * const stac922x_models[STAC_922X_MODELS] = ;
static const struct snd_pci_quirk stac922x_cfg_tbl[] = ;
static const unsigned int ref927x_pin_configs[14] = ;
static const unsigned int d965_3st_pin_configs[14] = ;
static const unsigned int d965_5st_pin_configs[14] = ;
static const unsigned int d965_5st_no_fp_pin_configs[14] = ;
static const unsigned int dell_3st_pin_configs[14] = ;
static const unsigned int *stac927x_brd_tbl[STAC_927X_MODELS] = ;
static const char * const stac927x_models[STAC_927X_MODELS] = ;
static const struct snd_pci_quirk stac927x_cfg_tbl[] = ;
static const unsigned int ref9205_pin_configs[12] = ;
static const unsigned int dell_9205_m42_pin_configs[12] = ;
static const unsigned int dell_9205_m43_pin_configs[12] = ;
static const unsigned int dell_9205_m44_pin_configs[12] = ;
static const unsigned int *stac9205_brd_tbl[STAC_9205_MODELS] = ;
static const char * const stac9205_models[STAC_9205_MODELS] = ;
static const struct snd_pci_quirk stac9205_cfg_tbl[] = ;
static void stac92xx_set_config_regs(struct hda_codec *codec,
const unsigned int *pincfgs)
static int stac92xx_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int stac92xx_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int stac92xx_playback_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int stac92xx_dig_playback_pcm_open(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int stac92xx_dig_playback_pcm_close(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int stac92xx_dig_playback_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int stac92xx_dig_playback_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int stac92xx_capture_pcm_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int stac92xx_capture_pcm_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static const struct hda_pcm_stream stac92xx_pcm_digital_playback = ;
static const struct hda_pcm_stream stac92xx_pcm_digital_capture = ;
static const struct hda_pcm_stream stac92xx_pcm_analog_playback = ;
static const struct hda_pcm_stream stac92xx_pcm_analog_alt_playback = ;
static const struct hda_pcm_stream stac92xx_pcm_analog_capture = ;
static int stac92xx_build_pcms(struct hda_codec *codec)
static unsigned int stac92xx_get_default_vref(struct hda_codec *codec,
hda_nid_t nid)
static void stac92xx_auto_set_pinctl(struct hda_codec *codec, hda_nid_t nid, int pin_type)
#define stac92xx_hp_switch_info		snd_ctl_boolean_mono_info
static int stac92xx_hp_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void stac_issue_unsol_event(struct hda_codec *codec, hda_nid_t nid);
static int stac92xx_hp_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac92xx_dc_bias_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int stac92xx_dc_bias_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac92xx_dc_bias_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac92xx_io_switch_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int stac92xx_io_switch_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int stac92xx_io_switch_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define stac92xx_clfe_switch_info snd_ctl_boolean_mono_info
static int stac92xx_clfe_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac92xx_clfe_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define STAC_CODEC_HP_SWITCH(xname) \
#define STAC_CODEC_IO_SWITCH(xname, xpval) \
#define STAC_CODEC_CLFE_SWITCH(xname, xpval) \
enum ;
static const struct snd_kcontrol_new stac92xx_control_templates[] = ;
static struct snd_kcontrol_new *
stac_control_new(struct sigmatel_spec *spec,
const struct snd_kcontrol_new *ktemp,
const char *name,
unsigned int subdev)
static int stac92xx_add_control_temp(struct sigmatel_spec *spec,
const struct snd_kcontrol_new *ktemp,
int idx, const char *name,
unsigned long val)
static inline int stac92xx_add_control_idx(struct sigmatel_spec *spec,
int type, int idx, const char *name,
unsigned long val)
static inline int stac92xx_add_control(struct sigmatel_spec *spec, int type,
const char *name, unsigned long val)
static const struct snd_kcontrol_new stac_input_src_temp = ;
static inline int stac92xx_add_jack_mode_control(struct hda_codec *codec,
hda_nid_t nid, int idx)
static int stac92xx_add_input_source(struct sigmatel_spec *spec)
static hda_nid_t check_line_out_switch(struct hda_codec *codec)
static hda_nid_t get_unassigned_dac(struct hda_codec *codec, hda_nid_t nid);
static hda_nid_t check_mic_out_switch(struct hda_codec *codec, hda_nid_t *dac)
static int is_in_dac_nids(struct sigmatel_spec *spec, hda_nid_t nid)
static int check_all_dac_nids(struct sigmatel_spec *spec, hda_nid_t nid)
static hda_nid_t get_unassigned_dac(struct hda_codec *codec, hda_nid_t nid)
static int add_spec_dacs(struct sigmatel_spec *spec, hda_nid_t nid);
static int add_spec_extra_dacs(struct sigmatel_spec *spec, hda_nid_t nid);
static int stac92xx_auto_fill_dac_nids(struct hda_codec *codec)
static int create_controls_idx(struct hda_codec *codec, const char *pfx,
int idx, hda_nid_t nid, int chs)
#define create_controls(codec, pfx, nid, chs) \
create_controls_idx(codec, pfx, 0, nid, chs)
static int add_spec_dacs(struct sigmatel_spec *spec, hda_nid_t nid)
static int add_spec_extra_dacs(struct sigmatel_spec *spec, hda_nid_t nid)
static int create_multi_out_ctls(struct hda_codec *codec, int num_outs,
const hda_nid_t *pins,
const hda_nid_t *dac_nids,
int type)
static int stac92xx_add_capvol_ctls(struct hda_codec *codec, unsigned long vol,
unsigned long sw, int idx)
static int stac92xx_auto_create_multi_out_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static int stac92xx_auto_create_hp_ctls(struct hda_codec *codec,
struct auto_pin_cfg *cfg)
static const char * const stac92xx_mono_labels[4] = ;
static int stac92xx_auto_create_mono_output_ctls(struct hda_codec *codec)
static int stac92xx_auto_create_beep_ctls(struct hda_codec *codec,
hda_nid_t nid)
#define stac92xx_dig_beep_switch_info snd_ctl_boolean_mono_info
static int stac92xx_dig_beep_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac92xx_dig_beep_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new stac92xx_dig_beep_ctrl = ;
static int stac92xx_beep_switch_ctl(struct hda_codec *codec)
static int stac92xx_auto_create_mux_input_ctls(struct hda_codec *codec)
;
static const char * const stac92xx_spdif_labels[3] = ;
static int stac92xx_auto_create_spdif_mux_ctls(struct hda_codec *codec)
static const char * const stac92xx_dmic_labels[5] = ;
static hda_nid_t get_connected_node(struct hda_codec *codec, hda_nid_t mux,
int idx)
static int get_connection_index(struct hda_codec *codec, hda_nid_t mux,
hda_nid_t nid)
static int create_elem_capture_vol(struct hda_codec *codec, hda_nid_t nid,
const char *label, int idx, int direction)
static int stac92xx_auto_create_dmic_input_ctls(struct hda_codec *codec,
const struct auto_pin_cfg *cfg)
static int check_mic_pin(struct hda_codec *codec, hda_nid_t nid,
hda_nid_t *fixed, hda_nid_t *ext, hda_nid_t *dock)
static int set_mic_route(struct hda_codec *codec,
struct sigmatel_mic_route *mic,
hda_nid_t pin)
static int stac_check_auto_mic(struct hda_codec *codec)
static int stac92xx_auto_create_analog_input_ctls(struct hda_codec *codec, const struct auto_pin_cfg *cfg)
static void stac92xx_auto_init_multi_out(struct hda_codec *codec)
static void stac92xx_auto_init_hp_out(struct hda_codec *codec)
static int is_dual_headphones(struct hda_codec *codec)
static int stac92xx_parse_auto_config(struct hda_codec *codec, hda_nid_t dig_out, hda_nid_t dig_in)
static int stac9200_auto_create_hp_ctls(struct hda_codec *codec,
struct auto_pin_cfg *cfg)
static int stac9200_auto_create_lfe_ctls(struct hda_codec *codec,
struct auto_pin_cfg *cfg)
static int stac9200_parse_auto_config(struct hda_codec *codec)
static void stac_gpio_set(struct hda_codec *codec, unsigned int mask,
unsigned int dir_mask, unsigned int data)
static int stac92xx_add_jack(struct hda_codec *codec,
hda_nid_t nid, int type)
static int stac_add_event(struct sigmatel_spec *spec, hda_nid_t nid,
unsigned char type, int data)
static struct sigmatel_event *stac_get_event(struct hda_codec *codec,
hda_nid_t nid)
static struct sigmatel_event *stac_get_event_from_tag(struct hda_codec *codec,
unsigned char tag)
static int enable_pin_detect(struct hda_codec *codec, hda_nid_t nid,
unsigned int type)
static int is_nid_hp_pin(struct auto_pin_cfg *cfg, hda_nid_t nid)
;
static void stac92xx_power_down(struct hda_codec *codec)
static void stac_toggle_power_map(struct hda_codec *codec, hda_nid_t nid,
int enable);
static inline int get_int_hint(struct hda_codec *codec, const char *key,
int *valp)
static void stac_store_hints(struct hda_codec *codec)
static int stac92xx_init(struct hda_codec *codec)
static void stac92xx_free_kctls(struct hda_codec *codec)
static void stac92xx_shutup(struct hda_codec *codec)
static void stac92xx_free(struct hda_codec *codec)
static void stac92xx_set_pinctl(struct hda_codec *codec, hda_nid_t nid,
unsigned int flag)
static void stac92xx_reset_pinctl(struct hda_codec *codec, hda_nid_t nid,
unsigned int flag)
static inline int get_pin_presence(struct hda_codec *codec, hda_nid_t nid)
static void stac92xx_line_out_detect(struct hda_codec *codec,
int presence)
static int no_hp_sensing(struct sigmatel_spec *spec, int i)
static void stac92xx_hp_detect(struct hda_codec *codec)
static void stac_toggle_power_map(struct hda_codec *codec, hda_nid_t nid,
int enable)
static void stac92xx_pin_sense(struct hda_codec *codec, hda_nid_t nid)
static unsigned int stac_get_defcfg_connect(struct hda_codec *codec, int idx)
static int stac92xx_connected_ports(struct hda_codec *codec,
const hda_nid_t *nids, int num_nids)
static void stac92xx_mic_detect(struct hda_codec *codec)
static void stac_issue_unsol_event(struct hda_codec *codec, hda_nid_t nid)
static void stac92xx_unsol_event(struct hda_codec *codec, unsigned int res)
static int hp_blike_system(u32 subsystem_id);
static void set_hp_led_gpio(struct hda_codec *codec)
static int find_mute_led_gpio(struct hda_codec *codec, int default_polarity)
static int hp_blike_system(u32 subsystem_id)
static void stac92hd_proc_hook(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid)
static void analog_loop_proc_hook(struct snd_info_buffer *buffer,
struct hda_codec *codec,
unsigned int verb)
static void stac92hd7x_proc_hook(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid)
static void stac9205_proc_hook(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid)
static void stac927x_proc_hook(struct snd_info_buffer *buffer,
struct hda_codec *codec, hda_nid_t nid)
#define stac92hd_proc_hook	NULL
#define stac92hd7x_proc_hook	NULL
#define stac9205_proc_hook	NULL
#define stac927x_proc_hook	NULL
static int stac92xx_resume(struct hda_codec *codec)
static int stac92xx_hp_check_power_status(struct hda_codec *codec,
hda_nid_t nid)
static int stac92xx_suspend(struct hda_codec *codec, pm_message_t state)
static const struct hda_codec_ops stac92xx_patch_ops = ;
static int patch_stac9200(struct hda_codec *codec)
static int patch_stac925x(struct hda_codec *codec)
static int patch_stac92hd73xx(struct hda_codec *codec)
static int hp_bnb2011_with_dock(struct hda_codec *codec)
static void stac92hd8x_add_pin(struct hda_codec *codec, hda_nid_t nid)
static void stac92hd8x_add_adc(struct hda_codec *codec, hda_nid_t nid)
static void stac92hd8x_add_mux(struct hda_codec *codec, hda_nid_t nid)
static void stac92hd8x_fill_auto_spec(struct hda_codec *codec)
static int patch_stac92hd83xxx(struct hda_codec *codec)
static int stac92hd71bxx_connected_smuxes(struct hda_codec *codec,
hda_nid_t dig0pin)
#define stac_hp_bass_gpio_info	snd_ctl_boolean_mono_info
static int stac_hp_bass_gpio_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int stac_hp_bass_gpio_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new stac_hp_bass_sw_ctrl = ;
static int stac_add_hp_bass_switch(struct hda_codec *codec)
static int patch_stac92hd71bxx(struct hda_codec *codec)
static int patch_stac922x(struct hda_codec *codec)
static int patch_stac927x(struct hda_codec *codec)
static int patch_stac9205(struct hda_codec *codec)
static const struct hda_verb stac9872_core_init[] = ;
static const hda_nid_t stac9872_pin_nids[] = ;
static const hda_nid_t stac9872_adc_nids[] = ;
static const hda_nid_t stac9872_mux_nids[] = ;
static const unsigned long stac9872_capvols[] = ;
#define stac9872_capsws		stac9872_capvols
static const unsigned int stac9872_vaio_pin_configs[9] = ;
static const char * const stac9872_models[STAC_9872_MODELS] = ;
static const unsigned int *stac9872_brd_tbl[STAC_9872_MODELS] = ;
static const struct snd_pci_quirk stac9872_cfg_tbl[] = ;
static int patch_stac9872(struct hda_codec *codec)
static const struct hda_codec_preset snd_hda_preset_sigmatel[] = ;
MODULE_ALIAS("snd-hda-codec-id:8384*");
MODULE_ALIAS("snd-hda-codec-id:111d*");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("IDT/Sigmatel HD-audio codec");
static struct hda_codec_preset_list sigmatel_list = ;
static int __init patch_sigmatel_init(void)
static void __exit patch_sigmatel_exit(void)
module_init(patch_sigmatel_init)
module_exit(patch_sigmatel_exit)
