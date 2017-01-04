#define imx_mxc_w1_data_entry_single(soc)				\
const struct imx_mxc_w1_data imx21_mxc_w1_data __initconst =
imx_mxc_w1_data_entry_single(MX21);
const struct imx_mxc_w1_data imx27_mxc_w1_data __initconst =
imx_mxc_w1_data_entry_single(MX27);
const struct imx_mxc_w1_data imx31_mxc_w1_data __initconst =
imx_mxc_w1_data_entry_single(MX31);
const struct imx_mxc_w1_data imx35_mxc_w1_data __initconst =
imx_mxc_w1_data_entry_single(MX35);
struct platform_device *__init imx_add_mxc_w1(
const struct imx_mxc_w1_data *data)
