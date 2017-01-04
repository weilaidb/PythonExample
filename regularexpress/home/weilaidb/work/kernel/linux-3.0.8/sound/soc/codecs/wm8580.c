#define WM8580_PLLA1                         0x00
#define WM8580_PLLA2                         0x01
#define WM8580_PLLA3                         0x02
#define WM8580_PLLA4                         0x03
#define WM8580_PLLB1                         0x04
#define WM8580_PLLB2                         0x05
#define WM8580_PLLB3                         0x06
#define WM8580_PLLB4                         0x07
#define WM8580_CLKSEL                        0x08
#define WM8580_PAIF1                         0x09
#define WM8580_PAIF2                         0x0A
#define WM8580_SAIF1                         0x0B
#define WM8580_PAIF3                         0x0C
#define WM8580_PAIF4                         0x0D
#define WM8580_SAIF2                         0x0E
#define WM8580_DAC_CONTROL1                  0x0F
#define WM8580_DAC_CONTROL2                  0x10
#define WM8580_DAC_CONTROL3                  0x11
#define WM8580_DAC_CONTROL4                  0x12
#define WM8580_DAC_CONTROL5                  0x13
#define WM8580_DIGITAL_ATTENUATION_DACL1     0x14
#define WM8580_DIGITAL_ATTENUATION_DACR1     0x15
#define WM8580_DIGITAL_ATTENUATION_DACL2     0x16
#define WM8580_DIGITAL_ATTENUATION_DACR2     0x17
#define WM8580_DIGITAL_ATTENUATION_DACL3     0x18
#define WM8580_DIGITAL_ATTENUATION_DACR3     0x19
#define WM8580_MASTER_DIGITAL_ATTENUATION    0x1C
#define WM8580_ADC_CONTROL1                  0x1D
#define WM8580_SPDTXCHAN0                    0x1E
#define WM8580_SPDTXCHAN1                    0x1F
#define WM8580_SPDTXCHAN2                    0x20
#define WM8580_SPDTXCHAN3                    0x21
#define WM8580_SPDTXCHAN4                    0x22
#define WM8580_SPDTXCHAN5                    0x23
#define WM8580_SPDMODE                       0x24
#define WM8580_INTMASK                       0x25
#define WM8580_GPO1                          0x26
#define WM8580_GPO2                          0x27
#define WM8580_GPO3                          0x28
#define WM8580_GPO4                          0x29
#define WM8580_GPO5                          0x2A
#define WM8580_INTSTAT                       0x2B
#define WM8580_SPDRXCHAN1                    0x2C
#define WM8580_SPDRXCHAN2                    0x2D
#define WM8580_SPDRXCHAN3                    0x2E
#define WM8580_SPDRXCHAN4                    0x2F
#define WM8580_SPDRXCHAN5                    0x30
#define WM8580_SPDSTAT                       0x31
#define WM8580_PWRDN1                        0x32
#define WM8580_PWRDN2                        0x33
#define WM8580_READBACK                      0x34
#define WM8580_RESET                         0x35
#define WM8580_MAX_REGISTER                  0x35
#define WM8580_DACOSR 0x40
#define WM8580_PLLB4_MCLKOUTSRC_MASK   0x60
#define WM8580_PLLB4_MCLKOUTSRC_PLLA   0x20
#define WM8580_PLLB4_MCLKOUTSRC_PLLB   0x40
#define WM8580_PLLB4_MCLKOUTSRC_OSC    0x60
#define WM8580_PLLB4_CLKOUTSRC_MASK    0x180
#define WM8580_PLLB4_CLKOUTSRC_PLLACLK 0x080
#define WM8580_PLLB4_CLKOUTSRC_PLLBCLK 0x100
#define WM8580_PLLB4_CLKOUTSRC_OSCCLK  0x180
#define WM8580_CLKSEL_DAC_CLKSEL_MASK 0x03
#define WM8580_CLKSEL_DAC_CLKSEL_PLLA 0x01
#define WM8580_CLKSEL_DAC_CLKSEL_PLLB 0x02
#define WM8580_AIF_RATE_MASK       0x7
#define WM8580_AIF_BCLKSEL_MASK   0x18
#define WM8580_AIF_MS             0x20
#define WM8580_AIF_CLKSRC_MASK    0xc0
#define WM8580_AIF_CLKSRC_PLLA    0x40
#define WM8580_AIF_CLKSRC_PLLB    0x40
#define WM8580_AIF_CLKSRC_MCLK    0xc0
#define WM8580_AIF_FMT_MASK    0x03
#define WM8580_AIF_FMT_RIGHTJ  0x00
#define WM8580_AIF_FMT_LEFTJ   0x01
#define WM8580_AIF_FMT_I2S     0x02
#define WM8580_AIF_FMT_DSP     0x03
#define WM8580_AIF_LENGTH_MASK   0x0c
#define WM8580_AIF_LENGTH_16     0x00
#define WM8580_AIF_LENGTH_20     0x04
#define WM8580_AIF_LENGTH_24     0x08
#define WM8580_AIF_LENGTH_32     0x0c
#define WM8580_AIF_LRP         0x10
#define WM8580_AIF_BCP         0x20
#define WM8580_PWRDN1_PWDN     0x001
#define WM8580_PWRDN1_ALLDACPD 0x040
#define WM8580_PWRDN2_OSSCPD   0x001
#define WM8580_PWRDN2_PLLAPD   0x002
#define WM8580_PWRDN2_PLLBPD   0x004
#define WM8580_PWRDN2_SPDIFPD  0x008
#define WM8580_PWRDN2_SPDIFTXD 0x010
#define WM8580_PWRDN2_SPDIFRXD 0x020
#define WM8580_DAC_CONTROL5_MUTEALL 0x10
static const u16 wm8580_reg[] = ;
struct pll_state ;
#define WM8580_NUM_SUPPLIES 3
static const char *wm8580_supply_names[WM8580_NUM_SUPPLIES] = ;
struct wm8580_priv ;
static const DECLARE_TLV_DB_SCALE(dac_tlv, -12750, 50, 1);
static int wm8580_out_vu(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define SOC_WM8580_OUT_DOUBLE_R_TLV(xname, reg_left, reg_right, xshift, xmax, \
xinvert, tlv_array)			\
static const struct snd_kcontrol_new wm8580_snd_controls[] = ;
static const struct snd_soc_dapm_widget wm8580_dapm_widgets[] = ;
static const struct snd_soc_dapm_route audio_map[] = ;
static int wm8580_add_widgets(struct snd_soc_codec *codec)
struct _pll_div ;
#define FIXED_PLL_SIZE (1 << 22)
static struct  post_table[] = ;
static int pll_factors(struct _pll_div *pll_div, unsigned int target,
unsigned int source)
static int wm8580_set_dai_pll(struct snd_soc_dai *codec_dai, int pll_id,
int source, unsigned int freq_in, unsigned int freq_out)
static const int wm8580_sysclk_ratios[] = ;
static int wm8580_paif_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int wm8580_set_paif_dai_fmt(struct snd_soc_dai *codec_dai,
unsigned int fmt)
static int wm8580_set_dai_clkdiv(struct snd_soc_dai *codec_dai,
int div_id, int div)
static int wm8580_set_sysclk(struct snd_soc_dai *dai, int clk_id,
unsigned int freq, int dir)
static int wm8580_digital_mute(struct snd_soc_dai *codec_dai, int mute)
static int wm8580_set_bias_level(struct snd_soc_codec *codec,
enum snd_soc_bias_level level)
#define WM8580_FORMATS (SNDRV_PCM_FMTBIT_S16_LE | SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S24_LE | SNDRV_PCM_FMTBIT_S32_LE)
static struct snd_soc_dai_ops wm8580_dai_ops_playback = ;
static struct snd_soc_dai_ops wm8580_dai_ops_capture = ;
static struct snd_soc_dai_driver wm8580_dai[] = ;
static int wm8580_probe(struct snd_soc_codec *codec)
static int wm8580_remove(struct snd_soc_codec *codec)
static struct snd_soc_codec_driver soc_codec_dev_wm8580 = ;
#if defined(CONFIG_I2C) || defined(CONFIG_I2C_MODULE)
static int wm8580_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int wm8580_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id wm8580_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, wm8580_i2c_id);
static struct i2c_driver wm8580_i2c_driver = ;
static int __init wm8580_modinit(void)
module_init(wm8580_modinit);
static void __exit wm8580_exit(void)
module_exit(wm8580_exit);
MODULE_DESCRIPTION("ASoC WM8580 driver");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_LICENSE("GPL");
