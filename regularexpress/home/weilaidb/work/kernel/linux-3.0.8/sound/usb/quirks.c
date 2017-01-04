static int create_composite_quirk(struct snd_usb_audio *chip,
struct usb_interface *iface,
struct usb_driver *driver,
const struct snd_usb_audio_quirk *quirk)
static int ignore_interface_quirk(struct snd_usb_audio *chip,
struct usb_interface *iface,
struct usb_driver *driver,
const struct snd_usb_audio_quirk *quirk)
static int create_align_transfer_quirk(struct snd_usb_audio *chip,
struct usb_interface *iface,
struct usb_driver *driver,
const struct snd_usb_audio_quirk *quirk)
static int create_any_midi_quirk(struct snd_usb_audio *chip,
struct usb_interface *intf,
struct usb_driver *driver,
const struct snd_usb_audio_quirk *quirk)
static int create_standard_audio_quirk(struct snd_usb_audio *chip,
struct usb_interface *iface,
struct usb_driver *driver,
const struct snd_usb_audio_quirk *quirk)
static int create_fixed_stream_quirk(struct snd_usb_audio *chip,
struct usb_interface *iface,
struct usb_driver *driver,
const struct snd_usb_audio_quirk *quirk)
static int create_uaxx_quirk(struct snd_usb_audio *chip,
struct usb_interface *iface,
struct usb_driver *driver,
const struct snd_usb_audio_quirk *quirk)
static int create_standard_mixer_quirk(struct snd_usb_audio *chip,
struct usb_interface *iface,
struct usb_driver *driver,
const struct snd_usb_audio_quirk *quirk)
int snd_usb_create_quirk(struct snd_usb_audio *chip,
struct usb_interface *iface,
struct usb_driver *driver,
const struct snd_usb_audio_quirk *quirk)
#define EXTIGY_FIRMWARE_SIZE_OLD 794
#define EXTIGY_FIRMWARE_SIZE_NEW 483
static int snd_usb_extigy_boot_quirk(struct usb_device *dev, struct usb_interface *intf)
static int snd_usb_audigy2nx_boot_quirk(struct usb_device *dev)
static int snd_usb_cm106_write_int_reg(struct usb_device *dev, int reg, u16 value)
static int snd_usb_cm106_boot_quirk(struct usb_device *dev)
static int snd_usb_cm6206_boot_quirk(struct usb_device *dev)
static int snd_usb_accessmusic_boot_quirk(struct usb_device *dev)
static int snd_usb_nativeinstruments_boot_quirk(struct usb_device *dev)
#define AUDIOPHILE_SET			0x01
#define AUDIOPHILE_SET_DTS              0x02
#define AUDIOPHILE_SET_96K              0x04
#define AUDIOPHILE_SET_24B		0x08
#define AUDIOPHILE_SET_DI		0x10
#define AUDIOPHILE_SET_MASK		0x1F
#define AUDIOPHILE_SET_24B_48K_DI	0x19
#define AUDIOPHILE_SET_24B_48K_NOTDI	0x09
#define AUDIOPHILE_SET_16B_48K_DI	0x11
#define AUDIOPHILE_SET_16B_48K_NOTDI	0x01
static int audiophile_skip_setting_quirk(struct snd_usb_audio *chip,
int iface,
int altno)
int snd_usb_apply_interface_quirk(struct snd_usb_audio *chip,
int iface,
int altno)
int snd_usb_apply_boot_quirk(struct usb_device *dev,
struct usb_interface *intf,
const struct snd_usb_audio_quirk *quirk)
int snd_usb_is_big_endian_format(struct snd_usb_audio *chip, struct audioformat *fp)
enum ;
static void set_format_emu_quirk(struct snd_usb_substream *subs,
struct audioformat *fmt)
void snd_usb_set_format_quirk(struct snd_usb_substream *subs,
struct audioformat *fmt)
