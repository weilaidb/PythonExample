MODULE_AUTHOR("Rafael Ignacio Zurita <rizurita@yahoo.com>");
MODULE_DESCRIPTION("SuperH DAC audio driver");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
static int index = SNDRV_DEFAULT_IDX1;
static char *id = SNDRV_DEFAULT_STR1;
module_param(index, int, 0444);
MODULE_PARM_DESC(index, "Index value for SuperH DAC audio.");
module_param(id, charp, 0444);
MODULE_PARM_DESC(id, "ID string for SuperH DAC audio.");
struct snd_sh_dac ;
static void dac_audio_start_timer(struct snd_sh_dac *chip)
static void dac_audio_stop_timer(struct snd_sh_dac *chip)
static void dac_audio_reset(struct snd_sh_dac *chip)
static void dac_audio_set_rate(struct snd_sh_dac *chip)
static struct snd_pcm_hardware snd_sh_dac_pcm_hw = ;
static int snd_sh_dac_pcm_open(struct snd_pcm_substream *substream)
static int snd_sh_dac_pcm_close(struct snd_pcm_substream *substream)
static int snd_sh_dac_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params)
static int snd_sh_dac_pcm_hw_free(struct snd_pcm_substream *substream)
static int snd_sh_dac_pcm_prepare(struct snd_pcm_substream *substream)
static int snd_sh_dac_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static int snd_sh_dac_pcm_copy(struct snd_pcm_substream *substream, int channel,
snd_pcm_uframes_t pos, void __user *src, snd_pcm_uframes_t count)
static int snd_sh_dac_pcm_silence(struct snd_pcm_substream *substream,
int channel, snd_pcm_uframes_t pos,
snd_pcm_uframes_t count)
static
snd_pcm_uframes_t snd_sh_dac_pcm_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_ops snd_sh_dac_pcm_ops = ;
static int __devinit snd_sh_dac_pcm(struct snd_sh_dac *chip, int device)
static int snd_sh_dac_remove(struct platform_device *devptr)
static int snd_sh_dac_free(struct snd_sh_dac *chip)
static int snd_sh_dac_dev_free(struct snd_device *device)
static enum hrtimer_restart sh_dac_audio_timer(struct hrtimer *handle)
static int __devinit snd_sh_dac_create(struct snd_card *card,
struct platform_device *devptr,
struct snd_sh_dac **rchip)
static int __devinit snd_sh_dac_probe(struct platform_device *devptr)
static struct platform_driver driver = ;
static int __init sh_dac_init(void)
static void __exit sh_dac_exit(void)
module_init(sh_dac_init);
module_exit(sh_dac_exit);
