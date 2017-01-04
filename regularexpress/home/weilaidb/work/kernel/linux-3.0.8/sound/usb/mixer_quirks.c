extern struct snd_kcontrol_new *snd_usb_feature_unit_ctl;
static const struct rc_config  rc_configs[] = ;
static void snd_usb_soundblaster_remote_complete(struct urb *urb)
static long snd_usb_sbrc_hwdep_read(struct snd_hwdep *hw, char __user *buf,
long count, loff_t *offset)
static unsigned int snd_usb_sbrc_hwdep_poll(struct snd_hwdep *hw, struct file *file,
poll_table *wait)
static int snd_usb_soundblaster_remote_init(struct usb_mixer_interface *mixer)
#define snd_audigy2nx_led_info		snd_ctl_boolean_mono_info
static int snd_audigy2nx_led_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_audigy2nx_led_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_audigy2nx_controls[] = ;
static int snd_audigy2nx_controls_create(struct usb_mixer_interface *mixer)
static void snd_audigy2nx_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static int snd_xonar_u1_switch_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_xonar_u1_switch_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_xonar_u1_output_switch = ;
static int snd_xonar_u1_controls_create(struct usb_mixer_interface *mixer)
#define _MAKE_NI_CONTROL(bRequest,wIndex) ((bRequest) << 16 | (wIndex))
static int snd_nativeinstruments_control_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_nativeinstruments_control_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_nativeinstruments_ta6_mixers[] = ;
static struct snd_kcontrol_new snd_nativeinstruments_ta10_mixers[] = ;
static int snd_nativeinstruments_create_mixer(struct usb_mixer_interface *mixer,
const struct snd_kcontrol_new *kc,
unsigned int count)
static void usb_mixer_elem_free(struct snd_kcontrol *kctl)
static int snd_maudio_ftu_create_ctl(struct usb_mixer_interface *mixer,
int in, int out, const char *name)
static int snd_maudio_ftu_create_mixer(struct usb_mixer_interface *mixer)
void snd_emuusb_set_samplerate(struct snd_usb_audio *chip,
unsigned char samplerate_id)
int snd_usb_mixer_apply_create_quirk(struct usb_mixer_interface *mixer)
void snd_usb_mixer_rc_memory_change(struct usb_mixer_interface *mixer,
int unitid)
