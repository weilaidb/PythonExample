MODULE_AUTHOR("Charles Eidsness <charles@cooper-street.com>");
MODULE_DESCRIPTION("Au1000 AC'97 ALSA Driver");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#define PLAYBACK 0
#define CAPTURE 1
#define AC97_SLOT_3 0x01
#define AC97_SLOT_4 0x02
#define AC97_SLOT_6 0x08
#define AC97_CMD_IRQ 31
#define READ 0
#define WRITE 1
#define READ_WAIT 2
#define RW_DONE 3
struct au1000_period
;
struct au1000_ac97_reg ;
struct audio_stream ;
struct snd_au1000 ;
static void
au1000_set_ac97_xmit_slots(struct snd_au1000 *au1000, long xmit_slots)
static void
au1000_set_ac97_recv_slots(struct snd_au1000 *au1000, long recv_slots)
static void
au1000_release_dma_link(struct audio_stream *stream)
static int
au1000_setup_dma_link(struct audio_stream *stream, unsigned int period_bytes,
unsigned int periods)
static void
au1000_dma_stop(struct audio_stream *stream)
static void
au1000_dma_start(struct audio_stream *stream)
static irqreturn_t
au1000_dma_interrupt(int irq, void *dev_id)
static unsigned int rates[] = ;
static struct snd_pcm_hw_constraint_list hw_constraints_rates = ;
static struct snd_pcm_hardware snd_au1000_hw =
;
static int
snd_au1000_playback_open(struct snd_pcm_substream *substream)
static int
snd_au1000_capture_open(struct snd_pcm_substream *substream)
static int
snd_au1000_playback_close(struct snd_pcm_substream *substream)
static int
snd_au1000_capture_close(struct snd_pcm_substream *substream)
static int
snd_au1000_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int
snd_au1000_hw_free(struct snd_pcm_substream *substream)
static int
snd_au1000_playback_prepare(struct snd_pcm_substream *substream)
static int
snd_au1000_capture_prepare(struct snd_pcm_substream *substream)
static int
snd_au1000_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t
snd_au1000_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_card_au1000_playback_ops = ;
static struct snd_pcm_ops snd_card_au1000_capture_ops = ;
static int __devinit
snd_au1000_pcm_new(struct snd_au1000 *au1000)
static unsigned short
snd_au1000_ac97_read(struct snd_ac97 *ac97, unsigned short reg)
static void
snd_au1000_ac97_write(struct snd_ac97 *ac97, unsigned short reg, unsigned short val)
static int __devinit
snd_au1000_ac97_new(struct snd_au1000 *au1000)
void
snd_au1000_free(struct snd_card *card)
static struct snd_card *au1000_card;
static int __init
au1000_init(void)
static void __exit au1000_exit(void)
module_init(au1000_init);
module_exit(au1000_exit);
