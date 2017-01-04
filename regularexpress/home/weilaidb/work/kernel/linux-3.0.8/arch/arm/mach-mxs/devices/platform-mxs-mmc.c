#define mxs_mxs_mmc_data_entry_single(soc, _id, hwid)			\
#define mxs_mxs_mmc_data_entry(soc, _id, hwid)				\
[_id] = mxs_mxs_mmc_data_entry_single(soc, _id, hwid)
const struct mxs_mxs_mmc_data mx23_mxs_mmc_data[] __initconst = ;
const struct mxs_mxs_mmc_data mx28_mxs_mmc_data[] __initconst = ;
struct platform_device *__init mxs_add_mxs_mmc(
const struct mxs_mxs_mmc_data *data,
const struct mxs_mmc_platform_data *pdata)
