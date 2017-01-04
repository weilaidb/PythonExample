#define JZ4740_REG_CODEC_1 0x0
#define JZ4740_REG_CODEC_2 0x1
#define JZ4740_CODEC_1_LINE_ENABLE BIT(29)
#define JZ4740_CODEC_1_MIC_ENABLE BIT(28)
#define JZ4740_CODEC_1_SW1_ENABLE BIT(27)
#define JZ4740_CODEC_1_ADC_ENABLE BIT(26)
#define JZ4740_CODEC_1_SW2_ENABLE BIT(25)
#define JZ4740_CODEC_1_DAC_ENABLE BIT(24)
#define JZ4740_CODEC_1_VREF_DISABLE BIT(20)
#define JZ4740_CODEC_1_VREF_AMP_DISABLE BIT(19)
#define JZ4740_CODEC_1_VREF_PULLDOWN BIT(18)
#define JZ4740_CODEC_1_VREF_LOW_CURRENT BIT(17)
#define JZ4740_CODEC_1_VREF_HIGH_CURRENT BIT(16)
#define JZ4740_CODEC_1_HEADPHONE_DISABLE BIT(14)
#define JZ4740_CODEC_1_HEADPHONE_AMP_CHANGE_ANY BIT(13)
#define JZ4740_CODEC_1_HEADPHONE_CHARGE BIT(12)
#define JZ4740_CODEC_1_HEADPHONE_PULLDOWN (BIT(11) | BIT(10))
#define JZ4740_CODEC_1_HEADPHONE_POWERDOWN_M BIT(9)
#define JZ4740_CODEC_1_HEADPHONE_POWERDOWN BIT(8)
#define JZ4740_CODEC_1_SUSPEND BIT(1)
#define JZ4740_CODEC_1_RESET BIT(0)
#define JZ4740_CODEC_1_LINE_ENABLE_OFFSET 29
#define JZ4740_CODEC_1_MIC_ENABLE_OFFSET 28
#define JZ4740_CODEC_1_SW1_ENABLE_OFFSET 27
#define JZ4740_CODEC_1_ADC_ENABLE_OFFSET 26
#define JZ4740_CODEC_1_SW2_ENABLE_OFFSET 25
#define JZ4740_CODEC_1_DAC_ENABLE_OFFSET 24
#define JZ4740_CODEC_1_HEADPHONE_DISABLE_OFFSET 14
#define JZ4740_CODEC_1_HEADPHONE_POWERDOWN_OFFSET 8
#define JZ4740_CODEC_2_INPUT_VOLUME_MASK		0x1f0000
#define JZ4740_CODEC_2_SAMPLE_RATE_MASK			0x000f00
#define JZ4740_CODEC_2_MIC_BOOST_GAIN_MASK		0x000030
#define JZ4740_CODEC_2_HEADPHONE_VOLUME_MASK	0x000003
#define JZ4740_CODEC_2_INPUT_VOLUME_OFFSET		16
#define JZ4740_CODEC_2_SAMPLE_RATE_OFFSET		 8
#define JZ4740_CODEC_2_MIC_BOOST_GAIN_OFFSET	 4
#define JZ4740_CODEC_2_HEADPHONE_VOLUME_OFFSET	 0
static const uint32_t jz4740_codec_regs[] = ;
struct jz4740_codec ;
static unsigned int jz4740_codec_read(struct snd_soc_codec *codec,
unsigned int reg)
static int jz4740_codec_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int val)
static const struct snd_kcontrol_new jz4740_codec_controls[] = ;
static const struct snd_kcontrol_new jz4740_codec_output_controls[] = ;
static const struct snd_kcontrol_new jz4740_codec_input_controls[] = ;
static const struct snd_soc_dapm_widget jz4740_codec_dapm_widgets[] = ;
static const struct snd_soc_dapm_route jz4740_codec_dapm_routes[] = ;
static int jz4740_codec_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params, struct snd_soc_dai *dai)
static struct snd_soc_dai_ops jz4740_codec_dai_ops = ;
static struct snd_soc_dai_driver jz4740_codec_dai = ;
static void jz4740_codec_wakeup(struct snd_soc_codec *codec)
static int jz4740_codec_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int jz4740_codec_dev_probe(struct snd_soc_codec *codec)
static int jz4740_codec_dev_remove(struct snd_soc_codec *codec)
static int jz4740_codec_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int jz4740_codec_resume(struct snd_soc_codec *codec)
#define jz4740_codec_suspend NULL
#define jz4740_codec_resume NULL
static struct snd_soc_codec_driver soc_codec_dev_jz4740_codec = ;
static int __devinit jz4740_codec_probe(struct platform_device *pdev)
static int __devexit jz4740_codec_remove(struct platform_device *pdev)
static struct platform_driver jz4740_codec_driver = ;
static int __init jz4740_codec_init(void)
module_init(jz4740_codec_init);
static void __exit jz4740_codec_exit(void)
module_exit(jz4740_codec_exit);
MODULE_DESCRIPTION("JZ4740 SoC internal codec driver");
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:jz4740-codec");
