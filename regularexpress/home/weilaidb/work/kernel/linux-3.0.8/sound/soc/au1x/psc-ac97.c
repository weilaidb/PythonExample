#define AC97_RW_RETRIES	5
#define AC97_DIR	\
(SND_SOC_DAIDIR_PLAYBACK | SND_SOC_DAIDIR_CAPTURE)
#define AC97_RATES	\
SNDRV_PCM_RATE_8000_48000
#define AC97_FMTS	\
(SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3BE)
#define AC97PCR_START(stype)	\
((stype) == PCM_TX ? PSC_AC97PCR_TS : PSC_AC97PCR_RS)
#define AC97PCR_STOP(stype)	\
((stype) == PCM_TX ? PSC_AC97PCR_TP : PSC_AC97PCR_RP)
#define AC97PCR_CLRFIFO(stype)	\
((stype) == PCM_TX ? PSC_AC97PCR_TC : PSC_AC97PCR_RC)
#define AC97STAT_BUSY(stype)	\
((stype) == PCM_TX ? PSC_AC97STAT_TB : PSC_AC97STAT_RB)
static struct au1xpsc_audio_data *au1xpsc_ac97_workdata;
static unsigned short au1xpsc_ac97_read(struct snd_ac97 *ac97,
unsigned short reg)
static void au1xpsc_ac97_write(struct snd_ac97 *ac97, unsigned short reg,
unsigned short val)
static void au1xpsc_ac97_warm_reset(struct snd_ac97 *ac97)
static void au1xpsc_ac97_cold_reset(struct snd_ac97 *ac97)
struct snd_ac97_bus_ops soc_ac97_ops = ;
EXPORT_SYMBOL_GPL(soc_ac97_ops);
static int au1xpsc_ac97_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int au1xpsc_ac97_trigger(struct snd_pcm_substream *substream,
int cmd, struct snd_soc_dai *dai)
static int au1xpsc_ac97_probe(struct snd_soc_dai *dai)
static struct snd_soc_dai_ops au1xpsc_ac97_dai_ops = ;
static const struct snd_soc_dai_driver au1xpsc_ac97_dai_template = ;
static int __devinit au1xpsc_ac97_drvprobe(struct platform_device *pdev)
static int __devexit au1xpsc_ac97_drvremove(struct platform_device *pdev)
static int au1xpsc_ac97_drvsuspend(struct device *dev)
static int au1xpsc_ac97_drvresume(struct device *dev)
static struct dev_pm_ops au1xpscac97_pmops = ;
#define AU1XPSCAC97_PMOPS &au1xpscac97_pmops
#define AU1XPSCAC97_PMOPS NULL
static struct platform_driver au1xpsc_ac97_driver = ;
static int __init au1xpsc_ac97_load(void)
static void __exit au1xpsc_ac97_unload(void)
module_init(au1xpsc_ac97_load);
module_exit(au1xpsc_ac97_unload);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Au12x0/Au1550 PSC AC97 ALSA ASoC audio driver");
MODULE_AUTHOR("Manuel Lauss");
