#define mxs_fec_data_entry_single(soc, _id)				\
#define mxs_fec_data_entry(soc, _id)					\
[_id] = mxs_fec_data_entry_single(soc, _id)
const struct mxs_fec_data mx28_fec_data[] __initconst = ;
struct platform_device *__init mxs_add_fec(
const struct mxs_fec_data *data,
const struct fec_platform_data *pdata)
