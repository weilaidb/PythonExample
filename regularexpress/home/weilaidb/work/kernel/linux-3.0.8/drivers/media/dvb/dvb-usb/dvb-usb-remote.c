static unsigned int
legacy_dvb_usb_get_keymap_index(const struct input_keymap_entry *ke,
struct rc_map_table *keymap,
unsigned int keymap_size)
static int legacy_dvb_usb_getkeycode(struct input_dev *dev,
struct input_keymap_entry *ke)
static int legacy_dvb_usb_setkeycode(struct input_dev *dev,
const struct input_keymap_entry *ke,
unsigned int *old_keycode)
static void legacy_dvb_usb_read_remote_control(struct work_struct *work)
static int legacy_dvb_usb_remote_init(struct dvb_usb_device *d)
static void dvb_usb_read_remote_control(struct work_struct *work)
static int rc_core_dvb_usb_remote_init(struct dvb_usb_device *d)
int dvb_usb_remote_init(struct dvb_usb_device *d)
int dvb_usb_remote_exit(struct dvb_usb_device *d)
#define DVB_USB_RC_NEC_EMPTY           0x00
#define DVB_USB_RC_NEC_KEY_PRESSED     0x01
#define DVB_USB_RC_NEC_KEY_REPEATED    0x02
int dvb_usb_nec_rc_key_to_event(struct dvb_usb_device *d,
u8 keybuf[5], u32 *event, int *state)
EXPORT_SYMBOL(dvb_usb_nec_rc_key_to_event);
