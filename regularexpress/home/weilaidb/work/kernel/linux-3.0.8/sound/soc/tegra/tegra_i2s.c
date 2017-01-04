#define DRV_NAME "tegra-i2s"
static inline void tegra_i2s_write(struct tegra_i2s *i2s, u32 reg, u32 val)
static inline u32 tegra_i2s_read(struct tegra_i2s *i2s, u32 reg)
static int tegra_i2s_show(struct seq_file *s, void *unused)
static int tegra_i2s_debug_open(struct inode *inode, struct file *file)
static const struct file_operations tegra_i2s_debug_fops = ;
static void tegra_i2s_debug_add(struct tegra_i2s *i2s, int id)
static void tegra_i2s_debug_remove(struct tegra_i2s *i2s)
static inline void tegra_i2s_debug_add(struct tegra_i2s *i2s, int id)
static inline void tegra_i2s_debug_remove(struct tegra_i2s *i2s)
static int tegra_i2s_set_fmt(struct snd_soc_dai *dai,
unsigned int fmt)
static int tegra_i2s_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params,
struct snd_soc_dai *dai)
static void tegra_i2s_start_playback(struct tegra_i2s *i2s)
static void tegra_i2s_stop_playback(struct tegra_i2s *i2s)
static void tegra_i2s_start_capture(struct tegra_i2s *i2s)
static void tegra_i2s_stop_capture(struct tegra_i2s *i2s)
static int tegra_i2s_trigger(struct snd_pcm_substream *substream, int cmd,
struct snd_soc_dai *dai)
static int tegra_i2s_probe(struct snd_soc_dai *dai)
static struct snd_soc_dai_ops tegra_i2s_dai_ops = ;
struct snd_soc_dai_driver tegra_i2s_dai[] = ;
static __devinit int tegra_i2s_platform_probe(struct platform_device *pdev)
static int __devexit tegra_i2s_platform_remove(struct platform_device *pdev)
static struct platform_driver tegra_i2s_driver = ;
static int __init snd_tegra_i2s_init(void)
module_init(snd_tegra_i2s_init);
static void __exit snd_tegra_i2s_exit(void)
module_exit(snd_tegra_i2s_exit);
MODULE_AUTHOR("Stephen Warren <swarren@nvidia.com>");
MODULE_DESCRIPTION("Tegra I2S ASoC driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
