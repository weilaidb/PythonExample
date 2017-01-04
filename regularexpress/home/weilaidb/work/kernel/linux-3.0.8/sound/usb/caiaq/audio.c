#define N_URBS			32
#define CLOCK_DRIFT_TOLERANCE	5
#define FRAMES_PER_URB		8
#define BYTES_PER_FRAME		512
#define CHANNELS_PER_STREAM	2
#define BYTES_PER_SAMPLE	3
#define BYTES_PER_SAMPLE_USB	4
#define MAX_BUFFER_SIZE		(128*1024)
#define MAX_ENDPOINT_SIZE	512
#define ENDPOINT_CAPTURE	2
#define ENDPOINT_PLAYBACK	6
#define MAKE_CHECKBYTE(dev,stream,i) \
(stream << 1) | (~(i / (dev->n_streams * BYTES_PER_SAMPLE_USB)) & 1)
static struct snd_pcm_hardware snd_usb_caiaq_pcm_hardware = ;
static void
activate_substream(struct snd_usb_caiaqdev *dev,
struct snd_pcm_substream *sub)
static void
deactivate_substream(struct snd_usb_caiaqdev *dev,
struct snd_pcm_substream *sub)
static int
all_substreams_zero(struct snd_pcm_substream **subs)
static int stream_start(struct snd_usb_caiaqdev *dev)
static void stream_stop(struct snd_usb_caiaqdev *dev)
static int snd_usb_caiaq_substream_open(struct snd_pcm_substream *substream)
static int snd_usb_caiaq_substream_close(struct snd_pcm_substream *substream)
static int snd_usb_caiaq_pcm_hw_params(struct snd_pcm_substream *sub,
struct snd_pcm_hw_params *hw_params)
static int snd_usb_caiaq_pcm_hw_free(struct snd_pcm_substream *sub)
#if SNDRV_PCM_RATE_5512 != 1 << 0 || SNDRV_PCM_RATE_192000 != 1 << 12
#error "Change this table"
static unsigned int rates[] = ;
static int snd_usb_caiaq_pcm_prepare(struct snd_pcm_substream *substream)
static int snd_usb_caiaq_pcm_trigger(struct snd_pcm_substream *sub, int cmd)
static snd_pcm_uframes_t
snd_usb_caiaq_pcm_pointer(struct snd_pcm_substream *sub)
static struct snd_pcm_ops snd_usb_caiaq_ops = ;
static void check_for_elapsed_periods(struct snd_usb_caiaqdev *dev,
struct snd_pcm_substream **subs)
static void read_in_urb_mode0(struct snd_usb_caiaqdev *dev,
const struct urb *urb,
const struct usb_iso_packet_descriptor *iso)
static void read_in_urb_mode2(struct snd_usb_caiaqdev *dev,
const struct urb *urb,
const struct usb_iso_packet_descriptor *iso)
static void read_in_urb_mode3(struct snd_usb_caiaqdev *dev,
const struct urb *urb,
const struct usb_iso_packet_descriptor *iso)
static void read_in_urb(struct snd_usb_caiaqdev *dev,
const struct urb *urb,
const struct usb_iso_packet_descriptor *iso)
static void fill_out_urb_mode_0(struct snd_usb_caiaqdev *dev,
struct urb *urb,
const struct usb_iso_packet_descriptor *iso)
static void fill_out_urb_mode_3(struct snd_usb_caiaqdev *dev,
struct urb *urb,
const struct usb_iso_packet_descriptor *iso)
static inline void fill_out_urb(struct snd_usb_caiaqdev *dev,
struct urb *urb,
const struct usb_iso_packet_descriptor *iso)
static void read_completed(struct urb *urb)
static void write_completed(struct urb *urb)
static struct urb **alloc_urbs(struct snd_usb_caiaqdev *dev, int dir, int *ret)
static void free_urbs(struct urb **urbs)
int snd_usb_caiaq_audio_init(struct snd_usb_caiaqdev *dev)
void snd_usb_caiaq_audio_free(struct snd_usb_caiaqdev *dev)
