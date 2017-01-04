static struct snd_line6_pcm *dev2pcm(struct device *dev)
static ssize_t pcm_get_impulse_volume(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pcm_set_impulse_volume(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t pcm_get_impulse_period(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pcm_set_impulse_period(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(impulse_volume, S_IWUSR | S_IRUGO, pcm_get_impulse_volume,
pcm_set_impulse_volume);
static DEVICE_ATTR(impulse_period, S_IWUSR | S_IRUGO, pcm_get_impulse_period,
pcm_set_impulse_period);
int line6_pcm_start(struct snd_line6_pcm *line6pcm, int channels)
int line6_pcm_stop(struct snd_line6_pcm *line6pcm, int channels)
int snd_line6_trigger(struct snd_pcm_substream *substream, int cmd)
static int snd_line6_control_playback_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_line6_control_playback_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_line6_control_playback_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new line6_control_playback = ;
static void line6_cleanup_pcm(struct snd_pcm *pcm)
static int snd_line6_new_pcm(struct snd_line6_pcm *line6pcm)
static int snd_line6_pcm_free(struct snd_device *device)
static void pcm_disconnect_substream(struct snd_pcm_substream *substream)
void line6_pcm_disconnect(struct snd_line6_pcm *line6pcm)
int line6_init_pcm(struct usb_line6 *line6,
struct line6_pcm_properties *properties)
int snd_line6_prepare(struct snd_pcm_substream *substream)
