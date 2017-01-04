static struct uac_clock_source_descriptor *
snd_usb_find_clock_source(struct usb_host_interface *ctrl_iface,
int clock_id)
static struct uac_clock_selector_descriptor *
snd_usb_find_clock_selector(struct usb_host_interface *ctrl_iface,
int clock_id)
static struct uac_clock_multiplier_descriptor *
snd_usb_find_clock_multiplier(struct usb_host_interface *ctrl_iface,
int clock_id)
static int uac_clock_selector_get_val(struct snd_usb_audio *chip, int selector_id)
static bool uac_clock_source_is_valid(struct snd_usb_audio *chip, int source_id)
static int __uac_clock_find_source(struct snd_usb_audio *chip,
int entity_id, unsigned long *visited)
int snd_usb_clock_find_source(struct snd_usb_audio *chip, int entity_id)
static int set_sample_rate_v1(struct snd_usb_audio *chip, int iface,
struct usb_host_interface *alts,
struct audioformat *fmt, int rate)
static int set_sample_rate_v2(struct snd_usb_audio *chip, int iface,
struct usb_host_interface *alts,
struct audioformat *fmt, int rate)
int snd_usb_init_sample_rate(struct snd_usb_audio *chip, int iface,
struct usb_host_interface *alts,
struct audioformat *fmt, int rate)
