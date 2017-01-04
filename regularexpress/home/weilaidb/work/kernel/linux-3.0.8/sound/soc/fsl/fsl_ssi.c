#define FSLSSI_I2S_RATES (SNDRV_PCM_RATE_5512 | SNDRV_PCM_RATE_8000_192000 | \
SNDRV_PCM_RATE_CONTINUOUS)
#define FSLSSI_I2S_FORMATS (SNDRV_PCM_FMTBIT_S8 | SNDRV_PCM_FMTBIT_S16_BE | \
SNDRV_PCM_FMTBIT_S18_3BE | SNDRV_PCM_FMTBIT_S20_3BE | \
SNDRV_PCM_FMTBIT_S24_3BE | SNDRV_PCM_FMTBIT_S24_BE)
#define FSLSSI_I2S_FORMATS (SNDRV_PCM_FMTBIT_S8 | SNDRV_PCM_FMTBIT_S16_LE | \
SNDRV_PCM_FMTBIT_S18_3LE | SNDRV_PCM_FMTBIT_S20_3LE | \
SNDRV_PCM_FMTBIT_S24_3LE | SNDRV_PCM_FMTBIT_S24_LE)
#define SIER_FLAGS (CCSR_SSI_SIER_TFRC_EN | CCSR_SSI_SIER_TDMAE | \
CCSR_SSI_SIER_TIE | CCSR_SSI_SIER_TUE0_EN | \
CCSR_SSI_SIER_TUE1_EN | CCSR_SSI_SIER_RFRC_EN | \
CCSR_SSI_SIER_RDMAE | CCSR_SSI_SIER_RIE | \
CCSR_SSI_SIER_ROE0_EN | CCSR_SSI_SIER_ROE1_EN)
struct fsl_ssi_private ;
static irqreturn_t fsl_ssi_isr(int irq, void *dev_id)
static int fsl_ssi_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int fsl_ssi_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *hw_params, struct snd_soc_dai *cpu_dai)
static int fsl_ssi_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static void fsl_ssi_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static struct snd_soc_dai_ops fsl_ssi_dai_ops = ;
static struct snd_soc_dai_driver fsl_ssi_dai_template = ;
#define SIER_SHOW(flag, name) \
do  while (0)
static ssize_t fsl_sysfs_ssi_show(struct device *dev,
struct device_attribute *attr, char *buf)
static void make_lowercase(char *s)
static int __devinit fsl_ssi_probe(struct platform_device *pdev)
static int fsl_ssi_remove(struct platform_device *pdev)
static const struct of_device_id fsl_ssi_ids[] = ;
MODULE_DEVICE_TABLE(of, fsl_ssi_ids);
static struct platform_driver fsl_ssi_driver = ;
static int __init fsl_ssi_init(void)
static void __exit fsl_ssi_exit(void)
module_init(fsl_ssi_init);
module_exit(fsl_ssi_exit);
MODULE_AUTHOR("Timur Tabi <timur@freescale.com>");
MODULE_DESCRIPTION("Freescale Synchronous Serial Interface (SSI) ASoC Driver");
MODULE_LICENSE("GPL v2");
