#define imx_imxdi_rtc_data_entry_single(soc)				\
const struct imx_imxdi_rtc_data imx25_imxdi_rtc_data __initconst =
imx_imxdi_rtc_data_entry_single(MX25);
struct platform_device *__init imx_add_imxdi_rtc(
const struct imx_imxdi_rtc_data *data)
