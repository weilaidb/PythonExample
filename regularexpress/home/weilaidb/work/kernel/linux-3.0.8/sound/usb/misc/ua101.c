MODULE_DESCRIPTION("Edirol UA-101/1000 driver");
MODULE_AUTHOR("Clemens Ladisch <clemens@ladisch.de>");
MODULE_LICENSE("GPL v2");
MODULE_SUPPORTED_DEVICE("");
#define MIN_QUEUE_LENGTH	12
#define MAX_QUEUE_LENGTH	30
#define DEFAULT_QUEUE_LENGTH	21
#define MAX_PACKET_SIZE		672
#define MAX_MEMORY_BUFFERS	DIV_ROUND_UP(MAX_QUEUE_LENGTH, \
PAGE_SIZE / MAX_PACKET_SIZE)
static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static unsigned int queue_length = 21;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "card index");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "enable card");
module_param(queue_length, uint, 0644);
MODULE_PARM_DESC(queue_length, "USB queue length in microframes, "
__stringify(MIN_QUEUE_LENGTH)"-"__stringify(MAX_QUEUE_LENGTH));
enum ;
enum ;
struct ua101 ;
static DEFINE_MUTEX(devices_mutex);
static unsigned int devices_used;
static struct usb_driver ua101_driver;
static void abort_alsa_playback(struct ua101 *ua);
static void abort_alsa_capture(struct ua101 *ua);
static const char *usb_error_string(int err)
static void abort_usb_capture(struct ua101 *ua)
static void abort_usb_playback(struct ua101 *ua)
static void playback_urb_complete(struct urb *usb_urb)
static void first_playback_urb_complete(struct urb *urb)
static bool copy_playback_data(struct ua101_stream *stream, struct urb *urb,
unsigned int frames)
static inline void add_with_wraparound(struct ua101 *ua,
unsigned int *value, unsigned int add)
static void playback_tasklet(unsigned long data)
static bool copy_capture_data(struct ua101_stream *stream, struct urb *urb,
unsigned int frames)
static void capture_urb_complete(struct urb *urb)
static void first_capture_urb_complete(struct urb *urb)
static int submit_stream_urbs(struct ua101 *ua, struct ua101_stream *stream)
static void kill_stream_urbs(struct ua101_stream *stream)
static int enable_iso_interface(struct ua101 *ua, unsigned int intf_index)
static void disable_iso_interface(struct ua101 *ua, unsigned int intf_index)
static void stop_usb_capture(struct ua101 *ua)
static int start_usb_capture(struct ua101 *ua)
static void stop_usb_playback(struct ua101 *ua)
static int start_usb_playback(struct ua101 *ua)
static void abort_alsa_capture(struct ua101 *ua)
static void abort_alsa_playback(struct ua101 *ua)
static int set_stream_hw(struct ua101 *ua, struct snd_pcm_substream *substream,
unsigned int channels)
static int capture_pcm_open(struct snd_pcm_substream *substream)
static int playback_pcm_open(struct snd_pcm_substream *substream)
static int capture_pcm_close(struct snd_pcm_substream *substream)
static int playback_pcm_close(struct snd_pcm_substream *substream)
static int capture_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int playback_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int ua101_pcm_hw_free(struct snd_pcm_substream *substream)
static int capture_pcm_prepare(struct snd_pcm_substream *substream)
static int playback_pcm_prepare(struct snd_pcm_substream *substream)
static int capture_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static int playback_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static inline snd_pcm_uframes_t ua101_pcm_pointer(struct ua101 *ua,
struct ua101_stream *stream)
static snd_pcm_uframes_t capture_pcm_pointer(struct snd_pcm_substream *subs)
static snd_pcm_uframes_t playback_pcm_pointer(struct snd_pcm_substream *subs)
static struct snd_pcm_ops capture_pcm_ops = ;
static struct snd_pcm_ops playback_pcm_ops = ;
static const struct uac_format_type_i_discrete_descriptor *
find_format_descriptor(struct usb_interface *interface)
static int detect_usb_format(struct ua101 *ua)
static int alloc_stream_buffers(struct ua101 *ua, struct ua101_stream *stream)
static void free_stream_buffers(struct ua101 *ua, struct ua101_stream *stream)
static int alloc_stream_urbs(struct ua101 *ua, struct ua101_stream *stream,
void (*urb_complete)(struct urb *))
static void free_stream_urbs(struct ua101_stream *stream)
static void free_usb_related_resources(struct ua101 *ua,
struct usb_interface *interface)
static void ua101_card_free(struct snd_card *card)
static int ua101_probe(struct usb_interface *interface,
const struct usb_device_id *usb_id)
static void ua101_disconnect(struct usb_interface *interface)
static struct usb_device_id ua101_ids[] = ;
MODULE_DEVICE_TABLE(usb, ua101_ids);
static struct usb_driver ua101_driver = ;
static int __init alsa_card_ua101_init(void)
static void __exit alsa_card_ua101_exit(void)
module_init(alsa_card_ua101_init);
module_exit(alsa_card_ua101_exit);
