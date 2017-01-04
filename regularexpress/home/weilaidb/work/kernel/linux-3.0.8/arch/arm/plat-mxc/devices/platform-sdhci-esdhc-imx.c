#define imx_sdhci_esdhc_imx_data_entry_single(soc, _id, hwid) \
#define imx_sdhci_esdhc_imx_data_entry(soc, id, hwid)	\
[id] = imx_sdhci_esdhc_imx_data_entry_single(soc, id, hwid)
const struct imx_sdhci_esdhc_imx_data
imx25_sdhci_esdhc_imx_data[] __initconst = ;
const struct imx_sdhci_esdhc_imx_data
imx35_sdhci_esdhc_imx_data[] __initconst = ;
const struct imx_sdhci_esdhc_imx_data
imx51_sdhci_esdhc_imx_data[] __initconst = ;
const struct imx_sdhci_esdhc_imx_data
imx53_sdhci_esdhc_imx_data[] __initconst = ;
struct platform_device *__init imx_add_sdhci_esdhc_imx(
const struct imx_sdhci_esdhc_imx_data *data,
const struct esdhc_platform_data *pdata)
