enum master_slave_mode ;
struct cs42l51_private ;
#define CS42L51_FORMATS ( \
SNDRV_PCM_FMTBIT_S16_LE  | SNDRV_PCM_FMTBIT_S16_BE  | \
SNDRV_PCM_FMTBIT_S18_3LE | SNDRV_PCM_FMTBIT_S18_3BE | \
SNDRV_PCM_FMTBIT_S20_3LE | SNDRV_PCM_FMTBIT_S20_3BE | \
SNDRV_PCM_FMTBIT_S24_LE  | SNDRV_PCM_FMTBIT_S24_BE)
static int cs42l51_fill_cache(struct snd_soc_codec *codec)
static int cs42l51_get_chan_mix(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define CHAN_MIX_NORMAL	0x00
#define CHAN_MIX_BOTH	0x55
#define CHAN_MIX_SWAP	0xFF
static int cs42l51_set_chan_mix(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const DECLARE_TLV_DB_SCALE(adc_pcm_tlv, -5150, 50, 0);
static const DECLARE_TLV_DB_SCALE(tone_tlv, -1050, 150, 0);
static const DECLARE_TLV_DB_SCALE(aout_tlv, -11550, 50, 0);
static const DECLARE_TLV_DB_SCALE(boost_tlv, 1600, 1600, 0);
static const char *chan_mix[] = ;
static const struct soc_enum cs42l51_chan_mix =
SOC_ENUM_SINGLE_EXT(ARRAY_SIZE(chan_mix), chan_mix);
static const struct snd_kcontrol_new cs42l51_snd_controls[] = ;
static int cs42l51_pdn_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const char *cs42l51_dac_names[] = ;
static const struct soc_enum cs42l51_dac_mux_enum =
SOC_ENUM_SINGLE(CS42L51_DAC_CTL, 6, 3, cs42l51_dac_names);
static const struct snd_kcontrol_new cs42l51_dac_mux_controls =
SOC_DAPM_ENUM("Route", cs42l51_dac_mux_enum);
static const char *cs42l51_adcl_names[] = ;
static const struct soc_enum cs42l51_adcl_mux_enum =
SOC_ENUM_SINGLE(CS42L51_ADC_INPUT, 4, 4, cs42l51_adcl_names);
static const struct snd_kcontrol_new cs42l51_adcl_mux_controls =
SOC_DAPM_ENUM("Route", cs42l51_adcl_mux_enum);
static const char *cs42l51_adcr_names[] = ;
static const struct soc_enum cs42l51_adcr_mux_enum =
SOC_ENUM_SINGLE(CS42L51_ADC_INPUT, 6, 4, cs42l51_adcr_names);
static const struct snd_kcontrol_new cs42l51_adcr_mux_controls =
SOC_DAPM_ENUM("Route", cs42l51_adcr_mux_enum);
static const struct snd_soc_dapm_widget cs42l51_dapm_widgets[] = ;
static const struct snd_soc_dapm_route cs42l51_routes[] = ;
static int cs42l51_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int format)
struct cs42l51_ratios ;
static struct cs42l51_ratios slave_ratios[] = ;
static struct cs42l51_ratios slave_auto_ratios[] = ;
static int cs42l51_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int cs42l51_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int cs42l51_dai_mute(struct snd_soc_dai *dai, int mute)
static struct snd_soc_dai_ops cs42l51_dai_ops = ;
static struct snd_soc_dai_driver cs42l51_dai = ;
static int cs42l51_probe(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_device_cs42l51 = ;
static int cs42l51_i2c_probe(struct i2c_client *i2c_client,
const struct i2c_device_id *id)
static int cs42l51_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id cs42l51_id[] = ;
MODULE_DEVICE_TABLE(i2c, cs42l51_id);
static struct i2c_driver cs42l51_i2c_driver = ;
static int __init cs42l51_init(void)
module_init(cs42l51_init);
static void __exit cs42l51_exit(void)
module_exit(cs42l51_exit);
MODULE_AUTHOR("Arnaud Patard <arnaud.patard@rtp-net.org>");
MODULE_DESCRIPTION("Cirrus Logic CS42L51 ALSA SoC Codec Driver");
MODULE_LICENSE("GPL");
