static phys_addr_t guts_phys;
#define DAI_NAME_SIZE	32
struct mpc8610_hpcd_data ;
static int mpc8610_hpcd_machine_probe(struct snd_soc_card *card)
static int mpc8610_hpcd_startup(struct snd_pcm_substream *substream)
static int mpc8610_hpcd_machine_remove(struct snd_soc_card *card)
static struct snd_soc_ops mpc8610_hpcd_ops = ;
static struct device_node *get_node_by_phandle_name(struct device_node *np,
const char *name,
const char *compatible)
static int get_parent_cell_index(struct device_node *np)
static int codec_node_dev_name(struct device_node *np, char *buf, size_t len)
static int get_dma_channel(struct device_node *ssi_np,
const char *compatible,
struct snd_soc_dai_link *dai,
unsigned int *dma_channel_id,
unsigned int *dma_id)
static int mpc8610_hpcd_probe(struct platform_device *pdev)
static int __devexit mpc8610_hpcd_remove(struct platform_device *pdev)
static struct platform_driver mpc8610_hpcd_driver = ;
static int __init mpc8610_hpcd_init(void)
static void __exit mpc8610_hpcd_exit(void)
module_init(mpc8610_hpcd_init);
module_exit(mpc8610_hpcd_exit);
MODULE_AUTHOR("Timur Tabi <timur@freescale.com>");
MODULE_DESCRIPTION("Freescale MPC8610 HPCD ALSA SoC machine driver");
MODULE_LICENSE("GPL v2");
