#define TWL6040_RATES		SNDRV_PCM_RATE_8000_96000
#define TWL6040_FORMATS	(SNDRV_PCM_FMTBIT_S32_LE)
#define TWL6040_OUTHS_0dB 0x00
#define TWL6040_OUTHS_M30dB 0x0F
#define TWL6040_OUTHF_0dB 0x03
#define TWL6040_OUTHF_M52dB 0x1D
#define TWL6040_RAMP_NONE	0
#define TWL6040_RAMP_UP		1
#define TWL6040_RAMP_DOWN	2
#define TWL6040_HSL_VOL_MASK	0x0F
#define TWL6040_HSL_VOL_SHIFT	0
#define TWL6040_HSR_VOL_MASK	0xF0
#define TWL6040_HSR_VOL_SHIFT	4
#define TWL6040_HF_VOL_MASK	0x1F
#define TWL6040_HF_VOL_SHIFT	0
struct twl6040_output ;
struct twl6040_jack_data ;
struct twl6040_data ;
static const u8 twl6040_reg[TWL6040_CACHEREGNUM] = ;
static const int twl6040_vio_reg[TWL6040_VIOREGNUM] = ;
static const int twl6040_vdd_reg[TWL6040_VDDREGNUM] = ;
static inline unsigned int twl6040_read_reg_cache(struct snd_soc_codec *codec,
unsigned int reg)
static inline void twl6040_write_reg_cache(struct snd_soc_codec *codec,
u8 reg, u8 value)
static int twl6040_read_reg_volatile(struct snd_soc_codec *codec,
unsigned int reg)
static int twl6040_write(struct snd_soc_codec *codec,
unsigned int reg, unsigned int value)
static void twl6040_init_vio_regs(struct snd_soc_codec *codec)
static void twl6040_init_vdd_regs(struct snd_soc_codec *codec)
static inline int twl6040_hs_ramp_step(struct snd_soc_codec *codec,
unsigned int left_step, unsigned int right_step)
static inline int twl6040_hf_ramp_step(struct snd_soc_codec *codec,
unsigned int left_step, unsigned int right_step)
static void twl6040_pga_hs_work(struct work_struct *work)
static void twl6040_pga_hf_work(struct work_struct *work)
static int pga_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static void twl6040_power_up(struct snd_soc_codec *codec)
static void twl6040_power_down(struct snd_soc_codec *codec)
static int headset_power_mode(struct snd_soc_codec *codec, int high_perf)
static int twl6040_hs_dac_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static int twl6040_power_mode_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static void twl6040_hs_jack_report(struct snd_soc_codec *codec,
struct snd_soc_jack *jack, int report)
void twl6040_hs_jack_detect(struct snd_soc_codec *codec,
struct snd_soc_jack *jack, int report)
EXPORT_SYMBOL_GPL(twl6040_hs_jack_detect);
static void twl6040_accessory_work(struct work_struct *work)
static irqreturn_t twl6040_naudint_handler(int irq, void *data)
static int twl6040_put_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int twl6040_get_volsw(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int twl6040_put_volsw_2r_vu(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int twl6040_get_volsw_2r(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define SOC_TWL6040_DOUBLE_TLV(xname, xreg, shift_left, shift_right, xmax,\
xinvert, tlv_array)\
#define SOC_TWL6040_DOUBLE_R_TLV(xname, reg_left, reg_right, xshift, xmax,\
xinvert, tlv_array)\
static DECLARE_TLV_DB_SCALE(mic_preamp_tlv, -600, 600, 0);
static DECLARE_TLV_DB_SCALE(mic_amp_tlv, -600, 600, 0);
static DECLARE_TLV_DB_SCALE(afm_amp_tlv, -1800, 600, 0);
static DECLARE_TLV_DB_SCALE(hs_tlv, -3000, 200, 0);
static DECLARE_TLV_DB_SCALE(hf_tlv, -5200, 200, 0);
static DECLARE_TLV_DB_SCALE(ep_tlv, -2400, 200, 0);
static const char *twl6040_amicl_texts[] =
;
static const char *twl6040_amicr_texts[] =
;
static const struct soc_enum twl6040_enum[] = ;
static const char *twl6040_hs_texts[] = ;
static const struct soc_enum twl6040_hs_enum[] = ;
static const char *twl6040_hf_texts[] = ;
static const struct soc_enum twl6040_hf_enum[] = ;
static const struct snd_kcontrol_new amicl_control =
SOC_DAPM_ENUM("Route", twl6040_enum[0]);
static const struct snd_kcontrol_new amicr_control =
SOC_DAPM_ENUM("Route", twl6040_enum[1]);
static const struct snd_kcontrol_new hsl_mux_controls =
SOC_DAPM_ENUM("Route", twl6040_hs_enum[0]);
static const struct snd_kcontrol_new hsr_mux_controls =
SOC_DAPM_ENUM("Route", twl6040_hs_enum[1]);
static const struct snd_kcontrol_new hfl_mux_controls =
SOC_DAPM_ENUM("Route", twl6040_hf_enum[0]);
static const struct snd_kcontrol_new hfr_mux_controls =
SOC_DAPM_ENUM("Route", twl6040_hf_enum[1]);
static const struct snd_kcontrol_new ep_driver_switch_controls =
SOC_DAPM_SINGLE("Switch", TWL6040_REG_EARCTL, 0, 1, 0);
static const struct snd_kcontrol_new twl6040_snd_controls[] = ;
static const struct snd_soc_dapm_widget twl6040_dapm_widgets[] = ;
static const struct snd_soc_dapm_route intercon[] = ;
static int twl6040_add_widgets(struct snd_soc_codec *codec)
static int twl6040_power_up_completion(struct snd_soc_codec *codec,
int naudint)
static int twl6040_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static unsigned int lp_rates[] = ;
static struct snd_pcm_hw_constraint_list lp_constraints = ;
static unsigned int hp_rates[] = ;
static struct snd_pcm_hw_constraint_list hp_constraints = ;
static int twl6040_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int twl6040_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int twl6040_prepare(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int twl6040_set_dai_sysclk(struct snd_soc_dai *codec_dai,
int clk_id, unsigned int freq, int dir)
static struct snd_soc_dai_ops twl6040_dai_ops = ;
static struct snd_soc_dai_driver twl6040_dai = ;
static int twl6040_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int twl6040_resume(struct snd_soc_codec *codec)
#define twl6040_suspend NULL
#define twl6040_resume NULL
static int twl6040_probe(struct snd_soc_codec *codec)
static int twl6040_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_twl6040 = ;
static int __devinit twl6040_codec_probe(struct platform_device *pdev)
static int __devexit twl6040_codec_remove(struct platform_device *pdev)
static struct platform_driver twl6040_codec_driver = ;
static int __init twl6040_codec_init(void)
module_init(twl6040_codec_init);
static void __exit twl6040_codec_exit(void)
module_exit(twl6040_codec_exit);
MODULE_DESCRIPTION("ASoC TWL6040 codec driver");
MODULE_AUTHOR("Misael Lopez Cruz");
MODULE_LICENSE("GPL");
