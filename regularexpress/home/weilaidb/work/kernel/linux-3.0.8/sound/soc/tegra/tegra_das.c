#define DRV_NAME "tegra-das"
static struct tegra_das *das;
static inline void tegra_das_write(u32 reg, u32 val)
static inline u32 tegra_das_read(u32 reg)
int tegra_das_connect_dap_to_dac(int dap, int dac)
EXPORT_SYMBOL_GPL(tegra_das_connect_dap_to_dac);
int tegra_das_connect_dap_to_dap(int dap, int otherdap, int master,
int sdata1rx, int sdata2rx)
EXPORT_SYMBOL_GPL(tegra_das_connect_dap_to_dap);
int tegra_das_connect_dac_to_dap(int dac, int dap)
EXPORT_SYMBOL_GPL(tegra_das_connect_dac_to_dap);
static int tegra_das_show(struct seq_file *s, void *unused)
static int tegra_das_debug_open(struct inode *inode, struct file *file)
static const struct file_operations tegra_das_debug_fops = ;
static void tegra_das_debug_add(struct tegra_das *das)
static void tegra_das_debug_remove(struct tegra_das *das)
static inline void tegra_das_debug_add(struct tegra_das *das)
static inline void tegra_das_debug_remove(struct tegra_das *das)
static int __devinit tegra_das_probe(struct platform_device *pdev)
static int __devexit tegra_das_remove(struct platform_device *pdev)
static struct platform_driver tegra_das_driver = ;
static int __init tegra_das_modinit(void)
module_init(tegra_das_modinit);
static void __exit tegra_das_modexit(void)
module_exit(tegra_das_modexit);
MODULE_AUTHOR("Stephen Warren <swarren@nvidia.com>");
MODULE_DESCRIPTION("Tegra DAS driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:" DRV_NAME);
