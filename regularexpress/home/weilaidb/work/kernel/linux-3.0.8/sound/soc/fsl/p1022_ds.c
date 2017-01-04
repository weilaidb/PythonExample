#define CCSR_GUTS_PMUXCR_UART0_I2C1_MASK	0x0001c000
#define CCSR_GUTS_PMUXCR_UART0_I2C1_UART0_SSI	0x00010000
#define CCSR_GUTS_PMUXCR_UART0_I2C1_SSI		0x00018000
#define CCSR_GUTS_PMUXCR_SSI_DMA_TDM_MASK	0x00000c00
#define CCSR_GUTS_PMUXCR_SSI_DMA_TDM_SSI	0x00000000
#define CCSR_GUTS_DMUXCR_PAD	1
#define CCSR_GUTS_DMUXCR_SSI	2
static inline void guts_set_dmuxcr(struct ccsr_guts_85xx __iomem *guts,
unsigned int co, unsigned int ch, unsigned int device)
static phys_addr_t guts_phys;
#define DAI_NAME_SIZE	32
struct machine_data ;
static int p1022_ds_machine_probe(struct snd_soc_card *card)
static int p1022_ds_startup(struct snd_pcm_substream *substream)
static int p1022_ds_machine_remove(struct snd_soc_card *card)
static struct snd_soc_ops p1022_ds_ops = ;
static struct device_node *get_node_by_phandle_name(struct device_node *np,
const char *name, const char *compatible)
static int get_parent_cell_index(struct device_node *np)
static int codec_node_dev_name(struct device_node *np, char *buf, size_t len)
static int get_dma_channel(struct device_node *ssi_np,
const char *compatible,
struct snd_soc_dai_link *dai,
unsigned int *dma_channel_id,
unsigned int *dma_id)
static int p1022_ds_probe(struct platform_device *pdev)
static int __devexit p1022_ds_remove(struct platform_device *pdev)
static struct platform_driver p1022_ds_driver = ;
static int __init p1022_ds_init(void)
static void __exit p1022_ds_exit(void)
module_init(p1022_ds_init);
module_exit(p1022_ds_exit);
MODULE_AUTHOR("Timur Tabi <timur@freescale.com>");
MODULE_DESCRIPTION("Freescale P1022 DS ALSA SoC machine driver");
MODULE_LICENSE("GPL v2");
