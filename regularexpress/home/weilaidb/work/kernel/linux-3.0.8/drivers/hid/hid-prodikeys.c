#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#define pk_debug(format, arg...) \
pr_debug("hid-prodikeys: " format "\n" , ## arg)
#define pk_error(format, arg...) \
pr_err("hid-prodikeys: " format "\n" , ## arg)
struct pcmidi_snd;
struct pk_device ;
struct pcmidi_snd;
struct pcmidi_sustain ;
#define PCMIDI_SUSTAINED_MAX	32
struct pcmidi_snd ;
#define PK_QUIRK_NOGET	0x00010000
#define PCMIDI_MIDDLE_C 60
#define PCMIDI_CHANNEL_MIN 0
#define PCMIDI_CHANNEL_MAX 15
#define PCMIDI_OCTAVE_MIN (-2)
#define PCMIDI_OCTAVE_MAX 2
#define PCMIDI_SUSTAIN_MIN 0
#define PCMIDI_SUSTAIN_MAX 5000
static const char shortname[] = "PC-MIDI";
static const char longname[] = "Prodikeys PC-MIDI Keyboard";
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
module_param_array(id, charp, NULL, 0444);
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for the PC-MIDI virtual audio driver");
MODULE_PARM_DESC(id, "ID string for the PC-MIDI virtual audio driver");
MODULE_PARM_DESC(enable, "Enable for the PC-MIDI virtual audio driver");
static ssize_t show_channel(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_channel(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(channel, S_IRUGO | S_IWUSR | S_IWGRP , show_channel,
store_channel);
static struct device_attribute *sysfs_device_attr_channel = ;
static ssize_t show_sustain(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_sustain(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(sustain, S_IRUGO | S_IWUSR | S_IWGRP, show_sustain,
store_sustain);
static struct device_attribute *sysfs_device_attr_sustain = ;
static ssize_t show_octave(struct device *dev,
struct device_attribute *attr, char *buf)
static ssize_t store_octave(struct device *dev,
struct device_attribute *attr, const char *buf, size_t count)
static DEVICE_ATTR(octave, S_IRUGO | S_IWUSR | S_IWGRP, show_octave,
store_octave);
static struct device_attribute *sysfs_device_attr_octave = ;
static void pcmidi_send_note(struct pcmidi_snd *pm,
unsigned char status, unsigned char note, unsigned char velocity)
void pcmidi_sustained_note_release(unsigned long data)
void init_sustain_timers(struct pcmidi_snd *pm)
void stop_sustain_timers(struct pcmidi_snd *pm)
static int pcmidi_get_output_report(struct pcmidi_snd *pm)
static void pcmidi_submit_output_report(struct pcmidi_snd *pm, int state)
static int pcmidi_handle_report1(struct pcmidi_snd *pm, u8 *data)
static int pcmidi_handle_report3(struct pcmidi_snd *pm, u8 *data, int size)
static int pcmidi_handle_report4(struct pcmidi_snd *pm, u8 *data)
int pcmidi_handle_report(
struct pcmidi_snd *pm, unsigned report_id, u8 *data, int size)
void pcmidi_setup_extra_keys(struct pcmidi_snd *pm, struct input_dev *input)
static int pcmidi_set_operational(struct pcmidi_snd *pm)
static int pcmidi_snd_free(struct snd_device *dev)
static int pcmidi_in_open(struct snd_rawmidi_substream *substream)
static int pcmidi_in_close(struct snd_rawmidi_substream *substream)
static void pcmidi_in_trigger(struct snd_rawmidi_substream *substream, int up)
static struct snd_rawmidi_ops pcmidi_in_ops = ;
int pcmidi_snd_initialise(struct pcmidi_snd *pm)
int pcmidi_snd_terminate(struct pcmidi_snd *pm)
static __u8 *pk_report_fixup(struct hid_device *hdev, __u8 *rdesc,
unsigned int *rsize)
static int pk_input_mapping(struct hid_device *hdev, struct hid_input *hi,
struct hid_field *field, struct hid_usage *usage,
unsigned long **bit, int *max)
static int pk_raw_event(struct hid_device *hdev, struct hid_report *report,
u8 *data, int size)
static int pk_probe(struct hid_device *hdev, const struct hid_device_id *id)
static void pk_remove(struct hid_device *hdev)
static const struct hid_device_id pk_devices[] = ;
MODULE_DEVICE_TABLE(hid, pk_devices);
static struct hid_driver pk_driver = ;
static int pk_init(void)
static void pk_exit(void)
module_init(pk_init);
module_exit(pk_exit);
MODULE_LICENSE("GPL");
