#define mxs_flexcan_data_entry_single(soc, _id, _hwid, _size)		\
#define mxs_flexcan_data_entry(soc, _id, _hwid, _size)			\
[_id] = mxs_flexcan_data_entry_single(soc, _id, _hwid, _size)
const struct mxs_flexcan_data mx28_flexcan_data[] __initconst = ;
struct platform_device *__init mxs_add_flexcan(
const struct mxs_flexcan_data *data,
const struct flexcan_platform_data *pdata)
