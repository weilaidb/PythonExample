#define imx_fec_data_entry_single(soc)					\
const struct imx_fec_data imx25_fec_data __initconst =
imx_fec_data_entry_single(MX25);
const struct imx_fec_data imx27_fec_data __initconst =
imx_fec_data_entry_single(MX27);
const struct imx_fec_data imx35_fec_data __initconst =
imx_fec_data_entry_single(MX35);
const struct imx_fec_data imx50_fec_data __initconst =
imx_fec_data_entry_single(MX50);
const struct imx_fec_data imx51_fec_data __initconst =
imx_fec_data_entry_single(MX51);
const struct imx_fec_data imx53_fec_data __initconst =
imx_fec_data_entry_single(MX53);
struct platform_device *__init imx_add_fec(
const struct imx_fec_data *data,
const struct fec_platform_data *pdata)
