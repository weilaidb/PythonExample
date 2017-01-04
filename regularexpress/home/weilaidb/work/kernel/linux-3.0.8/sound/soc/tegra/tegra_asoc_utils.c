int tegra_asoc_utils_set_rate(struct tegra_asoc_utils_data *data, int srate,
int mclk)
EXPORT_SYMBOL_GPL(tegra_asoc_utils_set_rate);
int tegra_asoc_utils_init(struct tegra_asoc_utils_data *data,
struct device *dev)
EXPORT_SYMBOL_GPL(tegra_asoc_utils_init);
void tegra_asoc_utils_fini(struct tegra_asoc_utils_data *data)
EXPORT_SYMBOL_GPL(tegra_asoc_utils_fini);
MODULE_AUTHOR("Stephen Warren <swarren@nvidia.com>");
MODULE_DESCRIPTION("Tegra ASoC utility code");
MODULE_LICENSE("GPL");
