enum ;
static const int rates_in_packet_size[] = ;
static const int rates_out_packet_size[] = ;
static const int rates[] = ;
static const int rates_alsaid[] = ;
enum ;
enum ;
static const struct snd_pcm_hardware pcm_hw = ;
static int usb6fire_pcm_set_rate(struct pcm_runtime *rt)
static struct pcm_substream *usb6fire_pcm_get_substream(
struct snd_pcm_substream *alsa_sub)
static void usb6fire_pcm_stream_stop(struct pcm_runtime *rt)
static int usb6fire_pcm_stream_start(struct pcm_runtime *rt)
static void usb6fire_pcm_capture(struct pcm_substream *sub, struct pcm_urb *urb)
static void usb6fire_pcm_playback(struct pcm_substream *sub,
struct pcm_urb *urb)
static void usb6fire_pcm_in_urb_handler(struct urb *usb_urb)
static void usb6fire_pcm_out_urb_handler(struct urb *usb_urb)
static int usb6fire_pcm_open(struct snd_pcm_substream *alsa_sub)
static int usb6fire_pcm_close(struct snd_pcm_substream *alsa_sub)
static int usb6fire_pcm_hw_params(struct snd_pcm_substream *alsa_sub,
struct snd_pcm_hw_params *hw_params)
static int usb6fire_pcm_hw_free(struct snd_pcm_substream *alsa_sub)
static int usb6fire_pcm_prepare(struct snd_pcm_substream *alsa_sub)
static int usb6fire_pcm_trigger(struct snd_pcm_substream *alsa_sub, int cmd)
static snd_pcm_uframes_t usb6fire_pcm_pointer(
struct snd_pcm_substream *alsa_sub)
static struct snd_pcm_ops pcm_ops = ;
static void __devinit usb6fire_pcm_init_urb(struct pcm_urb *urb,
struct sfire_chip *chip, bool in, int ep,
void (*handler)(struct urb *))
int __devinit usb6fire_pcm_init(struct sfire_chip *chip)
void usb6fire_pcm_abort(struct sfire_chip *chip)
void usb6fire_pcm_destroy(struct sfire_chip *chip)
