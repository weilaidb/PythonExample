#define __TEGRA_ASOC_UTILS_H_
struct clk;
struct device;
struct tegra_asoc_utils_data ;
int tegra_asoc_utils_set_rate(struct tegra_asoc_utils_data *data, int srate,
int mclk);
int tegra_asoc_utils_init(struct tegra_asoc_utils_data *data,
struct device *dev);
void tegra_asoc_utils_fini(struct tegra_asoc_utils_data *data);
