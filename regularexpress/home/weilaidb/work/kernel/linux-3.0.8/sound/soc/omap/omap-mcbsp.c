#define OMAP_MCBSP_RATES	(SNDRV_PCM_RATE_8000_96000)
#define OMAP_MCBSP_SOC_SINGLE_S16_EXT(xname, xmin, xmax, \
xhandler_get, xhandler_put) \
struct omap_mcbsp_data ;
static struct omap_mcbsp_data mcbsp_data[NUM_LINKS];
static struct omap_pcm_dma_data omap_mcbsp_dai_dma_params[NUM_LINKS][2];
static void omap_mcbsp_set_threshold(struct snd_pcm_substream *substream)
static int omap_mcbsp_hwrule_min_buffersize(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int omap_mcbsp_dai_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *cpu_dai)
static void omap_mcbsp_dai_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *cpu_dai)
static int omap_mcbsp_dai_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *cpu_dai)
static snd_pcm_sframes_t omap_mcbsp_dai_delay(
struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int omap_mcbsp_dai_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *cpu_dai)
static int omap_mcbsp_dai_set_dai_fmt(struct snd_soc_dai *cpu_dai,
unsigned int fmt)
static int omap_mcbsp_dai_set_clkdiv(struct snd_soc_dai *cpu_dai,
int div_id, int div)
static int omap_mcbsp_dai_set_dai_sysclk(struct snd_soc_dai *cpu_dai,
int clk_id, unsigned int freq,
int dir)
static struct snd_soc_dai_ops mcbsp_dai_ops = ;
static int mcbsp_dai_probe(struct snd_soc_dai *dai)
static struct snd_soc_dai_driver omap_mcbsp_dai =
;
static int omap_mcbsp_st_info_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
#define OMAP_MCBSP_ST_SET_CHANNEL_VOLUME(id, channel)			\
static int								\
omap_mcbsp##id##_set_st_ch##channel##_volume(struct snd_kcontrol *kc,	\
struct snd_ctl_elem_value *uc)	\
#define OMAP_MCBSP_ST_GET_CHANNEL_VOLUME(id, channel)			\
static int								\
omap_mcbsp##id##_get_st_ch##channel##_volume(struct snd_kcontrol *kc,	\
struct snd_ctl_elem_value *uc)	\
OMAP_MCBSP_ST_SET_CHANNEL_VOLUME(2, 0)
OMAP_MCBSP_ST_SET_CHANNEL_VOLUME(2, 1)
OMAP_MCBSP_ST_SET_CHANNEL_VOLUME(3, 0)
OMAP_MCBSP_ST_SET_CHANNEL_VOLUME(3, 1)
OMAP_MCBSP_ST_GET_CHANNEL_VOLUME(2, 0)
OMAP_MCBSP_ST_GET_CHANNEL_VOLUME(2, 1)
OMAP_MCBSP_ST_GET_CHANNEL_VOLUME(3, 0)
OMAP_MCBSP_ST_GET_CHANNEL_VOLUME(3, 1)
static int omap_mcbsp_st_put_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int omap_mcbsp_st_get_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const struct snd_kcontrol_new omap_mcbsp2_st_controls[] = ;
static const struct snd_kcontrol_new omap_mcbsp3_st_controls[] = ;
int omap_mcbsp_st_add_controls(struct snd_soc_codec *codec, int mcbsp_id)
EXPORT_SYMBOL_GPL(omap_mcbsp_st_add_controls);
static __devinit int asoc_mcbsp_probe(struct platform_device *pdev)
static int __devexit asoc_mcbsp_remove(struct platform_device *pdev)
static struct platform_driver asoc_mcbsp_driver = ;
static int __init snd_omap_mcbsp_init(void)
module_init(snd_omap_mcbsp_init);
static void __exit snd_omap_mcbsp_exit(void)
module_exit(snd_omap_mcbsp_exit);
MODULE_AUTHOR("Jarkko Nikula <jhnikula@gmail.com>");
MODULE_DESCRIPTION("OMAP I2S SoC Interface");
MODULE_LICENSE("GPL");
