#define __LINUX_SND_SOC_DAI_H
struct snd_pcm_substream;
#define SND_SOC_DAIFMT_I2S		0
#define SND_SOC_DAIFMT_RIGHT_J		1
#define SND_SOC_DAIFMT_LEFT_J		2
#define SND_SOC_DAIFMT_DSP_A		3
#define SND_SOC_DAIFMT_DSP_B		4
#define SND_SOC_DAIFMT_AC97		5
#define SND_SOC_DAIFMT_PDM		6
#define SND_SOC_DAIFMT_MSB		SND_SOC_DAIFMT_LEFT_J
#define SND_SOC_DAIFMT_LSB		SND_SOC_DAIFMT_RIGHT_J
#define SND_SOC_DAIFMT_CONT		(0 << 4)
#define SND_SOC_DAIFMT_GATED		(1 << 4)
#define SND_SOC_DAIFMT_NB_NF		(0 << 8)
#define SND_SOC_DAIFMT_NB_IF		(1 << 8)
#define SND_SOC_DAIFMT_IB_NF		(2 << 8)
#define SND_SOC_DAIFMT_IB_IF		(3 << 8)
#define SND_SOC_DAIFMT_CBM_CFM		(0 << 12)
#define SND_SOC_DAIFMT_CBS_CFM		(1 << 12)
#define SND_SOC_DAIFMT_CBM_CFS		(2 << 12)
#define SND_SOC_DAIFMT_CBS_CFS		(3 << 12)
#define SND_SOC_DAIFMT_FORMAT_MASK	0x000f
#define SND_SOC_DAIFMT_CLOCK_MASK	0x00f0
#define SND_SOC_DAIFMT_INV_MASK		0x0f00
#define SND_SOC_DAIFMT_MASTER_MASK	0xf000
#define SND_SOC_CLOCK_IN		0
#define SND_SOC_CLOCK_OUT		1
#define SND_SOC_STD_AC97_FMTS (SNDRV_PCM_FMTBIT_S8 |\
SNDRV_PCM_FMTBIT_S16_LE |\
SNDRV_PCM_FMTBIT_S16_BE |\
SNDRV_PCM_FMTBIT_S20_3LE |\
SNDRV_PCM_FMTBIT_S20_3BE |\
SNDRV_PCM_FMTBIT_S24_3LE |\
SNDRV_PCM_FMTBIT_S24_3BE |\
SNDRV_PCM_FMTBIT_S32_LE |\
SNDRV_PCM_FMTBIT_S32_BE)
struct snd_soc_dai_driver;
struct snd_soc_dai;
struct snd_ac97_bus_ops;
int snd_soc_register_dai(struct device *dev,
struct snd_soc_dai_driver *dai_drv);
void snd_soc_unregister_dai(struct device *dev);
int snd_soc_register_dais(struct device *dev,
struct snd_soc_dai_driver *dai_drv, size_t count);
void snd_soc_unregister_dais(struct device *dev, size_t count);
int snd_soc_dai_set_sysclk(struct snd_soc_dai *dai, int clk_id,
unsigned int freq, int dir);
int snd_soc_dai_set_clkdiv(struct snd_soc_dai *dai,
int div_id, int div);
int snd_soc_dai_set_pll(struct snd_soc_dai *dai,
int pll_id, int source, unsigned int freq_in, unsigned int freq_out);
int snd_soc_dai_set_fmt(struct snd_soc_dai *dai, unsigned int fmt);
int snd_soc_dai_set_tdm_slot(struct snd_soc_dai *dai,
unsigned int tx_mask, unsigned int rx_mask, int slots, int slot_width);
int snd_soc_dai_set_channel_map(struct snd_soc_dai *dai,
unsigned int tx_num, unsigned int *tx_slot,
unsigned int rx_num, unsigned int *rx_slot);
int snd_soc_dai_set_tristate(struct snd_soc_dai *dai, int tristate);
int snd_soc_dai_digital_mute(struct snd_soc_dai *dai, int mute);
struct snd_soc_dai_ops ;
struct snd_soc_dai_driver ;
struct snd_soc_dai ;
static inline void *snd_soc_dai_get_dma_data(const struct snd_soc_dai *dai,
const struct snd_pcm_substream *ss)
static inline void snd_soc_dai_set_dma_data(struct snd_soc_dai *dai,
const struct snd_pcm_substream *ss,
void *data)
static inline void snd_soc_dai_set_drvdata(struct snd_soc_dai *dai,
void *data)
static inline void *snd_soc_dai_get_drvdata(struct snd_soc_dai *dai)
