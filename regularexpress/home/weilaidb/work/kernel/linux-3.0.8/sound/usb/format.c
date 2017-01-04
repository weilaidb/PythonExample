static u64 parse_audio_format_i_type(struct snd_usb_audio *chip,
struct audioformat *fp,
int format, void *_fmt,
int protocol)
static int parse_audio_format_rates_v1(struct snd_usb_audio *chip, struct audioformat *fp,
unsigned char *fmt, int offset)
static int parse_uac2_sample_rate_range(struct audioformat *fp, int nr_triplets,
const unsigned char *data)
static int parse_audio_format_rates_v2(struct snd_usb_audio *chip,
struct audioformat *fp)
static int parse_audio_format_i(struct snd_usb_audio *chip,
struct audioformat *fp, int format,
struct uac_format_type_i_continuous_descriptor *fmt,
struct usb_host_interface *iface)
static int parse_audio_format_ii(struct snd_usb_audio *chip,
struct audioformat *fp,
int format, void *_fmt,
struct usb_host_interface *iface)
int snd_usb_parse_audio_format(struct snd_usb_audio *chip, struct audioformat *fp,
int format, struct uac_format_type_i_continuous_descriptor *fmt,
int stream, struct usb_host_interface *iface)
