#define POD_SYSEX_CODE 3
#define POD_BYTES_PER_FRAME 6
enum ;
enum ;
enum ;
enum ;
static struct snd_ratden pod_ratden = ;
static struct line6_pcm_properties pod_pcm_properties = ;
static const char pod_request_channel[] = ;
static const char pod_version_header[] = ;
static void pod_startup2(unsigned long data);
static void pod_startup3(struct usb_line6_pod *pod);
static void pod_startup4(struct usb_line6_pod *pod);
static void pod_mark_batch_all_dirty(struct usb_line6_pod *pod)
static char *pod_alloc_sysex_buffer(struct usb_line6_pod *pod, int code,
int size)
static void pod_dump(struct usb_line6_pod *pod, const unsigned char *data)
static void pod_store_parameter(struct usb_line6_pod *pod, int param, int value)
static void pod_save_button_pressed(struct usb_line6_pod *pod, int type,
int index)
void line6_pod_process_message(struct usb_line6_pod *pod)
void line6_pod_midi_postprocess(struct usb_line6_pod *pod, unsigned char *data,
int length)
static void pod_send_channel(struct usb_line6_pod *pod, int value)
void line6_pod_transmit_parameter(struct usb_line6_pod *pod, int param,
int value)
static int pod_resolve(const char *buf, short block0, short block1,
unsigned char *location)
static ssize_t pod_send_store_command(struct device *dev, const char *buf,
size_t count, short block0, short block1)
static ssize_t pod_send_retrieve_command(struct device *dev, const char *buf,
size_t count, short block0,
short block1)
static ssize_t get_name_generic(struct usb_line6_pod *pod, const char *str,
char *buf)
static ssize_t pod_get_channel(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pod_set_channel(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t pod_get_name(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t pod_get_name_buf(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pod_get_dump(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t pod_set_dump(struct device *dev, struct device_attribute *attr,
const char *buf, size_t count)
static bool pod_is_tuner(int code)
static int pod_get_system_param_int(struct usb_line6_pod *pod, int *value,
int code, struct ValueWait *param, int sign)
static ssize_t pod_get_system_param_string(struct usb_line6_pod *pod, char *buf,
int code, struct ValueWait *param,
int sign)
static int pod_set_system_param_int(struct usb_line6_pod *pod, int value,
int code)
static ssize_t pod_set_system_param_string(struct usb_line6_pod *pod,
const char *buf, int count, int code,
unsigned short mask)
static ssize_t pod_get_dump_buf(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pod_set_dump_buf(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t pod_set_finish(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t pod_set_store_channel(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t pod_set_store_effects_setup(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t pod_set_store_amp_setup(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t pod_set_retrieve_channel(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t pod_set_retrieve_effects_setup(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t pod_set_retrieve_amp_setup(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t pod_get_dirty(struct device *dev, struct device_attribute *attr,
char *buf)
static ssize_t pod_get_midi_postprocess(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t pod_set_midi_postprocess(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t pod_get_serial_number(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pod_get_firmware_version(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t pod_get_device_id(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t pod_wait_for_clip(struct device *dev,
struct device_attribute *attr, char *buf)
static void pod_startup1(struct usb_line6_pod *pod)
static void pod_startup2(unsigned long data)
static void pod_startup3(struct usb_line6_pod *pod)
static void pod_startup4(struct usb_line6_pod *pod)
static void pod_startup5(struct work_struct *work)
#define POD_GET_SYSTEM_PARAM(code, sign) \
static ssize_t pod_get_ ## code(struct device *dev, \
struct device_attribute *attr, char *buf) \
#define POD_GET_SET_SYSTEM_PARAM(code, mask, sign) \
POD_GET_SYSTEM_PARAM(code, sign) \
static ssize_t pod_set_ ## code(struct device *dev, \
struct device_attribute *attr, \
const char *buf, size_t count) \
POD_GET_SET_SYSTEM_PARAM(monitor_level, 0xffff, 0);
POD_GET_SET_SYSTEM_PARAM(routing, 0x0003, 0);
POD_GET_SET_SYSTEM_PARAM(tuner_mute, 0x0001, 0);
POD_GET_SET_SYSTEM_PARAM(tuner_freq, 0xffff, 0);
POD_GET_SYSTEM_PARAM(tuner_note, 1);
POD_GET_SYSTEM_PARAM(tuner_pitch, 1);
#undef GET_SET_SYSTEM_PARAM
#undef GET_SYSTEM_PARAM
static DEVICE_ATTR(channel, S_IWUSR | S_IRUGO, pod_get_channel,
pod_set_channel);
static DEVICE_ATTR(clip, S_IRUGO, pod_wait_for_clip, line6_nop_write);
static DEVICE_ATTR(device_id, S_IRUGO, pod_get_device_id, line6_nop_write);
static DEVICE_ATTR(dirty, S_IRUGO, pod_get_dirty, line6_nop_write);
static DEVICE_ATTR(dump, S_IWUSR | S_IRUGO, pod_get_dump, pod_set_dump);
static DEVICE_ATTR(dump_buf, S_IWUSR | S_IRUGO, pod_get_dump_buf,
pod_set_dump_buf);
static DEVICE_ATTR(finish, S_IWUSR, line6_nop_read, pod_set_finish);
static DEVICE_ATTR(firmware_version, S_IRUGO, pod_get_firmware_version,
line6_nop_write);
static DEVICE_ATTR(midi_postprocess, S_IWUSR | S_IRUGO,
pod_get_midi_postprocess, pod_set_midi_postprocess);
static DEVICE_ATTR(monitor_level, S_IWUSR | S_IRUGO, pod_get_monitor_level,
pod_set_monitor_level);
static DEVICE_ATTR(name, S_IRUGO, pod_get_name, line6_nop_write);
static DEVICE_ATTR(name_buf, S_IRUGO, pod_get_name_buf, line6_nop_write);
static DEVICE_ATTR(retrieve_amp_setup, S_IWUSR, line6_nop_read,
pod_set_retrieve_amp_setup);
static DEVICE_ATTR(retrieve_channel, S_IWUSR, line6_nop_read,
pod_set_retrieve_channel);
static DEVICE_ATTR(retrieve_effects_setup, S_IWUSR, line6_nop_read,
pod_set_retrieve_effects_setup);
static DEVICE_ATTR(routing, S_IWUSR | S_IRUGO, pod_get_routing,
pod_set_routing);
static DEVICE_ATTR(serial_number, S_IRUGO, pod_get_serial_number,
line6_nop_write);
static DEVICE_ATTR(store_amp_setup, S_IWUSR, line6_nop_read,
pod_set_store_amp_setup);
static DEVICE_ATTR(store_channel, S_IWUSR, line6_nop_read,
pod_set_store_channel);
static DEVICE_ATTR(store_effects_setup, S_IWUSR, line6_nop_read,
pod_set_store_effects_setup);
static DEVICE_ATTR(tuner_freq, S_IWUSR | S_IRUGO, pod_get_tuner_freq,
pod_set_tuner_freq);
static DEVICE_ATTR(tuner_mute, S_IWUSR | S_IRUGO, pod_get_tuner_mute,
pod_set_tuner_mute);
static DEVICE_ATTR(tuner_note, S_IRUGO, pod_get_tuner_note, line6_nop_write);
static DEVICE_ATTR(tuner_pitch, S_IRUGO, pod_get_tuner_pitch, line6_nop_write);
static DEVICE_ATTR(raw, S_IWUSR, line6_nop_read, line6_set_raw);
static int snd_pod_control_monitor_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_pod_control_monitor_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_pod_control_monitor_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new pod_control_monitor = ;
static void pod_destruct(struct usb_interface *interface)
static int pod_create_files2(struct device *dev)
static int pod_try_init(struct usb_interface *interface,
struct usb_line6_pod *pod)
int line6_pod_init(struct usb_interface *interface, struct usb_line6_pod *pod)
void line6_pod_disconnect(struct usb_interface *interface)
