#define imx_fsl_usb2_udc_data_entry_single(soc)				\
const struct imx_fsl_usb2_udc_data imx25_fsl_usb2_udc_data __initconst =
imx_fsl_usb2_udc_data_entry_single(MX25);
const struct imx_fsl_usb2_udc_data imx27_fsl_usb2_udc_data __initconst =
imx_fsl_usb2_udc_data_entry_single(MX27);
const struct imx_fsl_usb2_udc_data imx31_fsl_usb2_udc_data __initconst =
imx_fsl_usb2_udc_data_entry_single(MX31);
const struct imx_fsl_usb2_udc_data imx35_fsl_usb2_udc_data __initconst =
imx_fsl_usb2_udc_data_entry_single(MX35);
struct platform_device *__init imx_add_fsl_usb2_udc(
const struct imx_fsl_usb2_udc_data *data,
const struct fsl_usb2_platform_data *pdata)
