#define imx_ipu_core_entry_single(soc)					\
const struct imx_ipu_core_data imx31_ipu_core_data __initconst =
imx_ipu_core_entry_single(MX31);
const struct imx_ipu_core_data imx35_ipu_core_data __initconst =
imx_ipu_core_entry_single(MX35);
static struct platform_device *imx_ipu_coredev __initdata;
struct platform_device *__init imx_add_ipu_core(
const struct imx_ipu_core_data *data,
const struct ipu_platform_data *pdata)
struct platform_device *__init imx_alloc_mx3_camera(
const struct imx_ipu_core_data *data,
const struct mx3_camera_pdata *pdata)
struct platform_device *__init imx_add_mx3_sdc_fb(
const struct imx_ipu_core_data *data,
struct mx3fb_platform_data *pdata)
