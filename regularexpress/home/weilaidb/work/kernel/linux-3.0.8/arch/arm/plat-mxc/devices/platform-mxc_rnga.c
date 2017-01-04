struct imx_mxc_rnga_data ;
#define imx_mxc_rnga_data_entry_single(soc)				\
static const struct imx_mxc_rnga_data imx31_mxc_rnga_data __initconst =
imx_mxc_rnga_data_entry_single(MX31);
static struct platform_device *__init imx_add_mxc_rnga(
const struct imx_mxc_rnga_data *data)
static int __init imxXX_add_mxc_rnga(void)
arch_initcall(imxXX_add_mxc_rnga);
