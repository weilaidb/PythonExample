#define LOGNAME			"msnd"
void snd_msnd_init_queue(void *base, int start, int size)
EXPORT_SYMBOL(snd_msnd_init_queue);
static int snd_msnd_wait_TXDE(struct snd_msnd *dev)
static int snd_msnd_wait_HC0(struct snd_msnd *dev)
int snd_msnd_send_dsp_cmd(struct snd_msnd *dev, u8 cmd)
EXPORT_SYMBOL(snd_msnd_send_dsp_cmd);
int snd_msnd_send_word(struct snd_msnd *dev, unsigned char high,
unsigned char mid, unsigned char low)
EXPORT_SYMBOL(snd_msnd_send_word);
int snd_msnd_upload_host(struct snd_msnd *dev, const u8 *bin, int len)
EXPORT_SYMBOL(snd_msnd_upload_host);
int snd_msnd_enable_irq(struct snd_msnd *dev)
EXPORT_SYMBOL(snd_msnd_enable_irq);
int snd_msnd_disable_irq(struct snd_msnd *dev)
EXPORT_SYMBOL(snd_msnd_disable_irq);
static inline long get_play_delay_jiffies(struct snd_msnd *chip, long size)
static void snd_msnd_dsp_write_flush(struct snd_msnd *chip)
void snd_msnd_dsp_halt(struct snd_msnd *chip, struct file *file)
EXPORT_SYMBOL(snd_msnd_dsp_halt);
int snd_msnd_DARQ(struct snd_msnd *chip, int bank)
EXPORT_SYMBOL(snd_msnd_DARQ);
int snd_msnd_DAPQ(struct snd_msnd *chip, int start)
EXPORT_SYMBOL(snd_msnd_DAPQ);
static void snd_msnd_play_reset_queue(struct snd_msnd *chip,
unsigned int pcm_periods,
unsigned int pcm_count)
static void snd_msnd_capture_reset_queue(struct snd_msnd *chip,
unsigned int pcm_periods,
unsigned int pcm_count)
static struct snd_pcm_hardware snd_msnd_playback = ;
static struct snd_pcm_hardware snd_msnd_capture = ;
static int snd_msnd_playback_open(struct snd_pcm_substream *substream)
static int snd_msnd_playback_close(struct snd_pcm_substream *substream)
static int snd_msnd_playback_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int snd_msnd_playback_prepare(struct snd_pcm_substream *substream)
static int snd_msnd_playback_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t
snd_msnd_playback_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_msnd_playback_ops = ;
static int snd_msnd_capture_open(struct snd_pcm_substream *substream)
static int snd_msnd_capture_close(struct snd_pcm_substream *substream)
static int snd_msnd_capture_prepare(struct snd_pcm_substream *substream)
static int snd_msnd_capture_trigger(struct snd_pcm_substream *substream,
int cmd)
static snd_pcm_uframes_t
snd_msnd_capture_pointer(struct snd_pcm_substream *substream)
static int snd_msnd_capture_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static struct snd_pcm_ops snd_msnd_capture_ops = ;
int snd_msnd_pcm(struct snd_card *card, int device,
struct snd_pcm **rpcm)
EXPORT_SYMBOL(snd_msnd_pcm);
MODULE_DESCRIPTION("Common routines for Turtle Beach Multisound drivers");
MODULE_LICENSE("GPL");
