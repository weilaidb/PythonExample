static int toneport_send_cmd(struct usb_device *usbdev, int cmd1, int cmd2);
#define TONEPORT_PCM_DELAY 1
static struct snd_ratden toneport_ratden = ;
static struct line6_pcm_properties toneport_pcm_properties = ;
static int led_red = 0x00;
static int led_green = 0x26;
struct ToneportSourceInfo ;
static const struct ToneportSourceInfo toneport_source_info[] = ;
static bool toneport_has_led(short product)
static void toneport_update_led(struct device *dev)
static ssize_t toneport_set_led_red(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t toneport_set_led_green(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(led_red, S_IWUSR | S_IRUGO, line6_nop_read,
toneport_set_led_red);
static DEVICE_ATTR(led_green, S_IWUSR | S_IRUGO, line6_nop_read,
toneport_set_led_green);
static int toneport_send_cmd(struct usb_device *usbdev, int cmd1, int cmd2)
static int snd_toneport_monitor_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_toneport_monitor_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_toneport_monitor_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_toneport_source_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_toneport_source_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_toneport_source_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void toneport_start_pcm(unsigned long arg)
static struct snd_kcontrol_new toneport_control_monitor = ;
static struct snd_kcontrol_new toneport_control_source = ;
static void toneport_destruct(struct usb_interface *interface)
static void toneport_setup(struct usb_line6_toneport *toneport)
static int toneport_try_init(struct usb_interface *interface,
struct usb_line6_toneport *toneport)
int line6_toneport_init(struct usb_interface *interface,
struct usb_line6_toneport *toneport)
void line6_toneport_reset_resume(struct usb_line6_toneport *toneport)
void line6_toneport_disconnect(struct usb_interface *interface)
