#define imx_imx_udc_data_entry_single(soc, _size)			\
#define imx_imx_udc_data_entry(soc, _size)				\
[_id] = imx_imx_udc_data_entry_single(soc, _size)
const struct imx_imx_udc_data imx1_imx_udc_data __initconst =
imx_imx_udc_data_entry_single(MX1, SZ_4K);
struct platform_device *__init imx_add_imx_udc(
const struct imx_imx_udc_data *data,
const struct imxusb_platform_data *pdata)
