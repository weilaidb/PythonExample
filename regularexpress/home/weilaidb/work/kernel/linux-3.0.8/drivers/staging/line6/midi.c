#define line6_rawmidi_substream_midi(substream) \
((struct snd_line6_midi *)((substream)->rmidi->private_data))
static int send_midi_async(struct usb_line6 *line6, unsigned char *data,
int length);
void line6_midi_receive(struct usb_line6 *line6, unsigned char *data,
int length)
static void line6_midi_transmit(struct snd_rawmidi_substream *substream)
static void midi_sent(struct urb *urb)
static int send_midi_async(struct usb_line6 *line6, unsigned char *data,
int length)
static int line6_midi_output_open(struct snd_rawmidi_substream *substream)
static int line6_midi_output_close(struct snd_rawmidi_substream *substream)
static void line6_midi_output_trigger(struct snd_rawmidi_substream *substream,
int up)
static void line6_midi_output_drain(struct snd_rawmidi_substream *substream)
static int line6_midi_input_open(struct snd_rawmidi_substream *substream)
static int line6_midi_input_close(struct snd_rawmidi_substream *substream)
static void line6_midi_input_trigger(struct snd_rawmidi_substream *substream,
int up)
static struct snd_rawmidi_ops line6_midi_output_ops = ;
static struct snd_rawmidi_ops line6_midi_input_ops = ;
static void line6_cleanup_midi(struct snd_rawmidi *rmidi)
static int snd_line6_new_midi(struct snd_line6_midi *line6midi)
static ssize_t midi_get_midi_mask_transmit(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t midi_set_midi_mask_transmit(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static ssize_t midi_get_midi_mask_receive(struct device *dev,
struct device_attribute *attr,
char *buf)
static ssize_t midi_set_midi_mask_receive(struct device *dev,
struct device_attribute *attr,
const char *buf, size_t count)
static DEVICE_ATTR(midi_mask_transmit, S_IWUSR | S_IRUGO,
midi_get_midi_mask_transmit, midi_set_midi_mask_transmit);
static DEVICE_ATTR(midi_mask_receive, S_IWUSR | S_IRUGO,
midi_get_midi_mask_receive, midi_set_midi_mask_receive);
static int snd_line6_midi_free(struct snd_device *device)
int line6_init_midi(struct usb_line6 *line6)
