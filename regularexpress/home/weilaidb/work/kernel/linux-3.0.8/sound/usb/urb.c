static inline unsigned get_usb_full_speed_rate(unsigned int rate)
static inline unsigned get_usb_high_speed_rate(unsigned int rate)
static int deactivate_urbs(struct snd_usb_substream *subs, int force, int can_sleep)
static void release_urb_ctx(struct snd_urb_ctx *u)
static int wait_clear_urbs(struct snd_usb_substream *subs)
void snd_usb_release_substream_urbs(struct snd_usb_substream *subs, int force)
static void snd_complete_urb(struct urb *urb)
static void snd_complete_sync_urb(struct urb *urb)
int snd_usb_init_substream_urbs(struct snd_usb_substream *subs,
unsigned int period_bytes,
unsigned int rate,
unsigned int frame_bits)
static int prepare_capture_sync_urb(struct snd_usb_substream *subs,
struct snd_pcm_runtime *runtime,
struct urb *urb)
static int prepare_capture_sync_urb_hs(struct snd_usb_substream *subs,
struct snd_pcm_runtime *runtime,
struct urb *urb)
static int retire_capture_sync_urb(struct snd_usb_substream *subs,
struct snd_pcm_runtime *runtime,
struct urb *urb)
static int prepare_capture_urb(struct snd_usb_substream *subs,
struct snd_pcm_runtime *runtime,
struct urb *urb)
static int retire_capture_urb(struct snd_usb_substream *subs,
struct snd_pcm_runtime *runtime,
struct urb *urb)
static int retire_paused_capture_urb(struct snd_usb_substream *subs,
struct snd_pcm_runtime *runtime,
struct urb *urb)
static int prepare_playback_sync_urb(struct snd_usb_substream *subs,
struct snd_pcm_runtime *runtime,
struct urb *urb)
static int retire_playback_sync_urb(struct snd_usb_substream *subs,
struct snd_pcm_runtime *runtime,
struct urb *urb)
static int snd_usb_audio_next_packet_size(struct snd_usb_substream *subs)
static int prepare_nodata_playback_urb(struct snd_usb_substream *subs,
struct snd_pcm_runtime *runtime,
struct urb *urb)
static int prepare_playback_urb(struct snd_usb_substream *subs,
struct snd_pcm_runtime *runtime,
struct urb *urb)
static int retire_playback_urb(struct snd_usb_substream *subs,
struct snd_pcm_runtime *runtime,
struct urb *urb)
static const char *usb_error_string(int err)
static int start_urbs(struct snd_usb_substream *subs, struct snd_pcm_runtime *runtime)
static struct snd_urb_ops audio_urb_ops[2] = ;
void snd_usb_init_substream(struct snd_usb_stream *as,
int stream, struct audioformat *fp)
int snd_usb_substream_playback_trigger(struct snd_pcm_substream *substream, int cmd)
int snd_usb_substream_capture_trigger(struct snd_pcm_substream *substream, int cmd)
int snd_usb_substream_prepare(struct snd_usb_substream *subs,
struct snd_pcm_runtime *runtime)
