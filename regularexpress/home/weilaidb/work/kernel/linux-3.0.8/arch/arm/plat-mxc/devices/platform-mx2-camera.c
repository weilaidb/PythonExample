#define imx_mx2_camera_data_entry_single(soc)				\
#define imx_mx2_camera_data_entry_single_emma(soc)			\
const struct imx_mx2_camera_data imx25_mx2_camera_data __initconst =
imx_mx2_camera_data_entry_single(MX25);
const struct imx_mx2_camera_data imx27_mx2_camera_data __initconst =
imx_mx2_camera_data_entry_single_emma(MX27);
struct platform_device *__init imx_add_mx2_camera(
const struct imx_mx2_camera_data *data,
const struct mx2_camera_platform_data *pdata)
