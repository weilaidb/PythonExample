struct hda_vendor_id ;
static struct hda_vendor_id hda_vendor_ids[] = ;
static DEFINE_MUTEX(preset_mutex);
static LIST_HEAD(hda_preset_tables);
int snd_hda_add_codec_preset(struct hda_codec_preset_list *preset)
EXPORT_SYMBOL_HDA(snd_hda_add_codec_preset);
int snd_hda_delete_codec_preset(struct hda_codec_preset_list *preset)
EXPORT_SYMBOL_HDA(snd_hda_delete_codec_preset);
static void hda_power_work(struct work_struct *work);
static void hda_keep_power_on(struct hda_codec *codec);
static inline void hda_keep_power_on(struct hda_codec *codec)
const char *snd_hda_get_jack_location(u32 cfg)
EXPORT_SYMBOL_HDA(snd_hda_get_jack_location);
const char *snd_hda_get_jack_connectivity(u32 cfg)
EXPORT_SYMBOL_HDA(snd_hda_get_jack_connectivity);
const char *snd_hda_get_jack_type(u32 cfg)
EXPORT_SYMBOL_HDA(snd_hda_get_jack_type);
static inline unsigned int
make_codec_cmd(struct hda_codec *codec, hda_nid_t nid, int direct,
unsigned int verb, unsigned int parm)
static int codec_exec_verb(struct hda_codec *codec, unsigned int cmd,
unsigned int *res)
unsigned int snd_hda_codec_read(struct hda_codec *codec, hda_nid_t nid,
int direct,
unsigned int verb, unsigned int parm)
EXPORT_SYMBOL_HDA(snd_hda_codec_read);
int snd_hda_codec_write(struct hda_codec *codec, hda_nid_t nid, int direct,
unsigned int verb, unsigned int parm)
EXPORT_SYMBOL_HDA(snd_hda_codec_write);
void snd_hda_sequence_write(struct hda_codec *codec, const struct hda_verb *seq)
EXPORT_SYMBOL_HDA(snd_hda_sequence_write);
int snd_hda_get_sub_nodes(struct hda_codec *codec, hda_nid_t nid,
hda_nid_t *start_id)
EXPORT_SYMBOL_HDA(snd_hda_get_sub_nodes);
static int _hda_get_connections(struct hda_codec *codec, hda_nid_t nid,
hda_nid_t *conn_list, int max_conns);
static bool add_conn_list(struct snd_array *array, hda_nid_t nid);
static int copy_conn_list(hda_nid_t nid, hda_nid_t *dst, int max_dst,
hda_nid_t *src, int len);
int snd_hda_get_connections(struct hda_codec *codec, hda_nid_t nid,
hda_nid_t *conn_list, int max_conns)
EXPORT_SYMBOL_HDA(snd_hda_get_connections);
static int _hda_get_connections(struct hda_codec *codec, hda_nid_t nid,
hda_nid_t *conn_list, int max_conns)
static bool add_conn_list(struct snd_array *array, hda_nid_t nid)
static int copy_conn_list(hda_nid_t nid, hda_nid_t *dst, int max_dst,
hda_nid_t *src, int len)
int snd_hda_queue_unsol_event(struct hda_bus *bus, u32 res, u32 res_ex)
EXPORT_SYMBOL_HDA(snd_hda_queue_unsol_event);
static void process_unsol_events(struct work_struct *work)
static int init_unsol_queue(struct hda_bus *bus)
static void snd_hda_codec_free(struct hda_codec *codec);
static int snd_hda_bus_free(struct hda_bus *bus)
static int snd_hda_bus_dev_free(struct snd_device *device)
static int snd_hda_bus_dev_register(struct snd_device *device)
#define snd_hda_bus_dev_register	NULL
int snd_hda_bus_new(struct snd_card *card,
const struct hda_bus_template *temp,
struct hda_bus **busp)
EXPORT_SYMBOL_HDA(snd_hda_bus_new);
#define is_generic_config(codec) \
(codec->modelname && !strcmp(codec->modelname, "generic"))
#define is_generic_config(codec)	0
#define HDA_MODREQ_MAX_COUNT	2
#define HDA_MODREQ_MAX_COUNT	0
static const struct hda_codec_preset *
find_codec_preset(struct hda_codec *codec)
static int get_codec_name(struct hda_codec *codec)
static void setup_fg_nodes(struct hda_codec *codec)
static int read_widget_caps(struct hda_codec *codec, hda_nid_t fg_node)
static int read_pin_defaults(struct hda_codec *codec)
static struct hda_pincfg *look_up_pincfg(struct hda_codec *codec,
struct snd_array *array,
hda_nid_t nid)
static void set_pincfg(struct hda_codec *codec, hda_nid_t nid,
unsigned int cfg)
int snd_hda_add_pincfg(struct hda_codec *codec, struct snd_array *list,
hda_nid_t nid, unsigned int cfg)
int snd_hda_codec_set_pincfg(struct hda_codec *codec,
hda_nid_t nid, unsigned int cfg)
EXPORT_SYMBOL_HDA(snd_hda_codec_set_pincfg);
unsigned int snd_hda_codec_get_pincfg(struct hda_codec *codec, hda_nid_t nid)
EXPORT_SYMBOL_HDA(snd_hda_codec_get_pincfg);
static void restore_pincfgs(struct hda_codec *codec)
void snd_hda_shutup_pins(struct hda_codec *codec)
EXPORT_SYMBOL_HDA(snd_hda_shutup_pins);
static void restore_shutup_pins(struct hda_codec *codec)
static void init_hda_cache(struct hda_cache_rec *cache,
unsigned int record_size);
static void free_hda_cache(struct hda_cache_rec *cache);
static void restore_init_pincfgs(struct hda_codec *codec)
struct hda_cvt_setup ;
static struct hda_cvt_setup *
get_hda_cvt_setup(struct hda_codec *codec, hda_nid_t nid)
static void snd_hda_codec_free(struct hda_codec *codec)
static void hda_set_power_state(struct hda_codec *codec, hda_nid_t fg,
unsigned int power_state);
int snd_hda_codec_new(struct hda_bus *bus,
unsigned int codec_addr,
struct hda_codec **codecp)
EXPORT_SYMBOL_HDA(snd_hda_codec_new);
int snd_hda_codec_configure(struct hda_codec *codec)
EXPORT_SYMBOL_HDA(snd_hda_codec_configure);
void snd_hda_codec_setup_stream(struct hda_codec *codec, hda_nid_t nid,
u32 stream_tag,
int channel_id, int format)
EXPORT_SYMBOL_HDA(snd_hda_codec_setup_stream);
static void really_cleanup_stream(struct hda_codec *codec,
struct hda_cvt_setup *q);
void __snd_hda_codec_cleanup_stream(struct hda_codec *codec, hda_nid_t nid,
int do_now)
EXPORT_SYMBOL_HDA(__snd_hda_codec_cleanup_stream);
static void really_cleanup_stream(struct hda_codec *codec,
struct hda_cvt_setup *q)
static void purify_inactive_streams(struct hda_codec *codec)
static void hda_cleanup_all_streams(struct hda_codec *codec)
#define HDA_HASH_KEY(nid, dir, idx) (u32)((nid) + ((idx) << 16) + ((dir) << 24))
#define HDA_HASH_PINCAP_KEY(nid) (u32)((nid) + (0x02 << 24))
#define HDA_HASH_PARPCM_KEY(nid) (u32)((nid) + (0x03 << 24))
#define HDA_HASH_PARSTR_KEY(nid) (u32)((nid) + (0x04 << 24))
#define INFO_AMP_CAPS	(1<<0)
#define INFO_AMP_VOL(ch)	(1 << (1 + (ch)))
static void init_hda_cache(struct hda_cache_rec *cache,
unsigned int record_size)
static void free_hda_cache(struct hda_cache_rec *cache)
static struct hda_cache_head  *get_hash(struct hda_cache_rec *cache, u32 key)
static struct hda_cache_head  *get_alloc_hash(struct hda_cache_rec *cache,
u32 key)
static inline struct hda_amp_info *
get_alloc_amp_hash(struct hda_codec *codec, u32 key)
u32 query_amp_caps(struct hda_codec *codec, hda_nid_t nid, int direction)
EXPORT_SYMBOL_HDA(query_amp_caps);
int snd_hda_override_amp_caps(struct hda_codec *codec, hda_nid_t nid, int dir,
unsigned int caps)
EXPORT_SYMBOL_HDA(snd_hda_override_amp_caps);
static unsigned int
query_caps_hash(struct hda_codec *codec, hda_nid_t nid, u32 key,
unsigned int (*func)(struct hda_codec *, hda_nid_t))
static unsigned int read_pin_cap(struct hda_codec *codec, hda_nid_t nid)
u32 snd_hda_query_pin_caps(struct hda_codec *codec, hda_nid_t nid)
EXPORT_SYMBOL_HDA(snd_hda_query_pin_caps);
u32 snd_hda_pin_sense(struct hda_codec *codec, hda_nid_t nid)
EXPORT_SYMBOL_HDA(snd_hda_pin_sense);
int snd_hda_jack_detect(struct hda_codec *codec, hda_nid_t nid)
EXPORT_SYMBOL_HDA(snd_hda_jack_detect);
static unsigned int get_vol_mute(struct hda_codec *codec,
struct hda_amp_info *info, hda_nid_t nid,
int ch, int direction, int index)
static void put_vol_mute(struct hda_codec *codec, struct hda_amp_info *info,
hda_nid_t nid, int ch, int direction, int index,
int val)
int snd_hda_codec_amp_read(struct hda_codec *codec, hda_nid_t nid, int ch,
int direction, int index)
EXPORT_SYMBOL_HDA(snd_hda_codec_amp_read);
int snd_hda_codec_amp_update(struct hda_codec *codec, hda_nid_t nid, int ch,
int direction, int idx, int mask, int val)
EXPORT_SYMBOL_HDA(snd_hda_codec_amp_update);
int snd_hda_codec_amp_stereo(struct hda_codec *codec, hda_nid_t nid,
int direction, int idx, int mask, int val)
EXPORT_SYMBOL_HDA(snd_hda_codec_amp_stereo);
void snd_hda_codec_resume_amp(struct hda_codec *codec)
EXPORT_SYMBOL_HDA(snd_hda_codec_resume_amp);
static u32 get_amp_max_value(struct hda_codec *codec, hda_nid_t nid, int dir,
unsigned int ofs)
int snd_hda_mixer_amp_volume_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL_HDA(snd_hda_mixer_amp_volume_info);
static inline unsigned int
read_amp_value(struct hda_codec *codec, hda_nid_t nid,
int ch, int dir, int idx, unsigned int ofs)
static inline int
update_amp_value(struct hda_codec *codec, hda_nid_t nid,
int ch, int dir, int idx, unsigned int ofs,
unsigned int val)
int snd_hda_mixer_amp_volume_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_HDA(snd_hda_mixer_amp_volume_get);
int snd_hda_mixer_amp_volume_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_HDA(snd_hda_mixer_amp_volume_put);
int snd_hda_mixer_amp_tlv(struct snd_kcontrol *kcontrol, int op_flag,
unsigned int size, unsigned int __user *_tlv)
EXPORT_SYMBOL_HDA(snd_hda_mixer_amp_tlv);
void snd_hda_set_vmaster_tlv(struct hda_codec *codec, hda_nid_t nid, int dir,
unsigned int *tlv)
EXPORT_SYMBOL_HDA(snd_hda_set_vmaster_tlv);
static struct snd_kcontrol *
_snd_hda_find_mixer_ctl(struct hda_codec *codec,
const char *name, int idx)
struct snd_kcontrol *snd_hda_find_mixer_ctl(struct hda_codec *codec,
const char *name)
EXPORT_SYMBOL_HDA(snd_hda_find_mixer_ctl);
static int find_empty_mixer_ctl_idx(struct hda_codec *codec, const char *name)
int snd_hda_ctl_add(struct hda_codec *codec, hda_nid_t nid,
struct snd_kcontrol *kctl)
EXPORT_SYMBOL_HDA(snd_hda_ctl_add);
int snd_hda_add_nid(struct hda_codec *codec, struct snd_kcontrol *kctl,
unsigned int index, hda_nid_t nid)
EXPORT_SYMBOL_HDA(snd_hda_add_nid);
void snd_hda_ctls_clear(struct hda_codec *codec)
static int hda_lock_devices(struct snd_card *card)
static void hda_unlock_devices(struct snd_card *card)
int snd_hda_codec_reset(struct hda_codec *codec)
int snd_hda_add_vmaster(struct hda_codec *codec, char *name,
unsigned int *tlv, const char * const *slaves)
EXPORT_SYMBOL_HDA(snd_hda_add_vmaster);
int snd_hda_mixer_amp_switch_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL_HDA(snd_hda_mixer_amp_switch_info);
int snd_hda_mixer_amp_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_HDA(snd_hda_mixer_amp_switch_get);
int snd_hda_mixer_amp_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_HDA(snd_hda_mixer_amp_switch_put);
int snd_hda_mixer_amp_switch_put_beep(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_HDA(snd_hda_mixer_amp_switch_put_beep);
#define AMP_VAL_IDX_SHIFT	19
#define AMP_VAL_IDX_MASK	(0x0f<<19)
int snd_hda_mixer_bind_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_HDA(snd_hda_mixer_bind_switch_get);
int snd_hda_mixer_bind_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_HDA(snd_hda_mixer_bind_switch_put);
int snd_hda_mixer_bind_ctls_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL_HDA(snd_hda_mixer_bind_ctls_info);
int snd_hda_mixer_bind_ctls_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_HDA(snd_hda_mixer_bind_ctls_get);
int snd_hda_mixer_bind_ctls_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
EXPORT_SYMBOL_HDA(snd_hda_mixer_bind_ctls_put);
int snd_hda_mixer_bind_tlv(struct snd_kcontrol *kcontrol, int op_flag,
unsigned int size, unsigned int __user *tlv)
EXPORT_SYMBOL_HDA(snd_hda_mixer_bind_tlv);
struct hda_ctl_ops snd_hda_bind_vol = ;
EXPORT_SYMBOL_HDA(snd_hda_bind_vol);
struct hda_ctl_ops snd_hda_bind_sw = ;
EXPORT_SYMBOL_HDA(snd_hda_bind_sw);
static int snd_hda_spdif_mask_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hda_spdif_cmask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hda_spdif_pmask_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hda_spdif_default_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static unsigned short convert_from_spdif_status(unsigned int sbits)
static unsigned int convert_to_spdif_status(unsigned short val)
static void set_dig_out(struct hda_codec *codec, hda_nid_t nid,
int verb, int val)
static inline void set_dig_out_convert(struct hda_codec *codec, hda_nid_t nid,
int dig1, int dig2)
static int snd_hda_spdif_default_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define snd_hda_spdif_out_switch_info	snd_ctl_boolean_mono_info
static int snd_hda_spdif_out_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hda_spdif_out_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new dig_mixes[] = ;
int snd_hda_create_spdif_out_ctls(struct hda_codec *codec, hda_nid_t nid)
EXPORT_SYMBOL_HDA(snd_hda_create_spdif_out_ctls);
static int spdif_share_sw_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int spdif_share_sw_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new spdif_share_sw = ;
int snd_hda_create_spdif_share_sw(struct hda_codec *codec,
struct hda_multi_out *mout)
EXPORT_SYMBOL_HDA(snd_hda_create_spdif_share_sw);
#define snd_hda_spdif_in_switch_info	snd_hda_spdif_out_switch_info
static int snd_hda_spdif_in_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hda_spdif_in_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hda_spdif_in_status_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new dig_in_ctls[] = ;
int snd_hda_create_spdif_in_ctls(struct hda_codec *codec, hda_nid_t nid)
EXPORT_SYMBOL_HDA(snd_hda_create_spdif_in_ctls);
#define build_cmd_cache_key(nid, verb)	((verb << 8) | nid)
#define get_cmd_cache_nid(key)		((key) & 0xff)
#define get_cmd_cache_cmd(key)		(((key) >> 8) & 0xffff)
int snd_hda_codec_write_cache(struct hda_codec *codec, hda_nid_t nid,
int direct, unsigned int verb, unsigned int parm)
EXPORT_SYMBOL_HDA(snd_hda_codec_write_cache);
int snd_hda_codec_update_cache(struct hda_codec *codec, hda_nid_t nid,
int direct, unsigned int verb, unsigned int parm)
EXPORT_SYMBOL_HDA(snd_hda_codec_update_cache);
void snd_hda_codec_resume_cache(struct hda_codec *codec)
EXPORT_SYMBOL_HDA(snd_hda_codec_resume_cache);
void snd_hda_sequence_write_cache(struct hda_codec *codec,
const struct hda_verb *seq)
EXPORT_SYMBOL_HDA(snd_hda_sequence_write_cache);
static void hda_set_power_state(struct hda_codec *codec, hda_nid_t fg,
unsigned int power_state)
static void hda_exec_init_verbs(struct hda_codec *codec)
static inline void hda_exec_init_verbs(struct hda_codec *codec)
static void hda_call_codec_suspend(struct hda_codec *codec)
static void hda_call_codec_resume(struct hda_codec *codec)
int snd_hda_build_controls(struct hda_bus *bus)
EXPORT_SYMBOL_HDA(snd_hda_build_controls);
int snd_hda_codec_build_controls(struct hda_codec *codec)
struct hda_rate_tbl ;
#define HDA_RATE(base, mult, div) \
(AC_FMT_BASE_##base##K | (((mult) - 1) << AC_FMT_MULT_SHIFT) | \
(((div) - 1) << AC_FMT_DIV_SHIFT))
static struct hda_rate_tbl rate_bits[] = ;
unsigned int snd_hda_calc_stream_format(unsigned int rate,
unsigned int channels,
unsigned int format,
unsigned int maxbps,
unsigned short spdif_ctls)
EXPORT_SYMBOL_HDA(snd_hda_calc_stream_format);
static unsigned int get_pcm_param(struct hda_codec *codec, hda_nid_t nid)
static unsigned int query_pcm_param(struct hda_codec *codec, hda_nid_t nid)
static unsigned int get_stream_param(struct hda_codec *codec, hda_nid_t nid)
static unsigned int query_stream_param(struct hda_codec *codec, hda_nid_t nid)
static int snd_hda_query_supported_pcm(struct hda_codec *codec, hda_nid_t nid,
u32 *ratesp, u64 *formatsp, unsigned int *bpsp)
int snd_hda_is_supported_format(struct hda_codec *codec, hda_nid_t nid,
unsigned int format)
EXPORT_SYMBOL_HDA(snd_hda_is_supported_format);
static int hda_pcm_default_open_close(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int hda_pcm_default_prepare(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
static int hda_pcm_default_cleanup(struct hda_pcm_stream *hinfo,
struct hda_codec *codec,
struct snd_pcm_substream *substream)
static int set_pcm_default_values(struct hda_codec *codec,
struct hda_pcm_stream *info)
int snd_hda_codec_prepare(struct hda_codec *codec,
struct hda_pcm_stream *hinfo,
unsigned int stream,
unsigned int format,
struct snd_pcm_substream *substream)
EXPORT_SYMBOL_HDA(snd_hda_codec_prepare);
void snd_hda_codec_cleanup(struct hda_codec *codec,
struct hda_pcm_stream *hinfo,
struct snd_pcm_substream *substream)
EXPORT_SYMBOL_HDA(snd_hda_codec_cleanup);
const char *snd_hda_pcm_type_name[HDA_PCM_NTYPES] = ;
static int get_empty_pcm_device(struct hda_bus *bus, int type)
static int snd_hda_attach_pcm(struct hda_codec *codec, struct hda_pcm *pcm)
int snd_hda_codec_build_pcms(struct hda_codec *codec)
int __devinit snd_hda_build_pcms(struct hda_bus *bus)
EXPORT_SYMBOL_HDA(snd_hda_build_pcms);
int snd_hda_check_board_config(struct hda_codec *codec,
int num_configs, const char * const *models,
const struct snd_pci_quirk *tbl)
EXPORT_SYMBOL_HDA(snd_hda_check_board_config);
int snd_hda_check_board_codec_sid_config(struct hda_codec *codec,
int num_configs, const char * const *models,
const struct snd_pci_quirk *tbl)
EXPORT_SYMBOL_HDA(snd_hda_check_board_codec_sid_config);
int snd_hda_add_new_ctls(struct hda_codec *codec,
const struct snd_kcontrol_new *knew)
EXPORT_SYMBOL_HDA(snd_hda_add_new_ctls);
static void hda_set_power_state(struct hda_codec *codec, hda_nid_t fg,
unsigned int power_state);
static void hda_power_work(struct work_struct *work)
static void hda_keep_power_on(struct hda_codec *codec)
void snd_hda_update_power_acct(struct hda_codec *codec)
void snd_hda_power_up(struct hda_codec *codec)
EXPORT_SYMBOL_HDA(snd_hda_power_up);
#define power_save(codec)	\
((codec)->bus->power_save ? *(codec)->bus->power_save : 0)
void snd_hda_power_down(struct hda_codec *codec)
EXPORT_SYMBOL_HDA(snd_hda_power_down);
int snd_hda_check_amp_list_power(struct hda_codec *codec,
struct hda_loopback_check *check,
hda_nid_t nid)
EXPORT_SYMBOL_HDA(snd_hda_check_amp_list_power);
int snd_hda_ch_mode_info(struct hda_codec *codec,
struct snd_ctl_elem_info *uinfo,
const struct hda_channel_mode *chmode,
int num_chmodes)
EXPORT_SYMBOL_HDA(snd_hda_ch_mode_info);
int snd_hda_ch_mode_get(struct hda_codec *codec,
struct snd_ctl_elem_value *ucontrol,
const struct hda_channel_mode *chmode,
int num_chmodes,
int max_channels)
EXPORT_SYMBOL_HDA(snd_hda_ch_mode_get);
int snd_hda_ch_mode_put(struct hda_codec *codec,
struct snd_ctl_elem_value *ucontrol,
const struct hda_channel_mode *chmode,
int num_chmodes,
int *max_channelsp)
EXPORT_SYMBOL_HDA(snd_hda_ch_mode_put);
int snd_hda_input_mux_info(const struct hda_input_mux *imux,
struct snd_ctl_elem_info *uinfo)
EXPORT_SYMBOL_HDA(snd_hda_input_mux_info);
int snd_hda_input_mux_put(struct hda_codec *codec,
const struct hda_input_mux *imux,
struct snd_ctl_elem_value *ucontrol,
hda_nid_t nid,
unsigned int *cur_val)
EXPORT_SYMBOL_HDA(snd_hda_input_mux_put);
static void setup_dig_out_stream(struct hda_codec *codec, hda_nid_t nid,
unsigned int stream_tag, unsigned int format)
static void cleanup_dig_out_stream(struct hda_codec *codec, hda_nid_t nid)
void snd_hda_bus_reboot_notify(struct hda_bus *bus)
EXPORT_SYMBOL_HDA(snd_hda_bus_reboot_notify);
int snd_hda_multi_out_dig_open(struct hda_codec *codec,
struct hda_multi_out *mout)
EXPORT_SYMBOL_HDA(snd_hda_multi_out_dig_open);
int snd_hda_multi_out_dig_prepare(struct hda_codec *codec,
struct hda_multi_out *mout,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
EXPORT_SYMBOL_HDA(snd_hda_multi_out_dig_prepare);
int snd_hda_multi_out_dig_cleanup(struct hda_codec *codec,
struct hda_multi_out *mout)
EXPORT_SYMBOL_HDA(snd_hda_multi_out_dig_cleanup);
int snd_hda_multi_out_dig_close(struct hda_codec *codec,
struct hda_multi_out *mout)
EXPORT_SYMBOL_HDA(snd_hda_multi_out_dig_close);
int snd_hda_multi_out_analog_open(struct hda_codec *codec,
struct hda_multi_out *mout,
struct snd_pcm_substream *substream,
struct hda_pcm_stream *hinfo)
EXPORT_SYMBOL_HDA(snd_hda_multi_out_analog_open);
int snd_hda_multi_out_analog_prepare(struct hda_codec *codec,
struct hda_multi_out *mout,
unsigned int stream_tag,
unsigned int format,
struct snd_pcm_substream *substream)
EXPORT_SYMBOL_HDA(snd_hda_multi_out_analog_prepare);
int snd_hda_multi_out_analog_cleanup(struct hda_codec *codec,
struct hda_multi_out *mout)
EXPORT_SYMBOL_HDA(snd_hda_multi_out_analog_cleanup);
static int is_in_nid_list(hda_nid_t nid, const hda_nid_t *list)
static void sort_pins_by_sequence(hda_nid_t *pins, short *sequences,
int num_pins)
static void add_auto_cfg_input_pin(struct auto_pin_cfg *cfg, hda_nid_t nid,
int type)
static void sort_autocfg_input_pins(struct auto_pin_cfg *cfg)
int snd_hda_parse_pin_def_config(struct hda_codec *codec,
struct auto_pin_cfg *cfg,
const hda_nid_t *ignore_nids)
EXPORT_SYMBOL_HDA(snd_hda_parse_pin_def_config);
int snd_hda_get_input_pin_attr(unsigned int def_conf)
EXPORT_SYMBOL_HDA(snd_hda_get_input_pin_attr);
const char *hda_get_input_pin_label(struct hda_codec *codec, hda_nid_t pin,
int check_location)
EXPORT_SYMBOL_HDA(hda_get_input_pin_label);
static int check_mic_location_need(struct hda_codec *codec,
const struct auto_pin_cfg *cfg,
int input)
const char *hda_get_autocfg_input_label(struct hda_codec *codec,
const struct auto_pin_cfg *cfg,
int input)
EXPORT_SYMBOL_HDA(hda_get_autocfg_input_label);
int snd_hda_add_imux_item(struct hda_input_mux *imux, const char *label,
int index, int *type_idx)
EXPORT_SYMBOL_HDA(snd_hda_add_imux_item);
int snd_hda_suspend(struct hda_bus *bus)
EXPORT_SYMBOL_HDA(snd_hda_suspend);
int snd_hda_resume(struct hda_bus *bus)
EXPORT_SYMBOL_HDA(snd_hda_resume);
void *snd_array_new(struct snd_array *array)
EXPORT_SYMBOL_HDA(snd_array_new);
void snd_array_free(struct snd_array *array)
EXPORT_SYMBOL_HDA(snd_array_free);
void snd_print_pcm_rates(int pcm, char *buf, int buflen)
EXPORT_SYMBOL_HDA(snd_print_pcm_rates);
void snd_print_pcm_bits(int pcm, char *buf, int buflen)
EXPORT_SYMBOL_HDA(snd_print_pcm_bits);
struct hda_jack_item ;
static const char *get_jack_default_name(struct hda_codec *codec, hda_nid_t nid,
int type)
static void hda_free_jack_priv(struct snd_jack *jack)
int snd_hda_input_jack_add(struct hda_codec *codec, hda_nid_t nid, int type,
const char *name)
EXPORT_SYMBOL_HDA(snd_hda_input_jack_add);
void snd_hda_input_jack_report(struct hda_codec *codec, hda_nid_t nid)
EXPORT_SYMBOL_HDA(snd_hda_input_jack_report);
void snd_hda_input_jack_free(struct hda_codec *codec)
EXPORT_SYMBOL_HDA(snd_hda_input_jack_free);
MODULE_DESCRIPTION("HDA codec core");
MODULE_LICENSE("GPL");
