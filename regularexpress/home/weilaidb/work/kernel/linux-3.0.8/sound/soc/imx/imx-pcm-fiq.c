struct imx_pcm_runtime_data ;
static enum hrtimer_restart snd_hrtimer_callback(struct hrtimer *hrt)
static struct fiq_handler fh = ;
static int snd_imx_pcm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int snd_imx_pcm_prepare(struct snd_pcm_substream *substream)
static int fiq_enable;
static int imx_pcm_fiq;
static int snd_imx_pcm_trigger(struct snd_pcm_substream *substream, int cmd)
static snd_pcm_uframes_t snd_imx_pcm_pointer(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_imx_hardware = ;
static int snd_imx_open(struct snd_pcm_substream *substream)
static int snd_imx_close(struct snd_pcm_substream *substream)
static struct snd_pcm_ops imx_pcm_ops = ;
static int ssi_irq = 0;
static int imx_pcm_fiq_new(struct snd_card *card, struct snd_soc_dai *dai,
struct snd_pcm *pcm)
static void imx_pcm_fiq_free(struct snd_pcm *pcm)
static struct snd_soc_platform_driver imx_soc_platform_fiq = ;
static int __devinit imx_soc_platform_probe(struct platform_device *pdev)
static int __devexit imx_soc_platform_remove(struct platform_device *pdev)
static struct platform_driver imx_pcm_driver = ;
static int __init snd_imx_pcm_init(void)
module_init(snd_imx_pcm_init);
static void __exit snd_imx_pcm_exit(void)
module_exit(snd_imx_pcm_exit);
