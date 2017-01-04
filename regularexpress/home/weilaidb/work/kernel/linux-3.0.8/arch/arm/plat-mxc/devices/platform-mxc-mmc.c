#define imx_mxc_mmc_data_entry_single(soc, _id, _hwid, _size)		\
#define imx_mxc_mmc_data_entry(soc, _id, _hwid, _size)			\
[_id] = imx_mxc_mmc_data_entry_single(soc, _id, _hwid, _size)
const struct imx_mxc_mmc_data imx21_mxc_mmc_data[] __initconst = ;
const struct imx_mxc_mmc_data imx27_mxc_mmc_data[] __initconst = ;
const struct imx_mxc_mmc_data imx31_mxc_mmc_data[] __initconst = ;
struct platform_device *__init imx_add_mxc_mmc(
const struct imx_mxc_mmc_data *data,
const struct imxmmc_platform_data *pdata)
