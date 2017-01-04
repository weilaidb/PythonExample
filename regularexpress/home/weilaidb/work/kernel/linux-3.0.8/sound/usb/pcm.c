static snd_pcm_uframes_t snd_usb_pcm_pointer(struct snd_pcm_substream *substream)
static struct audioformat *find_format(struct snd_usb_substream *subs, unsigned int format,
unsigned int rate, unsigned int channels)
static int init_pitch_v1(struct snd_usb_audio *chip, int iface,
struct usb_host_interface *alts,
struct audioformat *fmt)
static int init_pitch_v2(struct snd_usb_audio *chip, int iface,
struct usb_host_interface *alts,
struct audioformat *fmt)
int snd_usb_init_pitch(struct snd_usb_audio *chip, int iface,
struct usb_host_interface *alts,
struct audioformat *fmt)
static int set_format(struct snd_usb_substream *subs, struct audioformat *fmt)
static int snd_usb_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_usb_hw_free(struct snd_pcm_substream *substream)
static int snd_usb_pcm_prepare(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_usb_hardware =
;
static int hw_check_valid_format(struct snd_usb_substream *subs,
struct snd_pcm_hw_params *params,
struct audioformat *fp)
static int hw_rule_rate(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int hw_rule_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int hw_rule_format(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int hw_rule_period_time(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_usb_pcm_check_knot(struct snd_pcm_runtime *runtime,
struct snd_usb_substream *subs)
static int setup_hw_info(struct snd_pcm_runtime *runtime, struct snd_usb_substream *subs)
static int snd_usb_pcm_open(struct snd_pcm_substream *substream, int direction)
static int snd_usb_pcm_close(struct snd_pcm_substream *substream, int direction)
static int snd_usb_playback_open(struct snd_pcm_substream *substream)
static int snd_usb_playback_close(struct snd_pcm_substream *substream)
static int snd_usb_capture_open(struct snd_pcm_substream *substream)
static int snd_usb_capture_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_usb_playback_ops = ;
static struct snd_pcm_ops snd_usb_capture_ops = ;
void snd_usb_set_pcm_ops(struct snd_pcm *pcm, int stream)
