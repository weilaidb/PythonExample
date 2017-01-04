#define __SOUND_HDA_LOCAL_H
#define HDA_SUBDEV_NID_FLAG	(1U << 31)
#define HDA_SUBDEV_AMP_FLAG	(1U << 30)
#define HDA_COMPOSE_AMP_VAL_OFS(nid,chs,idx,dir,ofs)		\
((nid) | ((chs)<<16) | ((dir)<<18) | ((idx)<<19) | ((ofs)<<23))
#define HDA_AMP_VAL_MIN_MUTE (1<<29)
#define HDA_COMPOSE_AMP_VAL(nid,chs,idx,dir) \
HDA_COMPOSE_AMP_VAL_OFS(nid, chs, idx, dir, 0)
#define HDA_CODEC_VOLUME_MONO_IDX(xname, xcidx, nid, channel, xindex, dir, flags) \
#define HDA_CODEC_VOLUME_IDX(xname, xcidx, nid, xindex, direction) \
HDA_CODEC_VOLUME_MONO_IDX(xname, xcidx, nid, 3, xindex, direction, 0)
#define HDA_CODEC_VOLUME_MONO(xname, nid, channel, xindex, direction) \
HDA_CODEC_VOLUME_MONO_IDX(xname, 0, nid, channel, xindex, direction, 0)
#define HDA_CODEC_VOLUME(xname, nid, xindex, direction) \
HDA_CODEC_VOLUME_MONO(xname, nid, 3, xindex, direction)
#define HDA_CODEC_VOLUME_MIN_MUTE(xname, nid, xindex, direction) \
HDA_CODEC_VOLUME_MONO_IDX(xname, 0, nid, 3, xindex, direction, \
HDA_AMP_VAL_MIN_MUTE)
#define HDA_CODEC_MUTE_MONO_IDX(xname, xcidx, nid, channel, xindex, direction) \
#define HDA_CODEC_MUTE_IDX(xname, xcidx, nid, xindex, direction) \
HDA_CODEC_MUTE_MONO_IDX(xname, xcidx, nid, 3, xindex, direction)
#define HDA_CODEC_MUTE_MONO(xname, nid, channel, xindex, direction) \
HDA_CODEC_MUTE_MONO_IDX(xname, 0, nid, channel, xindex, direction)
#define HDA_CODEC_MUTE(xname, nid, xindex, direction) \
HDA_CODEC_MUTE_MONO(xname, nid, 3, xindex, direction)
#define HDA_CODEC_MUTE_BEEP_MONO_IDX(xname, xcidx, nid, channel, xindex, direction) \
#define HDA_CODEC_MUTE_BEEP_MONO_IDX(xname, xcidx, nid, ch, xidx, dir) \
HDA_CODEC_MUTE_MONO_IDX(xname, xcidx, nid, ch, xidx, dir)
#define HDA_CODEC_MUTE_BEEP_MONO(xname, nid, channel, xindex, direction) \
HDA_CODEC_MUTE_BEEP_MONO_IDX(xname, 0, nid, channel, xindex, direction)
#define HDA_CODEC_MUTE_BEEP(xname, nid, xindex, direction) \
HDA_CODEC_MUTE_BEEP_MONO(xname, nid, 3, xindex, direction)
extern const char *snd_hda_pcm_type_name[];
int snd_hda_mixer_amp_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
int snd_hda_mixer_amp_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_hda_mixer_amp_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_hda_mixer_amp_tlv(struct snd_kcontrol *kcontrol, int op_flag,
unsigned int size, unsigned int __user *tlv);
int snd_hda_mixer_amp_switch_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
int snd_hda_mixer_amp_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_hda_mixer_amp_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_hda_mixer_amp_switch_put_beep(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_hda_codec_amp_read(struct hda_codec *codec, hda_nid_t nid, int ch,
int direction, int index);
int snd_hda_codec_amp_update(struct hda_codec *codec, hda_nid_t nid, int ch,
int direction, int idx, int mask, int val);
int snd_hda_codec_amp_stereo(struct hda_codec *codec, hda_nid_t nid,
int dir, int idx, int mask, int val);
void snd_hda_codec_resume_amp(struct hda_codec *codec);
void snd_hda_set_vmaster_tlv(struct hda_codec *codec, hda_nid_t nid, int dir,
unsigned int *tlv);
struct snd_kcontrol *snd_hda_find_mixer_ctl(struct hda_codec *codec,
const char *name);
int snd_hda_add_vmaster(struct hda_codec *codec, char *name,
unsigned int *tlv, const char * const *slaves);
int snd_hda_codec_reset(struct hda_codec *codec);
#define HDA_AMP_MUTE	0x80
#define HDA_AMP_UNMUTE	0x00
#define HDA_AMP_VOLMASK	0x7f
#define HDA_BIND_MUTE_MONO(xname, nid, channel, indices, direction) \
#define HDA_BIND_MUTE(xname,nid,indices,dir) \
HDA_BIND_MUTE_MONO(xname,nid,3,indices,dir)
int snd_hda_mixer_bind_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_hda_mixer_bind_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
struct hda_ctl_ops ;
extern struct hda_ctl_ops snd_hda_bind_vol;
extern struct hda_ctl_ops snd_hda_bind_sw;
struct hda_bind_ctls ;
int snd_hda_mixer_bind_ctls_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo);
int snd_hda_mixer_bind_ctls_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_hda_mixer_bind_ctls_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol);
int snd_hda_mixer_bind_tlv(struct snd_kcontrol *kcontrol, int op_flag,
unsigned int size, unsigned int __user *tlv);
#define HDA_BIND_VOL(xname, bindrec) \
#define HDA_BIND_SW(xname, bindrec) \
int snd_hda_create_spdif_out_ctls(struct hda_codec *codec, hda_nid_t nid);
int snd_hda_create_spdif_in_ctls(struct hda_codec *codec, hda_nid_t nid);
#define HDA_MAX_NUM_INPUTS	16
struct hda_input_mux_item ;
struct hda_input_mux ;
int snd_hda_input_mux_info(const struct hda_input_mux *imux,
struct snd_ctl_elem_info *uinfo);
int snd_hda_input_mux_put(struct hda_codec *codec,
const struct hda_input_mux *imux,
struct snd_ctl_elem_value *ucontrol, hda_nid_t nid,
unsigned int *cur_val);
struct hda_channel_mode ;
int snd_hda_ch_mode_info(struct hda_codec *codec,
struct snd_ctl_elem_info *uinfo,
const struct hda_channel_mode *chmode,
int num_chmodes);
int snd_hda_ch_mode_get(struct hda_codec *codec,
struct snd_ctl_elem_value *ucontrol,
const struct hda_channel_mode *chmode,
int num_chmodes,
int max_channels);
int snd_hda_ch_mode_put(struct hda_codec *codec,
struct snd_ctl_elem_value *ucontrol,
const struct hda_channel_mode *chmode,
int num_chmodes,
int *max_channelsp);
enum ;
enum ;
struct hda_multi_out ;
int snd_hda_create_spdif_share_sw(struct hda_codec *codec,
struct hda_multi_out *mout);
int snd_hda_multi_out_dig_open(struct hda_codec *codec,
struct hda_multi_out *mout);
int snd_hda_multi_out_dig_close(struct hda_codec *codec,
struct hda_multi_out *mout);
int snd_hda_multi_out_dig_prepare(struct hda_codec *codec,
struct hda_multi_out *mout,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream);
int snd_hda_multi_out_dig_cleanup(struct hda_codec *codec,
struct hda_multi_out *mout);
int snd_hda_multi_out_analog_open(struct hda_codec *codec,
struct hda_multi_out *mout,
struct snd_pcm_substream *substream,
struct hda_pcm_stream *hinfo);
int snd_hda_multi_out_analog_prepare(struct hda_codec *codec,
struct hda_multi_out *mout,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream);
int snd_hda_multi_out_analog_cleanup(struct hda_codec *codec,
struct hda_multi_out *mout);
int snd_hda_parse_generic_codec(struct hda_codec *codec);
static inline int snd_hda_parse_generic_codec(struct hda_codec *codec)
int snd_hda_codec_proc_new(struct hda_codec *codec);
static inline int snd_hda_codec_proc_new(struct hda_codec *codec)
#define SND_PRINT_RATES_ADVISED_BUFSIZE	80
void snd_print_pcm_rates(int pcm, char *buf, int buflen);
#define SND_PRINT_BITS_ADVISED_BUFSIZE	16
void snd_print_pcm_bits(int pcm, char *buf, int buflen);
int snd_hda_check_board_config(struct hda_codec *codec, int num_configs,
const char * const *modelnames,
const struct snd_pci_quirk *pci_list);
int snd_hda_check_board_codec_sid_config(struct hda_codec *codec,
int num_configs, const char * const *models,
const struct snd_pci_quirk *tbl);
int snd_hda_add_new_ctls(struct hda_codec *codec,
const struct snd_kcontrol_new *knew);
#define HDA_UNSOL_QUEUE_SIZE	64
struct hda_bus_unsolicited ;
enum ;
enum ;
#define AUTO_CFG_MAX_OUTS	5
#define AUTO_CFG_MAX_INS	8
struct auto_pin_cfg_item ;
struct auto_pin_cfg;
const char *hda_get_input_pin_label(struct hda_codec *codec, hda_nid_t pin,
int check_location);
const char *hda_get_autocfg_input_label(struct hda_codec *codec,
const struct auto_pin_cfg *cfg,
int input);
int snd_hda_add_imux_item(struct hda_input_mux *imux, const char *label,
int index, int *type_index_ret);
enum ;
int snd_hda_get_input_pin_attr(unsigned int def_conf);
struct auto_pin_cfg ;
#define get_defcfg_connect(cfg) \
((cfg & AC_DEFCFG_PORT_CONN) >> AC_DEFCFG_PORT_CONN_SHIFT)
#define get_defcfg_association(cfg) \
((cfg & AC_DEFCFG_DEF_ASSOC) >> AC_DEFCFG_ASSOC_SHIFT)
#define get_defcfg_location(cfg) \
((cfg & AC_DEFCFG_LOCATION) >> AC_DEFCFG_LOCATION_SHIFT)
#define get_defcfg_sequence(cfg) \
(cfg & AC_DEFCFG_SEQUENCE)
#define get_defcfg_device(cfg) \
((cfg & AC_DEFCFG_DEVICE) >> AC_DEFCFG_DEVICE_SHIFT)
int snd_hda_parse_pin_def_config(struct hda_codec *codec,
struct auto_pin_cfg *cfg,
const hda_nid_t *ignore_nids);
#define AMP_IN_MUTE(idx)	(0x7080 | ((idx)<<8))
#define AMP_IN_UNMUTE(idx)	(0x7000 | ((idx)<<8))
#define AMP_OUT_MUTE		0xb080
#define AMP_OUT_UNMUTE		0xb000
#define AMP_OUT_ZERO		0xb000
#define PIN_IN			(AC_PINCTL_IN_EN)
#define PIN_VREFHIZ		(AC_PINCTL_IN_EN | AC_PINCTL_VREF_HIZ)
#define PIN_VREF50		(AC_PINCTL_IN_EN | AC_PINCTL_VREF_50)
#define PIN_VREFGRD		(AC_PINCTL_IN_EN | AC_PINCTL_VREF_GRD)
#define PIN_VREF80		(AC_PINCTL_IN_EN | AC_PINCTL_VREF_80)
#define PIN_VREF100		(AC_PINCTL_IN_EN | AC_PINCTL_VREF_100)
#define PIN_OUT			(AC_PINCTL_OUT_EN)
#define PIN_HP			(AC_PINCTL_OUT_EN | AC_PINCTL_HP_EN)
#define PIN_HP_AMP		(AC_PINCTL_HP_EN)
static inline u32 get_wcaps(struct hda_codec *codec, hda_nid_t nid)
#define get_wcaps_type(wcaps) (((wcaps) & AC_WCAP_TYPE) >> AC_WCAP_TYPE_SHIFT)
static inline unsigned int get_wcaps_channels(u32 wcaps)
u32 query_amp_caps(struct hda_codec *codec, hda_nid_t nid, int direction);
int snd_hda_override_amp_caps(struct hda_codec *codec, hda_nid_t nid, int dir,
unsigned int caps);
u32 snd_hda_query_pin_caps(struct hda_codec *codec, hda_nid_t nid);
u32 snd_hda_pin_sense(struct hda_codec *codec, hda_nid_t nid);
int snd_hda_jack_detect(struct hda_codec *codec, hda_nid_t nid);
static inline bool is_jack_detectable(struct hda_codec *codec, hda_nid_t nid)
#define HDA_NID_ITEM_AMP	(1<<0)
struct hda_nid_item ;
int snd_hda_ctl_add(struct hda_codec *codec, hda_nid_t nid,
struct snd_kcontrol *kctl);
int snd_hda_add_nid(struct hda_codec *codec, struct snd_kcontrol *kctl,
unsigned int index, hda_nid_t nid);
void snd_hda_ctls_clear(struct hda_codec *codec);
int snd_hda_create_hwdep(struct hda_codec *codec);
static inline int snd_hda_create_hwdep(struct hda_codec *codec)
#if defined(CONFIG_SND_HDA_POWER_SAVE) && defined(CONFIG_SND_HDA_HWDEP)
int snd_hda_hwdep_add_power_sysfs(struct hda_codec *codec);
static inline int snd_hda_hwdep_add_power_sysfs(struct hda_codec *codec)
int snd_hda_hwdep_add_sysfs(struct hda_codec *codec);
static inline int snd_hda_hwdep_add_sysfs(struct hda_codec *codec)
const char *snd_hda_get_hint(struct hda_codec *codec, const char *key);
int snd_hda_get_bool_hint(struct hda_codec *codec, const char *key);
static inline
const char *snd_hda_get_hint(struct hda_codec *codec, const char *key)
static inline
int snd_hda_get_bool_hint(struct hda_codec *codec, const char *key)
void snd_hda_schedule_power_save(struct hda_codec *codec);
struct hda_amp_list ;
struct hda_loopback_check ;
int snd_hda_check_amp_list_power(struct hda_codec *codec,
struct hda_loopback_check *check,
hda_nid_t nid);
#define get_amp_nid_(pv)	((pv) & 0xffff)
#define get_amp_nid(kc)		get_amp_nid_((kc)->private_value)
#define get_amp_channels(kc)	(((kc)->private_value >> 16) & 0x3)
#define get_amp_direction(kc)	(((kc)->private_value >> 18) & 0x1)
#define get_amp_index(kc)	(((kc)->private_value >> 19) & 0xf)
#define get_amp_offset(kc)	(((kc)->private_value >> 23) & 0x3f)
#define get_amp_min_mute(kc)	(((kc)->private_value >> 29) & 0x1)
struct cea_sad ;
#define ELD_FIXED_BYTES	20
#define ELD_MAX_MNL	16
#define ELD_MAX_SAD	16
struct hdmi_eld ;
int snd_hdmi_get_eld_size(struct hda_codec *codec, hda_nid_t nid);
int snd_hdmi_get_eld(struct hdmi_eld *, struct hda_codec *, hda_nid_t);
void snd_hdmi_show_eld(struct hdmi_eld *eld);
void hdmi_eld_update_pcm_info(struct hdmi_eld *eld, struct hda_pcm_stream *pcm,
struct hda_pcm_stream *codec_pars);
int snd_hda_eld_proc_new(struct hda_codec *codec, struct hdmi_eld *eld,
int index);
void snd_hda_eld_proc_free(struct hda_codec *codec, struct hdmi_eld *eld);
static inline int snd_hda_eld_proc_new(struct hda_codec *codec,
struct hdmi_eld *eld,
int index)
static inline void snd_hda_eld_proc_free(struct hda_codec *codec,
struct hdmi_eld *eld)
#define SND_PRINT_CHANNEL_ALLOCATION_ADVISED_BUFSIZE 80
void snd_print_channel_allocation(int spk_alloc, char *buf, int buflen);
int snd_hda_input_jack_add(struct hda_codec *codec, hda_nid_t nid, int type,
const char *name);
void snd_hda_input_jack_report(struct hda_codec *codec, hda_nid_t nid);
void snd_hda_input_jack_free(struct hda_codec *codec);
static inline int snd_hda_input_jack_add(struct hda_codec *codec,
hda_nid_t nid, int type,
const char *name)
static inline void snd_hda_input_jack_report(struct hda_codec *codec,
hda_nid_t nid)
static inline void snd_hda_input_jack_free(struct hda_codec *codec)
