#define imx_mxc_rtc_data_entry_single(soc)				\
const struct imx_mxc_rtc_data imx31_mxc_rtc_data __initconst =
imx_mxc_rtc_data_entry_single(MX31);
struct platform_device *__init imx_add_mxc_rtc(
const struct imx_mxc_rtc_data *data)
