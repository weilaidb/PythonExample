#define imx_flexcan_data_entry_single(soc, _id, _hwid, _size)		\
#define imx_flexcan_data_entry(soc, _id, _hwid, _size)			\
[_id] = imx_flexcan_data_entry_single(soc, _id, _hwid, _size)
const struct imx_flexcan_data imx25_flexcan_data[] __initconst = ;
const struct imx_flexcan_data imx35_flexcan_data[] __initconst = ;
struct platform_device *__init imx_add_flexcan(
const struct imx_flexcan_data *data,
const struct flexcan_platform_data *pdata)
