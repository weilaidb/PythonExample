#define AU1XPSC_I2S_DAIFMT \
(SND_SOC_DAIFMT_I2S | SND_SOC_DAIFMT_LEFT_J |	\
SND_SOC_DAIFMT_NB_NF)
#define AU1XPSC_I2S_DIR \
(SND_SOC_DAIDIR_PLAYBACK | SND_SOC_DAIDIR_CAPTURE)
#define AU1XPSC_I2S_RATES \
SNDRV_PCM_RATE_8000_192000
#define AU1XPSC_I2S_FMTS \
(SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S24_LE)
#define I2SSTAT_BUSY(stype)	\
((stype) == PCM_TX ? PSC_I2SSTAT_TB : PSC_I2SSTAT_RB)
#define I2SPCR_START(stype)	\
((stype) == PCM_TX ? PSC_I2SPCR_TS : PSC_I2SPCR_RS)
#define I2SPCR_STOP(stype)	\
((stype) == PCM_TX ? PSC_I2SPCR_TP : PSC_I2SPCR_RP)
#define I2SPCR_CLRFIFO(stype)	\
((stype) == PCM_TX ? PSC_I2SPCR_TC : PSC_I2SPCR_RC)
static int au1xpsc_i2s_set_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static int au1xpsc_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int au1xpsc_i2s_configure(struct au1xpsc_audio_data *pscdata)
static int au1xpsc_i2s_start(struct au1xpsc_audio_data *pscdata, int stype)
static int au1xpsc_i2s_stop(struct au1xpsc_audio_data *pscdata, int stype)
static int au1xpsc_i2s_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static struct snd_soc_dai_ops au1xpsc_i2s_dai_ops = ;
static const struct snd_soc_dai_driver au1xpsc_i2s_dai_template = ;
static int __devinit au1xpsc_i2s_drvprobe(struct platform_device *pdev)
static int __devexit au1xpsc_i2s_drvremove(struct platform_device *pdev)
static int au1xpsc_i2s_drvsuspend(struct device *dev)
static int au1xpsc_i2s_drvresume(struct device *dev)
static struct dev_pm_ops au1xpsci2s_pmops = ;
#define AU1XPSCI2S_PMOPS &au1xpsci2s_pmops
#define AU1XPSCI2S_PMOPS NULL
static struct platform_driver au1xpsc_i2s_driver = ;
static int __init au1xpsc_i2s_load(void)
static void __exit au1xpsc_i2s_unload(void)
module_init(au1xpsc_i2s_load);
module_exit(au1xpsc_i2s_unload);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Au12x0/Au1550 PSC I2S ALSA ASoC audio driver");
MODULE_AUTHOR("Manuel Lauss");
