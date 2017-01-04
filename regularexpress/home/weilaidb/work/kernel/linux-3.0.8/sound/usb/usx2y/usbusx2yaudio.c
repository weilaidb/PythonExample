#define USX2Y_NRPACKS 4
#define USX2Y_NRPACKS_VARIABLE y
static int nrpacks = USX2Y_NRPACKS;
#define  nr_of_packs() nrpacks
module_param(nrpacks, int, 0444);
MODULE_PARM_DESC(nrpacks, "Number of packets per URB.");
#define nr_of_packs() USX2Y_NRPACKS
static int usX2Y_urb_capt_retire(struct snd_usX2Y_substream *subs)
static int usX2Y_urb_play_prepare(struct snd_usX2Y_substream *subs,
struct urb *cap_urb,
struct urb *urb)
static void usX2Y_urb_play_retire(struct snd_usX2Y_substream *subs, struct urb *urb)
static int usX2Y_urb_submit(struct snd_usX2Y_substream *subs, struct urb *urb, int frame)
static inline int usX2Y_usbframe_complete(struct snd_usX2Y_substream *capsubs,
struct snd_usX2Y_substream *playbacksubs,
int frame)
static void usX2Y_clients_stop(struct usX2Ydev *usX2Y)
static void usX2Y_error_urb_status(struct usX2Ydev *usX2Y,
struct snd_usX2Y_substream *subs, struct urb *urb)
static void usX2Y_error_sequence(struct usX2Ydev *usX2Y,
struct snd_usX2Y_substream *subs, struct urb *urb)
static void i_usX2Y_urb_complete(struct urb *urb)
static void usX2Y_urbs_set_complete(struct usX2Ydev * usX2Y,
void (*complete)(struct urb *))
static void usX2Y_subs_startup_finish(struct usX2Ydev * usX2Y)
static void i_usX2Y_subs_startup(struct urb *urb)
static void usX2Y_subs_prepare(struct snd_usX2Y_substream *subs)
static void usX2Y_urb_release(struct urb **urb, int free_tb)
static void usX2Y_urbs_release(struct snd_usX2Y_substream *subs)
static int usX2Y_urbs_allocate(struct snd_usX2Y_substream *subs)
static void usX2Y_subs_startup(struct snd_usX2Y_substream *subs)
static int usX2Y_urbs_start(struct snd_usX2Y_substream *subs)
static snd_pcm_uframes_t snd_usX2Y_pcm_pointer(struct snd_pcm_substream *substream)
static int snd_usX2Y_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static struct s_c2
SetRate44100[] =
;
static struct s_c2 SetRate48000[] =
;
#define NOOF_SETRATE_URBS ARRAY_SIZE(SetRate48000)
static void i_usX2Y_04Int(struct urb *urb)
static int usX2Y_rate_set(struct usX2Ydev *usX2Y, int rate)
static int usX2Y_format_set(struct usX2Ydev *usX2Y, snd_pcm_format_t format)
static int snd_usX2Y_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_usX2Y_pcm_hw_free(struct snd_pcm_substream *substream)
static int snd_usX2Y_pcm_prepare(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_usX2Y_2c =
;
static int snd_usX2Y_pcm_open(struct snd_pcm_substream *substream)
static int snd_usX2Y_pcm_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_usX2Y_pcm_ops =
;
static void usX2Y_audio_stream_free(struct snd_usX2Y_substream **usX2Y_substream)
static void snd_usX2Y_pcm_private_free(struct snd_pcm *pcm)
static int usX2Y_audio_stream_new(struct snd_card *card, int playback_endpoint, int capture_endpoint)
int usX2Y_audio_create(struct snd_card *card)
