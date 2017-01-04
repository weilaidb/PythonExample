MODULE_AUTHOR("Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Midlevel RawMidi code for ALSA.");
MODULE_LICENSE("GPL");
static int midi_map[SNDRV_CARDS];
static int amidi_map[SNDRV_CARDS] = ;
module_param_array(midi_map, int, NULL, 0444);
MODULE_PARM_DESC(midi_map, "Raw MIDI device number assigned to 1st OSS device.");
module_param_array(amidi_map, int, NULL, 0444);
MODULE_PARM_DESC(amidi_map, "Raw MIDI device number assigned to 2nd OSS device.");
static int snd_rawmidi_free(struct snd_rawmidi *rawmidi);
static int snd_rawmidi_dev_free(struct snd_device *device);
static int snd_rawmidi_dev_register(struct snd_device *device);
static int snd_rawmidi_dev_disconnect(struct snd_device *device);
static LIST_HEAD(snd_rawmidi_devices);
static DEFINE_MUTEX(register_mutex);
static struct snd_rawmidi *snd_rawmidi_search(struct snd_card *card, int device)
static inline unsigned short snd_rawmidi_file_flags(struct file *file)
static inline int snd_rawmidi_ready(struct snd_rawmidi_substream *substream)
static inline int snd_rawmidi_ready_append(struct snd_rawmidi_substream *substream,
size_t count)
static void snd_rawmidi_input_event_tasklet(unsigned long data)
static void snd_rawmidi_output_trigger_tasklet(unsigned long data)
static int snd_rawmidi_runtime_create(struct snd_rawmidi_substream *substream)
static int snd_rawmidi_runtime_free(struct snd_rawmidi_substream *substream)
static inline void snd_rawmidi_output_trigger(struct snd_rawmidi_substream *substream,int up)
static void snd_rawmidi_input_trigger(struct snd_rawmidi_substream *substream, int up)
int snd_rawmidi_drop_output(struct snd_rawmidi_substream *substream)
int snd_rawmidi_drain_output(struct snd_rawmidi_substream *substream)
int snd_rawmidi_drain_input(struct snd_rawmidi_substream *substream)
static int assign_substream(struct snd_rawmidi *rmidi, int subdevice,
int stream, int mode,
struct snd_rawmidi_substream **sub_ret)
static int open_substream(struct snd_rawmidi *rmidi,
struct snd_rawmidi_substream *substream,
int mode)
static void close_substream(struct snd_rawmidi *rmidi,
struct snd_rawmidi_substream *substream,
int cleanup);
static int rawmidi_open_priv(struct snd_rawmidi *rmidi, int subdevice, int mode,
struct snd_rawmidi_file *rfile)
int snd_rawmidi_kernel_open(struct snd_card *card, int device, int subdevice,
int mode, struct snd_rawmidi_file * rfile)
static int snd_rawmidi_open(struct inode *inode, struct file *file)
static void close_substream(struct snd_rawmidi *rmidi,
struct snd_rawmidi_substream *substream,
int cleanup)
static void rawmidi_release_priv(struct snd_rawmidi_file *rfile)
int snd_rawmidi_kernel_release(struct snd_rawmidi_file *rfile)
static int snd_rawmidi_release(struct inode *inode, struct file *file)
static int snd_rawmidi_info(struct snd_rawmidi_substream *substream,
struct snd_rawmidi_info *info)
static int snd_rawmidi_info_user(struct snd_rawmidi_substream *substream,
struct snd_rawmidi_info __user * _info)
int snd_rawmidi_info_select(struct snd_card *card, struct snd_rawmidi_info *info)
static int snd_rawmidi_info_select_user(struct snd_card *card,
struct snd_rawmidi_info __user *_info)
int snd_rawmidi_output_params(struct snd_rawmidi_substream *substream,
struct snd_rawmidi_params * params)
int snd_rawmidi_input_params(struct snd_rawmidi_substream *substream,
struct snd_rawmidi_params * params)
static int snd_rawmidi_output_status(struct snd_rawmidi_substream *substream,
struct snd_rawmidi_status * status)
static int snd_rawmidi_input_status(struct snd_rawmidi_substream *substream,
struct snd_rawmidi_status * status)
static long snd_rawmidi_ioctl(struct file *file, unsigned int cmd, unsigned long arg)
static int snd_rawmidi_control_ioctl(struct snd_card *card,
struct snd_ctl_file *control,
unsigned int cmd,
unsigned long arg)
int snd_rawmidi_receive(struct snd_rawmidi_substream *substream,
const unsigned char *buffer, int count)
static long snd_rawmidi_kernel_read1(struct snd_rawmidi_substream *substream,
unsigned char __user *userbuf,
unsigned char *kernelbuf, long count)
long snd_rawmidi_kernel_read(struct snd_rawmidi_substream *substream,
unsigned char *buf, long count)
static ssize_t snd_rawmidi_read(struct file *file, char __user *buf, size_t count,
loff_t *offset)
int snd_rawmidi_transmit_empty(struct snd_rawmidi_substream *substream)
int snd_rawmidi_transmit_peek(struct snd_rawmidi_substream *substream,
unsigned char *buffer, int count)
int snd_rawmidi_transmit_ack(struct snd_rawmidi_substream *substream, int count)
int snd_rawmidi_transmit(struct snd_rawmidi_substream *substream,
unsigned char *buffer, int count)
static long snd_rawmidi_kernel_write1(struct snd_rawmidi_substream *substream,
const unsigned char __user *userbuf,
const unsigned char *kernelbuf,
long count)
long snd_rawmidi_kernel_write(struct snd_rawmidi_substream *substream,
const unsigned char *buf, long count)
static ssize_t snd_rawmidi_write(struct file *file, const char __user *buf,
size_t count, loff_t *offset)
static unsigned int snd_rawmidi_poll(struct file *file, poll_table * wait)
#define snd_rawmidi_ioctl_compat	NULL
static void snd_rawmidi_proc_info_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static const struct file_operations snd_rawmidi_f_ops =
;
static int snd_rawmidi_alloc_substreams(struct snd_rawmidi *rmidi,
struct snd_rawmidi_str *stream,
int direction,
int count)
int snd_rawmidi_new(struct snd_card *card, char *id, int device,
int output_count, int input_count,
struct snd_rawmidi ** rrawmidi)
static void snd_rawmidi_free_substreams(struct snd_rawmidi_str *stream)
static int snd_rawmidi_free(struct snd_rawmidi *rmidi)
static int snd_rawmidi_dev_free(struct snd_device *device)
#if defined(CONFIG_SND_SEQUENCER) || (defined(MODULE) && defined(CONFIG_SND_SEQUENCER_MODULE))
static void snd_rawmidi_dev_seq_free(struct snd_seq_device *device)
static int snd_rawmidi_dev_register(struct snd_device *device)
static int snd_rawmidi_dev_disconnect(struct snd_device *device)
void snd_rawmidi_set_ops(struct snd_rawmidi *rmidi, int stream,
struct snd_rawmidi_ops *ops)
static int __init alsa_rawmidi_init(void)
static void __exit alsa_rawmidi_exit(void)
module_init(alsa_rawmidi_init)
module_exit(alsa_rawmidi_exit)
EXPORT_SYMBOL(snd_rawmidi_output_params);
EXPORT_SYMBOL(snd_rawmidi_input_params);
EXPORT_SYMBOL(snd_rawmidi_drop_output);
EXPORT_SYMBOL(snd_rawmidi_drain_output);
EXPORT_SYMBOL(snd_rawmidi_drain_input);
EXPORT_SYMBOL(snd_rawmidi_receive);
EXPORT_SYMBOL(snd_rawmidi_transmit_empty);
EXPORT_SYMBOL(snd_rawmidi_transmit_peek);
EXPORT_SYMBOL(snd_rawmidi_transmit_ack);
EXPORT_SYMBOL(snd_rawmidi_transmit);
EXPORT_SYMBOL(snd_rawmidi_new);
EXPORT_SYMBOL(snd_rawmidi_set_ops);
EXPORT_SYMBOL(snd_rawmidi_info_select);
EXPORT_SYMBOL(snd_rawmidi_kernel_open);
EXPORT_SYMBOL(snd_rawmidi_kernel_release);
EXPORT_SYMBOL(snd_rawmidi_kernel_read);
EXPORT_SYMBOL(snd_rawmidi_kernel_write);
