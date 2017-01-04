#define mxs_auart_data_entry_single(soc, _id, hwid)			\
#define mxs_auart_data_entry(soc, _id, hwid)				\
[_id] = mxs_auart_data_entry_single(soc, _id, hwid)
const struct mxs_auart_data mx23_auart_data[] __initconst = ;
const struct mxs_auart_data mx28_auart_data[] __initconst = ;
struct platform_device *__init mxs_add_auart(
const struct mxs_auart_data *data)
