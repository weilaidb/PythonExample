#define imx_imx21_hcd_data_entry_single(soc)				\
const struct imx_imx21_hcd_data imx21_imx21_hcd_data __initconst =
imx_imx21_hcd_data_entry_single(MX21);
struct platform_device *__init imx_add_imx21_hcd(
const struct imx_imx21_hcd_data *data,
const struct mx21_usbh_platform_data *pdata)
