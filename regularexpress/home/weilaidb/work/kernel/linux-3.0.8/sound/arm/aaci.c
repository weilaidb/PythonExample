#define DRIVER_NAME	"aaci-pl041"
#define FRAME_PERIOD_US	21
#undef CONFIG_PM
static void aaci_ac97_select_codec(struct aaci *aaci, struct snd_ac97 *ac97)
static void aaci_ac97_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
static unsigned short aaci_ac97_read(struct snd_ac97 *ac97, unsigned short reg)
static inline void
aaci_chan_wait_ready(struct aaci_runtime *aacirun, unsigned long mask)
static void aaci_fifo_irq(struct aaci *aaci, int channel, u32 mask)
static irqreturn_t aaci_irq(int irq, void *devid)
static struct snd_pcm_hardware aaci_hw_info = ;
static int aaci_rule_channels(struct snd_pcm_hw_params *p,
struct snd_pcm_hw_rule *rule)
static int aaci_pcm_open(struct snd_pcm_substream *substream)
static int aaci_pcm_close(struct snd_pcm_substream *substream)
static int aaci_pcm_hw_free(struct snd_pcm_substream *substream)
static const u32 channels_to_slotmask[] = ;
static int aaci_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int aaci_pcm_prepare(struct snd_pcm_substream *substream)
static snd_pcm_uframes_t aaci_pcm_pointer(struct snd_pcm_substream *substream)
static void aaci_pcm_playback_stop(struct aaci_runtime *aacirun)
static void aaci_pcm_playback_start(struct aaci_runtime *aacirun)
static int aaci_pcm_playback_trigger(struct snd_pcm_substream *substream, int cmd)
static struct snd_pcm_ops aaci_playback_ops = ;
static void aaci_pcm_capture_stop(struct aaci_runtime *aacirun)
static void aaci_pcm_capture_start(struct aaci_runtime *aacirun)
static int aaci_pcm_capture_trigger(struct snd_pcm_substream *substream, int cmd)
static int aaci_pcm_capture_prepare(struct snd_pcm_substream *substream)
static struct snd_pcm_ops aaci_capture_ops = ;
static int aaci_do_suspend(struct snd_card *card, unsigned int state)
static int aaci_do_resume(struct snd_card *card, unsigned int state)
static int aaci_suspend(struct amba_device *dev, pm_message_t state)
static int aaci_resume(struct amba_device *dev)
#define aaci_do_suspend		NULL
#define aaci_do_resume		NULL
#define aaci_suspend		NULL
#define aaci_resume		NULL
static struct ac97_pcm ac97_defs[] __devinitdata = ;
static struct snd_ac97_bus_ops aaci_bus_ops = ;
static int __devinit aaci_probe_ac97(struct aaci *aaci)
static void aaci_free_card(struct snd_card *card)
static struct aaci * __devinit aaci_init_card(struct amba_device *dev)
static int __devinit aaci_init_pcm(struct aaci *aaci)
static unsigned int __devinit aaci_size_fifo(struct aaci *aaci)
static int __devinit aaci_probe(struct amba_device *dev,
const struct amba_id *id)
static int __devexit aaci_remove(struct amba_device *dev)
static struct amba_id aaci_ids[] = ;
static struct amba_driver aaci_driver = ;
static int __init aaci_init(void)
static void __exit aaci_exit(void)
module_init(aaci_init);
module_exit(aaci_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("ARM PrimeCell PL041 Advanced Audio CODEC Interface driver");
