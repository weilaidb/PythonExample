#define WM8900_REG_RESET	0x0
#define WM8900_REG_ID		0x0
#define WM8900_REG_POWER1	0x1
#define WM8900_REG_POWER2	0x2
#define WM8900_REG_POWER3	0x3
#define WM8900_REG_AUDIO1	0x4
#define WM8900_REG_AUDIO2	0x5
#define WM8900_REG_CLOCKING1    0x6
#define WM8900_REG_CLOCKING2    0x7
#define WM8900_REG_AUDIO3       0x8
#define WM8900_REG_AUDIO4       0x9
#define WM8900_REG_DACCTRL      0xa
#define WM8900_REG_LDAC_DV      0xb
#define WM8900_REG_RDAC_DV      0xc
#define WM8900_REG_SIDETONE     0xd
#define WM8900_REG_ADCCTRL      0xe
#define WM8900_REG_LADC_DV	0xf
#define WM8900_REG_RADC_DV      0x10
#define WM8900_REG_GPIO         0x12
#define WM8900_REG_INCTL	0x15
#define WM8900_REG_LINVOL	0x16
#define WM8900_REG_RINVOL	0x17
#define WM8900_REG_INBOOSTMIX1  0x18
#define WM8900_REG_INBOOSTMIX2  0x19
#define WM8900_REG_ADCPATH	0x1a
#define WM8900_REG_AUXBOOST	0x1b
#define WM8900_REG_ADDCTL       0x1e
#define WM8900_REG_FLLCTL1      0x24
#define WM8900_REG_FLLCTL2      0x25
#define WM8900_REG_FLLCTL3      0x26
#define WM8900_REG_FLLCTL4      0x27
#define WM8900_REG_FLLCTL5      0x28
#define WM8900_REG_FLLCTL6      0x29
#define WM8900_REG_LOUTMIXCTL1  0x2c
#define WM8900_REG_ROUTMIXCTL1  0x2d
#define WM8900_REG_BYPASS1	0x2e
#define WM8900_REG_BYPASS2	0x2f
#define WM8900_REG_AUXOUT_CTL   0x30
#define WM8900_REG_LOUT1CTL     0x33
#define WM8900_REG_ROUT1CTL     0x34
#define WM8900_REG_LOUT2CTL	0x35
#define WM8900_REG_ROUT2CTL	0x36
#define WM8900_REG_HPCTL1	0x3a
#define WM8900_REG_OUTBIASCTL   0x73
#define WM8900_MAXREG		0x80
#define WM8900_REG_ADDCTL_OUT1_DIS    0x80
#define WM8900_REG_ADDCTL_OUT2_DIS    0x40
#define WM8900_REG_ADDCTL_VMID_DIS    0x20
#define WM8900_REG_ADDCTL_BIAS_SRC    0x10
#define WM8900_REG_ADDCTL_VMID_SOFTST 0x04
#define WM8900_REG_ADDCTL_TEMP_SD     0x02
#define WM8900_REG_GPIO_TEMP_ENA   0x2
#define WM8900_REG_POWER1_STARTUP_BIAS_ENA 0x0100
#define WM8900_REG_POWER1_BIAS_ENA         0x0008
#define WM8900_REG_POWER1_VMID_BUF_ENA     0x0004
#define WM8900_REG_POWER1_FLL_ENA          0x0040
#define WM8900_REG_POWER2_SYSCLK_ENA  0x8000
#define WM8900_REG_POWER2_ADCL_ENA    0x0002
#define WM8900_REG_POWER2_ADCR_ENA    0x0001
#define WM8900_REG_POWER3_DACL_ENA    0x0002
#define WM8900_REG_POWER3_DACR_ENA    0x0001
#define WM8900_REG_AUDIO1_AIF_FMT_MASK 0x0018
#define WM8900_REG_AUDIO1_LRCLK_INV    0x0080
#define WM8900_REG_AUDIO1_BCLK_INV     0x0100
#define WM8900_REG_CLOCKING1_BCLK_DIR   0x1
#define WM8900_REG_CLOCKING1_MCLK_SRC   0x100
#define WM8900_REG_CLOCKING1_BCLK_MASK  (~0x01e)
#define WM8900_REG_CLOCKING1_OPCLK_MASK (~0x7000)
#define WM8900_REG_CLOCKING2_ADC_CLKDIV 0xe0
#define WM8900_REG_CLOCKING2_DAC_CLKDIV 0x1c
#define WM8900_REG_DACCTRL_MUTE          0x004
#define WM8900_REG_DACCTRL_DAC_SB_FILT   0x100
#define WM8900_REG_DACCTRL_AIF_LRCLKRATE 0x400
#define WM8900_REG_AUDIO3_ADCLRC_DIR    0x0800
#define WM8900_REG_AUDIO4_DACLRC_DIR    0x0800
#define WM8900_REG_FLLCTL1_OSC_ENA    0x100
#define WM8900_REG_FLLCTL6_FLL_SLOW_LOCK_REF 0x100
#define WM8900_REG_HPCTL1_HP_IPSTAGE_ENA 0x80
#define WM8900_REG_HPCTL1_HP_OPSTAGE_ENA 0x40
#define WM8900_REG_HPCTL1_HP_CLAMP_IP    0x20
#define WM8900_REG_HPCTL1_HP_CLAMP_OP    0x10
#define WM8900_REG_HPCTL1_HP_SHORT       0x08
#define WM8900_REG_HPCTL1_HP_SHORT2      0x04
#define WM8900_LRC_MASK 0xfc00
struct wm8900_priv ;
static const u16 wm8900_reg_defaults[WM8900_MAXREG] = ;
static int wm8900_volatile_register(struct snd_soc_codec *codec, unsigned int reg)
static void wm8900_reset(struct snd_soc_codec *codec)
static int wm8900_hp_event(struct snd_soc_dapm_widget *w,
struct snd_kcontrol *kcontrol, int event)
static const DECLARE_TLV_DB_SCALE(out_pga_tlv, -5700, 100, 0);
static const DECLARE_TLV_DB_SCALE(out_mix_tlv, -1500, 300, 0);
static const DECLARE_TLV_DB_SCALE(in_boost_tlv, -1200, 600, 0);
static const DECLARE_TLV_DB_SCALE(in_pga_tlv, -1200, 100, 0);
static const DECLARE_TLV_DB_SCALE(dac_boost_tlv, 0, 600, 0);
static const DECLARE_TLV_DB_SCALE(dac_tlv, -7200, 75, 1);
static const DECLARE_TLV_DB_SCALE(adc_svol_tlv, -3600, 300, 0);
static const DECLARE_TLV_DB_SCALE(adc_tlv, -7200, 75, 1);
static const char *mic_bias_level_txt[] = ;
static const struct soc_enum mic_bias_level =
SOC_ENUM_SINGLE(WM8900_REG_INCTL, 8, 2, mic_bias_level_txt);
static const char *dac_mute_rate_txt[] = ;
static const struct soc_enum dac_mute_rate =
SOC_ENUM_SINGLE(WM8900_REG_DACCTRL, 7, 2, dac_mute_rate_txt);
static const char *dac_deemphasis_txt[] = ;
static const struct soc_enum dac_deemphasis =
SOC_ENUM_SINGLE(WM8900_REG_DACCTRL, 4, 4, dac_deemphasis_txt);
static const char *adc_hpf_cut_txt[] = ;
static const struct soc_enum adc_hpf_cut =
SOC_ENUM_SINGLE(WM8900_REG_ADCCTRL, 5, 4, adc_hpf_cut_txt);
static const char *lr_txt[] = ;
static const struct soc_enum aifl_src =
SOC_ENUM_SINGLE(WM8900_REG_AUDIO1, 15, 2, lr_txt);
static const struct soc_enum aifr_src =
SOC_ENUM_SINGLE(WM8900_REG_AUDIO1, 14, 2, lr_txt);
static const struct soc_enum dacl_src =
SOC_ENUM_SINGLE(WM8900_REG_AUDIO2, 15, 2, lr_txt);
static const struct soc_enum dacr_src =
SOC_ENUM_SINGLE(WM8900_REG_AUDIO2, 14, 2, lr_txt);
static const char *sidetone_txt[] = ;
static const struct soc_enum dacl_sidetone =
SOC_ENUM_SINGLE(WM8900_REG_SIDETONE, 2, 3, sidetone_txt);
static const struct soc_enum dacr_sidetone =
SOC_ENUM_SINGLE(WM8900_REG_SIDETONE, 0, 3, sidetone_txt);
static const struct snd_kcontrol_new wm8900_snd_controls[] = ;
static const struct snd_kcontrol_new wm8900_dapm_loutput2_control =
SOC_DAPM_SINGLE("LINEOUT2L Switch", WM8900_REG_POWER3, 6, 1, 0);
static const struct snd_kcontrol_new wm8900_dapm_routput2_control =
SOC_DAPM_SINGLE("LINEOUT2R Switch", WM8900_REG_POWER3, 5, 1, 0);
static const struct snd_kcontrol_new wm8900_loutmix_controls[] = ;
static const struct snd_kcontrol_new wm8900_routmix_controls[] = ;
static const struct snd_kcontrol_new wm8900_linmix_controls[] = ;
static const struct snd_kcontrol_new wm8900_rinmix_controls[] = ;
static const struct snd_kcontrol_new wm8900_linpga_controls[] = ;
static const struct snd_kcontrol_new wm8900_rinpga_controls[] = ;
static const char *wm9700_lp_mux[] = ;
static const struct soc_enum wm8900_lineout2_lp_mux =
SOC_ENUM_SINGLE(WM8900_REG_LOUTMIXCTL1, 1, 2, wm9700_lp_mux);
static const struct snd_kcontrol_new wm8900_lineout2_lp =
SOC_DAPM_ENUM("Route", wm8900_lineout2_lp_mux);
static const struct snd_soc_dapm_widget wm8900_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int wm8900_add_widgets(struct snd_soc_codec *codec)
static int wm8900_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
struct _fll_div ;
#define FIXED_FLL_SIZE ((1 << 16) * 10)
static int fll_factors(struct _fll_div *fll_div, unsigned int Fref,
unsigned int Fout)
static int wm8900_set_fll(struct snd_soc_codec *codec,
int fll_id, unsigned int freq_in, unsigned int freq_out)
static int wm8900_set_dai_pll(struct snd_soc_dai *codec_dai, int pll_id,
int source, unsigned int freq_in, unsigned int freq_out)
static int wm8900_set_dai_clkdiv(struct snd_soc_dai *codec_dai,
int div_id, int div)
static int wm8900_set_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8900_digital_mute(struct snd_soc_dai *codec_dai, int mute)
#define WM8900_RATES (SNDRV_PCM_RATE_8000 | SNDRV_PCM_RATE_11025 |\
SNDRV_PCM_RATE_16000 | SNDRV_PCM_RATE_22050 |\
SNDRV_PCM_RATE_44100 | SNDRV_PCM_RATE_48000)
#define WM8900_PCM_FORMATS \
(SNDRV_PCM_FORMAT_S16_LE | SNDRV_PCM_FORMAT_S20_3LE | \
SNDRV_PCM_FORMAT_S24_LE)
static struct snd_soc_dai_ops wm8900_dai_ops = ;
static struct snd_soc_dai_driver wm8900_dai = ;
static int wm8900_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
static int wm8900_suspend(struct snd_soc_codec *codec, pm_message_t state)
static int wm8900_resume(struct snd_soc_codec *codec)
static int wm8900_probe(struct snd_soc_codec *codec)
static int wm8900_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8900 = ;
#if defined(CONFIG_SPI_MASTER)
static int __devinit wm8900_spi_probe(struct spi_device *spi)
static int __devexit wm8900_spi_remove(struct spi_device *spi)
static struct spi_driver wm8900_spi_driver = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static __devinit int wm8900_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static __devexit int wm8900_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8900_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8900_i2c_id);
static struct i2c_driver wm8900_i2c_driver = ;
static int __init wm8900_modinit(void)
module_init(wm8900_modinit);
static void __exit wm8900_exit(void)
module_exit(wm8900_exit);
MODULE_DESCRIPTION("ASoC WM8900 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfonmicro.com>");
MODULE_LICENSE("GPL");
