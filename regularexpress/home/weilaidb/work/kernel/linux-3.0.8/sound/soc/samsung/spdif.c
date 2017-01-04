#define CLKCON				0x00
#define CON				0x04
#define BSTAS				0x08
#define CSTAS				0x0C
#define DATA_OUTBUF			0x10
#define DCNT				0x14
#define BSTAS_S				0x18
#define DCNT_S				0x1C
#define CLKCTL_MASK			0x7
#define CLKCTL_MCLK_EXT			(0x1 << 2)
#define CLKCTL_PWR_ON			(0x1 << 0)
#define CON_MASK			0x3ffffff
#define CON_FIFO_TH_SHIFT		19
#define CON_FIFO_TH_MASK		(0x7 << 19)
#define CON_USERDATA_23RDBIT		(0x1 << 12)
#define CON_SW_RESET			(0x1 << 5)
#define CON_MCLKDIV_MASK		(0x3 << 3)
#define CON_MCLKDIV_256FS		(0x0 << 3)
#define CON_MCLKDIV_384FS		(0x1 << 3)
#define CON_MCLKDIV_512FS		(0x2 << 3)
#define CON_PCM_MASK			(0x3 << 1)
#define CON_PCM_16BIT			(0x0 << 1)
#define CON_PCM_20BIT			(0x1 << 1)
#define CON_PCM_24BIT			(0x2 << 1)
#define CON_PCM_DATA			(0x1 << 0)
#define CSTAS_MASK			0x3fffffff
#define CSTAS_SAMP_FREQ_MASK		(0xF << 24)
#define CSTAS_SAMP_FREQ_44		(0x0 << 24)
#define CSTAS_SAMP_FREQ_48		(0x2 << 24)
#define CSTAS_SAMP_FREQ_32		(0x3 << 24)
#define CSTAS_SAMP_FREQ_96		(0xA << 24)
#define CSTAS_CATEGORY_MASK		(0xFF << 8)
#define CSTAS_CATEGORY_CODE_CDP		(0x01 << 8)
#define CSTAS_NO_COPYRIGHT		(0x1 << 2)
struct samsung_spdif_info ;
static struct s3c2410_dma_client spdif_dma_client_out = ;
static struct s3c_dma_params spdif_stereo_out;
static struct samsung_spdif_info spdif_info;
static inline struct samsung_spdif_info *to_info(struct snd_soc_dai *cpu_dai)
static void spdif_snd_txctrl(struct samsung_spdif_info *spdif, int on)
static int spdif_set_sysclk(struct snd_soc_dai *cpu_dai,
int clk_id, unsigned int freq, int dir)
static int spdif_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int spdif_sysclk_ratios[] = ;
static int spdif_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *socdai)
static void spdif_shutdown(struct snd_pcm_substream *substream,
struct snd_soc_dai *dai)
static int spdif_suspend(struct snd_soc_dai *cpu_dai)
static int spdif_resume(struct snd_soc_dai *cpu_dai)
#define spdif_suspend NULL
#define spdif_resume NULL
static struct snd_soc_dai_ops spdif_dai_ops = ;
struct snd_soc_dai_driver samsung_spdif_dai = ;
static __devinit int spdif_probe(struct platform_device *pdev)
static __devexit int spdif_remove(struct platform_device *pdev)
static struct platform_driver samsung_spdif_driver = ;
static int __init spdif_init(void)
module_init(spdif_init);
static void __exit spdif_exit(void)
module_exit(spdif_exit);
MODULE_AUTHOR("Seungwhan Youn, <sw.youn@samsung.com>");
MODULE_DESCRIPTION("Samsung S/PDIF Controller Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:samsung-spdif");
