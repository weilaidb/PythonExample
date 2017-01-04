struct ak4671_priv ;
static const u8 ak4671_reg[AK4671_CACHEREGNUM] = ;
static DECLARE_TLV_DB_SCALE(out1_tlv, -3000, 600, 1);
static DECLARE_TLV_DB_SCALE(out2_tlv, -3300, 300, 1);
static DECLARE_TLV_DB_SCALE(out3_tlv, -600, 300, 0);
static DECLARE_TLV_DB_SCALE(mic_amp_tlv, -1500, 300, 0);
static const struct snd_kcontrol_new ak4671_snd_controls[] = ;
static int ak4671_out2_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const struct snd_kcontrol_new ak4671_lout1_mixer_controls[] = ;
static const struct snd_kcontrol_new ak4671_rout1_mixer_controls[] = ;
static const struct snd_kcontrol_new ak4671_lout2_mixer_controls[] = ;
static const struct snd_kcontrol_new ak4671_rout2_mixer_controls[] = ;
static const struct snd_kcontrol_new ak4671_lout3_mixer_controls[] = ;
static const struct snd_kcontrol_new ak4671_rout3_mixer_controls[] = ;
static const char *ak4671_lin_mux_texts[] =
;
static const struct soc_enum ak4671_lin_mux_enum =
SOC_ENUM_SINGLE(AK4671_MIC_SIGNAL_SELECT, 0,
ARRAY_SIZE(ak4671_lin_mux_texts),
ak4671_lin_mux_texts);
static const struct snd_kcontrol_new ak4671_lin_mux_control =
SOC_DAPM_ENUM("Route", ak4671_lin_mux_enum);
static const char *ak4671_rin_mux_texts[] =
;
static const struct soc_enum ak4671_rin_mux_enum =
SOC_ENUM_SINGLE(AK4671_MIC_SIGNAL_SELECT, 2,
ARRAY_SIZE(ak4671_rin_mux_texts),
ak4671_rin_mux_texts);
static const struct snd_kcontrol_new ak4671_rin_mux_control =
SOC_DAPM_ENUM("Route", ak4671_rin_mux_enum);
static const struct snd_soc_dapm_widget ak4671_dapm_widgets[] = ;
static const struct snd_soc_dapm_route ak4671_intercon[] = ;
static int ak4671_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int ak4671_set_dai_sysclk(struct snd_soc_dai *dai, int clk_id,
unsigned int freq, int dir)
static int ak4671_set_dai_fmt(struct snd_soc_dai *dai, unsigned int fmt)
static int ak4671_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define AK4671_RATES		(SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 |\
SNDRV_PCM_RATE_32000 | SNDRV_PCM_RATE_44100 |\
SNDRV_PCM_RATE_48000)
#define AK4671_FORMATS		SNDRV_PCM_FMTBIT_S16_LE
static struct snd_soc_dai_ops ak4671_dai_ops = ;
static struct snd_soc_dai_driver ak4671_dai = ;
static int ak4671_probe(struct snd_soc_codec *codec)
static int ak4671_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_ak4671 = ;
static int __devinit ak4671_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static __devexit int ak4671_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id ak4671_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, ak4671_i2c_id);
static struct i2c_driver ak4671_i2c_driver = ;
static int __init ak4671_modinit(void)
module_init(ak4671_modinit);
static void __exit ak4671_exit(void)
module_exit(ak4671_exit);
MODULE_DESCRIPTION("ASoC AK4671 codec driver");
MODULE_AUTHOR("Joonyoung Shim <jy0922.shim@samsung.com>");
MODULE_LICENSE("GPL");
