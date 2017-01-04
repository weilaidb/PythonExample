#define SSICR	0x00
#define SSISR	0x04
#define CR_DMAEN	(1 << 28)
#define CR_CHNL_SHIFT	22
#define CR_CHNL_MASK	(3 << CR_CHNL_SHIFT)
#define CR_DWL_SHIFT	19
#define CR_DWL_MASK	(7 << CR_DWL_SHIFT)
#define CR_SWL_SHIFT	16
#define CR_SWL_MASK	(7 << CR_SWL_SHIFT)
#define CR_SCK_MASTER	(1 << 15)
#define CR_SWS_MASTER	(1 << 14)
#define CR_SCKP		(1 << 13)
#define CR_SWSP		(1 << 12)
#define CR_SPDP		(1 << 11)
#define CR_SDTA		(1 << 10)
#define CR_PDTA		(1 << 9)
#define CR_DEL		(1 << 8)
#define CR_BREN		(1 << 7)
#define CR_CKDIV_SHIFT	4
#define CR_CKDIV_MASK	(7 << CR_CKDIV_SHIFT)
#define CR_MUTE		(1 << 3)
#define CR_CPEN		(1 << 2)
#define CR_TRMD		(1 << 1)
#define CR_EN		(1 << 0)
#define SSIREG(reg)	(*(unsigned long *)(ssi->mmio + (reg)))
struct ssi_priv  ssi_cpu_data[] = ;
static int ssi_startup(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static void ssi_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int ssi_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int ssi_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static int ssi_set_sysclk(struct snd_soc_dai *cpu_dai, int clk_id,
unsigned int freq, int dir)
static int ssi_set_clkdiv(struct snd_soc_dai *dai, int did, int div)
static int ssi_set_fmt(struct snd_soc_dai *dai, unsigned int fmt)
#define SSI_RATES	\
SNDRV_PCM_RATE_8000_192000
#define SSI_FMTS	\
(SNDRV_PCM_FMTBIT_S8      | SNDRV_PCM_FMTBIT_U8      |	\
SNDRV_PCM_FMTBIT_S16_LE  | SNDRV_PCM_FMTBIT_U16_LE  |	\
SNDRV_PCM_FMTBIT_S20_3LE | SNDRV_PCM_FMTBIT_U20_3LE |	\
SNDRV_PCM_FMTBIT_S24_3LE | SNDRV_PCM_FMTBIT_U24_3LE |	\
SNDRV_PCM_FMTBIT_S32_LE  | SNDRV_PCM_FMTBIT_U32_LE)
static struct snd_soc_dai_ops ssi_dai_ops = ;
struct snd_soc_dai_driver sh4_ssi_dai[] = ;
static int __devinit sh4_soc_dai_probe(struct platform_device *pdev)
static int __devexit sh4_soc_dai_remove(struct platform_device *pdev)
static struct platform_driver sh4_ssi_driver = ;
static int __init snd_sh4_ssi_init(void)
module_init(snd_sh4_ssi_init);
static void __exit snd_sh4_ssi_exit(void)
module_exit(snd_sh4_ssi_exit);
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("SuperH onchip SSI (I2S) audio driver");
MODULE_AUTHOR("Manuel Lauss <mano@roarinelk.homelinux.net>");
