#define DAC33_FIFO_SIZE_16BIT	6144
#define DAC33_FIFO_SIZE_24BIT	4096
#define DAC33_MODE7_MARGIN	10
#define BURST_BASEFREQ_HZ	49152000
#define SAMPLES_TO_US(rate, samples) \
(1000000000 / ((rate * 1000) / samples))
#define US_TO_SAMPLES(rate, us) \
(rate / (1000000 / (us < 1000000 ? us : 1000000)))
#define UTHR_FROM_PERIOD_SIZE(samples, playrate, burstrate) \
((samples * 5000) / ((burstrate * 5000) / (burstrate - playrate)))
static void dac33_calculate_times(struct snd_pcm_substream *substream);
static int dac33_prepare_chip(struct snd_pcm_substream *substream);
enum dac33_state ;
enum dac33_fifo_modes ;
#define DAC33_NUM_SUPPLIES 3
static const char *dac33_supply_names[DAC33_NUM_SUPPLIES] = ;
struct tlv320dac33_priv ;
static const u8 dac33_reg[DAC33_CACHEREGNUM] = ;
static inline unsigned int dac33_read_reg_cache(struct snd_soc_codec *codec,
unsigned reg)
static inline void dac33_write_reg_cache(struct snd_soc_codec *codec,
u8 reg, u8 value)
static int dac33_read(struct snd_soc_codec *codec, unsigned int reg,
u8 *value)
static int dac33_write(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static int dac33_write_locked(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
#define DAC33_I2C_ADDR_AUTOINC	0x80
static int dac33_write16(struct snd_soc_codec *codec, unsigned int reg,
unsigned int value)
static void dac33_init_chip(struct snd_soc_codec *codec)
static inline int dac33_read_id(struct snd_soc_codec *codec)
static inline void dac33_soft_power(struct snd_soc_codec *codec, int power)
static inline void dac33_disable_digital(struct snd_soc_codec *codec)
static int dac33_hard_power(struct snd_soc_codec *codec, int power)
static int dac33_playback_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int dac33_get_fifo_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int dac33_set_fifo_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static const char *dac33_fifo_mode_texts[] = ;
static const struct soc_enum dac33_fifo_mode_enum =
SOC_ENUM_SINGLE_EXT(ARRAY_SIZE(dac33_fifo_mode_texts),
dac33_fifo_mode_texts);
static const char *lr_lineout_gain_texts[] = ;
static const struct soc_enum l_lineout_gain_enum =
SOC_ENUM_SINGLE(DAC33_LDAC_PWR_CTRL, 0,
ARRAY_SIZE(lr_lineout_gain_texts),
lr_lineout_gain_texts);
static const struct soc_enum r_lineout_gain_enum =
SOC_ENUM_SINGLE(DAC33_RDAC_PWR_CTRL, 0,
ARRAY_SIZE(lr_lineout_gain_texts),
lr_lineout_gain_texts);
static DECLARE_TLV_DB_SCALE(dac_digivol_tlv, -6350, 50, 0);
static const struct snd_kcontrol_new dac33_snd_controls[] = ;
static const struct snd_kcontrol_new dac33_mode_snd_controls[] = ;
static const struct snd_kcontrol_new dac33_dapm_abypassl_control =
SOC_DAPM_SINGLE("Switch", DAC33_LINEL_TO_LLO_VOL, 7, 1, 1);
static const struct snd_kcontrol_new dac33_dapm_abypassr_control =
SOC_DAPM_SINGLE("Switch", DAC33_LINER_TO_RLO_VOL, 7, 1, 1);
static const char *dac33_lr_lom_texts[] = ;
static const struct soc_enum dac33_left_lom_enum =
SOC_ENUM_SINGLE(DAC33_OUT_AMP_CTRL, 3,
ARRAY_SIZE(dac33_lr_lom_texts),
dac33_lr_lom_texts);
static const struct snd_kcontrol_new dac33_dapm_left_lom_control =
SOC_DAPM_ENUM("Route", dac33_left_lom_enum);
static const struct soc_enum dac33_right_lom_enum =
SOC_ENUM_SINGLE(DAC33_OUT_AMP_CTRL, 2,
ARRAY_SIZE(dac33_lr_lom_texts),
dac33_lr_lom_texts);
static const struct snd_kcontrol_new dac33_dapm_right_lom_control =
SOC_DAPM_ENUM("Route", dac33_right_lom_enum);
static const struct snd_soc_dapm_widget dac33_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int dac33_add_widgets(struct snd_soc_codec *codec)
static int dac33_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static inline void dac33_prefill_handler(struct tlv320dac33_priv *dac33)
static inline void dac33_playback_handler(struct tlv320dac33_priv *dac33)
static void dac33_work(struct work_struct *work)
static irqreturn_t dac33_interrupt_handler(int irq, void *dev)
static void dac33_oscwait(struct snd_soc_codec *codec)
static int dac33_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void dac33_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
#define CALC_BURST_RATE(bclkdiv, bclk_per_sample) \
(BURST_BASEFREQ_HZ / bclkdiv / bclk_per_sample)
static int dac33_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
#define CALC_OSCSET(rate, refclk) ( \
((((rate * 10000) / refclk) * 4096) + 7000) / 10000)
#define CALC_RATIOSET(rate, refclk) ( \
((((refclk  * 100000) / rate) * 16384) + 50000) / 100000)
static int dac33_prepare_chip(struct snd_pcm_substream *substream)
static void dac33_calculate_times(struct snd_pcm_substream *substream)
static int dac33_pcm_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static snd_pcm_sframes_t dac33_dai_delay(
struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int dac33_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static int dac33_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int dac33_soc_probe(struct snd_soc_codec *codec)
static int dac33_soc_remove(struct snd_soc_codec *codec)
static int dac33_soc_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int dac33_soc_resume(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_tlv320dac33 = ;
#define DAC33_RATES	(SNDRV_PCM_RATE_44100 | \
SNDRV_PCM_RATE_48000)
#define DAC33_FORMATS	(SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops dac33_dai_ops = ;
static struct snd_soc_dai_driver dac33_dai = ;
static int __devinit dac33_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit dac33_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id tlv320dac33_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, tlv320dac33_i2c_id);
static struct i2c_driver tlv320dac33_i2c_driver = ;
static int __init dac33_module_init(void)
module_init(dac33_module_init);
static void __exit dac33_module_exit(void)
module_exit(dac33_module_exit);
MODULE_DESCRIPTION("ASoC TLV320DAC33 codec driver");
MODULE_AUTHOR("Peter Ujfalusi <peter.ujfalusi@ti.com>");
MODULE_LICENSE("GPL");
