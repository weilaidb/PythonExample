#define MAX_ID_ELEMS	256
struct usb_audio_term ;
struct usbmix_name_map;
struct mixer_build ;
enum ;
enum ;
static const struct usbmix_name_map *
find_map(struct mixer_build *state, int unitid, int control)
static int
check_mapped_name(const struct usbmix_name_map *p, char *buf, int buflen)
static inline int
check_ignored_ctl(const struct usbmix_name_map *p)
static inline void check_mapped_dB(const struct usbmix_name_map *p,
struct usb_mixer_elem_info *cval)
static int check_mapped_selector_name(struct mixer_build *state, int unitid,
int index, char *buf, int buflen)
static void *find_audio_control_unit(struct mixer_build *state, unsigned char unit)
static int snd_usb_copy_string_desc(struct mixer_build *state, int index, char *buf, int maxlen)
static int convert_signed_value(struct usb_mixer_elem_info *cval, int val)
static int convert_bytes_value(struct usb_mixer_elem_info *cval, int val)
static int get_relative_value(struct usb_mixer_elem_info *cval, int val)
static int get_abs_value(struct usb_mixer_elem_info *cval, int val)
static int get_ctl_value_v1(struct usb_mixer_elem_info *cval, int request, int validx, int *value_ret)
static int get_ctl_value_v2(struct usb_mixer_elem_info *cval, int request, int validx, int *value_ret)
static int get_ctl_value(struct usb_mixer_elem_info *cval, int request, int validx, int *value_ret)
static int get_cur_ctl_value(struct usb_mixer_elem_info *cval, int validx, int *value)
static inline int get_cur_mix_raw(struct usb_mixer_elem_info *cval,
int channel, int *value)
static int get_cur_mix_value(struct usb_mixer_elem_info *cval,
int channel, int index, int *value)
int snd_usb_mixer_set_ctl_value(struct usb_mixer_elem_info *cval,
int request, int validx, int value_set)
static int set_cur_ctl_value(struct usb_mixer_elem_info *cval, int validx, int value)
static int set_cur_mix_value(struct usb_mixer_elem_info *cval, int channel,
int index, int value)
static int mixer_vol_tlv(struct snd_kcontrol *kcontrol, int op_flag,
unsigned int size, unsigned int __user *_tlv)
static int parse_audio_unit(struct mixer_build *state, int unitid);
static int check_matrix_bitmap(unsigned char *bmap, int ich, int och, int num_outs)
int snd_usb_mixer_add_control(struct usb_mixer_interface *mixer,
struct snd_kcontrol *kctl)
static struct iterm_name_combo  iterm_names[] = ;
static int get_term_name(struct mixer_build *state, struct usb_audio_term *iterm,
unsigned char *name, int maxlen, int term_only)
static int check_input_term(struct mixer_build *state, int id, struct usb_audio_term *term)
struct usb_feature_control_info ;
static struct usb_feature_control_info audio_feature_info[] = ;
static void usb_mixer_elem_free(struct snd_kcontrol *kctl)
static int get_min_max(struct usb_mixer_elem_info *cval, int default_min)
static int mixer_ctl_feature_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int mixer_ctl_feature_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int mixer_ctl_feature_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new usb_feature_unit_ctl = ;
static struct snd_kcontrol_new usb_feature_unit_ctl_ro = ;
struct snd_kcontrol_new *snd_usb_feature_unit_ctl = &usb_feature_unit_ctl;
static size_t append_ctl_name(struct snd_kcontrol *kctl, const char *str)
static void build_feature_ctl(struct mixer_build *state, void *raw_desc,
unsigned int ctl_mask, int control,
struct usb_audio_term *iterm, int unitid,
int readonly_mask)
static int parse_audio_feature_unit(struct mixer_build *state, int unitid, void *_ftr)
static void build_mixer_unit_ctl(struct mixer_build *state,
struct uac_mixer_unit_descriptor *desc,
int in_pin, int in_ch, int unitid,
struct usb_audio_term *iterm)
static int parse_audio_mixer_unit(struct mixer_build *state, int unitid, void *raw_desc)
static int mixer_ctl_procunit_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int mixer_ctl_procunit_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new mixer_procunit_ctl = ;
struct procunit_value_info ;
struct procunit_info ;
static struct procunit_value_info updown_proc_info[] = ;
static struct procunit_value_info prologic_proc_info[] = ;
static struct procunit_value_info threed_enh_proc_info[] = ;
static struct procunit_value_info reverb_proc_info[] = ;
static struct procunit_value_info chorus_proc_info[] = ;
static struct procunit_value_info dcr_proc_info[] = ;
static struct procunit_info procunits[] = ;
static struct procunit_value_info clock_rate_xu_info[] = ;
static struct procunit_value_info clock_source_xu_info[] = ;
static struct procunit_value_info spdif_format_xu_info[] = ;
static struct procunit_value_info soft_limit_xu_info[] = ;
static struct procunit_info extunits[] = ;
static int build_audio_procunit(struct mixer_build *state, int unitid, void *raw_desc, struct procunit_info *list, char *name)
static int parse_audio_processing_unit(struct mixer_build *state, int unitid, void *raw_desc)
static int parse_audio_extension_unit(struct mixer_build *state, int unitid, void *raw_desc)
static int mixer_ctl_selector_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int mixer_ctl_selector_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int mixer_ctl_selector_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new mixer_selectunit_ctl = ;
static void usb_mixer_selector_elem_free(struct snd_kcontrol *kctl)
static int parse_audio_selector_unit(struct mixer_build *state, int unitid, void *raw_desc)
static int parse_audio_unit(struct mixer_build *state, int unitid)
static void snd_usb_mixer_free(struct usb_mixer_interface *mixer)
static int snd_usb_mixer_dev_free(struct snd_device *device)
static int snd_usb_mixer_controls(struct usb_mixer_interface *mixer)
void snd_usb_mixer_notify_id(struct usb_mixer_interface *mixer, int unitid)
static void snd_usb_mixer_dump_cval(struct snd_info_buffer *buffer,
int unitid,
struct usb_mixer_elem_info *cval)
static void snd_usb_mixer_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_usb_mixer_interrupt_v2(struct usb_mixer_interface *mixer,
int attribute, int value, int index)
static void snd_usb_mixer_interrupt(struct urb *urb)
void snd_usb_mixer_inactivate(struct usb_mixer_interface *mixer)
int snd_usb_mixer_activate(struct usb_mixer_interface *mixer)
static int snd_usb_mixer_status_create(struct usb_mixer_interface *mixer)
int snd_usb_create_mixer(struct snd_usb_audio *chip, int ctrlif,
int ignore_error)
void snd_usb_mixer_disconnect(struct list_head *p)
